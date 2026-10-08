// roc 2007-03 00582d80  unit: seg_00580000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00582d80
//
// 00582d80  e89bffffff           call 0x582d20
// 00582d85  83c010               add eax, 0x10
// 00582d88  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?colorPalette@BrickColor@RBX@@SAABV?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
