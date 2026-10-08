// from server: 100% by auto
// roc 2011-06 005d0c20  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0c20
//
// 005d0c20  64a100000000         mov eax, dword ptr fs:[0]
// 005d0c26  6aff                 push -1
// 005d0c28  688e529e00           push 0x9e528e
// 005d0c2d  50                   push eax
// 005d0c2e  b801000000           mov eax, 1
// 005d0c33  64892500000000       mov dword ptr fs:[0], esp
// 005d0c3a  8405948ecc00         test byte ptr [0xcc8e94], al
// 005d0c40  7525                 jne 0x5d0c67
// 005d0c42  0905948ecc00         or dword ptr [0xcc8e94], eax
// 005d0c48  b9f08dcc00           mov ecx, 0xcc8df0
// 005d0c4d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0c55  e856a21700           call 0x74aeb0
// 005d0c5a  68e07ea300           push 0xa37ee0
// 005d0c5f  e8f9a42300           call 0x80b15d
// 005d0c64  83c404               add esp, 4
// 005d0c67  8b0c24               mov ecx, dword ptr [esp]
// 005d0c6a  b8f08dcc00           mov eax, 0xcc8df0
// 005d0c6f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0c76  83c40c               add esp, 0xc
// 005d0c79  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
