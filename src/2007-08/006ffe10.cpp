// roc 2007-08 006ffe10  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffe10
//
// 006ffe10  56                   push esi
// 006ffe11  8b742408             mov esi, dword ptr [esp + 8]
// 006ffe15  6a00                 push 0
// 006ffe17  56                   push esi
// 006ffe18  ff15e0ed7700         call dword ptr [0x77ede0]
// 006ffe1e  8bc6                 mov eax, esi
// 006ffe20  5e                   pop esi
// 006ffe21  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ?FillTabControl@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
