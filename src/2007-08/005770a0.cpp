// from server: 100% by auto
// roc 2007-08 005770a0  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005770a0
//
// 005770a0  64a100000000         mov eax, dword ptr fs:[0]
// 005770a6  6aff                 push -1
// 005770a8  68be537500           push 0x7553be
// 005770ad  50                   push eax
// 005770ae  b801000000           mov eax, 1
// 005770b3  64892500000000       mov dword ptr fs:[0], esp
// 005770ba  8405d02b8c00         test byte ptr [0x8c2bd0], al
// 005770c0  7525                 jne 0x5770e7
// 005770c2  0905d02b8c00         or dword ptr [0x8c2bd0], eax
// 005770c8  b9382b8c00           mov ecx, 0x8c2b38
// 005770cd  c744240800000000     mov dword ptr [esp + 8], 0
// 005770d5  e8d6fcffff           call 0x576db0
// 005770da  6860a37700           push 0x77a360
// 005770df  e83f9c0b00           call 0x630d23
// 005770e4  83c404               add esp, 4
// 005770e7  8b0c24               mov ecx, dword ptr [esp]
// 005770ea  b8382b8c00           mov eax, 0x8c2b38
// 005770ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005770f6  83c40c               add esp, 0xc
// 005770f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
