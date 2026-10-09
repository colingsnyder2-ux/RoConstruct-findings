// roc 2010-06 008818d0  unit: CXTPPropertyGridInplaceList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008818d0
//
// 008818d0  56                   push esi
// 008818d1  8bf1                 mov esi, ecx
// 008818d3  6a00                 push 0
// 008818d5  c7465400000000       mov dword ptr [esi + 0x54], 0
// 008818dc  e81ffff7ff           call 0x801800
// 008818e1  8b06                 mov eax, dword ptr [esi]
// 008818e3  8b5068               mov edx, dword ptr [eax + 0x68]
// 008818e6  83c404               add esp, 4
// 008818e9  8bce                 mov ecx, esi
// 008818eb  5e                   pop esi
// 008818ec  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@CXTPPropertyGridInplaceList@ns_ROCX0000f9@@QAEXXZ)

namespace ns_ROCX0000f9 {
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
