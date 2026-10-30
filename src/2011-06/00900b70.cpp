// roc 2011-06 00900b70  unit: CXTColorSelectorCtrlTheme  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00900b70
//
// 00900b70  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00900b73  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00900b77  50                   push eax
// 00900b78  51                   push ecx
// 00900b79  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00900b7d  e89ea2f0ff           call 0x80ae20
// 00900b82  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?FillBackground@CXTColorSelectorCtrlTheme@@UAEXPAVCDC@@ABVCRect@@PAVCXTColorSelectorCtrl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
