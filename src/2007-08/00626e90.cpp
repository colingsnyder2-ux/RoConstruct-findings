// roc 2007-08 00626e90  unit: RBX::Jumping  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00626e90
//
// 00626e90  6aff                 push -1
// 00626e92  6818d37500           push 0x75d318
// 00626e97  64a100000000         mov eax, dword ptr fs:[0]
// 00626e9d  50                   push eax
// 00626e9e  64892500000000       mov dword ptr fs:[0], esp
// 00626ea5  83ec08               sub esp, 8
// 00626ea8  56                   push esi
// 00626ea9  8bf1                 mov esi, ecx
// 00626eab  89742408             mov dword ptr [esp + 8], esi
// 00626eaf  c706d44a7c00         mov dword ptr [esi], 0x7c4ad4
// 00626eb5  c74608cc4a7c00       mov dword ptr [esi + 8], 0x7c4acc
// 00626ebc  8b4604               mov eax, dword ptr [esi + 4]
// 00626ebf  85c0                 test eax, eax
// 00626ec1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00626ec9  7405                 je 0x626ed0
// 00626ecb  83c004               add eax, 4
// 00626ece  eb02                 jmp 0x626ed2
// 00626ed0  33c0                 xor eax, eax
// 00626ed2  50                   push eax
// 00626ed3  b9cc598c00           mov ecx, 0x8c59cc
// 00626ed8  e89393f4ff           call 0x570270
// 00626edd  85c0                 test eax, eax
// 00626edf  740f                 je 0x626ef0
// 00626ee1  6a00                 push 0
// 00626ee3  8d4c240b             lea ecx, [esp + 0xb]
// 00626ee7  51                   push ecx
// 00626ee8  8d4810               lea ecx, [eax + 0x10]
// 00626eeb  e8707af8ff           call 0x5ae960
// 00626ef0  8bce                 mov ecx, esi
// 00626ef2  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00626efa  e841b6fdff           call 0x602540
// 00626eff  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00626f03  5e                   pop esi
// 00626f04  64890d00000000       mov dword ptr fs:[0], ecx
// 00626f0b  83c414               add esp, 0x14
// 00626f0e  c3                   ret 
// library rbxgs/humanoid\GettingUp.cpp (function ??1GettingUp@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/GettingUp.cpp
