// from server: 100% by auto
// roc 2008-06 006b9b90  unit: CXTPPropertyGridItemConstraint  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b9b90
//
// 006b9b90  e89be40200           call 0x6e8030
// 006b9b95  8bc8                 mov ecx, eax
// 006b9b97  e864f40200           call 0x6e9000
// 006b9b9c  c1e810               shr eax, 0x10
// 006b9b9f  b905000000           mov ecx, 5
// 006b9ba4  3bc8                 cmp ecx, eax
// 006b9ba6  1bc0                 sbb eax, eax
// 006b9ba8  f7d8                 neg eax
// 006b9baa  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsAlphaIconsImageListSupported@CXTPImageManager@@SAHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
