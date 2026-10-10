// from server: 79% by atomic.potato
typedef int (__thiscall *VerbCall)(int);

extern "C" int __cdecl helper(int);
extern "C" VerbCall g_call;

struct TToolVerb
{
    int f();
    int pad0[3];
};

int TToolVerb::f()
{
    int a = *(int *)((char *)this + 12);
    int b = *(int *)((char *)a + 2764);
    int c = *(int *)((char *)b + 392);
    if (!c)
        return 0;
    int d = helper(c);
    return g_call(d);
}
