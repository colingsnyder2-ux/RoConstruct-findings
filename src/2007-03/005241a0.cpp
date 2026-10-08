// roc 2007-03 005241a0  unit: seg_00520000  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005241a0
//
// 005241a0  83ec38               sub esp, 0x38
// 005241a3  53                   push ebx
// 005241a4  8b580c               mov ebx, dword ptr [eax + 0xc]
// 005241a7  55                   push ebp
// 005241a8  8b6814               mov ebp, dword ptr [eax + 0x14]
// 005241ab  56                   push esi
// 005241ac  8b742448             mov esi, dword ptr [esp + 0x48]
// 005241b0  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 005241b6  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005241b9  8b4808               mov ecx, dword ptr [eax + 8]
// 005241bc  89542430             mov dword ptr [esp + 0x30], edx
// 005241c0  8b5004               mov edx, dword ptr [eax + 4]
// 005241c3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005241c7  8b5810               mov ebx, dword ptr [eax + 0x10]
// 005241ca  8b00                 mov eax, dword ptr [eax]
// 005241cc  57                   push edi
// 005241cd  33ff                 xor edi, edi
// 005241cf  3bc2                 cmp eax, edx
// 005241d1  897c2414             mov dword ptr [esp + 0x14], edi
// 005241d5  897c2418             mov dword ptr [esp + 0x18], edi
// 005241d9  897c241c             mov dword ptr [esp + 0x1c], edi
// 005241dd  89542444             mov dword ptr [esp + 0x44], edx
// 005241e1  894c2440             mov dword ptr [esp + 0x40], ecx
// 005241e5  895c2438             mov dword ptr [esp + 0x38], ebx
// 005241e9  896c2424             mov dword ptr [esp + 0x24], ebp
// 005241ed  89442430             mov dword ptr [esp + 0x30], eax
// 005241f1  0f8fd6000000         jg 0x5242cd
// 005241f7  8d2cc504000000       lea ebp, [eax*8 + 4]
// 005241fe  896c2410             mov dword ptr [esp + 0x10], ebp
// 00524202  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 00524206  0f8fad000000         jg 0x5242b9
// 0052420c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00524210  8b448500             mov eax, dword ptr [ebp + eax*4]
// 00524214  8bd1                 mov edx, ecx
// 00524216  c1e205               shl edx, 5
// 00524219  03d3                 add edx, ebx
// 0052421b  8d2c50               lea ebp, [eax + edx*2]
// 0052421e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00524222  8b542424             mov edx, dword ptr [esp + 0x24]
// 00524226  2bc1                 sub eax, ecx
// 00524228  83c001               add eax, 1
// 0052422b  8d348d02000000       lea esi, [ecx*4 + 2]
// 00524232  896c2428             mov dword ptr [esp + 0x28], ebp
// 00524236  8944242c             mov dword ptr [esp + 0x2c], eax
// 0052423a  8d9b00000000         lea ebx, [ebx]
// 00524240  3bda                 cmp ebx, edx
// 00524242  7f52                 jg 0x524296
// 00524244  2bd3                 sub edx, ebx
// 00524246  8d0cdd04000000       lea ecx, [ebx*8 + 4]
// 0052424d  83c201               add edx, 1
// 00524250  0fb74500             movzx eax, word ptr [ebp]
// 00524254  83c502               add ebp, 2
// 00524257  85c0                 test eax, eax
// 00524259  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0052425d  7423                 je 0x524282
// 0052425f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00524263  0fafd8               imul ebx, eax
// 00524266  015c2414             add dword ptr [esp + 0x14], ebx
// 0052426a  8bde                 mov ebx, esi
// 0052426c  0fafd8               imul ebx, eax
// 0052426f  015c2418             add dword ptr [esp + 0x18], ebx
// 00524273  8bd9                 mov ebx, ecx
// 00524275  0fafd8               imul ebx, eax
// 00524278  03f8                 add edi, eax
// 0052427a  015c241c             add dword ptr [esp + 0x1c], ebx
// 0052427e  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00524282  83c108               add ecx, 8
// 00524285  83ea01               sub edx, 1
// 00524288  75c6                 jne 0x524250
// 0052428a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0052428e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00524292  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00524296  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052429a  83c540               add ebp, 0x40
// 0052429d  83c604               add esi, 4
// 005242a0  83e801               sub eax, 1
// 005242a3  896c2428             mov dword ptr [esp + 0x28], ebp
// 005242a7  8944242c             mov dword ptr [esp + 0x2c], eax
// 005242ab  7593                 jne 0x524240
// 005242ad  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 005242b1  8b542444             mov edx, dword ptr [esp + 0x44]
// 005242b5  8b442430             mov eax, dword ptr [esp + 0x30]
// 005242b9  8344241008           add dword ptr [esp + 0x10], 8
// 005242be  83c001               add eax, 1
// 005242c1  3bc2                 cmp eax, edx
// 005242c3  89442430             mov dword ptr [esp + 0x30], eax
// 005242c7  0f8e35ffffff         jle 0x524202
// 005242cd  8b542414             mov edx, dword ptr [esp + 0x14]
// 005242d1  8bcf                 mov ecx, edi
// 005242d3  d1f9                 sar ecx, 1
// 005242d5  8d0411               lea eax, [ecx + edx]
// 005242d8  99                   cdq 
// 005242d9  f7ff                 idiv edi
// 005242db  8b5674               mov edx, dword ptr [esi + 0x74]
// 005242de  8b12                 mov edx, dword ptr [edx]
// 005242e0  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 005242e4  880413               mov byte ptr [ebx + edx], al
// 005242e7  8b442418             mov eax, dword ptr [esp + 0x18]
// 005242eb  03c1                 add eax, ecx
// 005242ed  99                   cdq 
// 005242ee  f7ff                 idiv edi
// 005242f0  8b5674               mov edx, dword ptr [esi + 0x74]
// 005242f3  8b5204               mov edx, dword ptr [edx + 4]
// 005242f6  880413               mov byte ptr [ebx + edx], al
// 005242f9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005242fd  03c1                 add eax, ecx
// 005242ff  99                   cdq 
// 00524300  f7ff                 idiv edi
// 00524302  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00524305  8b5108               mov edx, dword ptr [ecx + 8]
// 00524308  5f                   pop edi
// 00524309  5e                   pop esi
// 0052430a  5d                   pop ebp
// 0052430b  880413               mov byte ptr [ebx + edx], al
// 0052430e  5b                   pop ebx
// 0052430f  83c438               add esp, 0x38
// 00524312  c3                   ret 
// library jpeg-6b/jquant2.c (function _compute_color)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
