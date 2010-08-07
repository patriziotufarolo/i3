#ifndef CHILD_H_
#define CHILD_H_

#define STDIN_CHUNK_SIZE 1024

/*
 * Start a child-process with the specified command and reroute stdin.
 * We actually start a $SHELL to execute the command so we don't have to care
 * about arguments and such
 *
 */
void start_child(char *command);

/*
 * kill()s the child-prozess (if existend) and closes and
 * free()s the stdin- and sigchild-watchers
 *
 */
void kill_child();

#endif
