// from server: 100% by atomic.potato
// roc 2008-06 005c66d0  unit: RBX::VGlueTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c66d0
//
// 005c66d0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005c66d3  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c66d9  8b81b0030000         mov eax, dword ptr [ecx + 0x3b0]
// 005c66df  85c0                 test eax, eax
// 005c66e1  7416                 je 0x5c66f9
// 005c66e3  50                   push eax
// 005c66e4  e8f9b60d00           call 0x6a1de2
// 005c66e9  83c404               add esp, 4
// 005c66ec  50                   push eax
// 005c66ed  b9fcfe9400           mov ecx, 0x94fefc
// 005c66f2  ff1578288000         call dword ptr [0x802878]
// 005c66f8  c3                   ret 
// 005c66f9  32c0                 xor al, al
// 005c66fb  c3                   ret 

typedef int (__cdecl *FunctionType)(int);
typedef int (__thiscall *MethodType)(void *, int);

extern "C" int __cdecl sub_6a1de2(int);
extern MethodType global_call;

struct TToolVerb
{
    int value;
    char f();
};

char TToolVerb::f()
{
    int object = *(int *)((char *)this + 12);
    int context = *(int *)((char *)object + 516);
    int value = *(int *)((char *)context + 944);

    if (value)
    {
        value = sub_6a1de2(value);
        return global_call((void *)0x94fefc, value);
    }

    return 0;
}
