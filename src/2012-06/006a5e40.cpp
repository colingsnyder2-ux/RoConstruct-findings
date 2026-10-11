// from server: 63% by atomic.potato
typedef int (__cdecl *CompareFn)(const char *, const char *);

extern "C" int __cdecl compare_strings(const char *, const char *);

CompareFn g_compare = compare_strings;

struct WeakThreadRef
{
    int find(const char *);
};

int WeakThreadRef::find(const char *value)
{
    int current = *(int *)this;

    while (current != 0)
    {
        if ((char)g_compare(value, (const char *)(current - 0x60)))
            break;

        current = *(int *)current;
    }

    return current;
}
