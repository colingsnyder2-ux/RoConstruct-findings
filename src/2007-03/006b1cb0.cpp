// roc 2007-03 006b1cb0  unit: seg_006b0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b1cb0
//
// 006b1cb0  6800030000           push 0x300
// 006b1cb5  e816fcf7ff           call 0x6318d0
// 006b1cba  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJoints@ModelInstance@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
