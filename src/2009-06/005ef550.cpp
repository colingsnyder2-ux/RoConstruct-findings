// roc 2009-06 005ef550  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef550
//
// 005ef550  64a100000000         mov eax, dword ptr fs:[0]
// 005ef556  6aff                 push -1
// 005ef558  683e598600           push 0x86593e
// 005ef55d  50                   push eax
// 005ef55e  b801000000           mov eax, 1
// 005ef563  64892500000000       mov dword ptr fs:[0], esp
// 005ef56a  840544a0a400         test byte ptr [0xa4a044], al
// 005ef570  7525                 jne 0x5ef597
// 005ef572  090544a0a400         or dword ptr [0xa4a044], eax
// 005ef578  b9589fa400           mov ecx, 0xa49f58
// 005ef57d  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef585  e896780b00           call 0x6a6e20
// 005ef58a  68308a8900           push 0x898a30
// 005ef58f  e867a51200           call 0x719afb
// 005ef594  83c404               add esp, 4
// 005ef597  8b0c24               mov ecx, dword ptr [esp]
// 005ef59a  b8589fa400           mov eax, 0xa49f58
// 005ef59f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef5a6  83c40c               add esp, 0xc
// 005ef5a9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
