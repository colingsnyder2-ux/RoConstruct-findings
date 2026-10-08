// roc 2012-06 00742a50  unit: RBX::PluginManager  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00742a50
//
// 00742a50  e89bffffff           call 0x7429f0
// 00742a55  83c010               add eax, 0x10
// 00742a58  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?colorPalette@BrickColor@RBX@@SAABV?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
