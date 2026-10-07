// roc 2008-06 0077d900  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d900
//
// 0077d900  56                   push esi
// 0077d901  8b742408             mov esi, dword ptr [esp + 8]
// 0077d905  6a00                 push 0
// 0077d907  56                   push esi
// 0077d908  ff15702d8000         call dword ptr [0x802d70]
// 0077d90e  8bc6                 mov eax, esi
// 0077d910  5e                   pop esi
// 0077d911  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?FillTabControl@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
