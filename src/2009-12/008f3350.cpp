// roc 2009-12 008f3350  unit: CXTColorSelectorCtrlTheme  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3350
//
// 008f3350  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 008f3353  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f3357  50                   push eax
// 008f3358  51                   push ecx
// 008f3359  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f335d  e89c12f0ff           call 0x7f45fe
// 008f3362  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?FillBackground@CXTColorSelectorCtrlTheme@@UAEXPAVCDC@@ABVCRect@@PAVCXTColorSelectorCtrl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
