// from server: 100% by auto
// roc 2011-06 005d0fa0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0fa0
//
// 005d0fa0  64a100000000         mov eax, dword ptr fs:[0]
// 005d0fa6  6aff                 push -1
// 005d0fa8  688e539e00           push 0x9e538e
// 005d0fad  50                   push eax
// 005d0fae  b801000000           mov eax, 1
// 005d0fb3  64892500000000       mov dword ptr fs:[0], esp
// 005d0fba  8405d493cc00         test byte ptr [0xcc93d4], al
// 005d0fc0  7525                 jne 0x5d0fe7
// 005d0fc2  0905d493cc00         or dword ptr [0xcc93d4], eax
// 005d0fc8  b93093cc00           mov ecx, 0xcc9330
// 005d0fcd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0fd5  e8b6781700           call 0x748890
// 005d0fda  68607ea300           push 0xa37e60
// 005d0fdf  e879a12300           call 0x80b15d
// 005d0fe4  83c404               add esp, 4
// 005d0fe7  8b0c24               mov ecx, dword ptr [esp]
// 005d0fea  b83093cc00           mov eax, 0xcc9330
// 005d0fef  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0ff6  83c40c               add esp, 0xc
// 005d0ff9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
