// from server: 100% by auto
// roc 2008-06 00744b50  unit: VCRect::?$CArray  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00744b50
//
// 00744b50  56                   push esi
// 00744b51  8bf1                 mov esi, ecx
// 00744b53  8d4e04               lea ecx, [esi + 4]
// 00744b56  e8fbc0f5ff           call 0x6a0c56
// 00744b5b  8bce                 mov ecx, esi
// 00744b5d  5e                   pop esi
// 00744b5e  e96dffffff           jmp 0x744ad0
// library xtp-11.2.2/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?OnDestroy@CXTPCommandBarAnimation@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBarAnimation.cpp
