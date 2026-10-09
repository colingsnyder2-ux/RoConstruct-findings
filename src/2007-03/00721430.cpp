// roc 2007-03 00721430  unit: seg_00720000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00721430
//
// 00721430  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00721433  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00721437  50                   push eax
// 00721438  51                   push ecx
// 00721439  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072143d  e8d8d8efff           call 0x61ed1a
// 00721442  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?FillBackground@CXTColorSelectorCtrlTheme@@UAEXPAVCDC@@ABVCRect@@PAVCXTColorSelectorCtrl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
