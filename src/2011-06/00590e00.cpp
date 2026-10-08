// from server: 100% by auto
// roc 2011-06 00590e00  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00590e00
//
// 00590e00  64a100000000         mov eax, dword ptr fs:[0]
// 00590e06  6aff                 push -1
// 00590e08  68ce059e00           push 0x9e05ce
// 00590e0d  50                   push eax
// 00590e0e  b801000000           mov eax, 1
// 00590e13  64892500000000       mov dword ptr fs:[0], esp
// 00590e1a  840544b0cb00         test byte ptr [0xcbb044], al
// 00590e20  7525                 jne 0x590e47
// 00590e22  090544b0cb00         or dword ptr [0xcbb044], eax
// 00590e28  b9a0afcb00           mov ecx, 0xcbafa0
// 00590e2d  c744240800000000     mov dword ptr [esp + 8], 0
// 00590e35  e856f4ffff           call 0x590290
// 00590e3a  68904ca300           push 0xa34c90
// 00590e3f  e819a32700           call 0x80b15d
// 00590e44  83c404               add esp, 4
// 00590e47  8b0c24               mov ecx, dword ptr [esp]
// 00590e4a  b8a0afcb00           mov eax, 0xcbafa0
// 00590e4f  64890d00000000       mov dword ptr fs:[0], ecx
// 00590e56  83c40c               add esp, 0xc
// 00590e59  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
