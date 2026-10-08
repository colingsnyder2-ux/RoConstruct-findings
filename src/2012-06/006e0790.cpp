// from server: 100% by auto
// roc 2012-06 006e0790  unit: RBX::DataModel  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006e0790
//
// 006e0790  64a100000000         mov eax, dword ptr fs:[0]
// 006e0796  6aff                 push -1
// 006e0798  684eb5ab00           push 0xabb54e
// 006e079d  50                   push eax
// 006e079e  b801000000           mov eax, 1
// 006e07a3  64892500000000       mov dword ptr fs:[0], esp
// 006e07aa  8405e4fae200         test byte ptr [0xe2fae4], al
// 006e07b0  7525                 jne 0x6e07d7
// 006e07b2  0905e4fae200         or dword ptr [0xe2fae4], eax
// 006e07b8  b938fae200           mov ecx, 0xe2fa38
// 006e07bd  c744240800000000     mov dword ptr [esp + 8], 0
// 006e07c5  e8f6f1ffff           call 0x6df9c0
// 006e07ca  68b06cb100           push 0xb16cb0
// 006e07cf  e8212a2a00           call 0x9831f5
// 006e07d4  83c404               add esp, 4
// 006e07d7  8b0c24               mov ecx, dword ptr [esp]
// 006e07da  b838fae200           mov eax, 0xe2fa38
// 006e07df  64890d00000000       mov dword ptr fs:[0], ecx
// 006e07e6  83c40c               add esp, 0xc
// 006e07e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
