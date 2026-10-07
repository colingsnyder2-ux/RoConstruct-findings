// roc 2011-06 005d0e50  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0e50
//
// 005d0e50  64a100000000         mov eax, dword ptr fs:[0]
// 005d0e56  6aff                 push -1
// 005d0e58  682e539e00           push 0x9e532e
// 005d0e5d  50                   push eax
// 005d0e5e  b801000000           mov eax, 1
// 005d0e63  64892500000000       mov dword ptr fs:[0], esp
// 005d0e6a  8405dc91cc00         test byte ptr [0xcc91dc], al
// 005d0e70  7525                 jne 0x5d0e97
// 005d0e72  0905dc91cc00         or dword ptr [0xcc91dc], eax
// 005d0e78  b93891cc00           mov ecx, 0xcc9138
// 005d0e7d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0e85  e8860a0200           call 0x5f1910
// 005d0e8a  68907ea300           push 0xa37e90
// 005d0e8f  e8c9a22300           call 0x80b15d
// 005d0e94  83c404               add esp, 4
// 005d0e97  8b0c24               mov ecx, dword ptr [esp]
// 005d0e9a  b83891cc00           mov eax, 0xcc9138
// 005d0e9f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0ea6  83c40c               add esp, 0xc
// 005d0ea9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
