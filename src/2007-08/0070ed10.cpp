// from server: 79% by colin
// roc 2007-08 0070ed10  unit: CXTSplitterWndThemeFactory  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ed10
//
// 0070ed10  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070ed14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0070ed18  8b01                 mov eax, dword ptr [ecx]
// 0070ed1a  8b403c               mov eax, dword ptr [eax + 0x3c]
// 0070ed1d  52                   push edx
// 0070ed1e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070ed22  52                   push edx
// 0070ed23  ffd0                 call eax
// 0070ed25  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070ed29  8901                 mov dword ptr [ecx], eax
// 0070ed2b  33c0                 xor eax, eax
// 0070ed2d  c21000               ret 0x10

struct CXTSplitterWndThemeFactory {
    int CreateSplitter(int, int, int, int*);
};

int CXTSplitterWndThemeFactory::CreateSplitter(int a, int b, int c, int* out) {
    int (*fn)(void*, int, int);
    fn = *(int (**)(void*, int, int))(*(int*)a + 0x3c);
    *out = fn((void*)a, b, c);
    return 0;
}
