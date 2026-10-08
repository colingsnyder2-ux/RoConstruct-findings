// roc 2008-06 00667350  unit: RBX::HUMAN::RunningNoPhysics  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667350
//
// 00667350  68ccd99700           push 0x97d9cc
// 00667355  6840736600           push 0x667340
// 0066735a  e8d1ffeeff           call 0x557330
// 0066735f  83c408               add esp, 8
// 00667362  e969ffffff           jmp 0x6672d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
