// roc 2008-06 005b5c80  unit: RBX::VHat::?$FactoryProduct  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b5c80
//
// 005b5c80  e89bffffff           call 0x5b5c20
// 005b5c85  83c018               add eax, 0x18
// 005b5c88  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?colorPalette@BrickColor@RBX@@SAABV?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
