// roc 2007-03 004c4de0  unit: seg_004c0000  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4de0
//
// 004c4de0  6aff                 push -1
// 004c4de2  6873b17500           push 0x75b173
// 004c4de7  64a100000000         mov eax, dword ptr fs:[0]
// 004c4ded  50                   push eax
// 004c4dee  64892500000000       mov dword ptr fs:[0], esp
// 004c4df5  51                   push ecx
// 004c4df6  56                   push esi
// 004c4df7  57                   push edi
// 004c4df8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004c4dfc  8b07                 mov eax, dword ptr [edi]
// 004c4dfe  6a00                 push 0
// 004c4e00  68e03b8800           push 0x883be0
// 004c4e05  6864108800           push 0x881064
// 004c4e0a  8bf1                 mov esi, ecx
// 004c4e0c  6a00                 push 0
// 004c4e0e  50                   push eax
// 004c4e0f  8974241c             mov dword ptr [esp + 0x1c], esi
// 004c4e13  e8aea31500           call 0x61f1c6
// 004c4e18  8906                 mov dword ptr [esi], eax
// 004c4e1a  8b4704               mov eax, dword ptr [edi + 4]
// 004c4e1d  83c414               add esp, 0x14
// 004c4e20  85c0                 test eax, eax
// 004c4e22  8d4e04               lea ecx, [esi + 4]
// 004c4e25  8901                 mov dword ptr [ecx], eax
// 004c4e27  740c                 je 0x4c4e35
// 004c4e29  83c004               add eax, 4
// 004c4e2c  ba01000000           mov edx, 1
// 004c4e31  f00fc110             lock xadd dword ptr [eax], edx
// 004c4e35  833e00               cmp dword ptr [esi], 0
// 004c4e38  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004c4e40  7517                 jne 0x4c4e59
// 004c4e42  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004c4e4a  8d44241c             lea eax, [esp + 0x1c]
// 004c4e4e  50                   push eax
// 004c4e4f  c644241801           mov byte ptr [esp + 0x18], 1
// 004c4e54  e81791f4ff           call 0x40df70
// 004c4e59  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c4e5d  5f                   pop edi
// 004c4e5e  8bc6                 mov eax, esi
// 004c4e60  5e                   pop esi
// 004c4e61  64890d00000000       mov dword ptr fs:[0], ecx
// 004c4e68  83c410               add esp, 0x10
// 004c4e6b  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VInstance@RBX@@@?$shared_ptr@VPartInstance@RBX@@@boost@@QAE@ABV?$shared_ptr@VInstance@RBX@@@1@Udynamic_cast_tag@detail@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
