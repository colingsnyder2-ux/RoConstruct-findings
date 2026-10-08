// roc 2007-08 005a4f40  unit: RBX::P8Humanoid::?$GetSetImpl  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4f40
//
// 005a4f40  6aff                 push -1
// 005a4f42  6813817500           push 0x758113
// 005a4f47  64a100000000         mov eax, dword ptr fs:[0]
// 005a4f4d  50                   push eax
// 005a4f4e  64892500000000       mov dword ptr fs:[0], esp
// 005a4f55  51                   push ecx
// 005a4f56  56                   push esi
// 005a4f57  57                   push edi
// 005a4f58  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005a4f5c  8b07                 mov eax, dword ptr [edi]
// 005a4f5e  6a00                 push 0
// 005a4f60  68284a8800           push 0x884a28
// 005a4f65  684c1f8800           push 0x881f4c
// 005a4f6a  8bf1                 mov esi, ecx
// 005a4f6c  6a00                 push 0
// 005a4f6e  50                   push eax
// 005a4f6f  8974241c             mov dword ptr [esp + 0x1c], esi
// 005a4f73  e8bebd0800           call 0x630d36
// 005a4f78  8906                 mov dword ptr [esi], eax
// 005a4f7a  8b4704               mov eax, dword ptr [edi + 4]
// 005a4f7d  83c414               add esp, 0x14
// 005a4f80  85c0                 test eax, eax
// 005a4f82  8d4e04               lea ecx, [esi + 4]
// 005a4f85  8901                 mov dword ptr [ecx], eax
// 005a4f87  740c                 je 0x5a4f95
// 005a4f89  83c004               add eax, 4
// 005a4f8c  ba01000000           mov edx, 1
// 005a4f91  f00fc110             lock xadd dword ptr [eax], edx
// 005a4f95  833e00               cmp dword ptr [esi], 0
// 005a4f98  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a4fa0  7517                 jne 0x5a4fb9
// 005a4fa2  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005a4faa  8d44241c             lea eax, [esp + 0x1c]
// 005a4fae  50                   push eax
// 005a4faf  c644241801           mov byte ptr [esp + 0x18], 1
// 005a4fb4  e8a7dae5ff           call 0x402a60
// 005a4fb9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a4fbd  5f                   pop edi
// 005a4fbe  8bc6                 mov eax, esi
// 005a4fc0  5e                   pop esi
// 005a4fc1  64890d00000000       mov dword ptr fs:[0], ecx
// 005a4fc8  83c410               add esp, 0x10
// 005a4fcb  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VInstance@RBX@@@?$shared_ptr@VPartInstance@RBX@@@boost@@QAE@ABV?$shared_ptr@VInstance@RBX@@@1@Udynamic_cast_tag@detail@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
