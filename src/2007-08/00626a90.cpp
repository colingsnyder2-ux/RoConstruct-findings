// roc 2007-08 00626a90  unit: RBX::Seated  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00626a90
//
// 00626a90  6aff                 push -1
// 00626a92  6898d27500           push 0x75d298
// 00626a97  64a100000000         mov eax, dword ptr fs:[0]
// 00626a9d  50                   push eax
// 00626a9e  64892500000000       mov dword ptr fs:[0], esp
// 00626aa5  83ec08               sub esp, 8
// 00626aa8  56                   push esi
// 00626aa9  8bf1                 mov esi, ecx
// 00626aab  89742408             mov dword ptr [esp + 8], esi
// 00626aaf  c706944a7c00         mov dword ptr [esi], 0x7c4a94
// 00626ab5  8b4604               mov eax, dword ptr [esi + 4]
// 00626ab8  85c0                 test eax, eax
// 00626aba  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00626ac2  7405                 je 0x626ac9
// 00626ac4  83c004               add eax, 4
// 00626ac7  eb02                 jmp 0x626acb
// 00626ac9  33c0                 xor eax, eax
// 00626acb  50                   push eax
// 00626acc  b964598c00           mov ecx, 0x8c5964
// 00626ad1  e89a97f4ff           call 0x570270
// 00626ad6  85c0                 test eax, eax
// 00626ad8  740f                 je 0x626ae9
// 00626ada  6a00                 push 0
// 00626adc  8d4c240b             lea ecx, [esp + 0xb]
// 00626ae0  51                   push ecx
// 00626ae1  8d4810               lea ecx, [eax + 0x10]
// 00626ae4  e8777ef8ff           call 0x5ae960
// 00626ae9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00626aed  c706542b7c00         mov dword ptr [esi], 0x7c2b54
// 00626af3  5e                   pop esi
// 00626af4  64890d00000000       mov dword ptr fs:[0], ecx
// 00626afb  83c414               add esp, 0x14
// 00626afe  c3                   ret 
// library rbxgs/humanoid\FallingDown.cpp (function ??1FallingDown@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
