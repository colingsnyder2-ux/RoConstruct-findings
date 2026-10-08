// from server: 100% by auto
// roc 2011-06 005a1e60  unit: RBX::W4SoundType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a1e60
//
// 005a1e60  64a100000000         mov eax, dword ptr fs:[0]
// 005a1e66  6aff                 push -1
// 005a1e68  689e119e00           push 0x9e119e
// 005a1e6d  50                   push eax
// 005a1e6e  b801000000           mov eax, 1
// 005a1e73  64892500000000       mov dword ptr fs:[0], esp
// 005a1e7a  84057cd3cb00         test byte ptr [0xcbd37c], al
// 005a1e80  7525                 jne 0x5a1ea7
// 005a1e82  09057cd3cb00         or dword ptr [0xcbd37c], eax
// 005a1e88  b9d8d2cb00           mov ecx, 0xcbd2d8
// 005a1e8d  c744240800000000     mov dword ptr [esp + 8], 0
// 005a1e95  e826ed1300           call 0x6e0bc0
// 005a1e9a  689053a300           push 0xa35390
// 005a1e9f  e8b9922600           call 0x80b15d
// 005a1ea4  83c404               add esp, 4
// 005a1ea7  8b0c24               mov ecx, dword ptr [esp]
// 005a1eaa  b8d8d2cb00           mov eax, 0xcbd2d8
// 005a1eaf  64890d00000000       mov dword ptr fs:[0], ecx
// 005a1eb6  83c40c               add esp, 0xc
// 005a1eb9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
