// from server: 100% by auto
// roc 2011-06 005d03d0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d03d0
//
// 005d03d0  64a100000000         mov eax, dword ptr fs:[0]
// 005d03d6  6aff                 push -1
// 005d03d8  682e509e00           push 0x9e502e
// 005d03dd  50                   push eax
// 005d03de  b801000000           mov eax, 1
// 005d03e3  64892500000000       mov dword ptr fs:[0], esp
// 005d03ea  84051c82cc00         test byte ptr [0xcc821c], al
// 005d03f0  7525                 jne 0x5d0417
// 005d03f2  09051c82cc00         or dword ptr [0xcc821c], eax
// 005d03f8  b97881cc00           mov ecx, 0xcc8178
// 005d03fd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0405  e8d6780900           call 0x667ce0
// 005d040a  681080a300           push 0xa38010
// 005d040f  e849ad2300           call 0x80b15d
// 005d0414  83c404               add esp, 4
// 005d0417  8b0c24               mov ecx, dword ptr [esp]
// 005d041a  b87881cc00           mov eax, 0xcc8178
// 005d041f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0426  83c40c               add esp, 0xc
// 005d0429  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
