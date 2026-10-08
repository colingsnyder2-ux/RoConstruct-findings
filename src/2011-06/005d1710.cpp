// from server: 100% by auto
// roc 2011-06 005d1710  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d1710
//
// 005d1710  64a100000000         mov eax, dword ptr fs:[0]
// 005d1716  6aff                 push -1
// 005d1718  68ae559e00           push 0x9e55ae
// 005d171d  50                   push eax
// 005d171e  b801000000           mov eax, 1
// 005d1723  64892500000000       mov dword ptr fs:[0], esp
// 005d172a  8405fc9ecc00         test byte ptr [0xcc9efc], al
// 005d1730  7525                 jne 0x5d1757
// 005d1732  0905fc9ecc00         or dword ptr [0xcc9efc], eax
// 005d1738  b9589ecc00           mov ecx, 0xcc9e58
// 005d173d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1745  e886960700           call 0x64add0
// 005d174a  68507da300           push 0xa37d50
// 005d174f  e8099a2300           call 0x80b15d
// 005d1754  83c404               add esp, 4
// 005d1757  8b0c24               mov ecx, dword ptr [esp]
// 005d175a  b8589ecc00           mov eax, 0xcc9e58
// 005d175f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1766  83c40c               add esp, 0xc
// 005d1769  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
