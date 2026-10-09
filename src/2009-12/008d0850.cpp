// roc 2009-12 008d0850  unit: CXTPTabPaintManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0850
//
// 008d0850  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 008d0856  8b11                 mov edx, dword ptr [ecx]
// 008d0858  8b5224               mov edx, dword ptr [edx + 0x24]
// 008d085b  56                   push esi
// 008d085c  8b742410             mov esi, dword ptr [esp + 0x10]
// 008d0860  83ec10               sub esp, 0x10
// 008d0863  8bc4                 mov eax, esp
// 008d0865  8930                 mov dword ptr [eax], esi
// 008d0867  8b742424             mov esi, dword ptr [esp + 0x24]
// 008d086b  897004               mov dword ptr [eax + 4], esi
// 008d086e  8b742428             mov esi, dword ptr [esp + 0x28]
// 008d0872  897008               mov dword ptr [eax + 8], esi
// 008d0875  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008d0879  89700c               mov dword ptr [eax + 0xc], esi
// 008d087c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d0880  50                   push eax
// 008d0881  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d0885  50                   push eax
// 008d0886  ffd2                 call edx
// 008d0888  5e                   pop esi
// 008d0889  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawTabControl@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
