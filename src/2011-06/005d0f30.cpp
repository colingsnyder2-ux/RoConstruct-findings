// from server: 100% by auto
// roc 2011-06 005d0f30  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0f30
//
// 005d0f30  64a100000000         mov eax, dword ptr fs:[0]
// 005d0f36  6aff                 push -1
// 005d0f38  686e539e00           push 0x9e536e
// 005d0f3d  50                   push eax
// 005d0f3e  b801000000           mov eax, 1
// 005d0f43  64892500000000       mov dword ptr fs:[0], esp
// 005d0f4a  84052c93cc00         test byte ptr [0xcc932c], al
// 005d0f50  7525                 jne 0x5d0f77
// 005d0f52  09052c93cc00         or dword ptr [0xcc932c], eax
// 005d0f58  b98892cc00           mov ecx, 0xcc9288
// 005d0f5d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0f65  e8660c0200           call 0x5f1bd0
// 005d0f6a  68707ea300           push 0xa37e70
// 005d0f6f  e8e9a12300           call 0x80b15d
// 005d0f74  83c404               add esp, 4
// 005d0f77  8b0c24               mov ecx, dword ptr [esp]
// 005d0f7a  b88892cc00           mov eax, 0xcc9288
// 005d0f7f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0f86  83c40c               add esp, 0xc
// 005d0f89  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
