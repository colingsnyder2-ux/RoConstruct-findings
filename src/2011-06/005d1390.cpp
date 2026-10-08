// from server: 100% by auto
// roc 2011-06 005d1390  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d1390
//
// 005d1390  64a100000000         mov eax, dword ptr fs:[0]
// 005d1396  6aff                 push -1
// 005d1398  68ae549e00           push 0x9e54ae
// 005d139d  50                   push eax
// 005d139e  b801000000           mov eax, 1
// 005d13a3  64892500000000       mov dword ptr fs:[0], esp
// 005d13aa  8405bc99cc00         test byte ptr [0xcc99bc], al
// 005d13b0  7525                 jne 0x5d13d7
// 005d13b2  0905bc99cc00         or dword ptr [0xcc99bc], eax
// 005d13b8  b91899cc00           mov ecx, 0xcc9918
// 005d13bd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d13c5  e8169c1700           call 0x74afe0
// 005d13ca  68d07da300           push 0xa37dd0
// 005d13cf  e8899d2300           call 0x80b15d
// 005d13d4  83c404               add esp, 4
// 005d13d7  8b0c24               mov ecx, dword ptr [esp]
// 005d13da  b81899cc00           mov eax, 0xcc9918
// 005d13df  64890d00000000       mov dword ptr fs:[0], ecx
// 005d13e6  83c40c               add esp, 0xc
// 005d13e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
