// from server: 46% by atomic.potato
extern "C" void __cdecl invalid_parameter_noinfo();
extern "C" int string_myptr(void *);
extern "C" void (__cdecl *g_invalid_parameter_noinfo)();
extern "C" int (*g_string_myptr)(void *);

struct S
{
    int f();
    int *p;
    int n;
};

int S::f()
{
    int *q = p;
    if (*q != -4)
    {
        if (*q == 0)
            g_invalid_parameter_noinfo();
        if (n >= g_string_myptr((void *)*q) + *(q + 5))
            g_invalid_parameter_noinfo();
    }
    ++n;
    return (int)this;
}
