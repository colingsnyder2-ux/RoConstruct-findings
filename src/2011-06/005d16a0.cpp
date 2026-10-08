// from server: 100% by auto
// roc 2011-06 005d16a0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d16a0
//
// 005d16a0  64a100000000         mov eax, dword ptr fs:[0]
// 005d16a6  6aff                 push -1
// 005d16a8  688e559e00           push 0x9e558e
// 005d16ad  50                   push eax
// 005d16ae  b801000000           mov eax, 1
// 005d16b3  64892500000000       mov dword ptr fs:[0], esp
// 005d16ba  8405549ecc00         test byte ptr [0xcc9e54], al
// 005d16c0  7525                 jne 0x5d16e7
// 005d16c2  0905549ecc00         or dword ptr [0xcc9e54], eax
// 005d16c8  b9b09dcc00           mov ecx, 0xcc9db0
// 005d16cd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d16d5  e896860700           call 0x649d70
// 005d16da  68607da300           push 0xa37d60
// 005d16df  e8799a2300           call 0x80b15d
// 005d16e4  83c404               add esp, 4
// 005d16e7  8b0c24               mov ecx, dword ptr [esp]
// 005d16ea  b8b09dcc00           mov eax, 0xcc9db0
// 005d16ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005d16f6  83c40c               add esp, 0xc
// 005d16f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
