// roc 2009-06 00808470  unit: CXTShadowHook  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808470
//
// 00808470  33c0                 xor eax, eax
// 00808472  394138               cmp dword ptr [ecx + 0x38], eax
// 00808475  0f95c0               setne al
// 00808478  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?AlphaShadow@CXTShadowsManager@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
