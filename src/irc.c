/**
 * @file irc.c
 * @desc Source file for interacting with IRC.
 * @author L0j1k (l0j1k@l0j1k.com)
 * @version 0.0.1a
 * @license bsd3
 * @created 23may2013
 * @modified 01feb2014
 */

typedef struct _IRCConnection {
  char host[100];
  int port;
  int sockDescriptor;
} IRCConnection;

int connCreate( IRCConnection connection ) {
  return 0;
}
