// roc 2007-08 00712590  unit: CXTShadowHook  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712590
//
// 00712590  33c0                 xor eax, eax
// 00712592  394138               cmp dword ptr [ecx + 0x38], eax
// 00712595  0f95c0               setne al
// 00712598  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ?AlphaShadow@CXTShadowsManager@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp
