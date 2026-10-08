// roc 2009-06 008186a0  unit: CXTColorSelectorCtrlTheme  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008186a0
//
// 008186a0  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 008186a3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008186a7  50                   push eax
// 008186a8  51                   push ecx
// 008186a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008186ad  e81e11f0ff           call 0x7197d0
// 008186b2  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?FillBackground@CXTColorSelectorCtrlTheme@@UAEXPAVCDC@@ABVCRect@@PAVCXTColorSelectorCtrl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
