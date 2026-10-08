// roc 2007-03 0061f5be  unit: seg_00610000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061f5be
//
// 0061f5be  e893070000           call 0x61fd56
// 0061f5c3  e935fdffff           jmp 0x61f2fd
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?onExtentsChanged@ModelInstance@RBX@@UBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
