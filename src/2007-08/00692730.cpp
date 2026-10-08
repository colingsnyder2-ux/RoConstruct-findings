// from server: 66% by colin
// roc 2007-08 00692730  unit: CXTPStatusBarPane  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692730
//
// 00692730  8b4164               mov eax, dword ptr [ecx + 0x64]
// 00692733  83f8ff               cmp eax, -1
// 00692736  7413                 je 0x69274b
// 00692738  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 0069273b  6a00                 push 0
// 0069273d  50                   push eax
// 0069273e  e80dfbffff           call 0x692250
// 00692743  8bc8                 mov ecx, eax
// 00692745  e866b2fbff           call 0x64d9b0
// 0069274a  c3                   ret 
// 0069274b  33c0                 xor eax, eax
// 0069274d  c3                   ret 

struct CXTPStatusBarPane
{
    char pad0[0x50];
    int field_0x50;
    char pad1[0x10];
    int field_0x64;

    int method();
};

extern "C" int __stdcall sub_692250(int, int);
extern "C" int __stdcall sub_64D9B0();

int CXTPStatusBarPane::method()
{
    int v = this->field_0x64;
    if (v == -1)
        return 0;
    int r = sub_692250(v, 0);
    return sub_64D9B0();
}
