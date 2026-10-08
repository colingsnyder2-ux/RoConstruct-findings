// roc 2011-06 005d74d0  unit: RBX::PartInstance  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d74d0
//
// 005d74d0  e8abccfbff           call 0x594180
// 005d74d5  83c010               add eax, 0x10
// 005d74d8  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?colorPalette@BrickColor@RBX@@SAABV?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
