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
 * @modified 31jan2014
 */

#include <stdio.h>
#include <stdlib.h>
#include "ircugm.h"
#include "irc.h"
#include "graphmap.h"
#include "output.h"

typedef struct _pOptions {
  char *altnick;
  char *channel;
  char *nick;
  int port;
  boolean rollover;
  char *remoteServer;
  char *username;
} pOptions;

boolean getOptions( pOptions CLIOptions ) {
  return TRUE;
}

void usage() {
  const char *ircugm_appVersion = "v0.1.0a";
  printf(
    "ircugm %s\n"
    "(C) 2013-2014 <L0j1k@L0j1k.com>\n\n"
    "Usage: ircugm [-r] [-a altnick] [-c channel] [-n nick]\n"
    "  [-s remote_server[:port]] [-p port]\n"
    "  [[channel]@[remote_server[:port]]]\n\n"
    "Option Summary:\n"
    "  -a    altnick\n"
    "  -c    channel on remote server\n"
    "  -n    primary nick\n"
    "  -p    port\n"
    "  -r    continue session and rollover previous settings\n"
    "  -s    remote server\n",
    ircugm_appVersion
  );
}

int main( int argc, char** argv ) {
  pOptions CLIOptions;

  if(!getOptions( CLIOptions )) {
    usage();
  }

  return 0;
}
