// roc 2007-03 006dcc00  unit: seg_006d0000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dcc00
//
// 006dcc00  56                   push esi
// 006dcc01  8bf1                 mov esi, ecx
// 006dcc03  6a00                 push 0
// 006dcc05  c7465400000000       mov dword ptr [esi + 0x54], 0
// 006dcc0c  e81f10f9ff           call 0x66dc30
// 006dcc11  8b06                 mov eax, dword ptr [esi]
// 006dcc13  8b5068               mov edx, dword ptr [eax + 0x68]
// 006dcc16  83c404               add esp, 4
// 006dcc19  8bce                 mov ecx, esi
// 006dcc1b  5e                   pop esi
// 006dcc1c  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@CXTPPropertyGridInplaceList@ns_ROCX000086@@QAEXXZ)

namespace ns_ROCX000086 {
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
