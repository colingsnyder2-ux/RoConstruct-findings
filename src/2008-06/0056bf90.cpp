// from server: 100% by auto
// roc 2008-06 0056bf90  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056bf90
//
// 0056bf90  64a100000000         mov eax, dword ptr fs:[0]
// 0056bf96  6aff                 push -1
// 0056bf98  68cefb7c00           push 0x7cfbce
// 0056bf9d  50                   push eax
// 0056bf9e  b801000000           mov eax, 1
// 0056bfa3  64892500000000       mov dword ptr fs:[0], esp
// 0056bfaa  8405304b9700         test byte ptr [0x974b30], al
// 0056bfb0  7525                 jne 0x56bfd7
// 0056bfb2  0905304b9700         or dword ptr [0x974b30], eax
// 0056bfb8  b9184b9700           mov ecx, 0x974b18
// 0056bfbd  c744240800000000     mov dword ptr [esp + 8], 0
// 0056bfc5  e806d4ebff           call 0x4293d0
// 0056bfca  68c0d17f00           push 0x7fd1c0
// 0056bfcf  e8db571300           call 0x6a17af
// 0056bfd4  83c404               add esp, 4
// 0056bfd7  8b0c24               mov ecx, dword ptr [esp]
// 0056bfda  b8184b9700           mov eax, 0x974b18
// 0056bfdf  64890d00000000       mov dword ptr fs:[0], ecx
// 0056bfe6  83c40c               add esp, 0xc
// 0056bfe9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
