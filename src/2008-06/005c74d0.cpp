// from server: 94% by atomic.potato
typedef int (__thiscall *TypeInfoEqual)(void *, void *);
typedef int (__thiscall *ObjectCall)(void *, int);

extern "C" int __cdecl sub_006a1de2(int);
extern "C" ObjectCall g_call_00802878;

struct TToolVerb
{
    int f();
    int pad0[3];
    void *owner;
};

int TToolVerb::f()
{
    int *a;
    int v;

    a = *(int **)((char *)owner + 0x204);
    v = *(int *)((char *)a + 0x3b0);
    if (v)
    {
        v = sub_006a1de2(v);
        g_call_00802878((void *)0x009507cc, v);
    }
    return 0;
}
