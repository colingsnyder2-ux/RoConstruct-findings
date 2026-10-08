// roc 2011-06 0063f7d0  unit: RBX::VRootInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063f7d0
//
// 0063f7d0  6880584a00           push 0x4a5880
// 0063f7d5  68c853cb00           push 0xcb53c8
// 0063f7da  e8311edcff           call 0x401610
// 0063f7df  83c408               add esp, 8
// 0063f7e2  e9d943e6ff           jmp 0x4a3bc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
