// from server: 100% by auto
// roc 2009-06 005f8ac0  unit: RBX::Reflection::EnumDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f8ac0
//
// 005f8ac0  64a100000000         mov eax, dword ptr fs:[0]
// 005f8ac6  6aff                 push -1
// 005f8ac8  68ae618600           push 0x8661ae
// 005f8acd  50                   push eax
// 005f8ace  b801000000           mov eax, 1
// 005f8ad3  64892500000000       mov dword ptr fs:[0], esp
// 005f8ada  840524a8a400         test byte ptr [0xa4a824], al
// 005f8ae0  7525                 jne 0x5f8b07
// 005f8ae2  090524a8a400         or dword ptr [0xa4a824], eax
// 005f8ae8  b90ca8a400           mov ecx, 0xa4a80c
// 005f8aed  c744240800000000     mov dword ptr [esp + 8], 0
// 005f8af5  e8161b0600           call 0x65a610
// 005f8afa  6820948900           push 0x899420
// 005f8aff  e8f70f1200           call 0x719afb
// 005f8b04  83c404               add esp, 4
// 005f8b07  8b0c24               mov ecx, dword ptr [esp]
// 005f8b0a  b80ca8a400           mov eax, 0xa4a80c
// 005f8b0f  64890d00000000       mov dword ptr fs:[0], ecx
// 005f8b16  83c40c               add esp, 0xc
// 005f8b19  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
