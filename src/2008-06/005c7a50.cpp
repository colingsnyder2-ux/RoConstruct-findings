// from server: 83% by atomic.potato
typedef int (__cdecl *CompareFn)(void *, void *);
typedef void *(__thiscall *TransformFn)(void *);

extern "C" void *__cdecl sub_006a1de2(void *);
extern "C" void __cdecl sub_00802878(void *, void *);

struct TToolVerb
{
    int pad0[3];
    void *owner;
    void *filler[127];
    void *value;

    void f();
};

void TToolVerb::f()
{
    void *a = *(void **)((char *)owner + 0x204);
    void *b = *(void **)((char *)a + 0x3b0);
    if (b)
    {
        void *c = sub_006a1de2(b);
        sub_00802878((void *)0x950a94, c);
    }
}
