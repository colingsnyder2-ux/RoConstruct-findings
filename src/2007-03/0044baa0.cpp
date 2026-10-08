// roc 2007-03 0044baa0  unit: seg_00440000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044baa0
//
// 0044baa0  6a00                 push 0
// 0044baa2  e899470e00           call 0x530240
// 0044baa7  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Clear@?$RangeList@I@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
