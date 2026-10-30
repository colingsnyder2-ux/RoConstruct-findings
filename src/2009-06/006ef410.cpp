// from server: 100% by auto
// roc 2009-06 006ef410  unit: seg_006e0000  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ef410
//
// 006ef410  83ec24               sub esp, 0x24
// 006ef413  55                   push ebp
// 006ef414  56                   push esi
// 006ef415  8bf0                 mov esi, eax
// 006ef417  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 006ef41a  57                   push edi
// 006ef41b  56                   push esi
// 006ef41c  e8bf320000           call 0x6f26e0
// 006ef421  55                   push ebp
// 006ef422  e849a60000           call 0x6f9a70
// 006ef427  8bf8                 mov edi, eax
// 006ef429  6a00                 push 0
// 006ef42b  8d442424             lea eax, [esp + 0x24]
// 006ef42f  50                   push eax
// 006ef430  56                   push esi
// 006ef431  e82afcffff           call 0x6ef060
// 006ef436  83c414               add esp, 0x14
// 006ef439  837c241801           cmp dword ptr [esp + 0x18], 1
// 006ef43e  7508                 jne 0x6ef448
// 006ef440  c744241803000000     mov dword ptr [esp + 0x18], 3
// 006ef448  8b5630               mov edx, dword ptr [esi + 0x30]
// 006ef44b  8d4c2418             lea ecx, [esp + 0x18]
// 006ef44f  51                   push ecx
// 006ef450  52                   push edx
// 006ef451  e8aab70000           call 0x6fac00
// 006ef456  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 006ef45e  c644241e01           mov byte ptr [esp + 0x1e], 1
// 006ef463  8a4532               mov al, byte ptr [ebp + 0x32]
// 006ef466  8844241c             mov byte ptr [esp + 0x1c], al
// 006ef46a  c644241d00           mov byte ptr [esp + 0x1d], 0
// 006ef46f  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 006ef472  8d542414             lea edx, [esp + 0x14]
// 006ef476  894c2414             mov dword ptr [esp + 0x14], ecx
// 006ef47a  83c408               add esp, 8
// 006ef47d  895514               mov dword ptr [ebp + 0x14], edx
// 006ef480  817e1003010000       cmp dword ptr [esi + 0x10], 0x103
// 006ef487  7424                 je 0x6ef4ad
// 006ef489  6803010000           push 0x103
// 006ef48e  56                   push esi
// 006ef48f  e85c1d0000           call 0x6f11f0
// 006ef494  50                   push eax
// 006ef495  8b4634               mov eax, dword ptr [esi + 0x34]
// 006ef498  68b8dd8e00           push 0x8eddb8
// 006ef49d  50                   push eax
// 006ef49e  e8fd9bfdff           call 0x6c90a0
// 006ef4a3  50                   push eax
// 006ef4a4  56                   push esi
// 006ef4a5  e8461e0000           call 0x6f12f0
// 006ef4aa  83c41c               add esp, 0x1c
// 006ef4ad  56                   push esi
// 006ef4ae  e82d320000           call 0x6f26e0
// 006ef4b3  83c404               add esp, 4
// 006ef4b6  8bc6                 mov eax, esi
// 006ef4b8  e8b3fcffff           call 0x6ef170
// 006ef4bd  57                   push edi
// 006ef4be  55                   push ebp
// 006ef4bf  e89cae0000           call 0x6fa360
// 006ef4c4  83c404               add esp, 4
// 006ef4c7  50                   push eax
// 006ef4c8  55                   push ebp
// 006ef4c9  e852be0000           call 0x6fb320
// 006ef4ce  8b442440             mov eax, dword ptr [esp + 0x40]
// 006ef4d2  6815010000           push 0x115
// 006ef4d7  bf06010000           mov edi, 0x106
// 006ef4dc  e8afe3ffff           call 0x6ed890
// 006ef4e1  8b7514               mov esi, dword ptr [ebp + 0x14]
// 006ef4e4  8b0e                 mov ecx, dword ptr [esi]
// 006ef4e6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006ef4e9  894d14               mov dword ptr [ebp + 0x14], ecx
// 006ef4ec  0fb65608             movzx edx, byte ptr [esi + 8]
// 006ef4f0  83c410               add esp, 0x10
// 006ef4f3  e868e5ffff           call 0x6eda60
// 006ef4f8  807e0900             cmp byte ptr [esi + 9], 0
// 006ef4fc  7414                 je 0x6ef512
// 006ef4fe  0fb65608             movzx edx, byte ptr [esi + 8]
// 006ef502  6a00                 push 0
// 006ef504  6a00                 push 0
// 006ef506  52                   push edx
// 006ef507  6a23                 push 0x23
// 006ef509  55                   push ebp
// 006ef50a  e8c1ac0000           call 0x6fa1d0
// 006ef50f  83c414               add esp, 0x14
// 006ef512  0fb64532             movzx eax, byte ptr [ebp + 0x32]
// 006ef516  894524               mov dword ptr [ebp + 0x24], eax
// 006ef519  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ef51c  51                   push ecx
// 006ef51d  55                   push ebp
// 006ef51e  e80daf0000           call 0x6fa430
// 006ef523  8b542434             mov edx, dword ptr [esp + 0x34]
// 006ef527  52                   push edx
// 006ef528  55                   push ebp
// 006ef529  e802af0000           call 0x6fa430
// 006ef52e  83c410               add esp, 0x10
// 006ef531  5f                   pop edi
// 006ef532  5e                   pop esi
// 006ef533  5d                   pop ebp
// 006ef534  83c424               add esp, 0x24
// 006ef537  c3                   ret 
// library lua-5.1.4/lparser.c (function _whilestat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
