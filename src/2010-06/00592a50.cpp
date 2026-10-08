// from server: 100% by auto
// roc 2010-06 00592a50  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00592a50
//
// 00592a50  64a100000000         mov eax, dword ptr fs:[0]
// 00592a56  6aff                 push -1
// 00592a58  683e1b9900           push 0x991b3e
// 00592a5d  50                   push eax
// 00592a5e  b801000000           mov eax, 1
// 00592a63  64892500000000       mov dword ptr fs:[0], esp
// 00592a6a  84056ca9c000         test byte ptr [0xc0a96c], al
// 00592a70  7525                 jne 0x592a97
// 00592a72  09056ca9c000         or dword ptr [0xc0a96c], eax
// 00592a78  b980a8c000           mov ecx, 0xc0a880
// 00592a7d  c744240800000000     mov dword ptr [esp + 8], 0
// 00592a85  e856f9ffff           call 0x5923e0
// 00592a8a  68c0e89d00           push 0x9de8c0
// 00592a8f  e8cf5f2100           call 0x7a8a63
// 00592a94  83c404               add esp, 4
// 00592a97  8b0c24               mov ecx, dword ptr [esp]
// 00592a9a  b880a8c000           mov eax, 0xc0a880
// 00592a9f  64890d00000000       mov dword ptr fs:[0], ecx
// 00592aa6  83c40c               add esp, 0xc
// 00592aa9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
