// from server: 89% by atomic.potato
extern "C" int __cdecl omp_get_max_threads();

struct S
{
    int f();
    unsigned char pad[12];
    unsigned char enabled;
};

int S::f()
{
    extern unsigned char global_flag;
    if (global_flag && enabled)
    {
        if (omp_get_max_threads() > 1)
            return 1;
    }
    return 0;
}
