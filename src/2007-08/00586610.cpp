// roc 2007-08 00586610  unit: RBX::VHat::?$FactoryProduct  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586610
//
// 00586610  e89bffffff           call 0x5865b0
// 00586615  83c010               add eax, 0x10
// 00586618  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?colorPalette@BrickColor@RBX@@SAABV?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
