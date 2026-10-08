// from server: 100% by auto
// roc 2008-06 004aa6a0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aa6a0
//
// 004aa6a0  64a100000000         mov eax, dword ptr fs:[0]
// 004aa6a6  6aff                 push -1
// 004aa6a8  685e807c00           push 0x7c805e
// 004aa6ad  50                   push eax
// 004aa6ae  b801000000           mov eax, 1
// 004aa6b3  64892500000000       mov dword ptr fs:[0], esp
// 004aa6ba  840510119700         test byte ptr [0x971110], al
// 004aa6c0  7525                 jne 0x4aa6e7
// 004aa6c2  090510119700         or dword ptr [0x971110], eax
// 004aa6c8  b928109700           mov ecx, 0x971028
// 004aa6cd  c744240800000000     mov dword ptr [esp + 8], 0
// 004aa6d5  e876faffff           call 0x4aa150
// 004aa6da  68a0bf7f00           push 0x7fbfa0
// 004aa6df  e8cb701f00           call 0x6a17af
// 004aa6e4  83c404               add esp, 4
// 004aa6e7  8b0c24               mov ecx, dword ptr [esp]
// 004aa6ea  b828109700           mov eax, 0x971028
// 004aa6ef  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa6f6  83c40c               add esp, 0xc
// 004aa6f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
