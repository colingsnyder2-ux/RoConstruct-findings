// roc 2007-03 00619e90  unit: seg_00610000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00619e90
//
// 00619e90  6aff                 push -1
// 00619e92  6838da7500           push 0x75da38
// 00619e97  64a100000000         mov eax, dword ptr fs:[0]
// 00619e9d  50                   push eax
// 00619e9e  64892500000000       mov dword ptr fs:[0], esp
// 00619ea5  83ec10               sub esp, 0x10
// 00619ea8  53                   push ebx
// 00619ea9  56                   push esi
// 00619eaa  8bf1                 mov esi, ecx
// 00619eac  57                   push edi
// 00619ead  8974240c             mov dword ptr [esp + 0xc], esi
// 00619eb1  e8fae9ffff           call 0x6188b0
// 00619eb6  894604               mov dword ptr [esi + 4], eax
// 00619eb9  c6400e01             mov byte ptr [eax + 0xe], 1
// 00619ebd  8b4604               mov eax, dword ptr [esi + 4]
// 00619ec0  894004               mov dword ptr [eax + 4], eax
// 00619ec3  8b4604               mov eax, dword ptr [esi + 4]
// 00619ec6  8900                 mov dword ptr [eax], eax
// 00619ec8  8b4604               mov eax, dword ptr [esi + 4]
// 00619ecb  894008               mov dword ptr [eax + 8], eax
// 00619ece  33c0                 xor eax, eax
// 00619ed0  894608               mov dword ptr [esi + 8], eax
// 00619ed3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00619ed7  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00619edb  3bfb                 cmp edi, ebx
// 00619edd  89442424             mov dword ptr [esp + 0x24], eax
// 00619ee1  7414                 je 0x619ef7
// 00619ee3  57                   push edi
// 00619ee4  8d442414             lea eax, [esp + 0x14]
// 00619ee8  50                   push eax
// 00619ee9  8bce                 mov ecx, esi
// 00619eeb  e8c0f2ffff           call 0x6191b0
// 00619ef0  83c701               add edi, 1
// 00619ef3  3bfb                 cmp edi, ebx
// 00619ef5  75ec                 jne 0x619ee3
// 00619ef7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00619efb  5f                   pop edi
// 00619efc  8bc6                 mov eax, esi
// 00619efe  5e                   pop esi
// 00619eff  5b                   pop ebx
// 00619f00  64890d00000000       mov dword ptr fs:[0], ecx
// 00619f07  83c41c               add esp, 0x1c
// 00619f0a  c20800               ret 8
// library rbxgs-net/Player.cpp (function ??$?0PBD@?$set@DU?$less@D@std@@V?$allocator@D@2@@std@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
