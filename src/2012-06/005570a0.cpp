// from server: 100% by auto
// roc 2012-06 005570a0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005570a0
//
// 005570a0  64a100000000         mov eax, dword ptr fs:[0]
// 005570a6  6aff                 push -1
// 005570a8  685edfaa00           push 0xaadf5e
// 005570ad  50                   push eax
// 005570ae  b801000000           mov eax, 1
// 005570b3  64892500000000       mov dword ptr fs:[0], esp
// 005570ba  84053429e200         test byte ptr [0xe22934], al
// 005570c0  7525                 jne 0x5570e7
// 005570c2  09053429e200         or dword ptr [0xe22934], eax
// 005570c8  b98828e200           mov ecx, 0xe22888
// 005570cd  c744240800000000     mov dword ptr [esp + 8], 0
// 005570d5  e8b61c0000           call 0x558d90
// 005570da  68403eb100           push 0xb13e40
// 005570df  e811c14200           call 0x9831f5
// 005570e4  83c404               add esp, 4
// 005570e7  8b0c24               mov ecx, dword ptr [esp]
// 005570ea  b88828e200           mov eax, 0xe22888
// 005570ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005570f6  83c40c               add esp, 0xc
// 005570f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
