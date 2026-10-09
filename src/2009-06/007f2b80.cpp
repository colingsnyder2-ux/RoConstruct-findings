// roc 2009-06 007f2b80  unit: CXTPPropertyGridInplaceList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f2b80
//
// 007f2b80  56                   push esi
// 007f2b81  8bf1                 mov esi, ecx
// 007f2b83  6a00                 push 0
// 007f2b85  c7465400000000       mov dword ptr [esi + 0x54], 0
// 007f2b8c  e8dffef7ff           call 0x772a70
// 007f2b91  8b06                 mov eax, dword ptr [esi]
// 007f2b93  8b5068               mov edx, dword ptr [eax + 0x68]
// 007f2b96  83c404               add esp, 4
// 007f2b99  8bce                 mov ecx, esi
// 007f2b9b  5e                   pop esi
// 007f2b9c  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@CXTPPropertyGridInplaceList@ns_ROCX0000ef@@QAEXXZ)

namespace ns_ROCX0000ef {
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
