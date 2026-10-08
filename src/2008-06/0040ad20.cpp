// from server: 100% by auto
// roc 2008-06 0040ad20  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ad20
//
// 0040ad20  64a100000000         mov eax, dword ptr fs:[0]
// 0040ad26  6aff                 push -1
// 0040ad28  685e017d00           push 0x7d015e
// 0040ad2d  50                   push eax
// 0040ad2e  b801000000           mov eax, 1
// 0040ad33  64892500000000       mov dword ptr fs:[0], esp
// 0040ad3a  840560c49600         test byte ptr [0x96c460], al
// 0040ad40  7525                 jne 0x40ad67
// 0040ad42  090560c49600         or dword ptr [0x96c460], eax
// 0040ad48  b9a0c39600           mov ecx, 0x96c3a0
// 0040ad4d  c744240800000000     mov dword ptr [esp + 8], 0
// 0040ad55  e8c65a1600           call 0x570820
// 0040ad5a  6800a37f00           push 0x7fa300
// 0040ad5f  e84b6a2900           call 0x6a17af
// 0040ad64  83c404               add esp, 4
// 0040ad67  8b0c24               mov ecx, dword ptr [esp]
// 0040ad6a  b8a0c39600           mov eax, 0x96c3a0
// 0040ad6f  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ad76  83c40c               add esp, 0xc
// 0040ad79  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
