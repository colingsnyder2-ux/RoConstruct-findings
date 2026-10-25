// from server: 100% by king_originala
// roc 2008-06 004a75b0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a75b0
//
// 004a75b0  51                   push ecx
// 004a75b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a75b5  8d0424               lea eax, [esp]
// 004a75b8  50                   push eax
// 004a75b9  51                   push ecx
// 004a75ba  c7442408c2000000     mov dword ptr [esp + 8], 0xc2
// 004a75c2  e839faffff           call 0x4a7000
// 004a75c7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a75cb  83c408               add esp, 8
// 004a75ce  83790400             cmp dword ptr [ecx + 4], 0
// 004a75d2  7409                 je 0x4a75dd
// 004a75d4  8d1424               lea edx, [esp]
// 004a75d7  52                   push edx
// 004a75d8  e8e3feffff           call 0x4a74c0
// 004a75dd  59                   pop ecx
// 004a75de  c3                   ret 

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
