// from server: 58% by atomic.potato
extern "C" int __cdecl sub_751750();

struct S
{
    int f();
};

volatile unsigned char g_00E31ABE;
int g_00E4CEA0;

int S::f()
{
    if (g_00E31ABE != 1)
        return g_00E4CEA0;

    int value = *(int *)((char *)this + 0x84);
    return sub_751750();
}
