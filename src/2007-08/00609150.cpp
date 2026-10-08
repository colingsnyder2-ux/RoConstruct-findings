// roc 2007-08 00609150  unit: RBX::IPipelined  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00609150
//
// 00609150  6a08                 push 8
// 00609152  e889ffffff           call 0x6090e0
// 00609157  c3                   ret 
// library rbxgs/v8world\CollisionStage.cpp (function ?inKernel@IPipelined@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs v8world/CollisionStage.cpp
