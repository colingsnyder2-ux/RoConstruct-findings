// roc 2007-03 005ea1c0  unit: seg_005e0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ea1c0
//
// 005ea1c0  6a08                 push 8
// 005ea1c2  e899ffffff           call 0x5ea160
// 005ea1c7  c3                   ret 
// library rbxgs/v8world\CollisionStage.cpp (function ?inKernel@IPipelined@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs v8world/CollisionStage.cpp
