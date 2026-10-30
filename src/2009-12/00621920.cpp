// roc 2009-12 00621920  unit: seg_00620000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00621920
//
// 00621920  83ec38               sub esp, 0x38
// 00621923  53                   push ebx
// 00621924  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00621927  55                   push ebp
// 00621928  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0062192b  56                   push esi
// 0062192c  8b742448             mov esi, dword ptr [esp + 0x48]
// 00621930  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 00621936  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00621939  8b4808               mov ecx, dword ptr [eax + 8]
// 0062193c  89542430             mov dword ptr [esp + 0x30], edx
// 00621940  8b5004               mov edx, dword ptr [eax + 4]
// 00621943  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00621947  8b5810               mov ebx, dword ptr [eax + 0x10]
// 0062194a  8b00                 mov eax, dword ptr [eax]
// 0062194c  57                   push edi
// 0062194d  33ff                 xor edi, edi
// 0062194f  3bc2                 cmp eax, edx
// 00621951  897c2414             mov dword ptr [esp + 0x14], edi
// 00621955  897c2418             mov dword ptr [esp + 0x18], edi
// 00621959  897c241c             mov dword ptr [esp + 0x1c], edi
// 0062195d  89542444             mov dword ptr [esp + 0x44], edx
// 00621961  894c2440             mov dword ptr [esp + 0x40], ecx
// 00621965  895c2438             mov dword ptr [esp + 0x38], ebx
// 00621969  896c2424             mov dword ptr [esp + 0x24], ebp
// 0062196d  89442430             mov dword ptr [esp + 0x30], eax
// 00621971  0f8fd4000000         jg 0x621a4b
// 00621977  8d2cc504000000       lea ebp, [eax*8 + 4]
// 0062197e  896c2410             mov dword ptr [esp + 0x10], ebp
// 00621982  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 00621986  0f8fad000000         jg 0x621a39
// 0062198c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00621990  8b448500             mov eax, dword ptr [ebp + eax*4]
// 00621994  8bd1                 mov edx, ecx
// 00621996  c1e205               shl edx, 5
// 00621999  03d3                 add edx, ebx
// 0062199b  8d2c50               lea ebp, [eax + edx*2]
// 0062199e  8b442420             mov eax, dword ptr [esp + 0x20]
// 006219a2  8b542424             mov edx, dword ptr [esp + 0x24]
// 006219a6  2bc1                 sub eax, ecx
// 006219a8  40                   inc eax
// 006219a9  8d348d02000000       lea esi, [ecx*4 + 2]
// 006219b0  896c2428             mov dword ptr [esp + 0x28], ebp
// 006219b4  8944242c             mov dword ptr [esp + 0x2c], eax
// 006219b8  3bda                 cmp ebx, edx
// 006219ba  7f5a                 jg 0x621a16
// 006219bc  2bd3                 sub edx, ebx
// 006219be  8d0cdd04000000       lea ecx, [ebx*8 + 4]
// 006219c5  42                   inc edx
// 006219c6  eb08                 jmp 0x6219d0
// 006219c8  8da42400000000       lea esp, [esp]
// 006219cf  90                   nop 
// 006219d0  0fb74500             movzx eax, word ptr [ebp]
// 006219d4  83c502               add ebp, 2
// 006219d7  896c243c             mov dword ptr [esp + 0x3c], ebp
// 006219db  85c0                 test eax, eax
// 006219dd  7423                 je 0x621a02
// 006219df  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006219e3  0fafd8               imul ebx, eax
// 006219e6  015c2414             add dword ptr [esp + 0x14], ebx
// 006219ea  8bde                 mov ebx, esi
// 006219ec  0fafd8               imul ebx, eax
// 006219ef  015c2418             add dword ptr [esp + 0x18], ebx
// 006219f3  8bd9                 mov ebx, ecx
// 006219f5  0fafd8               imul ebx, eax
// 006219f8  03f8                 add edi, eax
// 006219fa  015c241c             add dword ptr [esp + 0x1c], ebx
// 006219fe  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00621a02  83c108               add ecx, 8
// 00621a05  83ea01               sub edx, 1
// 00621a08  75c6                 jne 0x6219d0
// 00621a0a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00621a0e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00621a12  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00621a16  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00621a1a  83c540               add ebp, 0x40
// 00621a1d  83c604               add esi, 4
// 00621a20  83e801               sub eax, 1
// 00621a23  896c2428             mov dword ptr [esp + 0x28], ebp
// 00621a27  8944242c             mov dword ptr [esp + 0x2c], eax
// 00621a2b  758b                 jne 0x6219b8
// 00621a2d  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00621a31  8b542444             mov edx, dword ptr [esp + 0x44]
// 00621a35  8b442430             mov eax, dword ptr [esp + 0x30]
// 00621a39  8344241008           add dword ptr [esp + 0x10], 8
// 00621a3e  40                   inc eax
// 00621a3f  3bc2                 cmp eax, edx
// 00621a41  89442430             mov dword ptr [esp + 0x30], eax
// 00621a45  0f8e37ffffff         jle 0x621982
// 00621a4b  8b542414             mov edx, dword ptr [esp + 0x14]
// 00621a4f  8bcf                 mov ecx, edi
// 00621a51  d1f9                 sar ecx, 1
// 00621a53  8d0411               lea eax, [ecx + edx]
// 00621a56  99                   cdq 
// 00621a57  f7ff                 idiv edi
// 00621a59  8b5674               mov edx, dword ptr [esi + 0x74]
// 00621a5c  8b12                 mov edx, dword ptr [edx]
// 00621a5e  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00621a62  880413               mov byte ptr [ebx + edx], al
// 00621a65  8b442418             mov eax, dword ptr [esp + 0x18]
// 00621a69  03c1                 add eax, ecx
// 00621a6b  99                   cdq 
// 00621a6c  f7ff                 idiv edi
// 00621a6e  8b5674               mov edx, dword ptr [esi + 0x74]
// 00621a71  8b5204               mov edx, dword ptr [edx + 4]
// 00621a74  880413               mov byte ptr [ebx + edx], al
// 00621a77  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00621a7b  03c1                 add eax, ecx
// 00621a7d  99                   cdq 
// 00621a7e  f7ff                 idiv edi
// 00621a80  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00621a83  8b5108               mov edx, dword ptr [ecx + 8]
// 00621a86  5f                   pop edi
// 00621a87  5e                   pop esi
// 00621a88  5d                   pop ebp
// 00621a89  880413               mov byte ptr [ebx + edx], al
// 00621a8c  5b                   pop ebx
// 00621a8d  83c438               add esp, 0x38
// 00621a90  c3                   ret 
// library jpeg-6b/jquant2.c (function _compute_color)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
