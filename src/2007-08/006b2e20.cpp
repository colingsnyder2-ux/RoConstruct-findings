// from server: 92% by colin
// roc 2007-08 006b2e20  unit: CXTPResourceManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2e20
//
// 006b2e20  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006b2e24  8b01                 mov eax, dword ptr [ecx]
// 006b2e26  8b4028               mov eax, dword ptr [eax + 0x28]
// 006b2e29  52                   push edx
// 006b2e2a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006b2e2e  52                   push edx
// 006b2e2f  0fb754240c           movzx edx, word ptr [esp + 0xc]
// 006b2e34  52                   push edx
// 006b2e35  ffd0                 call eax
// 006b2e37  c20c00               ret 0xc

struct CXTPResourceManager {
    void* vtbl;
    int sub_6b2e20(unsigned short, int, int);
};

int CXTPResourceManager::sub_6b2e20(unsigned short a, int b, int c) {
    typedef int (__stdcall *Fn)(void*, unsigned short, int, int);
    Fn fn = *(Fn*)((char*)vtbl + 0x28);
    return fn(this, a, b, c);
}
