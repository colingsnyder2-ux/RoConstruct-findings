// from server: 100% by auto
// roc 2011-06 005d1780  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d1780
//
// 005d1780  64a100000000         mov eax, dword ptr fs:[0]
// 005d1786  6aff                 push -1
// 005d1788  68ce559e00           push 0x9e55ce
// 005d178d  50                   push eax
// 005d178e  b801000000           mov eax, 1
// 005d1793  64892500000000       mov dword ptr fs:[0], esp
// 005d179a  8405a49fcc00         test byte ptr [0xcc9fa4], al
// 005d17a0  7525                 jne 0x5d17c7
// 005d17a2  0905a49fcc00         or dword ptr [0xcc9fa4], eax
// 005d17a8  b9009fcc00           mov ecx, 0xcc9f00
// 005d17ad  c744240800000000     mov dword ptr [esp + 8], 0
// 005d17b5  e806631400           call 0x717ac0
// 005d17ba  68407da300           push 0xa37d40
// 005d17bf  e899992300           call 0x80b15d
// 005d17c4  83c404               add esp, 4
// 005d17c7  8b0c24               mov ecx, dword ptr [esp]
// 005d17ca  b8009fcc00           mov eax, 0xcc9f00
// 005d17cf  64890d00000000       mov dword ptr fs:[0], ecx
// 005d17d6  83c40c               add esp, 0xc
// 005d17d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
