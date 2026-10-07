// roc 2011-06 005d10f0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d10f0
//
// 005d10f0  64a100000000         mov eax, dword ptr fs:[0]
// 005d10f6  6aff                 push -1
// 005d10f8  68ee539e00           push 0x9e53ee
// 005d10fd  50                   push eax
// 005d10fe  b801000000           mov eax, 1
// 005d1103  64892500000000       mov dword ptr fs:[0], esp
// 005d110a  8405cc95cc00         test byte ptr [0xcc95cc], al
// 005d1110  7525                 jne 0x5d1137
// 005d1112  0905cc95cc00         or dword ptr [0xcc95cc], eax
// 005d1118  b92895cc00           mov ecx, 0xcc9528
// 005d111d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1125  e886781700           call 0x7489b0
// 005d112a  68307ea300           push 0xa37e30
// 005d112f  e829a02300           call 0x80b15d
// 005d1134  83c404               add esp, 4
// 005d1137  8b0c24               mov ecx, dword ptr [esp]
// 005d113a  b82895cc00           mov eax, 0xcc9528
// 005d113f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1146  83c40c               add esp, 0xc
// 005d1149  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
