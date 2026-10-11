// from server: 85% by atomic.potato
typedef int BOOL;

struct TToolVerb
{
    int f();
    int pad0[3];
};

extern "C" int __cdecl sub_80bbc2(int);
extern "C" BOOL type_info_equal(void *, const void *);
extern void *g_type_info;

int TToolVerb::f()
{
    int *a = *(int **)((char *)this + 12);
    int x = *(int *)((char *)a + 0xacc);
    x = *(int *)((char *)x + 0x188);
    if (x)
    {
        x = sub_80bbc2(x);
        return type_info_equal((void *)0xc90984, (const void *)x);
    }
    return 0;
}
