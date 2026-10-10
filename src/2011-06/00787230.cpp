// from server: 97% by atomic.potato
extern "C" int __cdecl sub_80BBC2(int);
extern "C" int (__thiscall *sub_A40A50)(int, int);

struct S
{
    int pad_00[3];
    int *field_0c;
    int f();
};

int S::f()
{
    int *p = (int *)((char *)field_0c + 0xACC);
    int v = *(int *)((char *)*p + 0x188);
    if (v)
    {
        v = sub_80BBC2(v);
        return sub_A40A50(0xC90584, v);
    }
    return 0;
}
