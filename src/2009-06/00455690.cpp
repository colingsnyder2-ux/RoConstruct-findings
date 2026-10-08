// roc 2009-06 00455690  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00455690
//
// 00455690  6840474500           push 0x454740
// 00455695  68e4b3a300           push 0xa3b3e4
// 0045569a  e871c0faff           call 0x401710
// 0045569f  83c408               add esp, 8
// 004556a2  e9f9eaffff           jmp 0x4541a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
