// roc 2010-06 0061eaf0  unit: RBX::Accoutrement  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0061eaf0
//
// 0061eaf0  e89bffffff           call 0x61ea90
// 0061eaf5  83c018               add eax, 0x18
// 0061eaf8  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?colorPalette@BrickColor@RBX@@SAABV?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
