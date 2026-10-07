// roc 2011-06 00579730  unit: seg_00570000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00579730
//
// 00579730  83ec38               sub esp, 0x38
// 00579733  53                   push ebx
// 00579734  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00579737  55                   push ebp
// 00579738  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0057973b  56                   push esi
// 0057973c  8b742448             mov esi, dword ptr [esp + 0x48]
// 00579740  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 00579746  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00579749  8b4808               mov ecx, dword ptr [eax + 8]
// 0057974c  89542430             mov dword ptr [esp + 0x30], edx
// 00579750  8b5004               mov edx, dword ptr [eax + 4]
// 00579753  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00579757  8b5810               mov ebx, dword ptr [eax + 0x10]
// 0057975a  8b00                 mov eax, dword ptr [eax]
// 0057975c  57                   push edi
// 0057975d  33ff                 xor edi, edi
// 0057975f  3bc2                 cmp eax, edx
// 00579761  897c2414             mov dword ptr [esp + 0x14], edi
// 00579765  897c2418             mov dword ptr [esp + 0x18], edi
// 00579769  897c241c             mov dword ptr [esp + 0x1c], edi
// 0057976d  89542444             mov dword ptr [esp + 0x44], edx
// 00579771  894c2440             mov dword ptr [esp + 0x40], ecx
// 00579775  895c2438             mov dword ptr [esp + 0x38], ebx
// 00579779  896c2424             mov dword ptr [esp + 0x24], ebp
// 0057977d  89442430             mov dword ptr [esp + 0x30], eax
// 00579781  0f8fd4000000         jg 0x57985b
// 00579787  8d2cc504000000       lea ebp, [eax*8 + 4]
// 0057978e  896c2410             mov dword ptr [esp + 0x10], ebp
// 00579792  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 00579796  0f8fad000000         jg 0x579849
// 0057979c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 005797a0  8b448500             mov eax, dword ptr [ebp + eax*4]
// 005797a4  8bd1                 mov edx, ecx
// 005797a6  c1e205               shl edx, 5
// 005797a9  03d3                 add edx, ebx
// 005797ab  8d2c50               lea ebp, [eax + edx*2]
// 005797ae  8b442420             mov eax, dword ptr [esp + 0x20]
// 005797b2  8b542424             mov edx, dword ptr [esp + 0x24]
// 005797b6  2bc1                 sub eax, ecx
// 005797b8  40                   inc eax
// 005797b9  8d348d02000000       lea esi, [ecx*4 + 2]
// 005797c0  896c2428             mov dword ptr [esp + 0x28], ebp
// 005797c4  8944242c             mov dword ptr [esp + 0x2c], eax
// 005797c8  3bda                 cmp ebx, edx
// 005797ca  7f5a                 jg 0x579826
// 005797cc  2bd3                 sub edx, ebx
// 005797ce  8d0cdd04000000       lea ecx, [ebx*8 + 4]
// 005797d5  42                   inc edx
// 005797d6  eb08                 jmp 0x5797e0
// 005797d8  8da42400000000       lea esp, [esp]
// 005797df  90                   nop 
// 005797e0  0fb74500             movzx eax, word ptr [ebp]
// 005797e4  83c502               add ebp, 2
// 005797e7  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005797eb  85c0                 test eax, eax
// 005797ed  7423                 je 0x579812
// 005797ef  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005797f3  0fafd8               imul ebx, eax
// 005797f6  015c2414             add dword ptr [esp + 0x14], ebx
// 005797fa  8bde                 mov ebx, esi
// 005797fc  0fafd8               imul ebx, eax
// 005797ff  015c2418             add dword ptr [esp + 0x18], ebx
// 00579803  8bd9                 mov ebx, ecx
// 00579805  0fafd8               imul ebx, eax
// 00579808  03f8                 add edi, eax
// 0057980a  015c241c             add dword ptr [esp + 0x1c], ebx
// 0057980e  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00579812  83c108               add ecx, 8
// 00579815  83ea01               sub edx, 1
// 00579818  75c6                 jne 0x5797e0
// 0057981a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0057981e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00579822  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00579826  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0057982a  83c540               add ebp, 0x40
// 0057982d  83c604               add esi, 4
// 00579830  83e801               sub eax, 1
// 00579833  896c2428             mov dword ptr [esp + 0x28], ebp
// 00579837  8944242c             mov dword ptr [esp + 0x2c], eax
// 0057983b  758b                 jne 0x5797c8
// 0057983d  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00579841  8b542444             mov edx, dword ptr [esp + 0x44]
// 00579845  8b442430             mov eax, dword ptr [esp + 0x30]
// 00579849  8344241008           add dword ptr [esp + 0x10], 8
// 0057984e  40                   inc eax
// 0057984f  3bc2                 cmp eax, edx
// 00579851  89442430             mov dword ptr [esp + 0x30], eax
// 00579855  0f8e37ffffff         jle 0x579792
// 0057985b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057985f  8bcf                 mov ecx, edi
// 00579861  d1f9                 sar ecx, 1
// 00579863  8d0411               lea eax, [ecx + edx]
// 00579866  99                   cdq 
// 00579867  f7ff                 idiv edi
// 00579869  8b5674               mov edx, dword ptr [esi + 0x74]
// 0057986c  8b12                 mov edx, dword ptr [edx]
// 0057986e  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00579872  880413               mov byte ptr [ebx + edx], al
// 00579875  8b442418             mov eax, dword ptr [esp + 0x18]
// 00579879  03c1                 add eax, ecx
// 0057987b  99                   cdq 
// 0057987c  f7ff                 idiv edi
// 0057987e  8b5674               mov edx, dword ptr [esi + 0x74]
// 00579881  8b5204               mov edx, dword ptr [edx + 4]
// 00579884  880413               mov byte ptr [ebx + edx], al
// 00579887  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057988b  03c1                 add eax, ecx
// 0057988d  99                   cdq 
// 0057988e  f7ff                 idiv edi
// 00579890  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00579893  8b5108               mov edx, dword ptr [ecx + 8]
// 00579896  5f                   pop edi
// 00579897  5e                   pop esi
// 00579898  5d                   pop ebp
// 00579899  880413               mov byte ptr [ebx + edx], al
// 0057989c  5b                   pop ebx
// 0057989d  83c438               add esp, 0x38
// 005798a0  c3                   ret 
// library jpeg-6b/jquant2.c (function _compute_color)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
