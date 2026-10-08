// from server: 100% by colin
// roc 2007-08 00644d10  unit: CXTPCommandBar  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00644d10
//
// 00644d10  56                   push esi
// 00644d11  57                   push edi
// 00644d12  8bf1                 mov esi, ecx
// 00644d14  8dbe38010000         lea edi, [esi + 0x138]
// 00644d1a  57                   push edi
// 00644d1b  ff15dced7700         call dword ptr [0x77eddc]
// 00644d21  85c0                 test eax, eax
// 00644d23  7517                 jne 0x644d3c
// 00644d25  57                   push edi
// 00644d26  ff1514ee7700         call dword ptr [0x77ee14]
// 00644d2c  8b06                 mov eax, dword ptr [esi]
// 00644d2e  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 00644d34  6a01                 push 1
// 00644d36  6a00                 push 0
// 00644d38  8bce                 mov ecx, esi
// 00644d3a  ffd2                 call edx
// 00644d3c  5f                   pop edi
// 00644d3d  5e                   pop esi
// 00644d3e  c3                   ret 

extern "C" __declspec(dllimport) int __stdcall IsRectEmpty(const void*);
extern "C" __declspec(dllimport) int __stdcall SetRectEmpty(void*);

struct CXTPCommandBar {
    void* field0;
    char pad[0x134];
    char field138[16];
    void f();
};

void CXTPCommandBar::f() {
    if (IsRectEmpty(field138) == 0) {
        SetRectEmpty(field138);
        void** vtable = *(void***)this;
        void (__thiscall *fn)(CXTPCommandBar*, int, int) = (void (__thiscall *)(CXTPCommandBar*, int, int))vtable[0x19c / 4];
        fn(this, 0, 1);
    }
}
