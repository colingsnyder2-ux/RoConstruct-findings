// roc 2010-06 005929e0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005929e0
//
// 005929e0  64a100000000         mov eax, dword ptr fs:[0]
// 005929e6  6aff                 push -1
// 005929e8  681e1b9900           push 0x991b1e
// 005929ed  50                   push eax
// 005929ee  b801000000           mov eax, 1
// 005929f3  64892500000000       mov dword ptr fs:[0], esp
// 005929fa  84057ca8c000         test byte ptr [0xc0a87c], al
// 00592a00  7525                 jne 0x592a27
// 00592a02  09057ca8c000         or dword ptr [0xc0a87c], eax
// 00592a08  b990a7c000           mov ecx, 0xc0a790
// 00592a0d  c744240800000000     mov dword ptr [esp + 8], 0
// 00592a15  e856f2ffff           call 0x591c70
// 00592a1a  68d0e89d00           push 0x9de8d0
// 00592a1f  e83f602100           call 0x7a8a63
// 00592a24  83c404               add esp, 4
// 00592a27  8b0c24               mov ecx, dword ptr [esp]
// 00592a2a  b890a7c000           mov eax, 0xc0a790
// 00592a2f  64890d00000000       mov dword ptr fs:[0], ecx
// 00592a36  83c40c               add esp, 0xc
// 00592a39  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
