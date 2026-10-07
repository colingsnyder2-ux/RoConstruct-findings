// roc 2012-06 00664e40  unit: seg_00660000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00664e40
//
// 00664e40  83ec38               sub esp, 0x38
// 00664e43  53                   push ebx
// 00664e44  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00664e47  55                   push ebp
// 00664e48  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00664e4b  56                   push esi
// 00664e4c  8b742448             mov esi, dword ptr [esp + 0x48]
// 00664e50  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 00664e56  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00664e59  8b4808               mov ecx, dword ptr [eax + 8]
// 00664e5c  89542430             mov dword ptr [esp + 0x30], edx
// 00664e60  8b5004               mov edx, dword ptr [eax + 4]
// 00664e63  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00664e67  8b5810               mov ebx, dword ptr [eax + 0x10]
// 00664e6a  8b00                 mov eax, dword ptr [eax]
// 00664e6c  57                   push edi
// 00664e6d  33ff                 xor edi, edi
// 00664e6f  3bc2                 cmp eax, edx
// 00664e71  897c2414             mov dword ptr [esp + 0x14], edi
// 00664e75  897c2418             mov dword ptr [esp + 0x18], edi
// 00664e79  897c241c             mov dword ptr [esp + 0x1c], edi
// 00664e7d  89542444             mov dword ptr [esp + 0x44], edx
// 00664e81  894c2440             mov dword ptr [esp + 0x40], ecx
// 00664e85  895c2438             mov dword ptr [esp + 0x38], ebx
// 00664e89  896c2424             mov dword ptr [esp + 0x24], ebp
// 00664e8d  89442430             mov dword ptr [esp + 0x30], eax
// 00664e91  0f8fd4000000         jg 0x664f6b
// 00664e97  8d2cc504000000       lea ebp, [eax*8 + 4]
// 00664e9e  896c2410             mov dword ptr [esp + 0x10], ebp
// 00664ea2  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 00664ea6  0f8fad000000         jg 0x664f59
// 00664eac  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00664eb0  8b448500             mov eax, dword ptr [ebp + eax*4]
// 00664eb4  8bd1                 mov edx, ecx
// 00664eb6  c1e205               shl edx, 5
// 00664eb9  03d3                 add edx, ebx
// 00664ebb  8d2c50               lea ebp, [eax + edx*2]
// 00664ebe  8b442420             mov eax, dword ptr [esp + 0x20]
// 00664ec2  8b542424             mov edx, dword ptr [esp + 0x24]
// 00664ec6  2bc1                 sub eax, ecx
// 00664ec8  40                   inc eax
// 00664ec9  8d348d02000000       lea esi, [ecx*4 + 2]
// 00664ed0  896c2428             mov dword ptr [esp + 0x28], ebp
// 00664ed4  8944242c             mov dword ptr [esp + 0x2c], eax
// 00664ed8  3bda                 cmp ebx, edx
// 00664eda  7f5a                 jg 0x664f36
// 00664edc  2bd3                 sub edx, ebx
// 00664ede  8d0cdd04000000       lea ecx, [ebx*8 + 4]
// 00664ee5  42                   inc edx
// 00664ee6  eb08                 jmp 0x664ef0
// 00664ee8  8da42400000000       lea esp, [esp]
// 00664eef  90                   nop 
// 00664ef0  0fb74500             movzx eax, word ptr [ebp]
// 00664ef4  83c502               add ebp, 2
// 00664ef7  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00664efb  85c0                 test eax, eax
// 00664efd  7423                 je 0x664f22
// 00664eff  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00664f03  0fafd8               imul ebx, eax
// 00664f06  015c2414             add dword ptr [esp + 0x14], ebx
// 00664f0a  8bde                 mov ebx, esi
// 00664f0c  0fafd8               imul ebx, eax
// 00664f0f  015c2418             add dword ptr [esp + 0x18], ebx
// 00664f13  8bd9                 mov ebx, ecx
// 00664f15  0fafd8               imul ebx, eax
// 00664f18  03f8                 add edi, eax
// 00664f1a  015c241c             add dword ptr [esp + 0x1c], ebx
// 00664f1e  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00664f22  83c108               add ecx, 8
// 00664f25  83ea01               sub edx, 1
// 00664f28  75c6                 jne 0x664ef0
// 00664f2a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00664f2e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00664f32  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00664f36  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00664f3a  83c540               add ebp, 0x40
// 00664f3d  83c604               add esi, 4
// 00664f40  83e801               sub eax, 1
// 00664f43  896c2428             mov dword ptr [esp + 0x28], ebp
// 00664f47  8944242c             mov dword ptr [esp + 0x2c], eax
// 00664f4b  758b                 jne 0x664ed8
// 00664f4d  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00664f51  8b542444             mov edx, dword ptr [esp + 0x44]
// 00664f55  8b442430             mov eax, dword ptr [esp + 0x30]
// 00664f59  8344241008           add dword ptr [esp + 0x10], 8
// 00664f5e  40                   inc eax
// 00664f5f  3bc2                 cmp eax, edx
// 00664f61  89442430             mov dword ptr [esp + 0x30], eax
// 00664f65  0f8e37ffffff         jle 0x664ea2
// 00664f6b  8b542414             mov edx, dword ptr [esp + 0x14]
// 00664f6f  8bcf                 mov ecx, edi
// 00664f71  d1f9                 sar ecx, 1
// 00664f73  8d0411               lea eax, [ecx + edx]
// 00664f76  99                   cdq 
// 00664f77  f7ff                 idiv edi
// 00664f79  8b5674               mov edx, dword ptr [esi + 0x74]
// 00664f7c  8b12                 mov edx, dword ptr [edx]
// 00664f7e  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00664f82  880413               mov byte ptr [ebx + edx], al
// 00664f85  8b442418             mov eax, dword ptr [esp + 0x18]
// 00664f89  03c1                 add eax, ecx
// 00664f8b  99                   cdq 
// 00664f8c  f7ff                 idiv edi
// 00664f8e  8b5674               mov edx, dword ptr [esi + 0x74]
// 00664f91  8b5204               mov edx, dword ptr [edx + 4]
// 00664f94  880413               mov byte ptr [ebx + edx], al
// 00664f97  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00664f9b  03c1                 add eax, ecx
// 00664f9d  99                   cdq 
// 00664f9e  f7ff                 idiv edi
// 00664fa0  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00664fa3  8b5108               mov edx, dword ptr [ecx + 8]
// 00664fa6  5f                   pop edi
// 00664fa7  5e                   pop esi
// 00664fa8  5d                   pop ebp
// 00664fa9  880413               mov byte ptr [ebx + edx], al
// 00664fac  5b                   pop ebx
// 00664fad  83c438               add esp, 0x38
// 00664fb0  c3                   ret 
// library jpeg-6b/jquant2.c (function _compute_color)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
