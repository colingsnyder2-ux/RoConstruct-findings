// from server: 100% by auto
// roc 2009-06 0059f8f0  unit: seg_00590000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059f8f0
//
// 0059f8f0  83ec38               sub esp, 0x38
// 0059f8f3  53                   push ebx
// 0059f8f4  8b580c               mov ebx, dword ptr [eax + 0xc]
// 0059f8f7  55                   push ebp
// 0059f8f8  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0059f8fb  56                   push esi
// 0059f8fc  8b742448             mov esi, dword ptr [esp + 0x48]
// 0059f900  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 0059f906  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0059f909  8b4808               mov ecx, dword ptr [eax + 8]
// 0059f90c  89542430             mov dword ptr [esp + 0x30], edx
// 0059f910  8b5004               mov edx, dword ptr [eax + 4]
// 0059f913  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0059f917  8b5810               mov ebx, dword ptr [eax + 0x10]
// 0059f91a  8b00                 mov eax, dword ptr [eax]
// 0059f91c  57                   push edi
// 0059f91d  33ff                 xor edi, edi
// 0059f91f  3bc2                 cmp eax, edx
// 0059f921  897c2414             mov dword ptr [esp + 0x14], edi
// 0059f925  897c2418             mov dword ptr [esp + 0x18], edi
// 0059f929  897c241c             mov dword ptr [esp + 0x1c], edi
// 0059f92d  89542444             mov dword ptr [esp + 0x44], edx
// 0059f931  894c2440             mov dword ptr [esp + 0x40], ecx
// 0059f935  895c2438             mov dword ptr [esp + 0x38], ebx
// 0059f939  896c2424             mov dword ptr [esp + 0x24], ebp
// 0059f93d  89442430             mov dword ptr [esp + 0x30], eax
// 0059f941  0f8fd4000000         jg 0x59fa1b
// 0059f947  8d2cc504000000       lea ebp, [eax*8 + 4]
// 0059f94e  896c2410             mov dword ptr [esp + 0x10], ebp
// 0059f952  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 0059f956  0f8fad000000         jg 0x59fa09
// 0059f95c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0059f960  8b448500             mov eax, dword ptr [ebp + eax*4]
// 0059f964  8bd1                 mov edx, ecx
// 0059f966  c1e205               shl edx, 5
// 0059f969  03d3                 add edx, ebx
// 0059f96b  8d2c50               lea ebp, [eax + edx*2]
// 0059f96e  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059f972  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059f976  2bc1                 sub eax, ecx
// 0059f978  40                   inc eax
// 0059f979  8d348d02000000       lea esi, [ecx*4 + 2]
// 0059f980  896c2428             mov dword ptr [esp + 0x28], ebp
// 0059f984  8944242c             mov dword ptr [esp + 0x2c], eax
// 0059f988  3bda                 cmp ebx, edx
// 0059f98a  7f5a                 jg 0x59f9e6
// 0059f98c  2bd3                 sub edx, ebx
// 0059f98e  8d0cdd04000000       lea ecx, [ebx*8 + 4]
// 0059f995  42                   inc edx
// 0059f996  eb08                 jmp 0x59f9a0
// 0059f998  8da42400000000       lea esp, [esp]
// 0059f99f  90                   nop 
// 0059f9a0  0fb74500             movzx eax, word ptr [ebp]
// 0059f9a4  83c502               add ebp, 2
// 0059f9a7  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0059f9ab  85c0                 test eax, eax
// 0059f9ad  7423                 je 0x59f9d2
// 0059f9af  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059f9b3  0fafd8               imul ebx, eax
// 0059f9b6  015c2414             add dword ptr [esp + 0x14], ebx
// 0059f9ba  8bde                 mov ebx, esi
// 0059f9bc  0fafd8               imul ebx, eax
// 0059f9bf  015c2418             add dword ptr [esp + 0x18], ebx
// 0059f9c3  8bd9                 mov ebx, ecx
// 0059f9c5  0fafd8               imul ebx, eax
// 0059f9c8  03f8                 add edi, eax
// 0059f9ca  015c241c             add dword ptr [esp + 0x1c], ebx
// 0059f9ce  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0059f9d2  83c108               add ecx, 8
// 0059f9d5  83ea01               sub edx, 1
// 0059f9d8  75c6                 jne 0x59f9a0
// 0059f9da  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0059f9de  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059f9e2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059f9e6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0059f9ea  83c540               add ebp, 0x40
// 0059f9ed  83c604               add esi, 4
// 0059f9f0  83e801               sub eax, 1
// 0059f9f3  896c2428             mov dword ptr [esp + 0x28], ebp
// 0059f9f7  8944242c             mov dword ptr [esp + 0x2c], eax
// 0059f9fb  758b                 jne 0x59f988
// 0059f9fd  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0059fa01  8b542444             mov edx, dword ptr [esp + 0x44]
// 0059fa05  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059fa09  8344241008           add dword ptr [esp + 0x10], 8
// 0059fa0e  40                   inc eax
// 0059fa0f  3bc2                 cmp eax, edx
// 0059fa11  89442430             mov dword ptr [esp + 0x30], eax
// 0059fa15  0f8e37ffffff         jle 0x59f952
// 0059fa1b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059fa1f  8bcf                 mov ecx, edi
// 0059fa21  d1f9                 sar ecx, 1
// 0059fa23  8d0411               lea eax, [ecx + edx]
// 0059fa26  99                   cdq 
// 0059fa27  f7ff                 idiv edi
// 0059fa29  8b5674               mov edx, dword ptr [esi + 0x74]
// 0059fa2c  8b12                 mov edx, dword ptr [edx]
// 0059fa2e  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 0059fa32  880413               mov byte ptr [ebx + edx], al
// 0059fa35  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059fa39  03c1                 add eax, ecx
// 0059fa3b  99                   cdq 
// 0059fa3c  f7ff                 idiv edi
// 0059fa3e  8b5674               mov edx, dword ptr [esi + 0x74]
// 0059fa41  8b5204               mov edx, dword ptr [edx + 4]
// 0059fa44  880413               mov byte ptr [ebx + edx], al
// 0059fa47  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059fa4b  03c1                 add eax, ecx
// 0059fa4d  99                   cdq 
// 0059fa4e  f7ff                 idiv edi
// 0059fa50  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0059fa53  8b5108               mov edx, dword ptr [ecx + 8]
// 0059fa56  5f                   pop edi
// 0059fa57  5e                   pop esi
// 0059fa58  5d                   pop ebp
// 0059fa59  880413               mov byte ptr [ebx + edx], al
// 0059fa5c  5b                   pop ebx
// 0059fa5d  83c438               add esp, 0x38
// 0059fa60  c3                   ret 
// library jpeg-6b/jquant2.c (function _compute_color)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
