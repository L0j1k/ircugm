/**
 * @project ircugm -- IRC User Grapher/Mapper
 * This utility is automated software used to idle in IRC servers and 
 * collect information about the users in a channel, then perform 
 * operations on the data so that it may be more easily visualized.
 * ircugm will attempt to "learn" things about the users in its assigned 
 * channel and make a certain amount of predictions about the users 
 * based on previous behavior and other metrics. It also produces pretty
 * output from the analyses and reports.
 * 
 * ircugm is written by L0j1k (L0j1k@L0j1k.com) and released under the 
 * BSD-3 software license.
 * 
 * @author L0j1k (l0j1k@l0j1k.com)
 * @version 0.0.1a
 * @license bsd3
 * @created 23may2013
 * @modified 01feb2014
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "ircugm.h"
#include "irc.h"
#include "graphmap.h"
#include "output.h"

typedef struct _CLIOptions {
  char *altnick, *channel, *nick;
  int port, rollover;
  char *server, *user;
} CLIOptions;

int checkOptions( CLIOptions Options ) {
  if (!Options.altnick) {
    printf("HEREa");
    Options.altnick = "_ircugm";
  }
  if (!Options.channel) {
    printf("HEREb");
    return 0;
  }
  if (!Options.nick) {
    printf("HEREc");
    Options.nick = "ircugm";
  }
  if (!Options.port) {
    printf("HEREd");
    Options.port = 6667;
  }
  if (!Options.rollover) {
    printf("HEREe");
    Options.rollover = 0;
  }
  if (!Options.server) {
    printf("HEREf");
    return 0;
  }
  if (!Options.user) {
    printf("HEREg");
    Options.user = "ircugm_user";
  }
  return 1;
}

int getOptions( int argc, char **argv, CLIOptions Options ) {
  int c;
  while ((c = getopt(argc, argv, "a:c:h:n:p:rs:u:")) != -1) {
    switch (c) {
      case 'a':
        Options.altnick = optarg;
        break;
      case 'c':
        Options.channel = optarg;
        break;
      case 'h':
        return 0;
      case 'n':
        Options.nick = optarg;
        break;
      case 'p':
        Options.port = atoi(optarg);
        break;
      case 'r':
        Options.rollover = 1;
        break;
      case 's':
        Options.server = optarg;
        break;
      case 'u':
        Options.user = optarg;
        break;
      default:
        return 0;
    }
  }
  return 1;
}

void usage() {
  printf(
    "ircugm v%s_%s\n"
    "(C) 2013-2014 <L0j1k@L0j1k.com>\n\n"
    "Usage: ircugm [-r] [-a altnick] [-c channel] [-n nick]\n"
    "  [-s remote_server] [-p port] [-u user]\n\n"
    "Option Summary:\n"
    "  -a    altnick. default \"_ircugm\"\n"
    "  -c    channel on remote server\n"
    "  -n    primary nick. default \"ircugm\"\n"
    "  -p    port. default 6697\n"
    "  -r    continue session and rollover previous settings. default false\n"
    "  -s    server\n"
    "  -u    user. default \"ircugm\"\n",
    IRCUGM_VERSION,
    IRCUGM_VERSION_PHASE
  );
  exit(EXIT_FAILURE);
}

int main( int argc, char **argv ) {
  CLIOptions Program_Options;
  IRCConnection *Primary_Connection = malloc(sizeof(Primary_Connection));

  if (!getOptions(argc, argv, Program_Options)) {
    printf("HERE1");
    usage();
  }
  if (!checkOptions(Program_Options)) {
    printf("HERE2");
    usage();
  }
  //debug begin
  printf(
    "options:altnick[%s]channel[%s]nick[%s]\n"
    "port[%d]rollover[%d]server[%s]user[%s]\n",
    Program_Options.altnick,
    Program_Options.channel,
    Program_Options.nick,
    Program_Options.port,
    Program_Options.rollover,
    Program_Options.server,
    Program_Options.user
  );
  //debug end

  //strncpy(Primary_Connection->host, "host", sizeof("host"));

  /*
  if(connCreate(Primary_Connection)) {
    return 1;
  }
  */

  return 0;
}
