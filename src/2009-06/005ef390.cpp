// from server: 100% by auto
// roc 2009-06 005ef390  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef390
//
// 005ef390  64a100000000         mov eax, dword ptr fs:[0]
// 005ef396  6aff                 push -1
// 005ef398  68be588600           push 0x8658be
// 005ef39d  50                   push eax
// 005ef39e  b801000000           mov eax, 1
// 005ef3a3  64892500000000       mov dword ptr fs:[0], esp
// 005ef3aa  8405849ca400         test byte ptr [0xa49c84], al
// 005ef3b0  7525                 jne 0x5ef3d7
// 005ef3b2  0905849ca400         or dword ptr [0xa49c84], eax
// 005ef3b8  b9989ba400           mov ecx, 0xa49b98
// 005ef3bd  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef3c5  e846a40a00           call 0x699810
// 005ef3ca  68708a8900           push 0x898a70
// 005ef3cf  e827a71200           call 0x719afb
// 005ef3d4  83c404               add esp, 4
// 005ef3d7  8b0c24               mov ecx, dword ptr [esp]
// 005ef3da  b8989ba400           mov eax, 0xa49b98
// 005ef3df  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef3e6  83c40c               add esp, 0xc
// 005ef3e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
