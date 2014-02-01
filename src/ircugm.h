/**
 * ircugm -- IRC User Grapher/Mapper
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

#ifndef IRCUGM_H_
#define IRCUGM_H_

// function declarations

bool getOptions( pOptions );
void usage( void );

// extra declarations

typedef struct _pOptions pOptions;

#endif
