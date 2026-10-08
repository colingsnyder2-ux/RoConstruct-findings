// from server: 100% by auto
// roc 2011-06 005d0c90  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0c90
//
// 005d0c90  64a100000000         mov eax, dword ptr fs:[0]
// 005d0c96  6aff                 push -1
// 005d0c98  68ae529e00           push 0x9e52ae
// 005d0c9d  50                   push eax
// 005d0c9e  b801000000           mov eax, 1
// 005d0ca3  64892500000000       mov dword ptr fs:[0], esp
// 005d0caa  84053c8fcc00         test byte ptr [0xcc8f3c], al
// 005d0cb0  7525                 jne 0x5d0cd7
// 005d0cb2  09053c8fcc00         or dword ptr [0xcc8f3c], eax
// 005d0cb8  b9988ecc00           mov ecx, 0xcc8e98
// 005d0cbd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0cc5  e896d7feff           call 0x5be460
// 005d0cca  68d07ea300           push 0xa37ed0
// 005d0ccf  e889a42300           call 0x80b15d
// 005d0cd4  83c404               add esp, 4
// 005d0cd7  8b0c24               mov ecx, dword ptr [esp]
// 005d0cda  b8988ecc00           mov eax, 0xcc8e98
// 005d0cdf  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0ce6  83c40c               add esp, 0xc
// 005d0ce9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
