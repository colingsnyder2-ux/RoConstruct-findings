// roc 2008-06 0056fe30  unit: RBX::W4NormalId::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056fe30
//
// 0056fe30  64a100000000         mov eax, dword ptr fs:[0]
// 0056fe36  6aff                 push -1
// 0056fe38  68aeff7c00           push 0x7cffae
// 0056fe3d  50                   push eax
// 0056fe3e  b801000000           mov eax, 1
// 0056fe43  64892500000000       mov dword ptr fs:[0], esp
// 0056fe4a  8405944c9700         test byte ptr [0x974c94], al
// 0056fe50  7525                 jne 0x56fe77
// 0056fe52  0905944c9700         or dword ptr [0x974c94], eax
// 0056fe58  b9884c9700           mov ecx, 0x974c88
// 0056fe5d  c744240800000000     mov dword ptr [esp + 8], 0
// 0056fe65  e80632ffff           call 0x563070
// 0056fe6a  6800d37f00           push 0x7fd300
// 0056fe6f  e83b191300           call 0x6a17af
// 0056fe74  83c404               add esp, 4
// 0056fe77  8b0c24               mov ecx, dword ptr [esp]
// 0056fe7a  b8884c9700           mov eax, 0x974c88
// 0056fe7f  64890d00000000       mov dword ptr fs:[0], ecx
// 0056fe86  83c40c               add esp, 0xc
// 0056fe89  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
