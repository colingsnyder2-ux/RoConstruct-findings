// from server: 100% by auto
// roc 2007-08 00721180  unit: CXTCaptionButtonTheme  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00721180
//
// 00721180  8b442404             mov eax, dword ptr [esp + 4]
// 00721184  85c0                 test eax, eax
// 00721186  7409                 je 0x721191
// 00721188  83780400             cmp dword ptr [eax + 4], 0
// 0072118c  7403                 je 0x721191
// 0072118e  89411c               mov dword ptr [ecx + 0x1c], eax
// 00721191  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTButtonTheme.cpp (function ?SetThemeFont@CXTButtonTheme@@UAEXPAVCFont@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButtonTheme.cpp
