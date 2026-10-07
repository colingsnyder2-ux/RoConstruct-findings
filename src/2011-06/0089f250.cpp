// roc 2011-06 0089f250  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089f250
//
// 0089f250  56                   push esi
// 0089f251  8bf1                 mov esi, ecx
// 0089f253  8d4e04               lea ecx, [esi + 4]
// 0089f256  e8c1b3f6ff           call 0x80a61c
// 0089f25b  8bce                 mov ecx, esi
// 0089f25d  5e                   pop esi
// 0089f25e  e96dffffff           jmp 0x89f1d0
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?OnDestroy@CXTPCommandBarAnimation@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
