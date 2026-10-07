// roc 2011-06 005e4380  unit: RBX::Reflection::EnumDescriptor  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e4380
//
// 005e4380  64a100000000         mov eax, dword ptr fs:[0]
// 005e4386  6aff                 push -1
// 005e4388  685e5f9e00           push 0x9e5f5e
// 005e438d  50                   push eax
// 005e438e  b801000000           mov eax, 1
// 005e4393  64892500000000       mov dword ptr fs:[0], esp
// 005e439a  840508abcc00         test byte ptr [0xccab08], al
// 005e43a0  7524                 jne 0x5e43c6
// 005e43a2  090508abcc00         or dword ptr [0xccab08], eax
// 005e43a8  33c0                 xor eax, eax
// 005e43aa  68e094a300           push 0xa394e0
// 005e43af  a3fcaacc00           mov dword ptr [0xccaafc], eax
// 005e43b4  a300abcc00           mov dword ptr [0xccab00], eax
// 005e43b9  a304abcc00           mov dword ptr [0xccab04], eax
// 005e43be  e89a6d2200           call 0x80b15d
// 005e43c3  83c404               add esp, 4
// 005e43c6  8b0c24               mov ecx, dword ptr [esp]
// 005e43c9  b8f8aacc00           mov eax, 0xccaaf8
// 005e43ce  64890d00000000       mov dword ptr fs:[0], ecx
// 005e43d5  83c40c               add esp, 0xc
// 005e43d8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
