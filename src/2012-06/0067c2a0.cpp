// from server: 100% by auto
// roc 2012-06 0067c2a0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0067c2a0
//
// 0067c2a0  64a100000000         mov eax, dword ptr fs:[0]
// 0067c2a6  6aff                 push -1
// 0067c2a8  681e5eab00           push 0xab5e1e
// 0067c2ad  50                   push eax
// 0067c2ae  b801000000           mov eax, 1
// 0067c2b3  64892500000000       mov dword ptr fs:[0], esp
// 0067c2ba  8405348ee200         test byte ptr [0xe28e34], al
// 0067c2c0  7525                 jne 0x67c2e7
// 0067c2c2  0905348ee200         or dword ptr [0xe28e34], eax
// 0067c2c8  b9888de200           mov ecx, 0xe28d88
// 0067c2cd  c744240800000000     mov dword ptr [esp + 8], 0
// 0067c2d5  e846f3ffff           call 0x67b620
// 0067c2da  68e055b100           push 0xb155e0
// 0067c2df  e8116f3000           call 0x9831f5
// 0067c2e4  83c404               add esp, 4
// 0067c2e7  8b0c24               mov ecx, dword ptr [esp]
// 0067c2ea  b8888de200           mov eax, 0xe28d88
// 0067c2ef  64890d00000000       mov dword ptr fs:[0], ecx
// 0067c2f6  83c40c               add esp, 0xc
// 0067c2f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
