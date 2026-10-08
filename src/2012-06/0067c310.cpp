// from server: 100% by auto
// roc 2012-06 0067c310  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0067c310
//
// 0067c310  64a100000000         mov eax, dword ptr fs:[0]
// 0067c316  6aff                 push -1
// 0067c318  683e5eab00           push 0xab5e3e
// 0067c31d  50                   push eax
// 0067c31e  b801000000           mov eax, 1
// 0067c323  64892500000000       mov dword ptr fs:[0], esp
// 0067c32a  8405e48ee200         test byte ptr [0xe28ee4], al
// 0067c330  7525                 jne 0x67c357
// 0067c332  0905e48ee200         or dword ptr [0xe28ee4], eax
// 0067c338  b9388ee200           mov ecx, 0xe28e38
// 0067c33d  c744240800000000     mov dword ptr [esp + 8], 0
// 0067c345  e876f4ffff           call 0x67b7c0
// 0067c34a  68d055b100           push 0xb155d0
// 0067c34f  e8a16e3000           call 0x9831f5
// 0067c354  83c404               add esp, 4
// 0067c357  8b0c24               mov ecx, dword ptr [esp]
// 0067c35a  b8388ee200           mov eax, 0xe28e38
// 0067c35f  64890d00000000       mov dword ptr fs:[0], ecx
// 0067c366  83c40c               add esp, 0xc
// 0067c369  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
