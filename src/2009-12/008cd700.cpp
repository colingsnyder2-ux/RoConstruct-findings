// roc 2009-12 008cd700  unit: CXTPPropertyGridInplaceList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cd700
//
// 008cd700  56                   push esi
// 008cd701  8bf1                 mov esi, ecx
// 008cd703  6a00                 push 0
// 008cd705  c7465400000000       mov dword ptr [esi + 0x54], 0
// 008cd70c  e88f00f8ff           call 0x84d7a0
// 008cd711  8b06                 mov eax, dword ptr [esi]
// 008cd713  8b5068               mov edx, dword ptr [eax + 0x68]
// 008cd716  83c404               add esp, 4
// 008cd719  8bce                 mov ecx, esi
// 008cd71b  5e                   pop esi
// 008cd71c  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@CXTPPropertyGridInplaceList@ns_ROCX000080@@QAEXXZ)

namespace ns_ROCX000080 {
struct CXTPPropertyGridInplaceList {
    int field0;
    char pad[0x50];
    int field54;
    void f();
};

extern "C" void __cdecl sub_682740(int);

void CXTPPropertyGridInplaceList::f()
{
    field54 = 0;
    sub_682740(0);
    (*(void (__thiscall **)(CXTPPropertyGridInplaceList *))(*(int *)this + 0x68))(this);
}
}
