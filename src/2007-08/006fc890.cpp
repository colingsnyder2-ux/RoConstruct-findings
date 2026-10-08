// from server: 100% by colin
// roc 2007-08 006fc890  unit: CXTPPropertyGridInplaceList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fc890
//
// 006fc890  56                   push esi
// 006fc891  8bf1                 mov esi, ecx
// 006fc893  6a00                 push 0
// 006fc895  c7465400000000       mov dword ptr [esi + 0x54], 0
// 006fc89c  e89f5ef8ff           call 0x682740
// 006fc8a1  8b06                 mov eax, dword ptr [esi]
// 006fc8a3  8b5068               mov edx, dword ptr [eax + 0x68]
// 006fc8a6  83c404               add esp, 4
// 006fc8a9  8bce                 mov ecx, esi
// 006fc8ab  5e                   pop esi
// 006fc8ac  ffe2                 jmp edx

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
