// roc 2009-06 007f5c80  unit: CXTPTabPaintManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f5c80
//
// 007f5c80  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 007f5c86  8b11                 mov edx, dword ptr [ecx]
// 007f5c88  8b5224               mov edx, dword ptr [edx + 0x24]
// 007f5c8b  56                   push esi
// 007f5c8c  8b742410             mov esi, dword ptr [esp + 0x10]
// 007f5c90  83ec10               sub esp, 0x10
// 007f5c93  8bc4                 mov eax, esp
// 007f5c95  8930                 mov dword ptr [eax], esi
// 007f5c97  8b742424             mov esi, dword ptr [esp + 0x24]
// 007f5c9b  897004               mov dword ptr [eax + 4], esi
// 007f5c9e  8b742428             mov esi, dword ptr [esp + 0x28]
// 007f5ca2  897008               mov dword ptr [eax + 8], esi
// 007f5ca5  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007f5ca9  89700c               mov dword ptr [eax + 0xc], esi
// 007f5cac  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f5cb0  50                   push eax
// 007f5cb1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f5cb5  50                   push eax
// 007f5cb6  ffd2                 call edx
// 007f5cb8  5e                   pop esi
// 007f5cb9  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawTabControl@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
