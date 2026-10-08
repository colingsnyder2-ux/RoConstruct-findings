// from server: 100% by auto
// roc 2010-06 0044ab90  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044ab90
//
// 0044ab90  64a100000000         mov eax, dword ptr fs:[0]
// 0044ab96  6aff                 push -1
// 0044ab98  687e169800           push 0x98167e
// 0044ab9d  50                   push eax
// 0044ab9e  b801000000           mov eax, 1
// 0044aba3  64892500000000       mov dword ptr fs:[0], esp
// 0044abaa  8405fc10c000         test byte ptr [0xc010fc], al
// 0044abb0  7525                 jne 0x44abd7
// 0044abb2  0905fc10c000         or dword ptr [0xc010fc], eax
// 0044abb8  b91010c000           mov ecx, 0xc01010
// 0044abbd  c744240800000000     mov dword ptr [esp + 8], 0
// 0044abc5  e806f4ffff           call 0x449fd0
// 0044abca  68f0b79d00           push 0x9db7f0
// 0044abcf  e88fde3500           call 0x7a8a63
// 0044abd4  83c404               add esp, 4
// 0044abd7  8b0c24               mov ecx, dword ptr [esp]
// 0044abda  b81010c000           mov eax, 0xc01010
// 0044abdf  64890d00000000       mov dword ptr fs:[0], ecx
// 0044abe6  83c40c               add esp, 0xc
// 0044abe9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
