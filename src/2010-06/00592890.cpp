// from server: 100% by auto
// roc 2010-06 00592890  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00592890
//
// 00592890  64a100000000         mov eax, dword ptr fs:[0]
// 00592896  6aff                 push -1
// 00592898  68be1a9900           push 0x991abe
// 0059289d  50                   push eax
// 0059289e  b801000000           mov eax, 1
// 005928a3  64892500000000       mov dword ptr fs:[0], esp
// 005928aa  8405aca5c000         test byte ptr [0xc0a5ac], al
// 005928b0  7525                 jne 0x5928d7
// 005928b2  0905aca5c000         or dword ptr [0xc0a5ac], eax
// 005928b8  b9c0a4c000           mov ecx, 0xc0a4c0
// 005928bd  c744240800000000     mov dword ptr [esp + 8], 0
// 005928c5  e8a6eeffff           call 0x591770
// 005928ca  6800e99d00           push 0x9de900
// 005928cf  e88f612100           call 0x7a8a63
// 005928d4  83c404               add esp, 4
// 005928d7  8b0c24               mov ecx, dword ptr [esp]
// 005928da  b8c0a4c000           mov eax, 0xc0a4c0
// 005928df  64890d00000000       mov dword ptr fs:[0], ecx
// 005928e6  83c40c               add esp, 0xc
// 005928e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
