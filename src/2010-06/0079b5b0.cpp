// roc 2010-06 0079b5b0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079b5b0
//
// 0079b5b0  64a100000000         mov eax, dword ptr fs:[0]
// 0079b5b6  6aff                 push -1
// 0079b5b8  68dedb9a00           push 0x9adbde
// 0079b5bd  50                   push eax
// 0079b5be  b801000000           mov eax, 1
// 0079b5c3  64892500000000       mov dword ptr fs:[0], esp
// 0079b5ca  84054042c200         test byte ptr [0xc24240], al
// 0079b5d0  7525                 jne 0x79b5f7
// 0079b5d2  09054042c200         or dword ptr [0xc24240], eax
// 0079b5d8  b98040c200           mov ecx, 0xc24080
// 0079b5dd  c744240800000000     mov dword ptr [esp + 8], 0
// 0079b5e5  e846fbffff           call 0x79b130
// 0079b5ea  68408e9e00           push 0x9e8e40
// 0079b5ef  e86fd40000           call 0x7a8a63
// 0079b5f4  83c404               add esp, 4
// 0079b5f7  8b0c24               mov ecx, dword ptr [esp]
// 0079b5fa  b88040c200           mov eax, 0xc24080
// 0079b5ff  64890d00000000       mov dword ptr fs:[0], ecx
// 0079b606  83c40c               add esp, 0xc
// 0079b609  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
