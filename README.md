ircugm (IRC User Grapher/Mapper)
====

ircugm is automated software for learning about IRC clients and then producing useful graphs to help visualize this data. 

## Usage

```bash
usage: ircugm [-r] [-a altnick] [-c channel] [-n nick] 
	[-s remote_server[:port]] [-p port] 
	[[channel]@[remote_server[:port]]]
Option Summary:
  -a	alternate nick
  -c	channel on remote server
  -n	primary nick
  -p	port
  -r	continue session and rollover previous settings
  -s	remote server
```

## Examples

The following command starts ircugm in the #gcc channel on the freenode IRC network with default settings.

```bash
ircugm gcc@irc.freenode.net
```

The following command starts ircugm, continuing with the last data file, and connecting to a channel named #help on an IRC server on port 9898 at irc.example.com. ircugm is going to use the nick 'foo' and alternate nick 'bar' upon connection.

```bash
ircugm -r -s irc.example.com -p 9898 -c help -n foo -a bar
```

## License

ircugm is released under the BSD License (version 3).
