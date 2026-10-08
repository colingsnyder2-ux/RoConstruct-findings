// roc 2007-08 00602d50  unit: RBX::FallingDown  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00602d50
//
// 00602d50  6aff                 push -1
// 00602d52  6898d27500           push 0x75d298
// 00602d57  64a100000000         mov eax, dword ptr fs:[0]
// 00602d5d  50                   push eax
// 00602d5e  64892500000000       mov dword ptr fs:[0], esp
// 00602d65  83ec08               sub esp, 8
// 00602d68  56                   push esi
// 00602d69  8bf1                 mov esi, ecx
// 00602d6b  89742408             mov dword ptr [esp + 8], esi
// 00602d6f  c706bc2b7c00         mov dword ptr [esi], 0x7c2bbc
// 00602d75  8b4604               mov eax, dword ptr [esi + 4]
// 00602d78  85c0                 test eax, eax
// 00602d7a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00602d82  7405                 je 0x602d89
// 00602d84  83c004               add eax, 4
// 00602d87  eb02                 jmp 0x602d8b
// 00602d89  33c0                 xor eax, eax
// 00602d8b  50                   push eax
// 00602d8c  b980578c00           mov ecx, 0x8c5780
// 00602d91  e8dad4f6ff           call 0x570270
// 00602d96  85c0                 test eax, eax
// 00602d98  740f                 je 0x602da9
// 00602d9a  6a00                 push 0
// 00602d9c  8d4c240b             lea ecx, [esp + 0xb]
// 00602da0  51                   push ecx
// 00602da1  8d4810               lea ecx, [eax + 0x10]
// 00602da4  e8b7bbfaff           call 0x5ae960
// 00602da9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00602dad  c706542b7c00         mov dword ptr [esi], 0x7c2b54
// 00602db3  5e                   pop esi
// 00602db4  64890d00000000       mov dword ptr fs:[0], ecx
// 00602dbb  83c414               add esp, 0x14
// 00602dbe  c3                   ret 
// library rbxgs/humanoid\FallingDown.cpp (function ??1FallingDown@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
