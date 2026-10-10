// from server: 31% by atomic.potato
extern "C" void __cdecl initialize_descriptor();

extern "C" void __cdecl _invalid_parameter_noinfo();

struct TypedPropertyDescriptor
{
    int f();
};

int TypedPropertyDescriptor::f()
{
    initialize_descriptor();

    int *p = (int *)0;
    int *q = (int *)0;

    if (p[3] > p[4])
        _invalid_parameter_noinfo();

    int *result = (int *)0;
    result[1] = (int)q;
    result[0] = (int)p;
    return 0;
}
