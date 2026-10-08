// roc 2009-06 0069d9d0  unit: RBX::VGeometryService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069d9d0
//
// 0069d9d0  6860a15e00           push 0x5ea160
// 0069d9d5  68a449a400           push 0xa449a4
// 0069d9da  e8313dd6ff           call 0x401710
// 0069d9df  83c408               add esp, 8
// 0069d9e2  e959bcf4ff           jmp 0x5e9640
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
