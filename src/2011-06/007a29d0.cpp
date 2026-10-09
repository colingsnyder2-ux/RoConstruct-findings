// roc 2011-06 007a29d0  unit: RBX::Body  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a29d0
//
// 007a29d0  6860297a00           push 0x7a2960
// 007a29d5  68b857cd00           push 0xcd57b8
// 007a29da  e831ecc5ff           call 0x401610
// 007a29df  a14057cd00           mov eax, dword ptr [0xcd5740]
// 007a29e4  83c408               add esp, 8
// 007a29e7  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
