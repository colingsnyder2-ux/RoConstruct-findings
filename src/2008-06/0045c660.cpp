// roc 2008-06 0045c660  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c660
//
// 0045c660  688cde9600           push 0x96de8c
// 0045c665  68e0b64500           push 0x45b6e0
// 0045c66a  e8c1ac0f00           call 0x557330
// 0045c66f  83c408               add esp, 8
// 0045c672  e959ebffff           jmp 0x45b1d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
