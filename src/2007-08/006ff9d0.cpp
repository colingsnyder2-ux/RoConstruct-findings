// from server: 100% by auto
// roc 2007-08 006ff9d0  unit: CXTPTabPaintManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ff9d0
//
// 006ff9d0  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 006ff9d6  8b11                 mov edx, dword ptr [ecx]
// 006ff9d8  8b5224               mov edx, dword ptr [edx + 0x24]
// 006ff9db  56                   push esi
// 006ff9dc  8b742410             mov esi, dword ptr [esp + 0x10]
// 006ff9e0  83ec10               sub esp, 0x10
// 006ff9e3  8bc4                 mov eax, esp
// 006ff9e5  8930                 mov dword ptr [eax], esi
// 006ff9e7  8b742424             mov esi, dword ptr [esp + 0x24]
// 006ff9eb  897004               mov dword ptr [eax + 4], esi
// 006ff9ee  8b742428             mov esi, dword ptr [esp + 0x28]
// 006ff9f2  897008               mov dword ptr [eax + 8], esi
// 006ff9f5  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006ff9f9  89700c               mov dword ptr [eax + 0xc], esi
// 006ff9fc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006ffa00  50                   push eax
// 006ffa01  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006ffa05  50                   push eax
// 006ffa06  ffd2                 call edx
// 006ffa08  5e                   pop esi
// 006ffa09  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawTabControl@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
