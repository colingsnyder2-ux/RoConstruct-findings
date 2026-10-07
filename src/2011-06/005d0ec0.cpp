// roc 2011-06 005d0ec0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0ec0
//
// 005d0ec0  64a100000000         mov eax, dword ptr fs:[0]
// 005d0ec6  6aff                 push -1
// 005d0ec8  684e539e00           push 0x9e534e
// 005d0ecd  50                   push eax
// 005d0ece  b801000000           mov eax, 1
// 005d0ed3  64892500000000       mov dword ptr fs:[0], esp
// 005d0eda  84058492cc00         test byte ptr [0xcc9284], al
// 005d0ee0  7525                 jne 0x5d0f07
// 005d0ee2  09058492cc00         or dword ptr [0xcc9284], eax
// 005d0ee8  b9e091cc00           mov ecx, 0xcc91e0
// 005d0eed  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0ef5  e8c60b0200           call 0x5f1ac0
// 005d0efa  68807ea300           push 0xa37e80
// 005d0eff  e859a22300           call 0x80b15d
// 005d0f04  83c404               add esp, 4
// 005d0f07  8b0c24               mov ecx, dword ptr [esp]
// 005d0f0a  b8e091cc00           mov eax, 0xcc91e0
// 005d0f0f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0f16  83c40c               add esp, 0xc
// 005d0f19  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
