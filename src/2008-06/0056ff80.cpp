// roc 2008-06 0056ff80  unit: RBX::W4NormalId::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056ff80
//
// 0056ff80  64a100000000         mov eax, dword ptr fs:[0]
// 0056ff86  6aff                 push -1
// 0056ff88  68eeff7c00           push 0x7cffee
// 0056ff8d  50                   push eax
// 0056ff8e  b801000000           mov eax, 1
// 0056ff93  64892500000000       mov dword ptr fs:[0], esp
// 0056ff9a  8405d04c9700         test byte ptr [0x974cd0], al
// 0056ffa0  7525                 jne 0x56ffc7
// 0056ffa2  0905d04c9700         or dword ptr [0x974cd0], eax
// 0056ffa8  b9b84c9700           mov ecx, 0x974cb8
// 0056ffad  c744240800000000     mov dword ptr [esp + 8], 0
// 0056ffb5  e81694ebff           call 0x4293d0
// 0056ffba  6850d37f00           push 0x7fd350
// 0056ffbf  e8eb171300           call 0x6a17af
// 0056ffc4  83c404               add esp, 4
// 0056ffc7  8b0c24               mov ecx, dword ptr [esp]
// 0056ffca  b8b84c9700           mov eax, 0x974cb8
// 0056ffcf  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ffd6  83c40c               add esp, 0xc
// 0056ffd9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
