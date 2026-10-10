// from server: 74% by atomic.potato
struct S
{
    int f(int value);
    char padding[0x8c];
    int field_8c;
    char padding2[0x54];
    int field_144;
};

extern void G1_func_00414500(S *);

int S::f(int value)
{
    if (value != field_8c)
    {
        field_8c = value;
        G1_func_00414500((S *)((char *)this + 0x144));
    }
    return 0;
}
