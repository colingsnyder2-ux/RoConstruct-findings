// roc 2007-03 00453720  unit: seg_00450000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00453720
//
// 00453720  6a00                 push 0
// 00453722  e899feffff           call 0x4535c0
// 00453727  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Clear@?$RangeList@I@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
