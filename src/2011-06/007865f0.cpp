// from server: 97% by atomic.potato
extern "C" int __cdecl sub_80bbc2(int);
extern "C" int (__thiscall *sub_a40a50)(int, int);

struct TToolVerb
{
    int f();
    int pad0[3];
};

int TToolVerb::f()
{
    int a = *(int *)((char *)this + 12);
    int b = *(int *)((char *)a + 0xACC);
    int c = *(int *)((char *)b + 0x188);
    if (c)
    {
        c = sub_80bbc2(c);
        return sub_a40a50(0xC90190, c);
    }
    return 0;
}
