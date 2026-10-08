// from server: 100% by auto
// roc 2009-06 005ef080  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef080
//
// 005ef080  64a100000000         mov eax, dword ptr fs:[0]
// 005ef086  6aff                 push -1
// 005ef088  68de578600           push 0x8657de
// 005ef08d  50                   push eax
// 005ef08e  b801000000           mov eax, 1
// 005ef093  64892500000000       mov dword ptr fs:[0], esp
// 005ef09a  8405f495a400         test byte ptr [0xa495f4], al
// 005ef0a0  7525                 jne 0x5ef0c7
// 005ef0a2  0905f495a400         or dword ptr [0xa495f4], eax
// 005ef0a8  b90895a400           mov ecx, 0xa49508
// 005ef0ad  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef0b5  e8966c0b00           call 0x6a5d50
// 005ef0ba  68e08a8900           push 0x898ae0
// 005ef0bf  e837aa1200           call 0x719afb
// 005ef0c4  83c404               add esp, 4
// 005ef0c7  8b0c24               mov ecx, dword ptr [esp]
// 005ef0ca  b80895a400           mov eax, 0xa49508
// 005ef0cf  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef0d6  83c40c               add esp, 0xc
// 005ef0d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
