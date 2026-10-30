// roc 2012-06 00a68140  unit: CXTShadowHook  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68140
//
// 00a68140  33c0                 xor eax, eax
// 00a68142  394138               cmp dword ptr [ecx + 0x38], eax
// 00a68145  0f95c0               setne al
// 00a68148  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?AlphaShadow@CXTShadowsManager@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
