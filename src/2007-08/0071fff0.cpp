// roc 2007-08 0071fff0  unit: CXTColorSelectorCtrlTheme  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071fff0
//
// 0071fff0  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0071fff3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071fff7  50                   push eax
// 0071fff8  51                   push ecx
// 0071fff9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071fffd  e8ae08f1ff           call 0x6308b0
// 00720002  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?FillBackground@CXTColorSelectorCtrlTheme@@UAEXPAVCDC@@ABVCRect@@PAVCXTColorSelectorCtrl@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorSelectorCtrlTheme.cpp
