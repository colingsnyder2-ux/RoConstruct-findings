// from server: 100% by auto
// roc 2011-06 005d1630  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d1630
//
// 005d1630  64a100000000         mov eax, dword ptr fs:[0]
// 005d1636  6aff                 push -1
// 005d1638  686e559e00           push 0x9e556e
// 005d163d  50                   push eax
// 005d163e  b801000000           mov eax, 1
// 005d1643  64892500000000       mov dword ptr fs:[0], esp
// 005d164a  8405ac9dcc00         test byte ptr [0xcc9dac], al
// 005d1650  7525                 jne 0x5d1677
// 005d1652  0905ac9dcc00         or dword ptr [0xcc9dac], eax
// 005d1658  b9089dcc00           mov ecx, 0xcc9d08
// 005d165d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1665  e8e6850700           call 0x649c50
// 005d166a  68707da300           push 0xa37d70
// 005d166f  e8e99a2300           call 0x80b15d
// 005d1674  83c404               add esp, 4
// 005d1677  8b0c24               mov ecx, dword ptr [esp]
// 005d167a  b8089dcc00           mov eax, 0xcc9d08
// 005d167f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1686  83c40c               add esp, 0xc
// 005d1689  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
