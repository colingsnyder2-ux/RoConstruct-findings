// from server: 100% by auto
// roc 2007-08 006488a0  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006488a0
//
// 006488a0  e89b880200           call 0x671140
// 006488a5  8bc8                 mov ecx, eax
// 006488a7  e884980200           call 0x672130
// 006488ac  c1e810               shr eax, 0x10
// 006488af  b905000000           mov ecx, 5
// 006488b4  3bc8                 cmp ecx, eax
// 006488b6  1bc0                 sbb eax, eax
// 006488b8  f7d8                 neg eax
// 006488ba  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?IsAlphaIconsImageListSupported@CXTPImageManager@@SAHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
