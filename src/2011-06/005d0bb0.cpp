// from server: 100% by auto
// roc 2011-06 005d0bb0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0bb0
//
// 005d0bb0  64a100000000         mov eax, dword ptr fs:[0]
// 005d0bb6  6aff                 push -1
// 005d0bb8  686e529e00           push 0x9e526e
// 005d0bbd  50                   push eax
// 005d0bbe  b801000000           mov eax, 1
// 005d0bc3  64892500000000       mov dword ptr fs:[0], esp
// 005d0bca  8405ec8dcc00         test byte ptr [0xcc8dec], al
// 005d0bd0  7525                 jne 0x5d0bf7
// 005d0bd2  0905ec8dcc00         or dword ptr [0xcc8dec], eax
// 005d0bd8  b9488dcc00           mov ecx, 0xcc8d48
// 005d0bdd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0be5  e8b6a11700           call 0x74ada0
// 005d0bea  68f07ea300           push 0xa37ef0
// 005d0bef  e869a52300           call 0x80b15d
// 005d0bf4  83c404               add esp, 4
// 005d0bf7  8b0c24               mov ecx, dword ptr [esp]
// 005d0bfa  b8488dcc00           mov eax, 0xcc8d48
// 005d0bff  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0c06  83c40c               add esp, 0xc
// 005d0c09  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
