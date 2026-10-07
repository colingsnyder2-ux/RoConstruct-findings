// roc 2011-06 005e4460  unit: RBX::Reflection::EnumDescriptor  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e4460
//
// 005e4460  64a100000000         mov eax, dword ptr fs:[0]
// 005e4466  6aff                 push -1
// 005e4468  689e5f9e00           push 0x9e5f9e
// 005e446d  50                   push eax
// 005e446e  b801000000           mov eax, 1
// 005e4473  64892500000000       mov dword ptr fs:[0], esp
// 005e447a  840530abcc00         test byte ptr [0xccab30], al
// 005e4480  7524                 jne 0x5e44a6
// 005e4482  090530abcc00         or dword ptr [0xccab30], eax
// 005e4488  33c0                 xor eax, eax
// 005e448a  686094a300           push 0xa39460
// 005e448f  a324abcc00           mov dword ptr [0xccab24], eax
// 005e4494  a328abcc00           mov dword ptr [0xccab28], eax
// 005e4499  a32cabcc00           mov dword ptr [0xccab2c], eax
// 005e449e  e8ba6c2200           call 0x80b15d
// 005e44a3  83c404               add esp, 4
// 005e44a6  8b0c24               mov ecx, dword ptr [esp]
// 005e44a9  b820abcc00           mov eax, 0xccab20
// 005e44ae  64890d00000000       mov dword ptr fs:[0], ecx
// 005e44b5  83c40c               add esp, 0xc
// 005e44b8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
