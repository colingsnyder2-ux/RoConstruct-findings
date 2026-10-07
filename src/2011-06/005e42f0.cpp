// roc 2011-06 005e42f0  unit: RBX::Reflection::EnumDescriptor  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e42f0
//
// 005e42f0  64a100000000         mov eax, dword ptr fs:[0]
// 005e42f6  6aff                 push -1
// 005e42f8  683e5f9e00           push 0x9e5f3e
// 005e42fd  50                   push eax
// 005e42fe  b801000000           mov eax, 1
// 005e4303  64892500000000       mov dword ptr fs:[0], esp
// 005e430a  8405f0aacc00         test byte ptr [0xccaaf0], al
// 005e4310  7524                 jne 0x5e4336
// 005e4312  0905f0aacc00         or dword ptr [0xccaaf0], eax
// 005e4318  33c0                 xor eax, eax
// 005e431a  682094a300           push 0xa39420
// 005e431f  a3e4aacc00           mov dword ptr [0xccaae4], eax
// 005e4324  a3e8aacc00           mov dword ptr [0xccaae8], eax
// 005e4329  a3ecaacc00           mov dword ptr [0xccaaec], eax
// 005e432e  e82a6e2200           call 0x80b15d
// 005e4333  83c404               add esp, 4
// 005e4336  8b0c24               mov ecx, dword ptr [esp]
// 005e4339  b8e0aacc00           mov eax, 0xccaae0
// 005e433e  64890d00000000       mov dword ptr fs:[0], ecx
// 005e4345  83c40c               add esp, 0xc
// 005e4348  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
