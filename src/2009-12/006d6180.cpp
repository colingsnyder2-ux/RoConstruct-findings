// from server: 100% by colin
// roc 2009-12 006d6180  unit: RBX::VDropperTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d6180
//
// 006d6180  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006d6183  8b88900a0000         mov ecx, dword ptr [eax + 0xa90]
// 006d6189  8b81b4010000         mov eax, dword ptr [ecx + 0x1b4]
// 006d618f  85c0                 test eax, eax
// 006d6191  7416                 je 0x6d61a9
// 006d6193  50                   push eax
// 006d6194  e8edf01100           call 0x7f5286
// 006d6199  83c404               add esp, 4
// 006d619c  50                   push eax
// 006d619d  b94cfbb300           mov ecx, 0xb3fb4c
// 006d61a2  ff1568b79800         call dword ptr [0x98b768]
// 006d61a8  c3                   ret 
// 006d61a9  32c0                 xor al, al
// 006d61ab  c3                   ret 

// from server: 97% by atomic.potato
typedef char BOOL;

extern "C" int __cdecl sub_007f5286(int);
extern "C" int (__thiscall *imported_0098b768)(void*, int);

struct S
{
    int pad0[3];
    void *p;
    char f();
};

char S::f()
{
    int *a = *(int **)((char *)p + 0xa90);
    int v = *(int *)((char *)a + 0x1b4);
    if (v)
    {
        v = sub_007f5286(v);
        return imported_0098b768((void *)0xb3fb4c, v);
    }
    return 0;
}