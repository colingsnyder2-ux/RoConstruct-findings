// roc 2011-06 0064f1e0  unit: RBX::GameBasicSettings  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064f1e0
//
// 0064f1e0  e89bffffff           call 0x64f180
// 0064f1e5  83c010               add eax, 0x10
// 0064f1e8  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?colorPalette@BrickColor@RBX@@SAABV?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
