// from server: 89% by atomic.potato
struct S {
};

extern "C" int G1_func_005a8c40(void *, int);

int __cdecl f(void *p, int value)
{
    if (value != 4)
        return G1_func_005a8c40(p, value);

    *(int *)p = 0x00c399d0;
    *((unsigned char *)p + 4) = 0;
    *((unsigned char *)p + 5) = 0;
    return 0;
}
