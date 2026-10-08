// from server: 100% by colin
// roc 2007-08 00690ae0  unit: CXTSplitterWnd  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00690ae0
//
// 00690ae0  8b442404             mov eax, dword ptr [esp + 4]
// 00690ae4  a802                 test al, 2
// 00690ae6  898108010000         mov dword ptr [ecx + 0x108], eax
// 00690aec  740d                 je 0x690afb
// 00690aee  c781fc00000000000000 mov dword ptr [ecx + 0xfc], 0
// 00690af8  c20400               ret 4
// 00690afb  6a00                 push 0
// 00690afd  81c1fc000000         add ecx, 0xfc
// 00690b03  51                   push ecx
// 00690b04  6a00                 push 0
// 00690b06  6a26                 push 0x26
// 00690b08  ff150cee7700         call dword ptr [0x77ee0c]
// 00690b0e  c20400               ret 4

extern "C" int (__stdcall *SystemParametersInfoA)(unsigned int, unsigned int, void*, unsigned int);

struct CXTSplitterWnd {
    char pad[0xfc];
    int field_fc;
    char pad2[8];
    int field_108;
    void SetSomething(int);
};

void CXTSplitterWnd::SetSomething(int value) {
    field_108 = value;
    if (value & 2) {
        field_fc = 0;
    } else {
        SystemParametersInfoA(0x26, 0, &field_fc, 0);
    }
}
