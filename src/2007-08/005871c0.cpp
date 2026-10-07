// roc 2007-08 005871c0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005871c0
//
// 005871c0  64a100000000         mov eax, dword ptr fs:[0]
// 005871c6  6aff                 push -1
// 005871c8  683e5f7500           push 0x755f3e
// 005871cd  50                   push eax
// 005871ce  b801000000           mov eax, 1
// 005871d3  64892500000000       mov dword ptr fs:[0], esp
// 005871da  840538338c00         test byte ptr [0x8c3338], al
// 005871e0  7524                 jne 0x587206
// 005871e2  090538338c00         or dword ptr [0x8c3338], eax
// 005871e8  33c0                 xor eax, eax
// 005871ea  6890a67700           push 0x77a690
// 005871ef  a32c338c00           mov dword ptr [0x8c332c], eax
// 005871f4  a330338c00           mov dword ptr [0x8c3330], eax
// 005871f9  a334338c00           mov dword ptr [0x8c3334], eax
// 005871fe  e8209b0a00           call 0x630d23
// 00587203  83c404               add esp, 4
// 00587206  8b0c24               mov ecx, dword ptr [esp]
// 00587209  b828338c00           mov eax, 0x8c3328
// 0058720e  64890d00000000       mov dword ptr fs:[0], ecx
// 00587215  83c40c               add esp, 0xc
// 00587218  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
