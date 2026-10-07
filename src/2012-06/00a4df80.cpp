// roc 2012-06 00a4df80  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4df80
//
// 00a4df80  56                   push esi
// 00a4df81  8b742408             mov esi, dword ptr [esp + 8]
// 00a4df85  6a00                 push 0
// 00a4df87  56                   push esi
// 00a4df88  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a4df8e  8bc6                 mov eax, esi
// 00a4df90  5e                   pop esi
// 00a4df91  c21c00               ret 0x1c
// library xtp-13.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ?FillTabControl@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManager.cpp
