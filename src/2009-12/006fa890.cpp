// from server: 64% by atomic.potato
extern "C" int __cdecl sub_460e60(int *);

struct S
{
    int f(int, int, int);
};

int S::f(int a, int b, int c)
{
    int unused = 0;
    int value = sub_460e60(&unused);
    return ((int (__thiscall *)(int, int, int, int))0x006f8750)(value, a, b, c);
}
