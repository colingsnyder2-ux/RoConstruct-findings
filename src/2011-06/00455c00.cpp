// from server: 100% by auto
// roc 2011-06 00455c00  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00455c00
//
// 00455c00  64a100000000         mov eax, dword ptr fs:[0]
// 00455c06  6aff                 push -1
// 00455c08  688e1f9d00           push 0x9d1f8e
// 00455c0d  50                   push eax
// 00455c0e  b801000000           mov eax, 1
// 00455c13  64892500000000       mov dword ptr fs:[0], esp
// 00455c1a  8405642ecb00         test byte ptr [0xcb2e64], al
// 00455c20  7525                 jne 0x455c47
// 00455c22  0905642ecb00         or dword ptr [0xcb2e64], eax
// 00455c28  b9c02dcb00           mov ecx, 0xcb2dc0
// 00455c2d  c744240800000000     mov dword ptr [esp + 8], 0
// 00455c35  e836f2ffff           call 0x454e70
// 00455c3a  682016a300           push 0xa31620
// 00455c3f  e819553b00           call 0x80b15d
// 00455c44  83c404               add esp, 4
// 00455c47  8b0c24               mov ecx, dword ptr [esp]
// 00455c4a  b8c02dcb00           mov eax, 0xcb2dc0
// 00455c4f  64890d00000000       mov dword ptr fs:[0], ecx
// 00455c56  83c40c               add esp, 0xc
// 00455c59  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
