// roc 2008-06 0077a430  unit: CXTPPropertyGridInplaceList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077a430
//
// 0077a430  56                   push esi
// 0077a431  8bf1                 mov esi, ecx
// 0077a433  6a00                 push 0
// 0077a435  c7465400000000       mov dword ptr [esi + 0x54], 0
// 0077a43c  e88ffcf7ff           call 0x6fa0d0
// 0077a441  8b06                 mov eax, dword ptr [esi]
// 0077a443  8b5068               mov edx, dword ptr [eax + 0x68]
// 0077a446  83c404               add esp, 4
// 0077a449  8bce                 mov ecx, esi
// 0077a44b  5e                   pop esi
// 0077a44c  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@CXTPPropertyGridInplaceList@ns_ROCX000017@@QAEXXZ)

namespace ns_ROCX000017 {
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
