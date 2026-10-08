// roc 2010-06 008a7490  unit: CXTColorSelectorCtrlTheme  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7490
//
// 008a7490  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 008a7493  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008a7497  50                   push eax
// 008a7498  51                   push ecx
// 008a7499  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a749d  e89c12f0ff           call 0x7a873e
// 008a74a2  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?FillBackground@CXTColorSelectorCtrlTheme@@UAEXPAVCDC@@ABVCRect@@PAVCXTColorSelectorCtrl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
