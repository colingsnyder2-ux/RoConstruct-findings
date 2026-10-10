// from server: 82% by colin
struct S_func_00500990 {
};

void __cdecl f(char* path)
{
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
