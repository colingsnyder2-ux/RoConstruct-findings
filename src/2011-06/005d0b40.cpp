// from server: 100% by auto
// roc 2011-06 005d0b40  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0b40
//
// 005d0b40  64a100000000         mov eax, dword ptr fs:[0]
// 005d0b46  6aff                 push -1
// 005d0b48  684e529e00           push 0x9e524e
// 005d0b4d  50                   push eax
// 005d0b4e  b801000000           mov eax, 1
// 005d0b53  64892500000000       mov dword ptr fs:[0], esp
// 005d0b5a  8405448dcc00         test byte ptr [0xcc8d44], al
// 005d0b60  7525                 jne 0x5d0b87
// 005d0b62  0905448dcc00         or dword ptr [0xcc8d44], eax
// 005d0b68  b9a08ccc00           mov ecx, 0xcc8ca0
// 005d0b6d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0b75  e8d6a01700           call 0x74ac50
// 005d0b7a  68007fa300           push 0xa37f00
// 005d0b7f  e8d9a52300           call 0x80b15d
// 005d0b84  83c404               add esp, 4
// 005d0b87  8b0c24               mov ecx, dword ptr [esp]
// 005d0b8a  b8a08ccc00           mov eax, 0xcc8ca0
// 005d0b8f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0b96  83c40c               add esp, 0xc
// 005d0b99  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
