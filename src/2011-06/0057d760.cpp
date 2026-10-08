// from server: 100% by auto
// roc 2011-06 0057d760  unit: seg_00570000  size: 883 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057d760
//
// 0057d760  81ec18010000         sub esp, 0x118
// 0057d766  8b84241c010000       mov eax, dword ptr [esp + 0x11c]
// 0057d76d  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 0057d773  8b4808               mov ecx, dword ptr [eax + 8]
// 0057d776  8b942420010000       mov edx, dword ptr [esp + 0x120]
// 0057d77d  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057d781  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 0057d784  8b44880c             mov eax, dword ptr [eax + ecx*4 + 0xc]
// 0057d788  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 0057d78f  85c9                 test ecx, ecx
// 0057d791  0f8635030000         jbe 0x57dacc
// 0057d797  8b94242c010000       mov edx, dword ptr [esp + 0x12c]
// 0057d79e  53                   push ebx
// 0057d79f  8b9c2434010000       mov ebx, dword ptr [esp + 0x134]
// 0057d7a6  55                   push ebp
// 0057d7a7  56                   push esi
// 0057d7a8  8bb42430010000       mov esi, dword ptr [esp + 0x130]
// 0057d7af  8d549608             lea edx, [esi + edx*4 + 8]
// 0057d7b3  89542420             mov dword ptr [esp + 0x20], edx
// 0057d7b7  8d5008               lea edx, [eax + 8]
// 0057d7ba  89542410             mov dword ptr [esp + 0x10], edx
// 0057d7be  8d542424             lea edx, [esp + 0x24]
// 0057d7c2  2bd0                 sub edx, eax
// 0057d7c4  89542414             mov dword ptr [esp + 0x14], edx
// 0057d7c8  57                   push edi
// 0057d7c9  8bbc2438010000       mov edi, dword ptr [esp + 0x138]
// 0057d7d0  8d54242c             lea edx, [esp + 0x2c]
// 0057d7d4  2bd0                 sub edx, eax
// 0057d7d6  89542420             mov dword ptr [esp + 0x20], edx
// 0057d7da  83c704               add edi, 4
// 0057d7dd  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057d7e1  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057d7e5  8d442428             lea eax, [esp + 0x28]
// 0057d7e9  be02000000           mov esi, 2
// 0057d7ee  8bff                 mov edi, edi
// 0057d7f0  8b4af8               mov ecx, dword ptr [edx - 8]
// 0057d7f3  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 0057d7f7  83c580               add ebp, -0x80
// 0057d7fa  8928                 mov dword ptr [eax], ebp
// 0057d7fc  03cb                 add ecx, ebx
// 0057d7fe  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d802  41                   inc ecx
// 0057d803  83c580               add ebp, -0x80
// 0057d806  896804               mov dword ptr [eax + 4], ebp
// 0057d809  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d80d  41                   inc ecx
// 0057d80e  83c580               add ebp, -0x80
// 0057d811  83c004               add eax, 4
// 0057d814  896804               mov dword ptr [eax + 4], ebp
// 0057d817  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d81b  41                   inc ecx
// 0057d81c  83c004               add eax, 4
// 0057d81f  83c580               add ebp, -0x80
// 0057d822  896804               mov dword ptr [eax + 4], ebp
// 0057d825  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d829  41                   inc ecx
// 0057d82a  83c004               add eax, 4
// 0057d82d  83c580               add ebp, -0x80
// 0057d830  896804               mov dword ptr [eax + 4], ebp
// 0057d833  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d837  41                   inc ecx
// 0057d838  83c004               add eax, 4
// 0057d83b  83c580               add ebp, -0x80
// 0057d83e  896804               mov dword ptr [eax + 4], ebp
// 0057d841  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d845  41                   inc ecx
// 0057d846  83c004               add eax, 4
// 0057d849  83c580               add ebp, -0x80
// 0057d84c  896804               mov dword ptr [eax + 4], ebp
// 0057d84f  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 0057d853  83c004               add eax, 4
// 0057d856  83c180               add ecx, -0x80
// 0057d859  894804               mov dword ptr [eax + 4], ecx
// 0057d85c  8b4afc               mov ecx, dword ptr [edx - 4]
// 0057d85f  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 0057d863  83c004               add eax, 4
// 0057d866  03cb                 add ecx, ebx
// 0057d868  83c580               add ebp, -0x80
// 0057d86b  896804               mov dword ptr [eax + 4], ebp
// 0057d86e  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d872  83c004               add eax, 4
// 0057d875  41                   inc ecx
// 0057d876  83c580               add ebp, -0x80
// 0057d879  896804               mov dword ptr [eax + 4], ebp
// 0057d87c  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d880  83c004               add eax, 4
// 0057d883  41                   inc ecx
// 0057d884  83c580               add ebp, -0x80
// 0057d887  896804               mov dword ptr [eax + 4], ebp
// 0057d88a  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d88e  83c004               add eax, 4
// 0057d891  41                   inc ecx
// 0057d892  83c580               add ebp, -0x80
// 0057d895  896804               mov dword ptr [eax + 4], ebp
// 0057d898  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d89c  83c004               add eax, 4
// 0057d89f  41                   inc ecx
// 0057d8a0  83c580               add ebp, -0x80
// 0057d8a3  896804               mov dword ptr [eax + 4], ebp
// 0057d8a6  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d8aa  83c004               add eax, 4
// 0057d8ad  41                   inc ecx
// 0057d8ae  83c004               add eax, 4
// 0057d8b1  83c580               add ebp, -0x80
// 0057d8b4  8928                 mov dword ptr [eax], ebp
// 0057d8b6  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d8ba  41                   inc ecx
// 0057d8bb  83c004               add eax, 4
// 0057d8be  83c580               add ebp, -0x80
// 0057d8c1  8928                 mov dword ptr [eax], ebp
// 0057d8c3  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 0057d8c7  83c180               add ecx, -0x80
// 0057d8ca  83c004               add eax, 4
// 0057d8cd  8908                 mov dword ptr [eax], ecx
// 0057d8cf  8b0a                 mov ecx, dword ptr [edx]
// 0057d8d1  83c004               add eax, 4
// 0057d8d4  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 0057d8d8  83c580               add ebp, -0x80
// 0057d8db  8928                 mov dword ptr [eax], ebp
// 0057d8dd  03cb                 add ecx, ebx
// 0057d8df  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d8e3  83c580               add ebp, -0x80
// 0057d8e6  896804               mov dword ptr [eax + 4], ebp
// 0057d8e9  41                   inc ecx
// 0057d8ea  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d8ee  83c004               add eax, 4
// 0057d8f1  41                   inc ecx
// 0057d8f2  83c580               add ebp, -0x80
// 0057d8f5  896804               mov dword ptr [eax + 4], ebp
// 0057d8f8  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d8fc  83c004               add eax, 4
// 0057d8ff  41                   inc ecx
// 0057d900  83c580               add ebp, -0x80
// 0057d903  896804               mov dword ptr [eax + 4], ebp
// 0057d906  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d90a  83c004               add eax, 4
// 0057d90d  41                   inc ecx
// 0057d90e  83c580               add ebp, -0x80
// 0057d911  896804               mov dword ptr [eax + 4], ebp
// 0057d914  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d918  83c004               add eax, 4
// 0057d91b  41                   inc ecx
// 0057d91c  83c580               add ebp, -0x80
// 0057d91f  896804               mov dword ptr [eax + 4], ebp
// 0057d922  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d926  83c004               add eax, 4
// 0057d929  41                   inc ecx
// 0057d92a  83c580               add ebp, -0x80
// 0057d92d  896804               mov dword ptr [eax + 4], ebp
// 0057d930  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 0057d934  83c004               add eax, 4
// 0057d937  83c180               add ecx, -0x80
// 0057d93a  894804               mov dword ptr [eax + 4], ecx
// 0057d93d  8b4a04               mov ecx, dword ptr [edx + 4]
// 0057d940  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 0057d944  83c004               add eax, 4
// 0057d947  03cb                 add ecx, ebx
// 0057d949  83c580               add ebp, -0x80
// 0057d94c  896804               mov dword ptr [eax + 4], ebp
// 0057d94f  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d953  83c004               add eax, 4
// 0057d956  41                   inc ecx
// 0057d957  83c580               add ebp, -0x80
// 0057d95a  896804               mov dword ptr [eax + 4], ebp
// 0057d95d  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d961  83c004               add eax, 4
// 0057d964  41                   inc ecx
// 0057d965  83c580               add ebp, -0x80
// 0057d968  896804               mov dword ptr [eax + 4], ebp
// 0057d96b  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d96f  83c004               add eax, 4
// 0057d972  41                   inc ecx
// 0057d973  83c580               add ebp, -0x80
// 0057d976  896804               mov dword ptr [eax + 4], ebp
// 0057d979  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d97d  83c004               add eax, 4
// 0057d980  41                   inc ecx
// 0057d981  83c004               add eax, 4
// 0057d984  83c580               add ebp, -0x80
// 0057d987  8928                 mov dword ptr [eax], ebp
// 0057d989  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d98d  41                   inc ecx
// 0057d98e  83c004               add eax, 4
// 0057d991  83c580               add ebp, -0x80
// 0057d994  8928                 mov dword ptr [eax], ebp
// 0057d996  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0057d99a  41                   inc ecx
// 0057d99b  83c004               add eax, 4
// 0057d99e  83c580               add ebp, -0x80
// 0057d9a1  8928                 mov dword ptr [eax], ebp
// 0057d9a3  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 0057d9a7  83c004               add eax, 4
// 0057d9aa  83c180               add ecx, -0x80
// 0057d9ad  8908                 mov dword ptr [eax], ecx
// 0057d9af  83c004               add eax, 4
// 0057d9b2  83c210               add edx, 0x10
// 0057d9b5  83ee01               sub esi, 1
// 0057d9b8  0f8532feffff         jne 0x57d7f0
// 0057d9be  8d542428             lea edx, [esp + 0x28]
// 0057d9c2  52                   push edx
// 0057d9c3  ff542420             call dword ptr [esp + 0x20]
// 0057d9c7  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057d9cb  83c404               add esp, 4
// 0057d9ce  33ed                 xor ebp, ebp
// 0057d9d0  8b4ef8               mov ecx, dword ptr [esi - 8]
// 0057d9d3  8b44ac28             mov eax, dword ptr [esp + ebp*4 + 0x28]
// 0057d9d7  8bd1                 mov edx, ecx
// 0057d9d9  d1fa                 sar edx, 1
// 0057d9db  85c0                 test eax, eax
// 0057d9dd  7d15                 jge 0x57d9f4
// 0057d9df  2bd0                 sub edx, eax
// 0057d9e1  3bd1                 cmp edx, ecx
// 0057d9e3  7c09                 jl 0x57d9ee
// 0057d9e5  8bc2                 mov eax, edx
// 0057d9e7  99                   cdq 
// 0057d9e8  f7f9                 idiv ecx
// 0057d9ea  f7d8                 neg eax
// 0057d9ec  eb13                 jmp 0x57da01
// 0057d9ee  33c0                 xor eax, eax
// 0057d9f0  f7d8                 neg eax
// 0057d9f2  eb0d                 jmp 0x57da01
// 0057d9f4  03c2                 add eax, edx
// 0057d9f6  3bc1                 cmp eax, ecx
// 0057d9f8  7c05                 jl 0x57d9ff
// 0057d9fa  99                   cdq 
// 0057d9fb  f7f9                 idiv ecx
// 0057d9fd  eb02                 jmp 0x57da01
// 0057d9ff  33c0                 xor eax, eax
// 0057da01  668947fc             mov word ptr [edi - 4], ax
// 0057da05  8b4efc               mov ecx, dword ptr [esi - 4]
// 0057da08  8b44ac2c             mov eax, dword ptr [esp + ebp*4 + 0x2c]
// 0057da0c  8bd1                 mov edx, ecx
// 0057da0e  d1fa                 sar edx, 1
// 0057da10  85c0                 test eax, eax
// 0057da12  7d15                 jge 0x57da29
// 0057da14  2bd0                 sub edx, eax
// 0057da16  3bd1                 cmp edx, ecx
// 0057da18  7c09                 jl 0x57da23
// 0057da1a  8bc2                 mov eax, edx
// 0057da1c  99                   cdq 
// 0057da1d  f7f9                 idiv ecx
// 0057da1f  f7d8                 neg eax
// 0057da21  eb13                 jmp 0x57da36
// 0057da23  33c0                 xor eax, eax
// 0057da25  f7d8                 neg eax
// 0057da27  eb0d                 jmp 0x57da36
// 0057da29  03c2                 add eax, edx
// 0057da2b  3bc1                 cmp eax, ecx
// 0057da2d  7c05                 jl 0x57da34
// 0057da2f  99                   cdq 
// 0057da30  f7f9                 idiv ecx
// 0057da32  eb02                 jmp 0x57da36
// 0057da34  33c0                 xor eax, eax
// 0057da36  668947fe             mov word ptr [edi - 2], ax
// 0057da3a  8b0e                 mov ecx, dword ptr [esi]
// 0057da3c  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057da40  8b0406               mov eax, dword ptr [esi + eax]
// 0057da43  8bd1                 mov edx, ecx
// 0057da45  d1fa                 sar edx, 1
// 0057da47  85c0                 test eax, eax
// 0057da49  7d15                 jge 0x57da60
// 0057da4b  2bd0                 sub edx, eax
// 0057da4d  3bd1                 cmp edx, ecx
// 0057da4f  7c09                 jl 0x57da5a
// 0057da51  8bc2                 mov eax, edx
// 0057da53  99                   cdq 
// 0057da54  f7f9                 idiv ecx
// 0057da56  f7d8                 neg eax
// 0057da58  eb13                 jmp 0x57da6d
// 0057da5a  33c0                 xor eax, eax
// 0057da5c  f7d8                 neg eax
// 0057da5e  eb0d                 jmp 0x57da6d
// 0057da60  03c2                 add eax, edx
// 0057da62  3bc1                 cmp eax, ecx
// 0057da64  7c05                 jl 0x57da6b
// 0057da66  99                   cdq 
// 0057da67  f7f9                 idiv ecx
// 0057da69  eb02                 jmp 0x57da6d
// 0057da6b  33c0                 xor eax, eax
// 0057da6d  668907               mov word ptr [edi], ax
// 0057da70  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057da73  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057da77  8b0406               mov eax, dword ptr [esi + eax]
// 0057da7a  8bd1                 mov edx, ecx
// 0057da7c  d1fa                 sar edx, 1
// 0057da7e  85c0                 test eax, eax
// 0057da80  7d15                 jge 0x57da97
// 0057da82  2bd0                 sub edx, eax
// 0057da84  3bd1                 cmp edx, ecx
// 0057da86  7c09                 jl 0x57da91
// 0057da88  8bc2                 mov eax, edx
// 0057da8a  99                   cdq 
// 0057da8b  f7f9                 idiv ecx
// 0057da8d  f7d8                 neg eax
// 0057da8f  eb13                 jmp 0x57daa4
// 0057da91  33c0                 xor eax, eax
// 0057da93  f7d8                 neg eax
// 0057da95  eb0d                 jmp 0x57daa4
// 0057da97  03c2                 add eax, edx
// 0057da99  3bc1                 cmp eax, ecx
// 0057da9b  7c05                 jl 0x57daa2
// 0057da9d  99                   cdq 
// 0057da9e  f7f9                 idiv ecx
// 0057daa0  eb02                 jmp 0x57daa4
// 0057daa2  33c0                 xor eax, eax
// 0057daa4  66894702             mov word ptr [edi + 2], ax
// 0057daa8  83c504               add ebp, 4
// 0057daab  83c708               add edi, 8
// 0057daae  83c610               add esi, 0x10
// 0057dab1  83fd40               cmp ebp, 0x40
// 0057dab4  0f8c16ffffff         jl 0x57d9d0
// 0057daba  83c308               add ebx, 8
// 0057dabd  836c241001           sub dword ptr [esp + 0x10], 1
// 0057dac2  0f8519fdffff         jne 0x57d7e1
// 0057dac8  5f                   pop edi
// 0057dac9  5e                   pop esi
// 0057daca  5d                   pop ebp
// 0057dacb  5b                   pop ebx
// 0057dacc  81c418010000         add esp, 0x118
// 0057dad2  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _forward_DCT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
