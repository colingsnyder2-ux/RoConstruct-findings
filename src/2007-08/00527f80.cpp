// from server: 100% by auto
// roc 2007-08 00527f80  unit: seg_00520000  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527f80
//
// 00527f80  83ec10               sub esp, 0x10
// 00527f83  8b442420             mov eax, dword ptr [esp + 0x20]
// 00527f87  8b08                 mov ecx, dword ptr [eax]
// 00527f89  8b542414             mov edx, dword ptr [esp + 0x14]
// 00527f8d  33c0                 xor eax, eax
// 00527f8f  398214010000         cmp dword ptr [edx + 0x114], eax
// 00527f95  894c240c             mov dword ptr [esp + 0xc], ecx
// 00527f99  0f8e1c010000         jle 0x5280bb
// 00527f9f  53                   push ebx
// 00527fa0  55                   push ebp
// 00527fa1  56                   push esi
// 00527fa2  8b742428             mov esi, dword ptr [esp + 0x28]
// 00527fa6  57                   push edi
// 00527fa7  89742430             mov dword ptr [esp + 0x30], esi
// 00527fab  eb03                 jmp 0x527fb0
// 00527fad  8d4900               lea ecx, [ecx]
// 00527fb0  33c9                 xor ecx, ecx
// 00527fb2  894c2414             mov dword ptr [esp + 0x14], ecx
// 00527fb6  85c9                 test ecx, ecx
// 00527fb8  8b2e                 mov ebp, dword ptr [esi]
// 00527fba  7505                 jne 0x527fc1
// 00527fbc  8b7efc               mov edi, dword ptr [esi - 4]
// 00527fbf  eb03                 jmp 0x527fc4
// 00527fc1  8b7e04               mov edi, dword ptr [esi + 4]
// 00527fc4  0fb67500             movzx esi, byte ptr [ebp]
// 00527fc8  0fb617               movzx edx, byte ptr [edi]
// 00527fcb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00527fcf  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00527fd2  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00527fd6  83c001               add eax, 1
// 00527fd9  83c501               add ebp, 1
// 00527fdc  89442418             mov dword ptr [esp + 0x18], eax
// 00527fe0  0fb64500             movzx eax, byte ptr [ebp]
// 00527fe4  8d3476               lea esi, [esi + esi*2]
// 00527fe7  03f2                 add esi, edx
// 00527fe9  0fb65701             movzx edx, byte ptr [edi + 1]
// 00527fed  83c701               add edi, 1
// 00527ff0  8d0440               lea eax, [eax + eax*2]
// 00527ff3  03c2                 add eax, edx
// 00527ff5  8d14b508000000       lea edx, [esi*4 + 8]
// 00527ffc  c1fa04               sar edx, 4
// 00527fff  8811                 mov byte ptr [ecx], dl
// 00528001  8d1470               lea edx, [eax + esi*2]
// 00528004  8d541607             lea edx, [esi + edx + 7]
// 00528008  83c101               add ecx, 1
// 0052800b  c1fa04               sar edx, 4
// 0052800e  8811                 mov byte ptr [ecx], dl
// 00528010  8b5b28               mov ebx, dword ptr [ebx + 0x28]
// 00528013  83c701               add edi, 1
// 00528016  83c501               add ebp, 1
// 00528019  83c101               add ecx, 1
// 0052801c  83eb02               sub ebx, 2
// 0052801f  8bd6                 mov edx, esi
// 00528021  8bf0                 mov esi, eax
// 00528023  895c2410             mov dword ptr [esp + 0x10], ebx
// 00528027  7442                 je 0x52806b
// 00528029  8da42400000000       lea esp, [esp]
// 00528030  0fb64500             movzx eax, byte ptr [ebp]
// 00528034  0fb61f               movzx ebx, byte ptr [edi]
// 00528037  8d0440               lea eax, [eax + eax*2]
// 0052803a  03c3                 add eax, ebx
// 0052803c  8d1c76               lea ebx, [esi + esi*2]
// 0052803f  8d541308             lea edx, [ebx + edx + 8]
// 00528043  c1fa04               sar edx, 4
// 00528046  8811                 mov byte ptr [ecx], dl
// 00528048  8d1476               lea edx, [esi + esi*2]
// 0052804b  8d540207             lea edx, [edx + eax + 7]
// 0052804f  83c101               add ecx, 1
// 00528052  c1fa04               sar edx, 4
// 00528055  8811                 mov byte ptr [ecx], dl
// 00528057  83c701               add edi, 1
// 0052805a  83c501               add ebp, 1
// 0052805d  83c101               add ecx, 1
// 00528060  836c241001           sub dword ptr [esp + 0x10], 1
// 00528065  8bd6                 mov edx, esi
// 00528067  8bf0                 mov esi, eax
// 00528069  75c5                 jne 0x528030
// 0052806b  8b742430             mov esi, dword ptr [esp + 0x30]
// 0052806f  8d1442               lea edx, [edx + eax*2]
// 00528072  8d541008             lea edx, [eax + edx + 8]
// 00528076  8d048507000000       lea eax, [eax*4 + 7]
// 0052807d  c1fa04               sar edx, 4
// 00528080  c1f804               sar eax, 4
// 00528083  8811                 mov byte ptr [ecx], dl
// 00528085  884101               mov byte ptr [ecx + 1], al
// 00528088  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052808c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00528090  83c101               add ecx, 1
// 00528093  83f902               cmp ecx, 2
// 00528096  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052809a  0f8c16ffffff         jl 0x527fb6
// 005280a0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005280a4  83c604               add esi, 4
// 005280a7  3b8114010000         cmp eax, dword ptr [ecx + 0x114]
// 005280ad  89742430             mov dword ptr [esp + 0x30], esi
// 005280b1  0f8cf9feffff         jl 0x527fb0
// 005280b7  5f                   pop edi
// 005280b8  5e                   pop esi
// 005280b9  5d                   pop ebp
// 005280ba  5b                   pop ebx
// 005280bb  83c410               add esp, 0x10
// 005280be  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_fancy_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
