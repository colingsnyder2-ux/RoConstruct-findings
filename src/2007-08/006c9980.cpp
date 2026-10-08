// from server: 100% by auto
// roc 2007-08 006c9980  unit: VCRect::?$CArray  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c9980
//
// 006c9980  56                   push esi
// 006c9981  8bf1                 mov esi, ecx
// 006c9983  8d4e04               lea ecx, [esi + 4]
// 006c9986  e8a168f6ff           call 0x63022c
// 006c998b  8bce                 mov ecx, esi
// 006c998d  5e                   pop esi
// 006c998e  e96dffffff           jmp 0x6c9900
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?OnDestroy@CXTPCommandBarAnimation@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBarAnimation.cpp
