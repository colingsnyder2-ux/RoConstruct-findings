// roc 2007-03 00579b60  unit: seg_00570000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00579b60
//
// 00579b60  c6815002000001       mov byte ptr [ecx + 0x250], 1
// 00579b67  c3                   ret 
// library rbxgs/v8datamodel\RootInstance.cpp (function ?onChildControllerChanged@RootInstance@RBX@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
