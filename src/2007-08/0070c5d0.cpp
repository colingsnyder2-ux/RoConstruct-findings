// from server: 100% by colin
// roc 2007-08 0070c5d0  unit: CXTColorBase  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070c5d0
//
// 0070c5d0  56                   push esi
// 0070c5d1  8bf1                 mov esi, ecx
// 0070c5d3  e8fc36f2ff           call 0x62fcd4
// 0070c5d8  807e5c00             cmp byte ptr [esi + 0x5c], 0
// 0070c5dc  740d                 je 0x70c5eb
// 0070c5de  8b06                 mov eax, dword ptr [esi]
// 0070c5e0  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0070c5e6  8bce                 mov ecx, esi
// 0070c5e8  5e                   pop esi
// 0070c5e9  ffe2                 jmp edx
// 0070c5eb  5e                   pop esi
// 0070c5ec  c3                   ret 

struct CXTColorBase {
    void f();
    char pad[0x5c];
    char flag5c;
};

extern "C" void __fastcall sub_62fcd4(void* p);

void CXTColorBase::f() {
    sub_62fcd4(this);
    if (flag5c) {
        void** vt = *(void***)this;
        void (__fastcall *fn)(void*) = (void (__fastcall *)(void*))vt[0x150 / 4];
        fn(this);
    }
}
