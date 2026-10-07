// roc 2011-06 005d04b0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d04b0
//
// 005d04b0  64a100000000         mov eax, dword ptr fs:[0]
// 005d04b6  6aff                 push -1
// 005d04b8  686e509e00           push 0x9e506e
// 005d04bd  50                   push eax
// 005d04be  b801000000           mov eax, 1
// 005d04c3  64892500000000       mov dword ptr fs:[0], esp
// 005d04ca  84056c83cc00         test byte ptr [0xcc836c], al
// 005d04d0  7525                 jne 0x5d04f7
// 005d04d2  09056c83cc00         or dword ptr [0xcc836c], eax
// 005d04d8  b9c882cc00           mov ecx, 0xcc82c8
// 005d04dd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d04e5  e896891700           call 0x748e80
// 005d04ea  68f07fa300           push 0xa37ff0
// 005d04ef  e869ac2300           call 0x80b15d
// 005d04f4  83c404               add esp, 4
// 005d04f7  8b0c24               mov ecx, dword ptr [esp]
// 005d04fa  b8c882cc00           mov eax, 0xcc82c8
// 005d04ff  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0506  83c40c               add esp, 0xc
// 005d0509  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
