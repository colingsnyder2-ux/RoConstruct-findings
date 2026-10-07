// roc 2011-06 00455a40  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00455a40
//
// 00455a40  64a100000000         mov eax, dword ptr fs:[0]
// 00455a46  6aff                 push -1
// 00455a48  680e1f9d00           push 0x9d1f0e
// 00455a4d  50                   push eax
// 00455a4e  b801000000           mov eax, 1
// 00455a53  64892500000000       mov dword ptr fs:[0], esp
// 00455a5a  8405c42bcb00         test byte ptr [0xcb2bc4], al
// 00455a60  7525                 jne 0x455a87
// 00455a62  0905c42bcb00         or dword ptr [0xcb2bc4], eax
// 00455a68  b9202bcb00           mov ecx, 0xcb2b20
// 00455a6d  c744240800000000     mov dword ptr [esp + 8], 0
// 00455a75  e876f0ffff           call 0x454af0
// 00455a7a  686016a300           push 0xa31660
// 00455a7f  e8d9563b00           call 0x80b15d
// 00455a84  83c404               add esp, 4
// 00455a87  8b0c24               mov ecx, dword ptr [esp]
// 00455a8a  b8202bcb00           mov eax, 0xcb2b20
// 00455a8f  64890d00000000       mov dword ptr fs:[0], ecx
// 00455a96  83c40c               add esp, 0xc
// 00455a99  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
