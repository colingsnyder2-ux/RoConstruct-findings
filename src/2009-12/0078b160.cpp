// from server: 87% by atomic.potato
extern "C" void __cdecl invalid_parameter_noinfo(void);

struct S
{
    unsigned int f(S *);
};

unsigned int S::f(S *other)
{
    if (*(unsigned int *)((char *)this + 4) != 0 &&
        *(unsigned int *)((char *)this + 4) != *(unsigned int *)((char *)other + 4))
        invalid_parameter_noinfo();

    return *(unsigned int *)((char *)this + 8) !=
           *(unsigned int *)((char *)other + 8);
}
