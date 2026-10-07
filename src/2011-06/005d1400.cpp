// roc 2011-06 005d1400  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d1400
//
// 005d1400  64a100000000         mov eax, dword ptr fs:[0]
// 005d1406  6aff                 push -1
// 005d1408  68ce549e00           push 0x9e54ce
// 005d140d  50                   push eax
// 005d140e  b801000000           mov eax, 1
// 005d1413  64892500000000       mov dword ptr fs:[0], esp
// 005d141a  8405649acc00         test byte ptr [0xcc9a64], al
// 005d1420  7525                 jne 0x5d1447
// 005d1422  0905649acc00         or dword ptr [0xcc9a64], eax
// 005d1428  b9c099cc00           mov ecx, 0xcc99c0
// 005d142d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1435  e886e60900           call 0x66fac0
// 005d143a  68c07da300           push 0xa37dc0
// 005d143f  e8199d2300           call 0x80b15d
// 005d1444  83c404               add esp, 4
// 005d1447  8b0c24               mov ecx, dword ptr [esp]
// 005d144a  b8c099cc00           mov eax, 0xcc99c0
// 005d144f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1456  83c40c               add esp, 0xc
// 005d1459  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
