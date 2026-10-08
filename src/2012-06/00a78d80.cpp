// roc 2012-06 00a78d80  unit: CXTColorSelectorCtrlTheme  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a78d80
//
// 00a78d80  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00a78d83  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a78d87  50                   push eax
// 00a78d88  51                   push ecx
// 00a78d89  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a78d8d  e81aa1f0ff           call 0x982eac
// 00a78d92  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?FillBackground@CXTColorSelectorCtrlTheme@@UAEXPAVCDC@@ABVCRect@@PAVCXTColorSelectorCtrl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
