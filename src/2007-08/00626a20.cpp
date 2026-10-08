// roc 2007-08 00626a20  unit: RBX::Seated  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00626a20
//
// 00626a20  6aff                 push -1
// 00626a22  6898d27500           push 0x75d298
// 00626a27  64a100000000         mov eax, dword ptr fs:[0]
// 00626a2d  50                   push eax
// 00626a2e  64892500000000       mov dword ptr fs:[0], esp
// 00626a35  51                   push ecx
// 00626a36  8b442414             mov eax, dword ptr [esp + 0x14]
// 00626a3a  56                   push esi
// 00626a3b  8bf1                 mov esi, ecx
// 00626a3d  89742404             mov dword ptr [esp + 4], esi
// 00626a41  894604               mov dword ptr [esi + 4], eax
// 00626a44  85c0                 test eax, eax
// 00626a46  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00626a4e  c706944a7c00         mov dword ptr [esi], 0x7c4a94
// 00626a54  7405                 je 0x626a5b
// 00626a56  83c004               add eax, 4
// 00626a59  eb02                 jmp 0x626a5d
// 00626a5b  33c0                 xor eax, eax
// 00626a5d  50                   push eax
// 00626a5e  b964598c00           mov ecx, 0x8c5964
// 00626a63  e80898f4ff           call 0x570270
// 00626a68  85c0                 test eax, eax
// 00626a6a  740f                 je 0x626a7b
// 00626a6c  6a01                 push 1
// 00626a6e  8d4c241c             lea ecx, [esp + 0x1c]
// 00626a72  51                   push ecx
// 00626a73  8d4810               lea ecx, [eax + 0x10]
// 00626a76  e8e57ef8ff           call 0x5ae960
// 00626a7b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00626a7f  8bc6                 mov eax, esi
// 00626a81  5e                   pop esi
// 00626a82  64890d00000000       mov dword ptr fs:[0], ecx
// 00626a89  83c410               add esp, 0x10
// 00626a8c  c20400               ret 4
// library rbxgs/humanoid\Seated.cpp (function ??0Seated@RBX@@QAE@PAVHumanoid@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Seated.cpp
