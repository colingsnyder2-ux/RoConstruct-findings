// roc 2011-06 005d17f0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d17f0
//
// 005d17f0  64a100000000         mov eax, dword ptr fs:[0]
// 005d17f6  6aff                 push -1
// 005d17f8  68ee559e00           push 0x9e55ee
// 005d17fd  50                   push eax
// 005d17fe  b801000000           mov eax, 1
// 005d1803  64892500000000       mov dword ptr fs:[0], esp
// 005d180a  84054ca0cc00         test byte ptr [0xcca04c], al
// 005d1810  7525                 jne 0x5d1837
// 005d1812  09054ca0cc00         or dword ptr [0xcca04c], eax
// 005d1818  b9a89fcc00           mov ecx, 0xcc9fa8
// 005d181d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1825  e856940d00           call 0x6aac80
// 005d182a  68307da300           push 0xa37d30
// 005d182f  e829992300           call 0x80b15d
// 005d1834  83c404               add esp, 4
// 005d1837  8b0c24               mov ecx, dword ptr [esp]
// 005d183a  b8a89fcc00           mov eax, 0xcc9fa8
// 005d183f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1846  83c40c               add esp, 0xc
// 005d1849  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
