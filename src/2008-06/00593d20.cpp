// roc 2008-06 00593d20  unit: RBX::Lua::FunctionRef  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00593d20
//
// 00593d20  64a100000000         mov eax, dword ptr fs:[0]
// 00593d26  6aff                 push -1
// 00593d28  68ee1e7d00           push 0x7d1eee
// 00593d2d  50                   push eax
// 00593d2e  b801000000           mov eax, 1
// 00593d33  64892500000000       mov dword ptr fs:[0], esp
// 00593d3a  8405645c9700         test byte ptr [0x975c64], al
// 00593d40  752f                 jne 0x593d71
// 00593d42  0905645c9700         or dword ptr [0x975c64], eax
// 00593d48  68d0c29200           push 0x92c2d0
// 00593d4d  6868228300           push 0x832268
// 00593d52  b9545c9700           mov ecx, 0x975c54
// 00593d57  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593d5f  e82c80fdff           call 0x56bd90
// 00593d64  6870da7f00           push 0x7fda70
// 00593d69  e841da1000           call 0x6a17af
// 00593d6e  83c404               add esp, 4
// 00593d71  8b0c24               mov ecx, dword ptr [esp]
// 00593d74  b8545c9700           mov eax, 0x975c54
// 00593d79  64890d00000000       mov dword ptr fs:[0], ecx
// 00593d80  83c40c               add esp, 0xc
// 00593d83  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ??$singleton@VFunctionRef@Lua@RBX@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
