// from server: 100% by auto
// roc 2012-06 00661ca0  unit: seg_00660000  size: 1042 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00661ca0
//
// 00661ca0  83ec3c               sub esp, 0x3c
// 00661ca3  56                   push esi
// 00661ca4  8b742444             mov esi, dword ptr [esp + 0x44]
// 00661ca8  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 00661caf  57                   push edi
// 00661cb0  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00661cb6  897c2418             mov dword ptr [esp + 0x18], edi
// 00661cba  7415                 je 0x661cd1
// 00661cbc  837f2400             cmp dword ptr [edi + 0x24], 0
// 00661cc0  750f                 jne 0x661cd1
// 00661cc2  e859ffffff           call 0x661c20
// 00661cc7  84c0                 test al, al
// 00661cc9  7506                 jne 0x661cd1
// 00661ccb  5f                   pop edi
// 00661ccc  5e                   pop esi
// 00661ccd  83c43c               add esp, 0x3c
// 00661cd0  c3                   ret 
// 00661cd1  807f0800             cmp byte ptr [edi + 8], 0
// 00661cd5  53                   push ebx
// 00661cd6  55                   push ebp
// 00661cd7  0f85be030000         jne 0x66209b
// 00661cdd  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 00661ce4  8b4618               mov eax, dword ptr [esi + 0x18]
// 00661ce7  8b08                 mov ecx, dword ptr [eax]
// 00661ce9  8b5004               mov edx, dword ptr [eax + 4]
// 00661cec  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 00661cef  8b4710               mov eax, dword ptr [edi + 0x10]
// 00661cf2  894c2438             mov dword ptr [esp + 0x38], ecx
// 00661cf6  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00661cf9  8954243c             mov dword ptr [esp + 0x3c], edx
// 00661cfd  8b5718               mov edx, dword ptr [edi + 0x18]
// 00661d00  894c2428             mov dword ptr [esp + 0x28], ecx
// 00661d04  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00661d07  8954242c             mov dword ptr [esp + 0x2c], edx
// 00661d0b  8b5720               mov edx, dword ptr [edi + 0x20]
// 00661d0e  89742448             mov dword ptr [esp + 0x48], esi
// 00661d12  894c2430             mov dword ptr [esp + 0x30], ecx
// 00661d16  89542434             mov dword ptr [esp + 0x34], edx
// 00661d1a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00661d22  0f8e3e030000         jle 0x662066
// 00661d28  81c644010000         add esi, 0x144
// 00661d2e  8d4f70               lea ecx, [edi + 0x70]
// 00661d31  8974241c             mov dword ptr [esp + 0x1c], esi
// 00661d35  894c2418             mov dword ptr [esp + 0x18], ecx
// 00661d39  eb09                 jmp 0x661d44
// 00661d3b  eb03                 jmp 0x661d40
// 00661d3d  8d4900               lea ecx, [ecx]
// 00661d40  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00661d44  83f808               cmp eax, 8
// 00661d47  8b542454             mov edx, dword ptr [esp + 0x54]
// 00661d4b  8b742410             mov esi, dword ptr [esp + 0x10]
// 00661d4f  8b34b2               mov esi, dword ptr [edx + esi*4]
// 00661d52  8b29                 mov ebp, dword ptr [ecx]
// 00661d54  8b79d8               mov edi, dword ptr [ecx - 0x28]
// 00661d57  89742424             mov dword ptr [esp + 0x24], esi
// 00661d5b  896c2414             mov dword ptr [esp + 0x14], ebp
// 00661d5f  7d2d                 jge 0x661d8e
// 00661d61  6a00                 push 0
// 00661d63  50                   push eax
// 00661d64  8d442440             lea eax, [esp + 0x40]
// 00661d68  53                   push ebx
// 00661d69  50                   push eax
// 00661d6a  e8b1fcffff           call 0x661a20
// 00661d6f  83c410               add esp, 0x10
// 00661d72  84c0                 test al, al
// 00661d74  0f842e030000         je 0x6620a8
// 00661d7a  8b442444             mov eax, dword ptr [esp + 0x44]
// 00661d7e  83f808               cmp eax, 8
// 00661d81  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00661d85  7d07                 jge 0x661d8e
// 00661d87  b901000000           mov ecx, 1
// 00661d8c  eb29                 jmp 0x661db7
// 00661d8e  8d48f8               lea ecx, [eax - 8]
// 00661d91  8bd3                 mov edx, ebx
// 00661d93  d3fa                 sar edx, cl
// 00661d95  81e2ff000000         and edx, 0xff
// 00661d9b  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 00661da2  85c9                 test ecx, ecx
// 00661da4  740c                 je 0x661db2
// 00661da6  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 00661dae  2bc1                 sub eax, ecx
// 00661db0  eb28                 jmp 0x661dda
// 00661db2  b909000000           mov ecx, 9
// 00661db7  51                   push ecx
// 00661db8  57                   push edi
// 00661db9  50                   push eax
// 00661dba  8d4c2444             lea ecx, [esp + 0x44]
// 00661dbe  53                   push ebx
// 00661dbf  51                   push ecx
// 00661dc0  e87bfdffff           call 0x661b40
// 00661dc5  8bf8                 mov edi, eax
// 00661dc7  83c414               add esp, 0x14
// 00661dca  85ff                 test edi, edi
// 00661dcc  0f8cd6020000         jl 0x6620a8
// 00661dd2  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00661dd6  8b442444             mov eax, dword ptr [esp + 0x44]
// 00661dda  85ff                 test edi, edi
// 00661ddc  7452                 je 0x661e30
// 00661dde  3bc7                 cmp eax, edi
// 00661de0  7d20                 jge 0x661e02
// 00661de2  57                   push edi
// 00661de3  50                   push eax
// 00661de4  8d542440             lea edx, [esp + 0x40]
// 00661de8  53                   push ebx
// 00661de9  52                   push edx
// 00661dea  e831fcffff           call 0x661a20
// 00661def  83c410               add esp, 0x10
// 00661df2  84c0                 test al, al
// 00661df4  0f84ae020000         je 0x6620a8
// 00661dfa  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00661dfe  8b442444             mov eax, dword ptr [esp + 0x44]
// 00661e02  8bcf                 mov ecx, edi
// 00661e04  2bc7                 sub eax, edi
// 00661e06  ba01000000           mov edx, 1
// 00661e0b  d3e2                 shl edx, cl
// 00661e0d  8beb                 mov ebp, ebx
// 00661e0f  8bc8                 mov ecx, eax
// 00661e11  d3fd                 sar ebp, cl
// 00661e13  4a                   dec edx
// 00661e14  23d5                 and edx, ebp
// 00661e16  3b14bdd8bdb800       cmp edx, dword ptr [edi*4 + 0xb8bdd8]
// 00661e1d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00661e21  7d0b                 jge 0x661e2e
// 00661e23  8b3cbd18beb800       mov edi, dword ptr [edi*4 + 0xb8be18]
// 00661e2a  03fa                 add edi, edx
// 00661e2c  eb02                 jmp 0x661e30
// 00661e2e  8bfa                 mov edi, edx
// 00661e30  8b542410             mov edx, dword ptr [esp + 0x10]
// 00661e34  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00661e38  80bc0a9800000000     cmp byte ptr [edx + ecx + 0x98], 0
// 00661e40  7413                 je 0x661e55
// 00661e42  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00661e46  8b09                 mov ecx, dword ptr [ecx]
// 00661e48  017c8c28             add dword ptr [esp + ecx*4 + 0x28], edi
// 00661e4c  8d4c8c28             lea ecx, [esp + ecx*4 + 0x28]
// 00661e50  8b09                 mov ecx, dword ptr [ecx]
// 00661e52  66890e               mov word ptr [esi], cx
// 00661e55  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00661e59  80bc0aa200000000     cmp byte ptr [edx + ecx + 0xa2], 0
// 00661e61  be01000000           mov esi, 1
// 00661e66  0f840b010000         je 0x661f77
// 00661e6c  8d642400             lea esp, [esp]
// 00661e70  83f808               cmp eax, 8
// 00661e73  7d2d                 jge 0x661ea2
// 00661e75  6a00                 push 0
// 00661e77  50                   push eax
// 00661e78  8d542440             lea edx, [esp + 0x40]
// 00661e7c  53                   push ebx
// 00661e7d  52                   push edx
// 00661e7e  e89dfbffff           call 0x661a20
// 00661e83  83c410               add esp, 0x10
// 00661e86  84c0                 test al, al
// 00661e88  0f841a020000         je 0x6620a8
// 00661e8e  8b442444             mov eax, dword ptr [esp + 0x44]
// 00661e92  83f808               cmp eax, 8
// 00661e95  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00661e99  7d07                 jge 0x661ea2
// 00661e9b  b901000000           mov ecx, 1
// 00661ea0  eb29                 jmp 0x661ecb
// 00661ea2  8d48f8               lea ecx, [eax - 8]
// 00661ea5  8bd3                 mov edx, ebx
// 00661ea7  d3fa                 sar edx, cl
// 00661ea9  81e2ff000000         and edx, 0xff
// 00661eaf  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 00661eb6  85c9                 test ecx, ecx
// 00661eb8  740c                 je 0x661ec6
// 00661eba  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 00661ec2  2bc1                 sub eax, ecx
// 00661ec4  eb28                 jmp 0x661eee
// 00661ec6  b909000000           mov ecx, 9
// 00661ecb  51                   push ecx
// 00661ecc  55                   push ebp
// 00661ecd  50                   push eax
// 00661ece  8d442444             lea eax, [esp + 0x44]
// 00661ed2  53                   push ebx
// 00661ed3  50                   push eax
// 00661ed4  e867fcffff           call 0x661b40
// 00661ed9  8bf8                 mov edi, eax
// 00661edb  83c414               add esp, 0x14
// 00661ede  85ff                 test edi, edi
// 00661ee0  0f8cc2010000         jl 0x6620a8
// 00661ee6  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00661eea  8b442444             mov eax, dword ptr [esp + 0x44]
// 00661eee  8bcf                 mov ecx, edi
// 00661ef0  c1f904               sar ecx, 4
// 00661ef3  83e70f               and edi, 0xf
// 00661ef6  7465                 je 0x661f5d
// 00661ef8  03f1                 add esi, ecx
// 00661efa  3bc7                 cmp eax, edi
// 00661efc  7d20                 jge 0x661f1e
// 00661efe  57                   push edi
// 00661eff  50                   push eax
// 00661f00  8d4c2440             lea ecx, [esp + 0x40]
// 00661f04  53                   push ebx
// 00661f05  51                   push ecx
// 00661f06  e815fbffff           call 0x661a20
// 00661f0b  83c410               add esp, 0x10
// 00661f0e  84c0                 test al, al
// 00661f10  0f8492010000         je 0x6620a8
// 00661f16  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00661f1a  8b442444             mov eax, dword ptr [esp + 0x44]
// 00661f1e  8bcf                 mov ecx, edi
// 00661f20  2bc7                 sub eax, edi
// 00661f22  ba01000000           mov edx, 1
// 00661f27  d3e2                 shl edx, cl
// 00661f29  8beb                 mov ebp, ebx
// 00661f2b  8bc8                 mov ecx, eax
// 00661f2d  d3fd                 sar ebp, cl
// 00661f2f  4a                   dec edx
// 00661f30  23d5                 and edx, ebp
// 00661f32  3b14bdd8bdb800       cmp edx, dword ptr [edi*4 + 0xb8bdd8]
// 00661f39  7d0b                 jge 0x661f46
// 00661f3b  8b3cbd18beb800       mov edi, dword ptr [edi*4 + 0xb8be18]
// 00661f42  03fa                 add edi, edx
// 00661f44  eb02                 jmp 0x661f48
// 00661f46  8bfa                 mov edi, edx
// 00661f48  8b14b54097b800       mov edx, dword ptr [esi*4 + 0xb89740]
// 00661f4f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00661f53  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00661f57  66893c51             mov word ptr [ecx + edx*2], di
// 00661f5b  eb0b                 jmp 0x661f68
// 00661f5d  83f90f               cmp ecx, 0xf
// 00661f60  0f85d4000000         jne 0x66203a
// 00661f66  03f1                 add esi, ecx
// 00661f68  46                   inc esi
// 00661f69  83fe40               cmp esi, 0x40
// 00661f6c  0f8cfefeffff         jl 0x661e70
// 00661f72  e9c3000000           jmp 0x66203a
// 00661f77  83f808               cmp eax, 8
// 00661f7a  7d2d                 jge 0x661fa9
// 00661f7c  6a00                 push 0
// 00661f7e  50                   push eax
// 00661f7f  8d542440             lea edx, [esp + 0x40]
// 00661f83  53                   push ebx
// 00661f84  52                   push edx
// 00661f85  e896faffff           call 0x661a20
// 00661f8a  83c410               add esp, 0x10
// 00661f8d  84c0                 test al, al
// 00661f8f  0f8413010000         je 0x6620a8
// 00661f95  8b442444             mov eax, dword ptr [esp + 0x44]
// 00661f99  83f808               cmp eax, 8
// 00661f9c  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00661fa0  7d07                 jge 0x661fa9
// 00661fa2  b901000000           mov ecx, 1
// 00661fa7  eb29                 jmp 0x661fd2
// 00661fa9  8d48f8               lea ecx, [eax - 8]
// 00661fac  8bd3                 mov edx, ebx
// 00661fae  d3fa                 sar edx, cl
// 00661fb0  81e2ff000000         and edx, 0xff
// 00661fb6  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 00661fbd  85c9                 test ecx, ecx
// 00661fbf  740c                 je 0x661fcd
// 00661fc1  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 00661fc9  2bc1                 sub eax, ecx
// 00661fcb  eb28                 jmp 0x661ff5
// 00661fcd  b909000000           mov ecx, 9
// 00661fd2  51                   push ecx
// 00661fd3  55                   push ebp
// 00661fd4  50                   push eax
// 00661fd5  8d442444             lea eax, [esp + 0x44]
// 00661fd9  53                   push ebx
// 00661fda  50                   push eax
// 00661fdb  e860fbffff           call 0x661b40
// 00661fe0  8bf8                 mov edi, eax
// 00661fe2  83c414               add esp, 0x14
// 00661fe5  85ff                 test edi, edi
// 00661fe7  0f8cbb000000         jl 0x6620a8
// 00661fed  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00661ff1  8b442444             mov eax, dword ptr [esp + 0x44]
// 00661ff5  8bcf                 mov ecx, edi
// 00661ff7  c1f904               sar ecx, 4
// 00661ffa  83e70f               and edi, 0xf
// 00661ffd  742a                 je 0x662029
// 00661fff  03f1                 add esi, ecx
// 00662001  3bc7                 cmp eax, edi
// 00662003  7d20                 jge 0x662025
// 00662005  57                   push edi
// 00662006  50                   push eax
// 00662007  8d4c2440             lea ecx, [esp + 0x40]
// 0066200b  53                   push ebx
// 0066200c  51                   push ecx
// 0066200d  e80efaffff           call 0x661a20
// 00662012  83c410               add esp, 0x10
// 00662015  84c0                 test al, al
// 00662017  0f848b000000         je 0x6620a8
// 0066201d  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00662021  8b442444             mov eax, dword ptr [esp + 0x44]
// 00662025  2bc7                 sub eax, edi
// 00662027  eb07                 jmp 0x662030
// 00662029  83f90f               cmp ecx, 0xf
// 0066202c  750c                 jne 0x66203a
// 0066202e  03f1                 add esi, ecx
// 00662030  46                   inc esi
// 00662031  83fe40               cmp esi, 0x40
// 00662034  0f8c3dffffff         jl 0x661f77
// 0066203a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066203e  ba04000000           mov edx, 4
// 00662043  01542418             add dword ptr [esp + 0x18], edx
// 00662047  0154241c             add dword ptr [esp + 0x1c], edx
// 0066204b  8b542450             mov edx, dword ptr [esp + 0x50]
// 0066204f  41                   inc ecx
// 00662050  3b8a40010000         cmp ecx, dword ptr [edx + 0x140]
// 00662056  894c2410             mov dword ptr [esp + 0x10], ecx
// 0066205a  0f8ce0fcffff         jl 0x661d40
// 00662060  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00662064  8bf2                 mov esi, edx
// 00662066  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00662069  8b542438             mov edx, dword ptr [esp + 0x38]
// 0066206d  8911                 mov dword ptr [ecx], edx
// 0066206f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00662072  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00662076  895104               mov dword ptr [ecx + 4], edx
// 00662079  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0066207d  8b542430             mov edx, dword ptr [esp + 0x30]
// 00662081  894710               mov dword ptr [edi + 0x10], eax
// 00662084  8b442428             mov eax, dword ptr [esp + 0x28]
// 00662088  894714               mov dword ptr [edi + 0x14], eax
// 0066208b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0066208f  894f18               mov dword ptr [edi + 0x18], ecx
// 00662092  89571c               mov dword ptr [edi + 0x1c], edx
// 00662095  895f0c               mov dword ptr [edi + 0xc], ebx
// 00662098  894720               mov dword ptr [edi + 0x20], eax
// 0066209b  ff4f24               dec dword ptr [edi + 0x24]
// 0066209e  5d                   pop ebp
// 0066209f  5b                   pop ebx
// 006620a0  5f                   pop edi
// 006620a1  b001                 mov al, 1
// 006620a3  5e                   pop esi
// 006620a4  83c43c               add esp, 0x3c
// 006620a7  c3                   ret 
// 006620a8  5d                   pop ebp
// 006620a9  5b                   pop ebx
// 006620aa  5f                   pop edi
// 006620ab  32c0                 xor al, al
// 006620ad  5e                   pop esi
// 006620ae  83c43c               add esp, 0x3c
// 006620b1  c3                   ret 
// library jpeg-6b/jdhuff.c (function _decode_mcu)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
