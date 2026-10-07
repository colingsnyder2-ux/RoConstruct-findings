// roc 2009-06 005ef240  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef240
//
// 005ef240  64a100000000         mov eax, dword ptr fs:[0]
// 005ef246  6aff                 push -1
// 005ef248  685e588600           push 0x86585e
// 005ef24d  50                   push eax
// 005ef24e  b801000000           mov eax, 1
// 005ef253  64892500000000       mov dword ptr fs:[0], esp
// 005ef25a  8405b499a400         test byte ptr [0xa499b4], al
// 005ef260  7525                 jne 0x5ef287
// 005ef262  0905b499a400         or dword ptr [0xa499b4], eax
// 005ef268  b9c898a400           mov ecx, 0xa498c8
// 005ef26d  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef275  e8761d0900           call 0x680ff0
// 005ef27a  68a08a8900           push 0x898aa0
// 005ef27f  e877a81200           call 0x719afb
// 005ef284  83c404               add esp, 4
// 005ef287  8b0c24               mov ecx, dword ptr [esp]
// 005ef28a  b8c898a400           mov eax, 0xa498c8
// 005ef28f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef296  83c40c               add esp, 0xc
// 005ef299  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
