// roc 2009-12 00449290  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00449290
//
// 00449290  64a100000000         mov eax, dword ptr fs:[0]
// 00449296  6aff                 push -1
// 00449298  686eab9200           push 0x92ab6e
// 0044929d  50                   push eax
// 0044929e  b801000000           mov eax, 1
// 004492a3  64892500000000       mov dword ptr fs:[0], esp
// 004492aa  84057ca7b700         test byte ptr [0xb7a77c], al
// 004492b0  7525                 jne 0x4492d7
// 004492b2  09057ca7b700         or dword ptr [0xb7a77c], eax
// 004492b8  b990a6b700           mov ecx, 0xb7a690
// 004492bd  c744240800000000     mov dword ptr [esp + 8], 0
// 004492c5  e8a6efffff           call 0x448270
// 004492ca  6810e69700           push 0x97e610
// 004492cf  e855b63a00           call 0x7f4929
// 004492d4  83c404               add esp, 4
// 004492d7  8b0c24               mov ecx, dword ptr [esp]
// 004492da  b890a6b700           mov eax, 0xb7a690
// 004492df  64890d00000000       mov dword ptr fs:[0], ecx
// 004492e6  83c40c               add esp, 0xc
// 004492e9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
