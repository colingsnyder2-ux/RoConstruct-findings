// roc 2011-06 008e5560  unit: CXTPPropertyGridInplaceList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e5560
//
// 008e5560  56                   push esi
// 008e5561  8bf1                 mov esi, ecx
// 008e5563  6a00                 push 0
// 008e5565  c7465400000000       mov dword ptr [esi + 0x54], 0
// 008e556c  e80f9df7ff           call 0x85f280
// 008e5571  8b06                 mov eax, dword ptr [esi]
// 008e5573  8b5068               mov edx, dword ptr [eax + 0x68]
// 008e5576  83c404               add esp, 4
// 008e5579  8bce                 mov ecx, esi
// 008e557b  5e                   pop esi
// 008e557c  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@CXTPPropertyGridInplaceList@ns_ROCX0000c5@@QAEXXZ)

namespace ns_ROCX0000c5 {
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
