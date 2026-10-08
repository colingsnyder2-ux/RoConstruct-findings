// roc 2009-12 0040a350  unit: RBX::Reflection::ClassDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040a350
//
// 0040a350  64a100000000         mov eax, dword ptr fs:[0]
// 0040a356  6aff                 push -1
// 0040a358  685e3e9400           push 0x943e5e
// 0040a35d  50                   push eax
// 0040a35e  b801000000           mov eax, 1
// 0040a363  64892500000000       mov dword ptr fs:[0], esp
// 0040a36a  84052097b700         test byte ptr [0xb79720], al
// 0040a370  7525                 jne 0x40a397
// 0040a372  09052097b700         or dword ptr [0xb79720], eax
// 0040a378  b92896b700           mov ecx, 0xb79628
// 0040a37d  c744240800000000     mov dword ptr [esp + 8], 0
// 0040a385  e8a69b2500           call 0x663f30
// 0040a38a  68a0d89700           push 0x97d8a0
// 0040a38f  e895a53e00           call 0x7f4929
// 0040a394  83c404               add esp, 4
// 0040a397  8b0c24               mov ecx, dword ptr [esp]
// 0040a39a  b82896b700           mov eax, 0xb79628
// 0040a39f  64890d00000000       mov dword ptr fs:[0], ecx
// 0040a3a6  83c40c               add esp, 0xc
// 0040a3a9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
