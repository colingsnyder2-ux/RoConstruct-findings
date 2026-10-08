// from server: 100% by auto
// roc 2010-06 00534bc0  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00534bc0
//
// 00534bc0  64a100000000         mov eax, dword ptr fs:[0]
// 00534bc6  6aff                 push -1
// 00534bc8  688ef19800           push 0x98f18e
// 00534bcd  50                   push eax
// 00534bce  b801000000           mov eax, 1
// 00534bd3  64892500000000       mov dword ptr fs:[0], esp
// 00534bda  8405d48fc000         test byte ptr [0xc08fd4], al
// 00534be0  7525                 jne 0x534c07
// 00534be2  0905d48fc000         or dword ptr [0xc08fd4], eax
// 00534be8  b9708fc000           mov ecx, 0xc08f70
// 00534bed  c744240800000000     mov dword ptr [esp + 8], 0
// 00534bf5  e886f9ffff           call 0x534580
// 00534bfa  6860df9d00           push 0x9ddf60
// 00534bff  e85f3e2700           call 0x7a8a63
// 00534c04  83c404               add esp, 4
// 00534c07  8b0c24               mov ecx, dword ptr [esp]
// 00534c0a  b8708fc000           mov eax, 0xc08f70
// 00534c0f  64890d00000000       mov dword ptr fs:[0], ecx
// 00534c16  83c40c               add esp, 0xc
// 00534c19  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
