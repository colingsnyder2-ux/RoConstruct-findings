// from server: 83% by atomic.potato
struct S;

typedef int (__thiscall *VFn)(void*, int, S*);

extern void* __fastcall func_00804590(S*);

struct S
{
    int f(int);
};

int S::f(int arg)
{
    void* obj = func_00804590(this);
    VFn vfn = *(VFn*)(*(int*)obj + 0x170);
    return vfn(obj, arg, this);
}
