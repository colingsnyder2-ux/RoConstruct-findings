// from server: 100% by auto
// roc 2012-06 00a51760  unit: CXTPTabPaintManager::CAppearanceSetStateButtons  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a51760
//
// 00a51760  8b442408             mov eax, dword ptr [esp + 8]
// 00a51764  8b11                 mov edx, dword ptr [ecx]
// 00a51766  8b5208               mov edx, dword ptr [edx + 8]
// 00a51769  56                   push esi
// 00a5176a  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a5176e  50                   push eax
// 00a5176f  83ec10               sub esp, 0x10
// 00a51772  8bc4                 mov eax, esp
// 00a51774  8930                 mov dword ptr [eax], esi
// 00a51776  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00a5177a  897004               mov dword ptr [eax + 4], esi
// 00a5177d  8b742430             mov esi, dword ptr [esp + 0x30]
// 00a51781  897008               mov dword ptr [eax + 8], esi
// 00a51784  8b742434             mov esi, dword ptr [esp + 0x34]
// 00a51788  89700c               mov dword ptr [eax + 0xc], esi
// 00a5178b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a5178f  56                   push esi
// 00a51790  ffd2                 call edx
// 00a51792  8bc6                 mov eax, esi
// 00a51794  5e                   pop esi
// 00a51795  c21c00               ret 0x1c
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetStateButtons@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
