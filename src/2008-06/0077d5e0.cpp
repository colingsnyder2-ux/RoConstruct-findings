// roc 2008-06 0077d5e0  unit: CXTPTabPaintManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d5e0
//
// 0077d5e0  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 0077d5e6  8b11                 mov edx, dword ptr [ecx]
// 0077d5e8  8b5224               mov edx, dword ptr [edx + 0x24]
// 0077d5eb  56                   push esi
// 0077d5ec  8b742410             mov esi, dword ptr [esp + 0x10]
// 0077d5f0  83ec10               sub esp, 0x10
// 0077d5f3  8bc4                 mov eax, esp
// 0077d5f5  8930                 mov dword ptr [eax], esi
// 0077d5f7  8b742424             mov esi, dword ptr [esp + 0x24]
// 0077d5fb  897004               mov dword ptr [eax + 4], esi
// 0077d5fe  8b742428             mov esi, dword ptr [esp + 0x28]
// 0077d602  897008               mov dword ptr [eax + 8], esi
// 0077d605  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0077d609  89700c               mov dword ptr [eax + 0xc], esi
// 0077d60c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0077d610  50                   push eax
// 0077d611  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0077d615  50                   push eax
// 0077d616  ffd2                 call edx
// 0077d618  5e                   pop esi
// 0077d619  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawTabControl@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
