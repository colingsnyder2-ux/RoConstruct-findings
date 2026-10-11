// from server: 74% by atomic.potato
struct S_func_0059a050 {
};

void __cdecl f(char* a1)
{
    if (a1 == 0)
        return;
    if (*a1 == 0)
        return;

    char* p = a1;
    while (*p != 0)
        ++p;

    int len = (int)(p - a1);
    char last = a1[len - 1];

    if (last == '\\') {
        a1[len - 1] = '/';
        return;
    }

    if (last == '/')
        return;

    a1[len] = '/';
    a1[len + 1] = 0;
}
