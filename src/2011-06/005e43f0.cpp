// from server: 100% by auto
// roc 2011-06 005e43f0  unit: RBX::Reflection::EnumDescriptor  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e43f0
//
// 005e43f0  64a100000000         mov eax, dword ptr fs:[0]
// 005e43f6  6aff                 push -1
// 005e43f8  687e5f9e00           push 0x9e5f7e
// 005e43fd  50                   push eax
// 005e43fe  b801000000           mov eax, 1
// 005e4403  64892500000000       mov dword ptr fs:[0], esp
// 005e440a  84051cabcc00         test byte ptr [0xccab1c], al
// 005e4410  7524                 jne 0x5e4436
// 005e4412  09051cabcc00         or dword ptr [0xccab1c], eax
// 005e4418  33c0                 xor eax, eax
// 005e441a  68a094a300           push 0xa394a0
// 005e441f  a310abcc00           mov dword ptr [0xccab10], eax
// 005e4424  a314abcc00           mov dword ptr [0xccab14], eax
// 005e4429  a318abcc00           mov dword ptr [0xccab18], eax
// 005e442e  e82a6d2200           call 0x80b15d
// 005e4433  83c404               add esp, 4
// 005e4436  8b0c24               mov ecx, dword ptr [esp]
// 005e4439  b80cabcc00           mov eax, 0xccab0c
// 005e443e  64890d00000000       mov dword ptr fs:[0], ecx
// 005e4445  83c40c               add esp, 0xc
// 005e4448  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
