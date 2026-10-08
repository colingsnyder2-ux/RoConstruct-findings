// from server: 100% by auto
// roc 2009-06 005ef6a0  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef6a0
//
// 005ef6a0  64a100000000         mov eax, dword ptr fs:[0]
// 005ef6a6  6aff                 push -1
// 005ef6a8  689e598600           push 0x86599e
// 005ef6ad  50                   push eax
// 005ef6ae  b801000000           mov eax, 1
// 005ef6b3  64892500000000       mov dword ptr fs:[0], esp
// 005ef6ba  840514a3a400         test byte ptr [0xa4a314], al
// 005ef6c0  7525                 jne 0x5ef6e7
// 005ef6c2  090514a3a400         or dword ptr [0xa4a314], eax
// 005ef6c8  b928a2a400           mov ecx, 0xa4a228
// 005ef6cd  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef6d5  e8f67a0b00           call 0x6a71d0
// 005ef6da  68008a8900           push 0x898a00
// 005ef6df  e817a41200           call 0x719afb
// 005ef6e4  83c404               add esp, 4
// 005ef6e7  8b0c24               mov ecx, dword ptr [esp]
// 005ef6ea  b828a2a400           mov eax, 0xa4a228
// 005ef6ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef6f6  83c40c               add esp, 0xc
// 005ef6f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
