// roc 2008-06 0062c080  unit: RBX::VFlagStand::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062c080
//
// 0062c080  68fc779700           push 0x9777fc
// 0062c085  6890ff5b00           push 0x5bff90
// 0062c08a  e8a1b2f2ff           call 0x557330
// 0062c08f  83c408               add esp, 8
// 0062c092  e94938f9ff           jmp 0x5bf8e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
