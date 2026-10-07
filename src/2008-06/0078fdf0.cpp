// roc 2008-06 0078fdf0  unit: CXTShadowHook  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078fdf0
//
// 0078fdf0  33c0                 xor eax, eax
// 0078fdf2  394138               cmp dword ptr [ecx + 0x38], eax
// 0078fdf5  0f95c0               setne al
// 0078fdf8  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?AlphaShadow@CXTShadowsManager@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
