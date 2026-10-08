// roc 2010-06 00884a10  unit: CXTPTabPaintManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00884a10
//
// 00884a10  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 00884a16  8b11                 mov edx, dword ptr [ecx]
// 00884a18  8b5224               mov edx, dword ptr [edx + 0x24]
// 00884a1b  56                   push esi
// 00884a1c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00884a20  83ec10               sub esp, 0x10
// 00884a23  8bc4                 mov eax, esp
// 00884a25  8930                 mov dword ptr [eax], esi
// 00884a27  8b742424             mov esi, dword ptr [esp + 0x24]
// 00884a2b  897004               mov dword ptr [eax + 4], esi
// 00884a2e  8b742428             mov esi, dword ptr [esp + 0x28]
// 00884a32  897008               mov dword ptr [eax + 8], esi
// 00884a35  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00884a39  89700c               mov dword ptr [eax + 0xc], esi
// 00884a3c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00884a40  50                   push eax
// 00884a41  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00884a45  50                   push eax
// 00884a46  ffd2                 call edx
// 00884a48  5e                   pop esi
// 00884a49  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawTabControl@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
