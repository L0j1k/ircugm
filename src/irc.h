/**
 * @file irc.h
 * @desc Header file for interacting with IRC.
 * @author L0j1k (l0j1k@l0j1k.com)
 * @version 0.0.1a
 * @license bsd3
 * @created 23may2013
 * @modified 01feb2014
 */

#ifndef IRC_H_
#define IRC_H_

// general declarations

typedef struct _IRCConnection IRCConnection;

// function declarations

int connCreate( IRCConnection );

#endif
