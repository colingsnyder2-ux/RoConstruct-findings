// roc 2007-03 00534f50  unit: seg_00530000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534f50
//
// 00534f50  68f04e5300           push 0x534ef0
// 00534f55  e8f60ef5ff           call 0x485e50
// 00534f5a  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJoints@ModelInstance@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
