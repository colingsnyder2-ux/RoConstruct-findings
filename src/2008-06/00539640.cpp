// from server: 100% by auto
// roc 2008-06 00539640  unit: seg_00530000  size: 883 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00539640
//
// 00539640  81ec18010000         sub esp, 0x118
// 00539646  8b84241c010000       mov eax, dword ptr [esp + 0x11c]
// 0053964d  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 00539653  8b4808               mov ecx, dword ptr [eax + 8]
// 00539656  8b942420010000       mov edx, dword ptr [esp + 0x120]
// 0053965d  894c240c             mov dword ptr [esp + 0xc], ecx
// 00539661  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 00539664  8b44880c             mov eax, dword ptr [eax + ecx*4 + 0xc]
// 00539668  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 0053966f  85c9                 test ecx, ecx
// 00539671  0f8635030000         jbe 0x5399ac
// 00539677  8b94242c010000       mov edx, dword ptr [esp + 0x12c]
// 0053967e  53                   push ebx
// 0053967f  8b9c2434010000       mov ebx, dword ptr [esp + 0x134]
// 00539686  55                   push ebp
// 00539687  56                   push esi
// 00539688  8bb42430010000       mov esi, dword ptr [esp + 0x130]
// 0053968f  8d549608             lea edx, [esi + edx*4 + 8]
// 00539693  89542420             mov dword ptr [esp + 0x20], edx
// 00539697  8d5008               lea edx, [eax + 8]
// 0053969a  89542410             mov dword ptr [esp + 0x10], edx
// 0053969e  8d542424             lea edx, [esp + 0x24]
// 005396a2  2bd0                 sub edx, eax
// 005396a4  89542414             mov dword ptr [esp + 0x14], edx
// 005396a8  57                   push edi
// 005396a9  8bbc2438010000       mov edi, dword ptr [esp + 0x138]
// 005396b0  8d54242c             lea edx, [esp + 0x2c]
// 005396b4  2bd0                 sub edx, eax
// 005396b6  89542420             mov dword ptr [esp + 0x20], edx
// 005396ba  83c704               add edi, 4
// 005396bd  894c2410             mov dword ptr [esp + 0x10], ecx
// 005396c1  8b542424             mov edx, dword ptr [esp + 0x24]
// 005396c5  8d442428             lea eax, [esp + 0x28]
// 005396c9  be02000000           mov esi, 2
// 005396ce  8bff                 mov edi, edi
// 005396d0  8b4af8               mov ecx, dword ptr [edx - 8]
// 005396d3  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 005396d7  83c580               add ebp, -0x80
// 005396da  8928                 mov dword ptr [eax], ebp
// 005396dc  03cb                 add ecx, ebx
// 005396de  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005396e2  41                   inc ecx
// 005396e3  83c580               add ebp, -0x80
// 005396e6  896804               mov dword ptr [eax + 4], ebp
// 005396e9  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005396ed  41                   inc ecx
// 005396ee  83c580               add ebp, -0x80
// 005396f1  83c004               add eax, 4
// 005396f4  896804               mov dword ptr [eax + 4], ebp
// 005396f7  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005396fb  41                   inc ecx
// 005396fc  83c004               add eax, 4
// 005396ff  83c580               add ebp, -0x80
// 00539702  896804               mov dword ptr [eax + 4], ebp
// 00539705  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00539709  41                   inc ecx
// 0053970a  83c004               add eax, 4
// 0053970d  83c580               add ebp, -0x80
// 00539710  896804               mov dword ptr [eax + 4], ebp
// 00539713  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00539717  41                   inc ecx
// 00539718  83c004               add eax, 4
// 0053971b  83c580               add ebp, -0x80
// 0053971e  896804               mov dword ptr [eax + 4], ebp
// 00539721  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00539725  41                   inc ecx
// 00539726  83c004               add eax, 4
// 00539729  83c580               add ebp, -0x80
// 0053972c  896804               mov dword ptr [eax + 4], ebp
// 0053972f  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00539733  83c004               add eax, 4
// 00539736  83c180               add ecx, -0x80
// 00539739  894804               mov dword ptr [eax + 4], ecx
// 0053973c  8b4afc               mov ecx, dword ptr [edx - 4]
// 0053973f  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00539743  83c004               add eax, 4
// 00539746  03cb                 add ecx, ebx
// 00539748  83c580               add ebp, -0x80
// 0053974b  896804               mov dword ptr [eax + 4], ebp
// 0053974e  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00539752  83c004               add eax, 4
// 00539755  41                   inc ecx
// 00539756  83c580               add ebp, -0x80
// 00539759  896804               mov dword ptr [eax + 4], ebp
// 0053975c  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00539760  83c004               add eax, 4
// 00539763  41                   inc ecx
// 00539764  83c580               add ebp, -0x80
// 00539767  896804               mov dword ptr [eax + 4], ebp
// 0053976a  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0053976e  83c004               add eax, 4
// 00539771  41                   inc ecx
// 00539772  83c580               add ebp, -0x80
// 00539775  896804               mov dword ptr [eax + 4], ebp
// 00539778  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0053977c  83c004               add eax, 4
// 0053977f  41                   inc ecx
// 00539780  83c580               add ebp, -0x80
// 00539783  896804               mov dword ptr [eax + 4], ebp
// 00539786  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0053978a  83c004               add eax, 4
// 0053978d  41                   inc ecx
// 0053978e  83c004               add eax, 4
// 00539791  83c580               add ebp, -0x80
// 00539794  8928                 mov dword ptr [eax], ebp
// 00539796  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0053979a  41                   inc ecx
// 0053979b  83c004               add eax, 4
// 0053979e  83c580               add ebp, -0x80
// 005397a1  8928                 mov dword ptr [eax], ebp
// 005397a3  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 005397a7  83c180               add ecx, -0x80
// 005397aa  83c004               add eax, 4
// 005397ad  8908                 mov dword ptr [eax], ecx
// 005397af  8b0a                 mov ecx, dword ptr [edx]
// 005397b1  83c004               add eax, 4
// 005397b4  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 005397b8  83c580               add ebp, -0x80
// 005397bb  8928                 mov dword ptr [eax], ebp
// 005397bd  03cb                 add ecx, ebx
// 005397bf  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005397c3  83c580               add ebp, -0x80
// 005397c6  896804               mov dword ptr [eax + 4], ebp
// 005397c9  41                   inc ecx
// 005397ca  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005397ce  83c004               add eax, 4
// 005397d1  41                   inc ecx
// 005397d2  83c580               add ebp, -0x80
// 005397d5  896804               mov dword ptr [eax + 4], ebp
// 005397d8  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005397dc  83c004               add eax, 4
// 005397df  41                   inc ecx
// 005397e0  83c580               add ebp, -0x80
// 005397e3  896804               mov dword ptr [eax + 4], ebp
// 005397e6  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005397ea  83c004               add eax, 4
// 005397ed  41                   inc ecx
// 005397ee  83c580               add ebp, -0x80
// 005397f1  896804               mov dword ptr [eax + 4], ebp
// 005397f4  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005397f8  83c004               add eax, 4
// 005397fb  41                   inc ecx
// 005397fc  83c580               add ebp, -0x80
// 005397ff  896804               mov dword ptr [eax + 4], ebp
// 00539802  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00539806  83c004               add eax, 4
// 00539809  41                   inc ecx
// 0053980a  83c580               add ebp, -0x80
// 0053980d  896804               mov dword ptr [eax + 4], ebp
// 00539810  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00539814  83c004               add eax, 4
// 00539817  83c180               add ecx, -0x80
// 0053981a  894804               mov dword ptr [eax + 4], ecx
// 0053981d  8b4a04               mov ecx, dword ptr [edx + 4]
// 00539820  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00539824  83c004               add eax, 4
// 00539827  03cb                 add ecx, ebx
// 00539829  83c580               add ebp, -0x80
// 0053982c  896804               mov dword ptr [eax + 4], ebp
// 0053982f  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00539833  83c004               add eax, 4
// 00539836  41                   inc ecx
// 00539837  83c580               add ebp, -0x80
// 0053983a  896804               mov dword ptr [eax + 4], ebp
// 0053983d  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00539841  83c004               add eax, 4
// 00539844  41                   inc ecx
// 00539845  83c580               add ebp, -0x80
// 00539848  896804               mov dword ptr [eax + 4], ebp
// 0053984b  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0053984f  83c004               add eax, 4
// 00539852  41                   inc ecx
// 00539853  83c580               add ebp, -0x80
// 00539856  896804               mov dword ptr [eax + 4], ebp
// 00539859  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0053985d  83c004               add eax, 4
// 00539860  41                   inc ecx
// 00539861  83c004               add eax, 4
// 00539864  83c580               add ebp, -0x80
// 00539867  8928                 mov dword ptr [eax], ebp
// 00539869  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0053986d  41                   inc ecx
// 0053986e  83c004               add eax, 4
// 00539871  83c580               add ebp, -0x80
// 00539874  8928                 mov dword ptr [eax], ebp
// 00539876  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0053987a  41                   inc ecx
// 0053987b  83c004               add eax, 4
// 0053987e  83c580               add ebp, -0x80
// 00539881  8928                 mov dword ptr [eax], ebp
// 00539883  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00539887  83c004               add eax, 4
// 0053988a  83c180               add ecx, -0x80
// 0053988d  8908                 mov dword ptr [eax], ecx
// 0053988f  83c004               add eax, 4
// 00539892  83c210               add edx, 0x10
// 00539895  83ee01               sub esi, 1
// 00539898  0f8532feffff         jne 0x5396d0
// 0053989e  8d542428             lea edx, [esp + 0x28]
// 005398a2  52                   push edx
// 005398a3  ff542420             call dword ptr [esp + 0x20]
// 005398a7  8b742418             mov esi, dword ptr [esp + 0x18]
// 005398ab  83c404               add esp, 4
// 005398ae  33ed                 xor ebp, ebp
// 005398b0  8b4ef8               mov ecx, dword ptr [esi - 8]
// 005398b3  8b44ac28             mov eax, dword ptr [esp + ebp*4 + 0x28]
// 005398b7  8bd1                 mov edx, ecx
// 005398b9  d1fa                 sar edx, 1
// 005398bb  85c0                 test eax, eax
// 005398bd  7d15                 jge 0x5398d4
// 005398bf  2bd0                 sub edx, eax
// 005398c1  3bd1                 cmp edx, ecx
// 005398c3  7c09                 jl 0x5398ce
// 005398c5  8bc2                 mov eax, edx
// 005398c7  99                   cdq 
// 005398c8  f7f9                 idiv ecx
// 005398ca  f7d8                 neg eax
// 005398cc  eb13                 jmp 0x5398e1
// 005398ce  33c0                 xor eax, eax
// 005398d0  f7d8                 neg eax
// 005398d2  eb0d                 jmp 0x5398e1
// 005398d4  03c2                 add eax, edx
// 005398d6  3bc1                 cmp eax, ecx
// 005398d8  7c05                 jl 0x5398df
// 005398da  99                   cdq 
// 005398db  f7f9                 idiv ecx
// 005398dd  eb02                 jmp 0x5398e1
// 005398df  33c0                 xor eax, eax
// 005398e1  668947fc             mov word ptr [edi - 4], ax
// 005398e5  8b4efc               mov ecx, dword ptr [esi - 4]
// 005398e8  8b44ac2c             mov eax, dword ptr [esp + ebp*4 + 0x2c]
// 005398ec  8bd1                 mov edx, ecx
// 005398ee  d1fa                 sar edx, 1
// 005398f0  85c0                 test eax, eax
// 005398f2  7d15                 jge 0x539909
// 005398f4  2bd0                 sub edx, eax
// 005398f6  3bd1                 cmp edx, ecx
// 005398f8  7c09                 jl 0x539903
// 005398fa  8bc2                 mov eax, edx
// 005398fc  99                   cdq 
// 005398fd  f7f9                 idiv ecx
// 005398ff  f7d8                 neg eax
// 00539901  eb13                 jmp 0x539916
// 00539903  33c0                 xor eax, eax
// 00539905  f7d8                 neg eax
// 00539907  eb0d                 jmp 0x539916
// 00539909  03c2                 add eax, edx
// 0053990b  3bc1                 cmp eax, ecx
// 0053990d  7c05                 jl 0x539914
// 0053990f  99                   cdq 
// 00539910  f7f9                 idiv ecx
// 00539912  eb02                 jmp 0x539916
// 00539914  33c0                 xor eax, eax
// 00539916  668947fe             mov word ptr [edi - 2], ax
// 0053991a  8b0e                 mov ecx, dword ptr [esi]
// 0053991c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00539920  8b0406               mov eax, dword ptr [esi + eax]
// 00539923  8bd1                 mov edx, ecx
// 00539925  d1fa                 sar edx, 1
// 00539927  85c0                 test eax, eax
// 00539929  7d15                 jge 0x539940
// 0053992b  2bd0                 sub edx, eax
// 0053992d  3bd1                 cmp edx, ecx
// 0053992f  7c09                 jl 0x53993a
// 00539931  8bc2                 mov eax, edx
// 00539933  99                   cdq 
// 00539934  f7f9                 idiv ecx
// 00539936  f7d8                 neg eax
// 00539938  eb13                 jmp 0x53994d
// 0053993a  33c0                 xor eax, eax
// 0053993c  f7d8                 neg eax
// 0053993e  eb0d                 jmp 0x53994d
// 00539940  03c2                 add eax, edx
// 00539942  3bc1                 cmp eax, ecx
// 00539944  7c05                 jl 0x53994b
// 00539946  99                   cdq 
// 00539947  f7f9                 idiv ecx
// 00539949  eb02                 jmp 0x53994d
// 0053994b  33c0                 xor eax, eax
// 0053994d  668907               mov word ptr [edi], ax
// 00539950  8b4e04               mov ecx, dword ptr [esi + 4]
// 00539953  8b442420             mov eax, dword ptr [esp + 0x20]
// 00539957  8b0406               mov eax, dword ptr [esi + eax]
// 0053995a  8bd1                 mov edx, ecx
// 0053995c  d1fa                 sar edx, 1
// 0053995e  85c0                 test eax, eax
// 00539960  7d15                 jge 0x539977
// 00539962  2bd0                 sub edx, eax
// 00539964  3bd1                 cmp edx, ecx
// 00539966  7c09                 jl 0x539971
// 00539968  8bc2                 mov eax, edx
// 0053996a  99                   cdq 
// 0053996b  f7f9                 idiv ecx
// 0053996d  f7d8                 neg eax
// 0053996f  eb13                 jmp 0x539984
// 00539971  33c0                 xor eax, eax
// 00539973  f7d8                 neg eax
// 00539975  eb0d                 jmp 0x539984
// 00539977  03c2                 add eax, edx
// 00539979  3bc1                 cmp eax, ecx
// 0053997b  7c05                 jl 0x539982
// 0053997d  99                   cdq 
// 0053997e  f7f9                 idiv ecx
// 00539980  eb02                 jmp 0x539984
// 00539982  33c0                 xor eax, eax
// 00539984  66894702             mov word ptr [edi + 2], ax
// 00539988  83c504               add ebp, 4
// 0053998b  83c708               add edi, 8
// 0053998e  83c610               add esi, 0x10
// 00539991  83fd40               cmp ebp, 0x40
// 00539994  0f8c16ffffff         jl 0x5398b0
// 0053999a  83c308               add ebx, 8
// 0053999d  836c241001           sub dword ptr [esp + 0x10], 1
// 005399a2  0f8519fdffff         jne 0x5396c1
// 005399a8  5f                   pop edi
// 005399a9  5e                   pop esi
// 005399aa  5d                   pop ebp
// 005399ab  5b                   pop ebx
// 005399ac  81c418010000         add esp, 0x118
// 005399b2  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _forward_DCT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
