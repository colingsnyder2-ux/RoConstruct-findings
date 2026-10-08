// roc 2007-03 00534fc0  unit: seg_00530000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534fc0
//
// 00534fc0  68604f5300           push 0x534f60
// 00534fc5  e8860ef5ff           call 0x485e50
// 00534fca  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJoints@ModelInstance@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
