// roc 2008-06 00781100  unit: CXTPTabPaintManager::CAppearanceSetStateButtons  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00781100
//
// 00781100  8b442408             mov eax, dword ptr [esp + 8]
// 00781104  8b11                 mov edx, dword ptr [ecx]
// 00781106  8b5208               mov edx, dword ptr [edx + 8]
// 00781109  56                   push esi
// 0078110a  8b742414             mov esi, dword ptr [esp + 0x14]
// 0078110e  50                   push eax
// 0078110f  83ec10               sub esp, 0x10
// 00781112  8bc4                 mov eax, esp
// 00781114  8930                 mov dword ptr [eax], esi
// 00781116  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0078111a  897004               mov dword ptr [eax + 4], esi
// 0078111d  8b742430             mov esi, dword ptr [esp + 0x30]
// 00781121  897008               mov dword ptr [eax + 8], esi
// 00781124  8b742434             mov esi, dword ptr [esp + 0x34]
// 00781128  89700c               mov dword ptr [eax + 0xc], esi
// 0078112b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0078112f  56                   push esi
// 00781130  ffd2                 call edx
// 00781132  8bc6                 mov eax, esi
// 00781134  5e                   pop esi
// 00781135  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetStateButtons@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
