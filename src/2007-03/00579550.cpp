// roc 2007-03 00579550  unit: seg_00570000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00579550
//
// 00579550  c6815002000001       mov byte ptr [ecx + 0x250], 1
// 00579557  e9f4b8fbff           jmp 0x534e50
// library rbxgs/v8datamodel\RootInstance.cpp (function ?onDescendentRemoving@RootInstance@RBX@@MAEXABV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
