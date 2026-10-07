// roc 2007-08 00543c20  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543c20
//
// 00543c20  64a100000000         mov eax, dword ptr fs:[0]
// 00543c26  6aff                 push -1
// 00543c28  68ee177500           push 0x7517ee
// 00543c2d  50                   push eax
// 00543c2e  b801000000           mov eax, 1
// 00543c33  64892500000000       mov dword ptr fs:[0], esp
// 00543c3a  8405781a8c00         test byte ptr [0x8c1a78], al
// 00543c40  7525                 jne 0x543c67
// 00543c42  0905781a8c00         or dword ptr [0x8c1a78], eax
// 00543c48  b9e0198c00           mov ecx, 0x8c19e0
// 00543c4d  c744240800000000     mov dword ptr [esp + 8], 0
// 00543c55  e8f6fdffff           call 0x543a50
// 00543c5a  68f0997700           push 0x7799f0
// 00543c5f  e8bfd00e00           call 0x630d23
// 00543c64  83c404               add esp, 4
// 00543c67  8b0c24               mov ecx, dword ptr [esp]
// 00543c6a  b8e0198c00           mov eax, 0x8c19e0
// 00543c6f  64890d00000000       mov dword ptr fs:[0], ecx
// 00543c76  83c40c               add esp, 0xc
// 00543c79  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
