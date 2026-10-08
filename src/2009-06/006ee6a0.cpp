// from server: 100% by auto
// roc 2009-06 006ee6a0  unit: seg_006e0000  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ee6a0
//
// 006ee6a0  81ec3c020000         sub esp, 0x23c
// 006ee6a6  53                   push ebx
// 006ee6a7  55                   push ebp
// 006ee6a8  8bac2450020000       mov ebp, dword ptr [esp + 0x250]
// 006ee6af  56                   push esi
// 006ee6b0  8bd8                 mov ebx, eax
// 006ee6b2  57                   push edi
// 006ee6b3  8d442410             lea eax, [esp + 0x10]
// 006ee6b7  e824f8ffff           call 0x6edee0
// 006ee6bc  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ee6c0  89683c               mov dword ptr [eax + 0x3c], ebp
// 006ee6c3  837b1028             cmp dword ptr [ebx + 0x10], 0x28
// 006ee6c7  7421                 je 0x6ee6ea
// 006ee6c9  6a28                 push 0x28
// 006ee6cb  53                   push ebx
// 006ee6cc  e81f2b0000           call 0x6f11f0
// 006ee6d1  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 006ee6d4  50                   push eax
// 006ee6d5  68b8dd8e00           push 0x8eddb8
// 006ee6da  51                   push ecx
// 006ee6db  e8c0a9fdff           call 0x6c90a0
// 006ee6e0  50                   push eax
// 006ee6e1  53                   push ebx
// 006ee6e2  e8092c0000           call 0x6f12f0
// 006ee6e7  83c41c               add esp, 0x1c
// 006ee6ea  53                   push ebx
// 006ee6eb  e8f03f0000           call 0x6f26e0
// 006ee6f0  83c404               add esp, 4
// 006ee6f3  83bc245402000000     cmp dword ptr [esp + 0x254], 0
// 006ee6fb  7468                 je 0x6ee765
// 006ee6fd  6a04                 push 4
// 006ee6ff  68e8de8e00           push 0x8edee8
// 006ee704  53                   push ebx
// 006ee705  e8062c0000           call 0x6f1310
// 006ee70a  8b7330               mov esi, dword ptr [ebx + 0x30]
// 006ee70d  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 006ee711  42                   inc edx
// 006ee712  83c40c               add esp, 0xc
// 006ee715  81fac8000000         cmp edx, 0xc8
// 006ee71b  8bf8                 mov edi, eax
// 006ee71d  7e0f                 jle 0x6ee72e
// 006ee71f  b95cde8e00           mov ecx, 0x8ede5c
// 006ee724  bac8000000           mov edx, 0xc8
// 006ee729  e812f1ffff           call 0x6ed840
// 006ee72e  57                   push edi
// 006ee72f  53                   push ebx
// 006ee730  e84bf2ffff           call 0x6ed980
// 006ee735  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006ee739  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 006ee741  8b4330               mov eax, dword ptr [ebx + 0x30]
// 006ee744  83c408               add esp, 8
// 006ee747  fe4032               inc byte ptr [eax + 0x32]
// 006ee74a  0fb65032             movzx edx, byte ptr [eax + 0x32]
// 006ee74e  0fb78c50aa000000     movzx ecx, word ptr [eax + edx*2 + 0xaa]
// 006ee756  8b10                 mov edx, dword ptr [eax]
// 006ee758  8b5218               mov edx, dword ptr [edx + 0x18]
// 006ee75b  8b4018               mov eax, dword ptr [eax + 0x18]
// 006ee75e  8d0c49               lea ecx, [ecx + ecx*2]
// 006ee761  89448a04             mov dword ptr [edx + ecx*4 + 4], eax
// 006ee765  8bfb                 mov edi, ebx
// 006ee767  e8f4fdffff           call 0x6ee560
// 006ee76c  837b1029             cmp dword ptr [ebx + 0x10], 0x29
// 006ee770  7421                 je 0x6ee793
// 006ee772  6a29                 push 0x29
// 006ee774  53                   push ebx
// 006ee775  e8762a0000           call 0x6f11f0
// 006ee77a  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 006ee77d  50                   push eax
// 006ee77e  68b8dd8e00           push 0x8eddb8
// 006ee783  51                   push ecx
// 006ee784  e817a9fdff           call 0x6c90a0
// 006ee789  50                   push eax
// 006ee78a  53                   push ebx
// 006ee78b  e8602b0000           call 0x6f12f0
// 006ee790  83c41c               add esp, 0x1c
// 006ee793  53                   push ebx
// 006ee794  e8473f0000           call 0x6f26e0
// 006ee799  53                   push ebx
// 006ee79a  e8b11d0000           call 0x6f0550
// 006ee79f  8b442418             mov eax, dword ptr [esp + 0x18]
// 006ee7a3  8b5304               mov edx, dword ptr [ebx + 4]
// 006ee7a6  895040               mov dword ptr [eax + 0x40], edx
// 006ee7a9  6809010000           push 0x109
// 006ee7ae  8bc5                 mov eax, ebp
// 006ee7b0  bf06010000           mov edi, 0x106
// 006ee7b5  8bf3                 mov esi, ebx
// 006ee7b7  e8d4f0ffff           call 0x6ed890
// 006ee7bc  53                   push ebx
// 006ee7bd  e8cef7ffff           call 0x6edf90
// 006ee7c2  8b8c2460020000       mov ecx, dword ptr [esp + 0x260]
// 006ee7c9  51                   push ecx
// 006ee7ca  8d542424             lea edx, [esp + 0x24]
// 006ee7ce  52                   push edx
// 006ee7cf  53                   push ebx
// 006ee7d0  e80bf6ffff           call 0x6edde0
// 006ee7d5  83c41c               add esp, 0x1c
// 006ee7d8  5f                   pop edi
// 006ee7d9  5e                   pop esi
// 006ee7da  5d                   pop ebp
// 006ee7db  5b                   pop ebx
// 006ee7dc  81c43c020000         add esp, 0x23c
// 006ee7e2  c3                   ret 
// library lua-5.1.4/lparser.c (function _body)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
