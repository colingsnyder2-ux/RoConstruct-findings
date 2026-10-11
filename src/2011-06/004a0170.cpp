// from server: 95% by atomic.potato
struct S_func_004a0170 {
    char pad0[28];
    int m0;
    int m1;
    int m2;
    int m3;
    int f(void *unused, void *out);
};

int S_func_004a0170::f(void *unused, void *out)
{
    if (out == 0)
        return (int)0x80004003;

    ((int *)out)[0] = m0;
    ((int *)out)[1] = m1;
    ((int *)out)[2] = m2;
    ((int *)out)[3] = m3;
    return 0;
}
