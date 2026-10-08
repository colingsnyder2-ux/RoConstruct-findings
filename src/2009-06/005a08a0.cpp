// from server: 100% by auto
// roc 2009-06 005a08a0  unit: seg_005a0000  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a08a0
//
// 005a08a0  83ec18               sub esp, 0x18
// 005a08a3  56                   push esi
// 005a08a4  57                   push edi
// 005a08a5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005a08a9  837f4c01             cmp dword ptr [edi + 0x4c], 1
// 005a08ad  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 005a08b3  89742418             mov dword ptr [esp + 0x18], esi
// 005a08b7  750e                 jne 0x5a08c7
// 005a08b9  c7442408fe010000     mov dword ptr [esp + 8], 0x1fe
// 005a08c1  c6461c01             mov byte ptr [esi + 0x1c], 1
// 005a08c5  eb0c                 jmp 0x5a08d3
// 005a08c7  c744240800000000     mov dword ptr [esp + 8], 0
// 005a08cf  c6461c00             mov byte ptr [esi + 0x1c], 0
// 005a08d3  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 005a08d6  8b542408             mov edx, dword ptr [esp + 8]
// 005a08da  8b4704               mov eax, dword ptr [edi + 4]
// 005a08dd  8b4008               mov eax, dword ptr [eax + 8]
// 005a08e0  51                   push ecx
// 005a08e1  81c200010000         add edx, 0x100
// 005a08e7  52                   push edx
// 005a08e8  6a01                 push 1
// 005a08ea  57                   push edi
// 005a08eb  ffd0                 call eax
// 005a08ed  33c9                 xor ecx, ecx
// 005a08ef  894618               mov dword ptr [esi + 0x18], eax
// 005a08f2  8b4614               mov eax, dword ptr [esi + 0x14]
// 005a08f5  83c410               add esp, 0x10
// 005a08f8  394f64               cmp dword ptr [edi + 0x64], ecx
// 005a08fb  894c2414             mov dword ptr [esp + 0x14], ecx
// 005a08ff  0f8ee1000000         jle 0x5a09e6
// 005a0905  53                   push ebx
// 005a0906  8d5620               lea edx, [esi + 0x20]
// 005a0909  55                   push ebp
// 005a090a  89542414             mov dword ptr [esp + 0x14], edx
// 005a090e  eb08                 jmp 0x5a0918
// 005a0910  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a0914  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a0918  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a091c  8b3a                 mov edi, dword ptr [edx]
// 005a091e  99                   cdq 
// 005a091f  f7ff                 idiv edi
// 005a0921  837c241000           cmp dword ptr [esp + 0x10], 0
// 005a0926  89442418             mov dword ptr [esp + 0x18], eax
// 005a092a  740d                 je 0x5a0939
// 005a092c  8b4618               mov eax, dword ptr [esi + 0x18]
// 005a092f  810488ff000000       add dword ptr [eax + ecx*4], 0xff
// 005a0936  8d0488               lea eax, [eax + ecx*4]
// 005a0939  8b5618               mov edx, dword ptr [esi + 0x18]
// 005a093c  8b2c8a               mov ebp, dword ptr [edx + ecx*4]
// 005a093f  8d87fe000000         lea eax, [edi + 0xfe]
// 005a0945  8d743ffe             lea esi, [edi + edi - 2]
// 005a0949  99                   cdq 
// 005a094a  f7fe                 idiv esi
// 005a094c  33db                 xor ebx, ebx
// 005a094e  896c2424             mov dword ptr [esp + 0x24], ebp
// 005a0952  33f6                 xor esi, esi
// 005a0954  8bd0                 mov edx, eax
// 005a0956  3bf2                 cmp esi, edx
// 005a0958  7e35                 jle 0x5a098f
// 005a095a  8bcb                 mov ecx, ebx
// 005a095c  8d6c3ffe             lea ebp, [edi + edi - 2]
// 005a0960  69c9fe010000         imul ecx, ecx, 0x1fe
// 005a0966  eb08                 jmp 0x5a0970
// 005a0968  8da42400000000       lea esp, [esp]
// 005a096f  90                   nop 
// 005a0970  81c1fe010000         add ecx, 0x1fe
// 005a0976  8d8439fe000000       lea eax, [ecx + edi + 0xfe]
// 005a097d  99                   cdq 
// 005a097e  f7fd                 idiv ebp
// 005a0980  43                   inc ebx
// 005a0981  8bd0                 mov edx, eax
// 005a0983  3bf2                 cmp esi, edx
// 005a0985  7fe9                 jg 0x5a0970
// 005a0987  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a098b  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005a098f  8a442418             mov al, byte ptr [esp + 0x18]
// 005a0993  f6eb                 imul bl
// 005a0995  88042e               mov byte ptr [esi + ebp], al
// 005a0998  46                   inc esi
// 005a0999  81feff000000         cmp esi, 0xff
// 005a099f  7eb5                 jle 0x5a0956
// 005a09a1  837c241000           cmp dword ptr [esp + 0x10], 0
// 005a09a6  7425                 je 0x5a09cd
// 005a09a8  b801000000           mov eax, 1
// 005a09ad  8d55ff               lea edx, [ebp - 1]
// 005a09b0  0fb65d00             movzx ebx, byte ptr [ebp]
// 005a09b4  881a                 mov byte ptr [edx], bl
// 005a09b6  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 005a09bd  889c28ff000000       mov byte ptr [eax + ebp + 0xff], bl
// 005a09c4  40                   inc eax
// 005a09c5  4a                   dec edx
// 005a09c6  3dff000000           cmp eax, 0xff
// 005a09cb  7ee3                 jle 0x5a09b0
// 005a09cd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a09d1  8344241404           add dword ptr [esp + 0x14], 4
// 005a09d6  41                   inc ecx
// 005a09d7  3b4864               cmp ecx, dword ptr [eax + 0x64]
// 005a09da  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a09de  0f8c2cffffff         jl 0x5a0910
// 005a09e4  5d                   pop ebp
// 005a09e5  5b                   pop ebx
// 005a09e6  5f                   pop edi
// 005a09e7  5e                   pop esi
// 005a09e8  83c418               add esp, 0x18
// 005a09eb  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colorindex)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
