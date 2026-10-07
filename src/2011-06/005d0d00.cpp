// roc 2011-06 005d0d00  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0d00
//
// 005d0d00  64a100000000         mov eax, dword ptr fs:[0]
// 005d0d06  6aff                 push -1
// 005d0d08  68ce529e00           push 0x9e52ce
// 005d0d0d  50                   push eax
// 005d0d0e  b801000000           mov eax, 1
// 005d0d13  64892500000000       mov dword ptr fs:[0], esp
// 005d0d1a  8405e48fcc00         test byte ptr [0xcc8fe4], al
// 005d0d20  7525                 jne 0x5d0d47
// 005d0d22  0905e48fcc00         or dword ptr [0xcc8fe4], eax
// 005d0d28  b9408fcc00           mov ecx, 0xcc8f40
// 005d0d2d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0d35  e8e6170800           call 0x652520
// 005d0d3a  68c07ea300           push 0xa37ec0
// 005d0d3f  e819a42300           call 0x80b15d
// 005d0d44  83c404               add esp, 4
// 005d0d47  8b0c24               mov ecx, dword ptr [esp]
// 005d0d4a  b8408fcc00           mov eax, 0xcc8f40
// 005d0d4f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0d56  83c40c               add esp, 0xc
// 005d0d59  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
