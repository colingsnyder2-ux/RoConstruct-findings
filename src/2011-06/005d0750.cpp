// from server: 100% by auto
// roc 2011-06 005d0750  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0750
//
// 005d0750  64a100000000         mov eax, dword ptr fs:[0]
// 005d0756  6aff                 push -1
// 005d0758  682e519e00           push 0x9e512e
// 005d075d  50                   push eax
// 005d075e  b801000000           mov eax, 1
// 005d0763  64892500000000       mov dword ptr fs:[0], esp
// 005d076a  84055c87cc00         test byte ptr [0xcc875c], al
// 005d0770  7525                 jne 0x5d0797
// 005d0772  09055c87cc00         or dword ptr [0xcc875c], eax
// 005d0778  b9b886cc00           mov ecx, 0xcc86b8
// 005d077d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0785  e816211600           call 0x7328a0
// 005d078a  68907fa300           push 0xa37f90
// 005d078f  e8c9a92300           call 0x80b15d
// 005d0794  83c404               add esp, 4
// 005d0797  8b0c24               mov ecx, dword ptr [esp]
// 005d079a  b8b886cc00           mov eax, 0xcc86b8
// 005d079f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d07a6  83c40c               add esp, 0xc
// 005d07a9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
