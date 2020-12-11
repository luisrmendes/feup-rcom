#pragma once
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <strings.h>
#include <signal.h>
#include <unistd.h>
#include "macros.h"

int print_response_code(char *responseCode, int responseCodeSize);

int get_server_response(int socketFileDiscriptor, char response[], int responseSize);

int open_and_connect_socket(int *socketFileDiscriptor, char *serverAdress,
                            int serverPort, int checkResponseCode);

int get_host_info(struct hostent **host, char *hostName);

int parse_arguments(int argc, char *argv, char **username, char **password,
                    char **host, char **filePath, char **fileName);

char *stringAdd(const char *s1, const char *s2);

char *print_error(char *msg);

char *print_warning(char *msg);

char *print_success(char *msg);

/** Creates a file with received content (binary)
 * @param path: New file path
 * @param content: New file binary
*/
int exportFile(char *path, char **content);
