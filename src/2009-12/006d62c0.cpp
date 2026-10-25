// from server: 100% by colin
// roc 2009-12 006d62c0  unit: RBX::VNullTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d62c0
//
// 006d62c0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006d62c3  8b88900a0000         mov ecx, dword ptr [eax + 0xa90]
// 006d62c9  8b81b4010000         mov eax, dword ptr [ecx + 0x1b4]
// 006d62cf  85c0                 test eax, eax
// 006d62d1  7416                 je 0x6d62e9
// 006d62d3  50                   push eax
// 006d62d4  e8adef1100           call 0x7f5286
// 006d62d9  83c404               add esp, 4
// 006d62dc  50                   push eax
// 006d62dd  b9f4fbb300           mov ecx, 0xb3fbf4
// 006d62e2  ff1568b79800         call dword ptr [0x98b768]
// 006d62e8  c3                   ret 
// 006d62e9  32c0                 xor al, al
// 006d62eb  c3                   ret 

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
    int value = *(int *)((char *)this + 12);
    void *object = *(void **)((char *)value + 0xa90);
    int argument = *(int *)((char *)object + 0x1b4);
    if (argument)
    {
        int converted = sub_7f5286(argument);
        return sub_98b768((void *)0xb3fbf4, converted);
    }
    return 0;
}