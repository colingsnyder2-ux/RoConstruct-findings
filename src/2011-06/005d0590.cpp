// roc 2011-06 005d0590  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0590
//
// 005d0590  64a100000000         mov eax, dword ptr fs:[0]
// 005d0596  6aff                 push -1
// 005d0598  68ae509e00           push 0x9e50ae
// 005d059d  50                   push eax
// 005d059e  b801000000           mov eax, 1
// 005d05a3  64892500000000       mov dword ptr fs:[0], esp
// 005d05aa  8405bc84cc00         test byte ptr [0xcc84bc], al
// 005d05b0  7525                 jne 0x5d05d7
// 005d05b2  0905bc84cc00         or dword ptr [0xcc84bc], eax
// 005d05b8  b91884cc00           mov ecx, 0xcc8418
// 005d05bd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d05c5  e8a6a50d00           call 0x6aab70
// 005d05ca  68d07fa300           push 0xa37fd0
// 005d05cf  e889ab2300           call 0x80b15d
// 005d05d4  83c404               add esp, 4
// 005d05d7  8b0c24               mov ecx, dword ptr [esp]
// 005d05da  b81884cc00           mov eax, 0xcc8418
// 005d05df  64890d00000000       mov dword ptr fs:[0], ecx
// 005d05e6  83c40c               add esp, 0xc
// 005d05e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
