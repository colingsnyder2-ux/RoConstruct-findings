// from server: 100% by auto
// roc 2008-06 007a0bb0  unit: CXTColorSelectorCtrlTheme  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a0bb0
//
// 007a0bb0  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 007a0bb3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007a0bb7  50                   push eax
// 007a0bb8  51                   push ecx
// 007a0bb9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007a0bbd  e89c07f0ff           call 0x6a135e
// 007a0bc2  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?FillBackground@CXTColorSelectorCtrlTheme@@UAEXPAVCDC@@ABVCRect@@PAVCXTColorSelectorCtrl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
