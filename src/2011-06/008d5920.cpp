// roc 2011-06 008d5920  unit: CXTPTabPaintManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5920
//
// 008d5920  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 008d5926  8b11                 mov edx, dword ptr [ecx]
// 008d5928  8b5224               mov edx, dword ptr [edx + 0x24]
// 008d592b  56                   push esi
// 008d592c  8b742410             mov esi, dword ptr [esp + 0x10]
// 008d5930  83ec10               sub esp, 0x10
// 008d5933  8bc4                 mov eax, esp
// 008d5935  8930                 mov dword ptr [eax], esi
// 008d5937  8b742424             mov esi, dword ptr [esp + 0x24]
// 008d593b  897004               mov dword ptr [eax + 4], esi
// 008d593e  8b742428             mov esi, dword ptr [esp + 0x28]
// 008d5942  897008               mov dword ptr [eax + 8], esi
// 008d5945  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008d5949  89700c               mov dword ptr [eax + 0xc], esi
// 008d594c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d5950  50                   push eax
// 008d5951  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d5955  50                   push eax
// 008d5956  ffd2                 call edx
// 008d5958  5e                   pop esi
// 008d5959  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawTabControl@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
