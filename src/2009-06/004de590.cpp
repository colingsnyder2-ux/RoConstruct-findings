// roc 2009-06 004de590  unit: RBX::Network::IdSerializer  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004de590
//
// 004de590  51                   push ecx
// 004de591  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004de595  8d0424               lea eax, [esp]
// 004de598  50                   push eax
// 004de599  51                   push ecx
// 004de59a  c7442408c2000000     mov dword ptr [esp + 8], 0xc2
// 004de5a2  e839faffff           call 0x4ddfe0
// 004de5a7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004de5ab  83c408               add esp, 8
// 004de5ae  83790400             cmp dword ptr [ecx + 4], 0
// 004de5b2  7409                 je 0x4de5bd
// 004de5b4  8d1424               lea edx, [esp]
// 004de5b7  52                   push edx
// 004de5b8  e8e3feffff           call 0x4de4a0
// 004de5bd  59                   pop ecx
// 004de5be  c3                   ret 
// copied from an identical function in another client (function ?f@@YAXPAUS@@PAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    int reserved;
    int enabled;
    void apply(int*);
};

extern void __cdecl helper(void*, int*);

void __cdecl f(S* object, void* source)
{
    int value = 194;
    helper(source, &value);
    if (object->enabled != 0)
        object->apply(&value);
}