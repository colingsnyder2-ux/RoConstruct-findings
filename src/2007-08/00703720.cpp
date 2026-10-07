// roc 2007-08 00703720  unit: CXTPTabPaintManager::CAppearanceSetStateButtons  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00703720
//
// 00703720  8b442408             mov eax, dword ptr [esp + 8]
// 00703724  8b11                 mov edx, dword ptr [ecx]
// 00703726  8b5208               mov edx, dword ptr [edx + 8]
// 00703729  56                   push esi
// 0070372a  8b742414             mov esi, dword ptr [esp + 0x14]
// 0070372e  50                   push eax
// 0070372f  83ec10               sub esp, 0x10
// 00703732  8bc4                 mov eax, esp
// 00703734  8930                 mov dword ptr [eax], esi
// 00703736  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0070373a  897004               mov dword ptr [eax + 4], esi
// 0070373d  8b742430             mov esi, dword ptr [esp + 0x30]
// 00703741  897008               mov dword ptr [eax + 8], esi
// 00703744  8b742434             mov esi, dword ptr [esp + 0x34]
// 00703748  89700c               mov dword ptr [eax + 0xc], esi
// 0070374b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0070374f  56                   push esi
// 00703750  ffd2                 call edx
// 00703752  8bc6                 mov eax, esi
// 00703754  5e                   pop esi
// 00703755  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetStateButtons@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
