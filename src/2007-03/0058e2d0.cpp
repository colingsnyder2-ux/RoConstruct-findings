// roc 2007-03 0058e2d0  unit: seg_00580000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058e2d0
//
// 0058e2d0  c7819801000000000000 mov dword ptr [ecx + 0x198], 0
// 0058e2da  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?alwaysMode@Camera@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
