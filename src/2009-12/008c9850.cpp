// from server: 58% by atomic.potato
extern "C" int __fastcall sub_84DA80(int);
extern "C" int sub_926472(int);

struct S
{
    int f(int);
};

int S::f(int a)
{
    int v = sub_84DA80(*(int *)((char *)this + 0x60));
    if (sub_926472(v) & 0x20)
    {
        int *p = *(int **)((char *)a + 0x14);
        return ((int (__fastcall *)(int, int))(*(int **)*p + 0x74))(a, 0);
    }
    return 0;
}
