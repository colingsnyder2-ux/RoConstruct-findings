// from server: 100% by colin
// roc 2009-12 006d5d50  unit: RBX::VAnchorTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5d50
//
// 006d5d50  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006d5d53  8b88900a0000         mov ecx, dword ptr [eax + 0xa90]
// 006d5d59  8b81b4010000         mov eax, dword ptr [ecx + 0x1b4]
// 006d5d5f  85c0                 test eax, eax
// 006d5d61  7416                 je 0x6d5d79
// 006d5d63  50                   push eax
// 006d5d64  e81df51100           call 0x7f5286
// 006d5d69  83c404               add esp, 4
// 006d5d6c  50                   push eax
// 006d5d6d  b9a0f8b300           mov ecx, 0xb3f8a0
// 006d5d72  ff1568b79800         call dword ptr [0x98b768]
// 006d5d78  c3                   ret 
// 006d5d79  32c0                 xor al, al
// 006d5d7b  c3                   ret 

// from server: 97% by atomic.potato
typedef char BOOL;

extern "C" int __cdecl Function_007f5286(int);
extern "C" int (__thiscall *Global_0098b768)(void*, int);

struct S
{
    char f();
};

char S::f()
{
    int value = *(int *)(*(int *)((char *)this + 12) + 0xa90);
    value = *(int *)(value + 0x1b4);
    if (value)
    {
        value = Function_007f5286(value);
        return Global_0098b768((void *)0xb3f8a0, value);
    }
    return 0;
}