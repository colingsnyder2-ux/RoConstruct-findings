// from server: 100% by auto
// roc 2011-06 008d9450  unit: CXTPTabPaintManager::CAppearanceSetStateButtons  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d9450
//
// 008d9450  8b442408             mov eax, dword ptr [esp + 8]
// 008d9454  8b11                 mov edx, dword ptr [ecx]
// 008d9456  8b5208               mov edx, dword ptr [edx + 8]
// 008d9459  56                   push esi
// 008d945a  8b742414             mov esi, dword ptr [esp + 0x14]
// 008d945e  50                   push eax
// 008d945f  83ec10               sub esp, 0x10
// 008d9462  8bc4                 mov eax, esp
// 008d9464  8930                 mov dword ptr [eax], esi
// 008d9466  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008d946a  897004               mov dword ptr [eax + 4], esi
// 008d946d  8b742430             mov esi, dword ptr [esp + 0x30]
// 008d9471  897008               mov dword ptr [eax + 8], esi
// 008d9474  8b742434             mov esi, dword ptr [esp + 0x34]
// 008d9478  89700c               mov dword ptr [eax + 0xc], esi
// 008d947b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008d947f  56                   push esi
// 008d9480  ffd2                 call edx
// 008d9482  8bc6                 mov eax, esi
// 008d9484  5e                   pop esi
// 008d9485  c21c00               ret 0x1c
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetStateButtons@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
