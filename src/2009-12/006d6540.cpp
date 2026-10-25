// from server: 100% by colin
// roc 2009-12 006d6540  unit: RBX::VHammerTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d6540
//
// 006d6540  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006d6543  8b88900a0000         mov ecx, dword ptr [eax + 0xa90]
// 006d6549  8b81b4010000         mov eax, dword ptr [ecx + 0x1b4]
// 006d654f  85c0                 test eax, eax
// 006d6551  7416                 je 0x6d6569
// 006d6553  50                   push eax
// 006d6554  e82ded1100           call 0x7f5286
// 006d6559  83c404               add esp, 4
// 006d655c  50                   push eax
// 006d655d  b968fdb300           mov ecx, 0xb3fd68
// 006d6562  ff1568b79800         call dword ptr [0x98b768]
// 006d6568  c3                   ret 
// 006d6569  32c0                 xor al, al
// 006d656b  c3                   ret 

// from server: 97% by atomic.potato
typedef char BOOL;

extern "C" int __cdecl sub_7f5286(int);
extern "C" int (__thiscall *sub_98b768)(void*, int);

struct S
{
    char f();
};

char S::f()
{
    int *a = *(int **)((char *)this + 0x0c);
    int *b = *(int **)((char *)a + 0x0a90);
    int v = *(int *)((char *)b + 0x1b4);

    if (v)
    {
        v = sub_7f5286(v);
        return sub_98b768((void *)0xb3fd68, v);
    }

    return 0;
}