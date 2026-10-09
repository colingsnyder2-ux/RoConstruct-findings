// from server: 83% by colin
// roc 2007-08 0070ca10  unit: CXTColorBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ca10
//
// 0070ca10  56                   push esi
// 0070ca11  8bf1                 mov esi, ecx
// 0070ca13  e82638f2ff           call 0x63023e
// 0070ca18  8b4620               mov eax, dword ptr [esi + 0x20]
// 0070ca1b  50                   push eax
// 0070ca1c  ff1548ec7700         call dword ptr [0x77ec48]
// 0070ca22  50                   push eax
// 0070ca23  e89837f2ff           call 0x6301c0
// 0070ca28  8b442410             mov eax, dword ptr [esp + 0x10]
// 0070ca2c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070ca30  8b16                 mov edx, dword ptr [esi]
// 0070ca32  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0070ca38  6a01                 push 1
// 0070ca3a  50                   push eax
// 0070ca3b  51                   push ecx
// 0070ca3c  8bce                 mov ecx, esi
// 0070ca3e  ffd2                 call edx
// 0070ca40  ff15d4ec7700         call dword ptr [0x77ecd4]
// 0070ca46  50                   push eax
// 0070ca47  e87437f2ff           call 0x6301c0
// 0070ca4c  3bc6                 cmp eax, esi
// 0070ca4e  7407                 je 0x70ca57
// 0070ca50  8bce                 mov ecx, esi
// 0070ca52  e8ad35f2ff           call 0x630004
// 0070ca57  5e                   pop esi
// 0070ca58  c20c00               ret 0xc

extern "C" {
    void* __stdcall GetFocus();
    void* __stdcall SetCapture(void*);
}

struct CXTColorBase {
    void sub_63023E();
    void sub_6301C0(void*);
    void sub_630004();
    void method(int, int, int);
};

void CXTColorBase::method(int a, int b, int c) {
    sub_63023E();
    sub_6301C0(SetCapture(*(void**)((char*)this + 0x20)));
    void* (CXTColorBase::*fn)(int, int, int) = *(void* (CXTColorBase::**)(int, int, int))((*(char**)this) + 0x14c);
    (this->*fn)(a, b, 1);
    sub_6301C0(GetFocus());
    if (this != 0) {
        sub_630004();
    }
}
