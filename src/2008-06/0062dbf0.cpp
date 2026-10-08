// roc 2008-06 0062dbf0  unit: RBX::VGeometryService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062dbf0
//
// 0062dbf0  6808789700           push 0x977808
// 0062dbf5  68c0ff5b00           push 0x5bffc0
// 0062dbfa  e83197f2ff           call 0x557330
// 0062dbff  83c408               add esp, 8
// 0062dc02  e9291ef9ff           jmp 0x5bfa30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
