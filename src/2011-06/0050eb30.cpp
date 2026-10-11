// from server: 65% by atomic.potato
struct VMarkerEventDesc
{
    static char* f(char* path);
};

char* VMarkerEventDesc::f(char* path)
{
    if (path == 0)
        return path;
    if (*path == 0)
        return path;

    char* p = path;
    char* start = p + 1;
    char c;
    do
    {
        c = *p;
        ++p;
    } while (c != 0);

    int len = (int)(p - start);
    char last = path[len - 1];

    if (last == '\\')
    {
        path[len - 1] = '/';
        return path;
    }

    if (last == '/')
        return path;

    path[len] = '/';
    path[len + 1] = 0;
    return path;
}
