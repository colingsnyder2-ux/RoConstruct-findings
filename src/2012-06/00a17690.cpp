// from server: 100% by auto
// roc 2012-06 00a17690  unit: VCRect::?$CArray  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a17690
//
// 00a17690  56                   push esi
// 00a17691  8bf1                 mov esi, ecx
// 00a17693  8d4e04               lea ecx, [esi + 4]
// 00a17696  e831b0f6ff           call 0x9826cc
// 00a1769b  8bce                 mov ecx, esi
// 00a1769d  5e                   pop esi
// 00a1769e  e96dffffff           jmp 0xa17610
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?OnDestroy@CXTPCommandBarAnimation@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
