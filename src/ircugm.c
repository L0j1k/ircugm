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
#include "ircugm.h"
#include "irc.h"
#include "graphmap.h"
#include "output.h"

typedef struct _CLIOptions {
  char altnick[50], channel[50], nick[50];
  int port, rollover;
  char remoteServer[100], username[50];
} CLIOptions;

int getOptions( CLIOptions options ) {
  return 1;
}

void usage() {
  printf(
    "ircugm v%s_%s\n"
    "(C) 2013-2014 <L0j1k@L0j1k.com>\n\n"
    "Usage: ircugm [-r] [-a altnick] [-c channel] [-n nick]\n"
    "  [-s remote_server[:port]] [-p port]\n"
    "  [[nick@][remote_server[:port][/channel]]]\n\n"
    "Option Summary:\n"
    "  -a    altnick\n"
    "  -c    channel on remote server\n"
    "  -n    primary nick\n"
    "  -p    port\n"
    "  -r    continue session and rollover previous settings\n"
    "  -s    remote server\n",
    IRCUGM_VERSION,
    IRCUGM_VERSION_PHASE
  );
}

int main( int argc, char **argv ) {
  CLIOptions Program_Options;
  IRCConnection *Primary_Connection = malloc(sizeof(Primary_Connection));

  if(getOptions(Program_Options)) {
    usage();
  }

  strcpy(Primary_Connection->host, "host");

  if(connCreate(Primary_Connection)) {
    return 1;
  }

  return 0;
}
