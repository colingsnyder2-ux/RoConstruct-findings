// from server: 100% by auto
// roc 2011-06 005d15c0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d15c0
//
// 005d15c0  64a100000000         mov eax, dword ptr fs:[0]
// 005d15c6  6aff                 push -1
// 005d15c8  684e559e00           push 0x9e554e
// 005d15cd  50                   push eax
// 005d15ce  b801000000           mov eax, 1
// 005d15d3  64892500000000       mov dword ptr fs:[0], esp
// 005d15da  8405049dcc00         test byte ptr [0xcc9d04], al
// 005d15e0  7525                 jne 0x5d1607
// 005d15e2  0905049dcc00         or dword ptr [0xcc9d04], eax
// 005d15e8  b9609ccc00           mov ecx, 0xcc9c60
// 005d15ed  c744240800000000     mov dword ptr [esp + 8], 0
// 005d15f5  e866f01100           call 0x6f0660
// 005d15fa  68807da300           push 0xa37d80
// 005d15ff  e8599b2300           call 0x80b15d
// 005d1604  83c404               add esp, 4
// 005d1607  8b0c24               mov ecx, dword ptr [esp]
// 005d160a  b8609ccc00           mov eax, 0xcc9c60
// 005d160f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1616  83c40c               add esp, 0xc
// 005d1619  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
