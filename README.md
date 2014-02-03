ircugm (IRC User Grapher/Mapper)
====

ircugm is automated software for learning about IRC clients and then producing useful graphs to help visualize this data. 

## Usage

```bash
usage: ircugm [-r] [-a altnick] [-c channel] [-n nick] 
	[-s remote_server] [-p port] [-u user]
Option Summary:
  -a	alternate nick
  -c	channel on remote server
  -n	primary nick
  -p	port
  -r	continue session and rollover previous settings
  -s	remote server
  -u  user
```

## Examples

The following command starts ircugm in the #gcc channel on the freenode IRC network on port 6697 with nickname "foo".

```bash
ircugm -n foo -s irc.freenode.net -p 6697 -c gcc
```

The following command starts ircugm, continuing with the last data file, and connecting to a channel named #help on an IRC server on port 9898 at irc.example.com. ircugm is going to use the nick 'foo' and alternate nick 'bar' upon connection.

```bash
ircugm -r -s irc.example.com -p 9898 -c help -n foo -a bar
```

## License

ircugm is released under the BSD License (version 3).
