// from server: 100% by auto
// roc 2011-06 005e38b0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e38b0
//
// 005e38b0  64a100000000         mov eax, dword ptr fs:[0]
// 005e38b6  6aff                 push -1
// 005e38b8  687e5e9e00           push 0x9e5e7e
// 005e38bd  50                   push eax
// 005e38be  b801000000           mov eax, 1
// 005e38c3  64892500000000       mov dword ptr fs:[0], esp
// 005e38ca  8405a4aacc00         test byte ptr [0xccaaa4], al
// 005e38d0  7524                 jne 0x5e38f6
// 005e38d2  0905a4aacc00         or dword ptr [0xccaaa4], eax
// 005e38d8  33c0                 xor eax, eax
// 005e38da  686093a300           push 0xa39360
// 005e38df  a398aacc00           mov dword ptr [0xccaa98], eax
// 005e38e4  a39caacc00           mov dword ptr [0xccaa9c], eax
// 005e38e9  a3a0aacc00           mov dword ptr [0xccaaa0], eax
// 005e38ee  e86a782200           call 0x80b15d
// 005e38f3  83c404               add esp, 4
// 005e38f6  8b0c24               mov ecx, dword ptr [esp]
// 005e38f9  b894aacc00           mov eax, 0xccaa94
// 005e38fe  64890d00000000       mov dword ptr fs:[0], ecx
// 005e3905  83c40c               add esp, 0xc
// 005e3908  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
