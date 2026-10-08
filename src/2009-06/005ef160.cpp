// from server: 100% by auto
// roc 2009-06 005ef160  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef160
//
// 005ef160  64a100000000         mov eax, dword ptr fs:[0]
// 005ef166  6aff                 push -1
// 005ef168  681e588600           push 0x86581e
// 005ef16d  50                   push eax
// 005ef16e  b801000000           mov eax, 1
// 005ef173  64892500000000       mov dword ptr fs:[0], esp
// 005ef17a  8405d497a400         test byte ptr [0xa497d4], al
// 005ef180  7525                 jne 0x5ef1a7
// 005ef182  0905d497a400         or dword ptr [0xa497d4], eax
// 005ef188  b9e896a400           mov ecx, 0xa496e8
// 005ef18d  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef195  e8e6b60600           call 0x65a880
// 005ef19a  68c08a8900           push 0x898ac0
// 005ef19f  e857a91200           call 0x719afb
// 005ef1a4  83c404               add esp, 4
// 005ef1a7  8b0c24               mov ecx, dword ptr [esp]
// 005ef1aa  b8e896a400           mov eax, 0xa496e8
// 005ef1af  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef1b6  83c40c               add esp, 0xc
// 005ef1b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
