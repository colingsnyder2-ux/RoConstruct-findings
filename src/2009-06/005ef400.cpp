// roc 2009-06 005ef400  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef400
//
// 005ef400  64a100000000         mov eax, dword ptr fs:[0]
// 005ef406  6aff                 push -1
// 005ef408  68de588600           push 0x8658de
// 005ef40d  50                   push eax
// 005ef40e  b801000000           mov eax, 1
// 005ef413  64892500000000       mov dword ptr fs:[0], esp
// 005ef41a  8405749da400         test byte ptr [0xa49d74], al
// 005ef420  7525                 jne 0x5ef447
// 005ef422  0905749da400         or dword ptr [0xa49d74], eax
// 005ef428  b9889ca400           mov ecx, 0xa49c88
// 005ef42d  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef435  e856a20a00           call 0x699690
// 005ef43a  68608a8900           push 0x898a60
// 005ef43f  e8b7a61200           call 0x719afb
// 005ef444  83c404               add esp, 4
// 005ef447  8b0c24               mov ecx, dword ptr [esp]
// 005ef44a  b8889ca400           mov eax, 0xa49c88
// 005ef44f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef456  83c40c               add esp, 0xc
// 005ef459  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
