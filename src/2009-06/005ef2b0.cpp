// roc 2009-06 005ef2b0  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef2b0
//
// 005ef2b0  64a100000000         mov eax, dword ptr fs:[0]
// 005ef2b6  6aff                 push -1
// 005ef2b8  687e588600           push 0x86587e
// 005ef2bd  50                   push eax
// 005ef2be  b801000000           mov eax, 1
// 005ef2c3  64892500000000       mov dword ptr fs:[0], esp
// 005ef2ca  8405a49aa400         test byte ptr [0xa49aa4], al
// 005ef2d0  7525                 jne 0x5ef2f7
// 005ef2d2  0905a49aa400         or dword ptr [0xa49aa4], eax
// 005ef2d8  b9b899a400           mov ecx, 0xa499b8
// 005ef2dd  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef2e5  e826c8fdff           call 0x5cbb10
// 005ef2ea  68908a8900           push 0x898a90
// 005ef2ef  e807a81200           call 0x719afb
// 005ef2f4  83c404               add esp, 4
// 005ef2f7  8b0c24               mov ecx, dword ptr [esp]
// 005ef2fa  b8b899a400           mov eax, 0xa499b8
// 005ef2ff  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef306  83c40c               add esp, 0xc
// 005ef309  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
