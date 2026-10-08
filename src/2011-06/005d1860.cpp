// from server: 100% by auto
// roc 2011-06 005d1860  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d1860
//
// 005d1860  64a100000000         mov eax, dword ptr fs:[0]
// 005d1866  6aff                 push -1
// 005d1868  680e569e00           push 0x9e560e
// 005d186d  50                   push eax
// 005d186e  b801000000           mov eax, 1
// 005d1873  64892500000000       mov dword ptr fs:[0], esp
// 005d187a  8405f4a0cc00         test byte ptr [0xcca0f4], al
// 005d1880  7525                 jne 0x5d18a7
// 005d1882  0905f4a0cc00         or dword ptr [0xcca0f4], eax
// 005d1888  b950a0cc00           mov ecx, 0xcca050
// 005d188d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1895  e886321200           call 0x6f4b20
// 005d189a  68207da300           push 0xa37d20
// 005d189f  e8b9982300           call 0x80b15d
// 005d18a4  83c404               add esp, 4
// 005d18a7  8b0c24               mov ecx, dword ptr [esp]
// 005d18aa  b850a0cc00           mov eax, 0xcca050
// 005d18af  64890d00000000       mov dword ptr fs:[0], ecx
// 005d18b6  83c40c               add esp, 0xc
// 005d18b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
