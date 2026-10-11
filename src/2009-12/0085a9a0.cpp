// from server: 71% by atomic.potato
struct S
{
    char pad[0xc8];
    int field_c8;
    int field_cc;
    int get();
};

extern "C" int __cdecl sub_007fe4e0(int);
extern int g_00b9ada4;

int S::get()
{
    if (field_cc == 0)
        return 0;
    if (field_c8 != 0)
        return sub_007fe4e0(field_c8);
    if (g_00b9ada4 == 0)
        sub_007fe4e0(0);
    return g_00b9ada4;
}
