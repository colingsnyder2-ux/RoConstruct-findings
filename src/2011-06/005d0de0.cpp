// from server: 100% by auto
// roc 2011-06 005d0de0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0de0
//
// 005d0de0  64a100000000         mov eax, dword ptr fs:[0]
// 005d0de6  6aff                 push -1
// 005d0de8  680e539e00           push 0x9e530e
// 005d0ded  50                   push eax
// 005d0dee  b801000000           mov eax, 1
// 005d0df3  64892500000000       mov dword ptr fs:[0], esp
// 005d0dfa  84053491cc00         test byte ptr [0xcc9134], al
// 005d0e00  7525                 jne 0x5d0e27
// 005d0e02  09053491cc00         or dword ptr [0xcc9134], eax
// 005d0e08  b99090cc00           mov ecx, 0xcc9090
// 005d0e0d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0e15  e8e6090200           call 0x5f1800
// 005d0e1a  68a07ea300           push 0xa37ea0
// 005d0e1f  e839a32300           call 0x80b15d
// 005d0e24  83c404               add esp, 4
// 005d0e27  8b0c24               mov ecx, dword ptr [esp]
// 005d0e2a  b89090cc00           mov eax, 0xcc9090
// 005d0e2f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0e36  83c40c               add esp, 0xc
// 005d0e39  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
