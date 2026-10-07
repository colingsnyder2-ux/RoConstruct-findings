// roc 2009-06 005ef320  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef320
//
// 005ef320  64a100000000         mov eax, dword ptr fs:[0]
// 005ef326  6aff                 push -1
// 005ef328  689e588600           push 0x86589e
// 005ef32d  50                   push eax
// 005ef32e  b801000000           mov eax, 1
// 005ef333  64892500000000       mov dword ptr fs:[0], esp
// 005ef33a  8405949ba400         test byte ptr [0xa49b94], al
// 005ef340  7525                 jne 0x5ef367
// 005ef342  0905949ba400         or dword ptr [0xa49b94], eax
// 005ef348  b9a89aa400           mov ecx, 0xa49aa8
// 005ef34d  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef355  e836a60a00           call 0x699990
// 005ef35a  68808a8900           push 0x898a80
// 005ef35f  e897a71200           call 0x719afb
// 005ef364  83c404               add esp, 4
// 005ef367  8b0c24               mov ecx, dword ptr [esp]
// 005ef36a  b8a89aa400           mov eax, 0xa49aa8
// 005ef36f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef376  83c40c               add esp, 0xc
// 005ef379  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
