// from server: 77% by colin
// roc 2007-08 004a43f0  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a43f0

struct S {
    void f(char* path);
};

void S::f(char* path) {
    if (path == 0)
        return;
    if (*path == 0)
        return;
    char* p = path;
    char* start = p + 1;
    char c;
    do {
        c = *p;
        p++;
    } while (c != 0);
    int len = (int)(p - start);
    char last = path[len - 1];
    if (last == '\\') {
        path[len - 1] = '/';
        return;
    }
    if (last == '/')
        return;
    path[len] = '/';
    path[len + 1] = 0;
}
