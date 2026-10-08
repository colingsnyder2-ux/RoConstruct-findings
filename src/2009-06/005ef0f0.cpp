// from server: 100% by auto
// roc 2009-06 005ef0f0  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef0f0
//
// 005ef0f0  64a100000000         mov eax, dword ptr fs:[0]
// 005ef0f6  6aff                 push -1
// 005ef0f8  68fe578600           push 0x8657fe
// 005ef0fd  50                   push eax
// 005ef0fe  b801000000           mov eax, 1
// 005ef103  64892500000000       mov dword ptr fs:[0], esp
// 005ef10a  8405e496a400         test byte ptr [0xa496e4], al
// 005ef110  7525                 jne 0x5ef137
// 005ef112  0905e496a400         or dword ptr [0xa496e4], eax
// 005ef118  b9f895a400           mov ecx, 0xa495f8
// 005ef11d  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef125  e806650300           call 0x625630
// 005ef12a  68d08a8900           push 0x898ad0
// 005ef12f  e8c7a91200           call 0x719afb
// 005ef134  83c404               add esp, 4
// 005ef137  8b0c24               mov ecx, dword ptr [esp]
// 005ef13a  b8f895a400           mov eax, 0xa495f8
// 005ef13f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef146  83c40c               add esp, 0xc
// 005ef149  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
