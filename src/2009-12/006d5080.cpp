// from server: 100% by colin
// roc 2009-12 006d5080  unit: RBX::VFlatTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5080
//
// 006d5080  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006d5083  8b88900a0000         mov ecx, dword ptr [eax + 0xa90]
// 006d5089  8b81b4010000         mov eax, dword ptr [ecx + 0x1b4]
// 006d508f  85c0                 test eax, eax
// 006d5091  7416                 je 0x6d50a9
// 006d5093  50                   push eax
// 006d5094  e8ed011200           call 0x7f5286
// 006d5099  83c404               add esp, 4
// 006d509c  50                   push eax
// 006d509d  b940f1b300           mov ecx, 0xb3f140
// 006d50a2  ff1568b79800         call dword ptr [0x98b768]
// 006d50a8  c3                   ret 
// 006d50a9  32c0                 xor al, al
// 006d50ab  c3                   ret 

// from server: 97% by atomic.potato
typedef char BOOL;

extern "C" int __cdecl sub_007f5286(int);
extern "C" int (__thiscall *g_call)(void*, int);

struct TToolVerb
{
    int pad0;
    int pad1;
    int pad2;
    int pad3;
    char f();
};

char TToolVerb::f()
{
    int a;
    int b;

    a = *(int *)((char *)this + 12);
    b = *(int *)((char *)a + 0xa90);
    a = *(int *)((char *)b + 0x1b4);
    if (a)
    {
        a = sub_007f5286(a);
        return g_call((void *)0xb3f46c, a);
    }
    return 0;
}