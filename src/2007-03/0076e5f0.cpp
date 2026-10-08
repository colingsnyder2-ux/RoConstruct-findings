// roc 2007-03 0076e5f0  unit: seg_00760000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076e5f0
//
// 0076e5f0  6828808800           push 0x888028
// 0076e5f5  e81407ebff           call 0x61ed0e
// 0076e5fa  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJoints@ModelInstance@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
