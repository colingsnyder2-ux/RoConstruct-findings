// roc 2011-06 005d11d0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d11d0
//
// 005d11d0  64a100000000         mov eax, dword ptr fs:[0]
// 005d11d6  6aff                 push -1
// 005d11d8  682e549e00           push 0x9e542e
// 005d11dd  50                   push eax
// 005d11de  b801000000           mov eax, 1
// 005d11e3  64892500000000       mov dword ptr fs:[0], esp
// 005d11ea  84051c97cc00         test byte ptr [0xcc971c], al
// 005d11f0  7525                 jne 0x5d1217
// 005d11f2  09051c97cc00         or dword ptr [0xcc971c], eax
// 005d11f8  b97896cc00           mov ecx, 0xcc9678
// 005d11fd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1205  e8167a1700           call 0x748c20
// 005d120a  68107ea300           push 0xa37e10
// 005d120f  e8499f2300           call 0x80b15d
// 005d1214  83c404               add esp, 4
// 005d1217  8b0c24               mov ecx, dword ptr [esp]
// 005d121a  b87896cc00           mov eax, 0xcc9678
// 005d121f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1226  83c40c               add esp, 0xc
// 005d1229  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
