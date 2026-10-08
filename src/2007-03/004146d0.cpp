// roc 2007-03 004146d0  unit: seg_00410000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004146d0
//
// 004146d0  6a00                 push 0
// 004146d2  e819d61200           call 0x541cf0
// 004146d7  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Clear@?$RangeList@I@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
