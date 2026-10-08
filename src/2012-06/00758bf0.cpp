// roc 2012-06 00758bf0  unit: RBX::PartInstance  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00758bf0
//
// 00758bf0  e8ab80f2ff           call 0x680ca0
// 00758bf5  83c010               add eax, 0x10
// 00758bf8  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?colorPalette@BrickColor@RBX@@SAABV?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
