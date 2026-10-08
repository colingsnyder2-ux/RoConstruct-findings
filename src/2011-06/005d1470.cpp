// from server: 100% by auto
// roc 2011-06 005d1470  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d1470
//
// 005d1470  64a100000000         mov eax, dword ptr fs:[0]
// 005d1476  6aff                 push -1
// 005d1478  68ee549e00           push 0x9e54ee
// 005d147d  50                   push eax
// 005d147e  b801000000           mov eax, 1
// 005d1483  64892500000000       mov dword ptr fs:[0], esp
// 005d148a  84050c9bcc00         test byte ptr [0xcc9b0c], al
// 005d1490  7525                 jne 0x5d14b7
// 005d1492  09050c9bcc00         or dword ptr [0xcc9b0c], eax
// 005d1498  b9689acc00           mov ecx, 0xcc9a68
// 005d149d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d14a5  e8268f1600           call 0x73a3d0
// 005d14aa  68b07da300           push 0xa37db0
// 005d14af  e8a99c2300           call 0x80b15d
// 005d14b4  83c404               add esp, 4
// 005d14b7  8b0c24               mov ecx, dword ptr [esp]
// 005d14ba  b8689acc00           mov eax, 0xcc9a68
// 005d14bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005d14c6  83c40c               add esp, 0xc
// 005d14c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
