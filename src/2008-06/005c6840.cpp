// from server: 97% by atomic.potato
typedef int BOOL;

extern "C" int __cdecl sub_006a1de2(int);
extern "C" BOOL (__thiscall *type_info_equal)(const void *, void *);

struct TToolVerb
{
    int pad0[3];
    int object;
    int f();
};

int TToolVerb::f()
{
    int eax = *(int *)((char *)object + 0x204);
    eax = *(int *)((char *)eax + 0x3b0);
    if (eax)
    {
        eax = sub_006a1de2(eax);
        return type_info_equal((const void *)0x94ff9c, (void *)eax);
    }
    return 0;
}
