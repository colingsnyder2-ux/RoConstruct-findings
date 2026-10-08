// from server: 100% by auto
// roc 2012-06 0067c380  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0067c380
//
// 0067c380  64a100000000         mov eax, dword ptr fs:[0]
// 0067c386  6aff                 push -1
// 0067c388  685e5eab00           push 0xab5e5e
// 0067c38d  50                   push eax
// 0067c38e  b801000000           mov eax, 1
// 0067c393  64892500000000       mov dword ptr fs:[0], esp
// 0067c39a  8405948fe200         test byte ptr [0xe28f94], al
// 0067c3a0  7525                 jne 0x67c3c7
// 0067c3a2  0905948fe200         or dword ptr [0xe28f94], eax
// 0067c3a8  b9e88ee200           mov ecx, 0xe28ee8
// 0067c3ad  c744240800000000     mov dword ptr [esp + 8], 0
// 0067c3b5  e826f5ffff           call 0x67b8e0
// 0067c3ba  68c055b100           push 0xb155c0
// 0067c3bf  e8316e3000           call 0x9831f5
// 0067c3c4  83c404               add esp, 4
// 0067c3c7  8b0c24               mov ecx, dword ptr [esp]
// 0067c3ca  b8e88ee200           mov eax, 0xe28ee8
// 0067c3cf  64890d00000000       mov dword ptr fs:[0], ecx
// 0067c3d6  83c40c               add esp, 0xc
// 0067c3d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
