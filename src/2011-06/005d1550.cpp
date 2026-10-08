// from server: 100% by auto
// roc 2011-06 005d1550  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d1550
//
// 005d1550  64a100000000         mov eax, dword ptr fs:[0]
// 005d1556  6aff                 push -1
// 005d1558  682e559e00           push 0x9e552e
// 005d155d  50                   push eax
// 005d155e  b801000000           mov eax, 1
// 005d1563  64892500000000       mov dword ptr fs:[0], esp
// 005d156a  84055c9ccc00         test byte ptr [0xcc9c5c], al
// 005d1570  7525                 jne 0x5d1597
// 005d1572  09055c9ccc00         or dword ptr [0xcc9c5c], eax
// 005d1578  b9b89bcc00           mov ecx, 0xcc9bb8
// 005d157d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1585  e8066c1000           call 0x6d8190
// 005d158a  68907da300           push 0xa37d90
// 005d158f  e8c99b2300           call 0x80b15d
// 005d1594  83c404               add esp, 4
// 005d1597  8b0c24               mov ecx, dword ptr [esp]
// 005d159a  b8b89bcc00           mov eax, 0xcc9bb8
// 005d159f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d15a6  83c40c               add esp, 0xc
// 005d15a9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
