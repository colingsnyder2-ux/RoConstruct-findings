// roc 2012-06 00a4dc70  unit: CXTPTabPaintManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4dc70
//
// 00a4dc70  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 00a4dc76  8b11                 mov edx, dword ptr [ecx]
// 00a4dc78  8b5224               mov edx, dword ptr [edx + 0x24]
// 00a4dc7b  56                   push esi
// 00a4dc7c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a4dc80  83ec10               sub esp, 0x10
// 00a4dc83  8bc4                 mov eax, esp
// 00a4dc85  8930                 mov dword ptr [eax], esi
// 00a4dc87  8b742424             mov esi, dword ptr [esp + 0x24]
// 00a4dc8b  897004               mov dword ptr [eax + 4], esi
// 00a4dc8e  8b742428             mov esi, dword ptr [esp + 0x28]
// 00a4dc92  897008               mov dword ptr [eax + 8], esi
// 00a4dc95  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00a4dc99  89700c               mov dword ptr [eax + 0xc], esi
// 00a4dc9c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a4dca0  50                   push eax
// 00a4dca1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a4dca5  50                   push eax
// 00a4dca6  ffd2                 call edx
// 00a4dca8  5e                   pop esi
// 00a4dca9  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawTabControl@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
