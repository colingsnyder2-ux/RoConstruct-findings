// roc 2009-06 005ef470  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef470
//
// 005ef470  64a100000000         mov eax, dword ptr fs:[0]
// 005ef476  6aff                 push -1
// 005ef478  68fe588600           push 0x8658fe
// 005ef47d  50                   push eax
// 005ef47e  b801000000           mov eax, 1
// 005ef483  64892500000000       mov dword ptr fs:[0], esp
// 005ef48a  8405649ea400         test byte ptr [0xa49e64], al
// 005ef490  7525                 jne 0x5ef4b7
// 005ef492  0905649ea400         or dword ptr [0xa49e64], eax
// 005ef498  b9789da400           mov ecx, 0xa49d78
// 005ef49d  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef4a5  e826740b00           call 0x6a68d0
// 005ef4aa  68508a8900           push 0x898a50
// 005ef4af  e847a61200           call 0x719afb
// 005ef4b4  83c404               add esp, 4
// 005ef4b7  8b0c24               mov ecx, dword ptr [esp]
// 005ef4ba  b8789da400           mov eax, 0xa49d78
// 005ef4bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef4c6  83c40c               add esp, 0xc
// 005ef4c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
