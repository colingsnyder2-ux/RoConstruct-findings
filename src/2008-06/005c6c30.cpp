// from server: 100% by atomic.potato
// roc 2008-06 005c6c30  unit: RBX::VHingeTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6c30
//
// 005c6c30  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005c6c33  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c6c39  8b81b0030000         mov eax, dword ptr [ecx + 0x3b0]
// 005c6c3f  85c0                 test eax, eax
// 005c6c41  7416                 je 0x5c6c59
// 005c6c43  50                   push eax
// 005c6c44  e899b10d00           call 0x6a1de2
// 005c6c49  83c404               add esp, 4
// 005c6c4c  50                   push eax
// 005c6c4d  b97c019500           mov ecx, 0x95017c
// 005c6c52  ff1578288000         call dword ptr [0x802878]
// 005c6c58  c3                   ret 
// 005c6c59  32c0                 xor al, al
// 005c6c5b  c3                   ret 

typedef int (__cdecl *Fn)(int);
typedef int (__thiscall *Cmp)(void *, const void *);

extern "C" int __cdecl sub_006a1de2(int);
extern "C" int (__thiscall *g_call_00802878)(void *, int);

struct TToolVerb
{
    int pad0[3];
    void *owner;
    unsigned char f();
};

unsigned char TToolVerb::f()
{
    int a = *(int *)((char *)owner + 0x204);
    int b = *(int *)((char *)a + 0x3b0);
    if (b)
    {
        b = sub_006a1de2(b);
        return g_call_00802878((void *)0x95017c, b);
    }
    return 0;
}
