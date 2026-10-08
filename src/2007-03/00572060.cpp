// roc 2007-03 00572060  unit: seg_00570000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572060
//
// 00572060  d981a0010000         fld dword ptr [ecx + 0x1a0]
// 00572066  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?getTransparencyXml@PartInstance@RBX@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
