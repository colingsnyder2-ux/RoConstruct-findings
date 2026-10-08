// roc 2007-03 0059f500  unit: seg_00590000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059f500
//
// 0059f500  8a8164010000         mov al, byte ptr [ecx + 0x164]
// 0059f506  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ?drawSelected@HopperBin@RBX@@EBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
