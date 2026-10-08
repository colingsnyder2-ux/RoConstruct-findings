// roc 2007-03 0069fb30  unit: seg_00690000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069fb30
//
// 0069fb30  6a00                 push 0
// 0069fb32  e8999ff9ff           call 0x639ad0
// 0069fb37  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Clear@?$RangeList@I@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
