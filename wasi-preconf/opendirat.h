#include <dirent.h>
#ifdef __wasi__
#define opendirat rpl_opendirat
#endif
DIR *opendirat (int, char const *, int, int *);
