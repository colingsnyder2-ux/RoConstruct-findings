// roc 2011-06 00590d90  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00590d90
//
// 00590d90  64a100000000         mov eax, dword ptr fs:[0]
// 00590d96  6aff                 push -1
// 00590d98  68ae059e00           push 0x9e05ae
// 00590d9d  50                   push eax
// 00590d9e  b801000000           mov eax, 1
// 00590da3  64892500000000       mov dword ptr fs:[0], esp
// 00590daa  84059cafcb00         test byte ptr [0xcbaf9c], al
// 00590db0  7525                 jne 0x590dd7
// 00590db2  09059cafcb00         or dword ptr [0xcbaf9c], eax
// 00590db8  b9f8aecb00           mov ecx, 0xcbaef8
// 00590dbd  c744240800000000     mov dword ptr [esp + 8], 0
// 00590dc5  e8a6f3ffff           call 0x590170
// 00590dca  68a04ca300           push 0xa34ca0
// 00590dcf  e889a32700           call 0x80b15d
// 00590dd4  83c404               add esp, 4
// 00590dd7  8b0c24               mov ecx, dword ptr [esp]
// 00590dda  b8f8aecb00           mov eax, 0xcbaef8
// 00590ddf  64890d00000000       mov dword ptr fs:[0], ecx
// 00590de6  83c40c               add esp, 0xc
// 00590de9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
