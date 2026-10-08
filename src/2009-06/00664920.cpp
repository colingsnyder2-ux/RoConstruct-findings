// roc 2009-06 00664920  unit: RBX::LegacyController::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00664920
//
// 00664920  6830f25e00           push 0x5ef230
// 00664925  68c0a4a400           push 0xa4a4c0
// 0066492a  e8e1cdd9ff           call 0x401710
// 0066492f  83c408               add esp, 8
// 00664932  e999a8f8ff           jmp 0x5ef1d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
