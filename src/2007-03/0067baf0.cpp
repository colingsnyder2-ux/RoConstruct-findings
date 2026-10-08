// roc 2007-03 0067baf0  unit: seg_00670000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067baf0
//
// 0067baf0  e87bf8ffff           call 0x67b370
// 0067baf5  8bc8                 mov ecx, eax
// 0067baf7  e974ffffff           jmp 0x67ba70
// library rbxgs/v8world\World.cpp (function ?update@World@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
