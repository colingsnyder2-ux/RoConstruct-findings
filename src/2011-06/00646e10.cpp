// roc 2011-06 00646e10  unit: RBX::VBasePlayerGui::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00646e10
//
// 00646e10  68c0254300           push 0x4325c0
// 00646e15  681c27cb00           push 0xcb271c
// 00646e1a  e8f1a7dbff           call 0x401610
// 00646e1f  83c408               add esp, 8
// 00646e22  e9a9a2deff           jmp 0x4310d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
