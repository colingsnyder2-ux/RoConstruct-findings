// from server: 100% by auto
// roc 2009-06 0059c750  unit: seg_00590000  size: 1042 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059c750
//
// 0059c750  83ec3c               sub esp, 0x3c
// 0059c753  56                   push esi
// 0059c754  8b742444             mov esi, dword ptr [esp + 0x44]
// 0059c758  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0059c75f  57                   push edi
// 0059c760  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0059c766  897c2418             mov dword ptr [esp + 0x18], edi
// 0059c76a  7415                 je 0x59c781
// 0059c76c  837f2400             cmp dword ptr [edi + 0x24], 0
// 0059c770  750f                 jne 0x59c781
// 0059c772  e859ffffff           call 0x59c6d0
// 0059c777  84c0                 test al, al
// 0059c779  7506                 jne 0x59c781
// 0059c77b  5f                   pop edi
// 0059c77c  5e                   pop esi
// 0059c77d  83c43c               add esp, 0x3c
// 0059c780  c3                   ret 
// 0059c781  807f0800             cmp byte ptr [edi + 8], 0
// 0059c785  53                   push ebx
// 0059c786  55                   push ebp
// 0059c787  0f85be030000         jne 0x59cb4b
// 0059c78d  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 0059c794  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059c797  8b08                 mov ecx, dword ptr [eax]
// 0059c799  8b5004               mov edx, dword ptr [eax + 4]
// 0059c79c  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 0059c79f  8b4710               mov eax, dword ptr [edi + 0x10]
// 0059c7a2  894c2438             mov dword ptr [esp + 0x38], ecx
// 0059c7a6  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0059c7a9  8954243c             mov dword ptr [esp + 0x3c], edx
// 0059c7ad  8b5718               mov edx, dword ptr [edi + 0x18]
// 0059c7b0  894c2428             mov dword ptr [esp + 0x28], ecx
// 0059c7b4  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0059c7b7  8954242c             mov dword ptr [esp + 0x2c], edx
// 0059c7bb  8b5720               mov edx, dword ptr [edi + 0x20]
// 0059c7be  89742448             mov dword ptr [esp + 0x48], esi
// 0059c7c2  894c2430             mov dword ptr [esp + 0x30], ecx
// 0059c7c6  89542434             mov dword ptr [esp + 0x34], edx
// 0059c7ca  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059c7d2  0f8e3e030000         jle 0x59cb16
// 0059c7d8  81c644010000         add esi, 0x144
// 0059c7de  8d4f70               lea ecx, [edi + 0x70]
// 0059c7e1  8974241c             mov dword ptr [esp + 0x1c], esi
// 0059c7e5  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059c7e9  eb09                 jmp 0x59c7f4
// 0059c7eb  eb03                 jmp 0x59c7f0
// 0059c7ed  8d4900               lea ecx, [ecx]
// 0059c7f0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059c7f4  83f808               cmp eax, 8
// 0059c7f7  8b542454             mov edx, dword ptr [esp + 0x54]
// 0059c7fb  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059c7ff  8b34b2               mov esi, dword ptr [edx + esi*4]
// 0059c802  8b29                 mov ebp, dword ptr [ecx]
// 0059c804  8b79d8               mov edi, dword ptr [ecx - 0x28]
// 0059c807  89742424             mov dword ptr [esp + 0x24], esi
// 0059c80b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0059c80f  7d2d                 jge 0x59c83e
// 0059c811  6a00                 push 0
// 0059c813  50                   push eax
// 0059c814  8d442440             lea eax, [esp + 0x40]
// 0059c818  53                   push ebx
// 0059c819  50                   push eax
// 0059c81a  e8b1fcffff           call 0x59c4d0
// 0059c81f  83c410               add esp, 0x10
// 0059c822  84c0                 test al, al
// 0059c824  0f842e030000         je 0x59cb58
// 0059c82a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0059c82e  83f808               cmp eax, 8
// 0059c831  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0059c835  7d07                 jge 0x59c83e
// 0059c837  b901000000           mov ecx, 1
// 0059c83c  eb29                 jmp 0x59c867
// 0059c83e  8d48f8               lea ecx, [eax - 8]
// 0059c841  8bd3                 mov edx, ebx
// 0059c843  d3fa                 sar edx, cl
// 0059c845  81e2ff000000         and edx, 0xff
// 0059c84b  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 0059c852  85c9                 test ecx, ecx
// 0059c854  740c                 je 0x59c862
// 0059c856  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 0059c85e  2bc1                 sub eax, ecx
// 0059c860  eb28                 jmp 0x59c88a
// 0059c862  b909000000           mov ecx, 9
// 0059c867  51                   push ecx
// 0059c868  57                   push edi
// 0059c869  50                   push eax
// 0059c86a  8d4c2444             lea ecx, [esp + 0x44]
// 0059c86e  53                   push ebx
// 0059c86f  51                   push ecx
// 0059c870  e87bfdffff           call 0x59c5f0
// 0059c875  8bf8                 mov edi, eax
// 0059c877  83c414               add esp, 0x14
// 0059c87a  85ff                 test edi, edi
// 0059c87c  0f8cd6020000         jl 0x59cb58
// 0059c882  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0059c886  8b442444             mov eax, dword ptr [esp + 0x44]
// 0059c88a  85ff                 test edi, edi
// 0059c88c  7452                 je 0x59c8e0
// 0059c88e  3bc7                 cmp eax, edi
// 0059c890  7d20                 jge 0x59c8b2
// 0059c892  57                   push edi
// 0059c893  50                   push eax
// 0059c894  8d542440             lea edx, [esp + 0x40]
// 0059c898  53                   push ebx
// 0059c899  52                   push edx
// 0059c89a  e831fcffff           call 0x59c4d0
// 0059c89f  83c410               add esp, 0x10
// 0059c8a2  84c0                 test al, al
// 0059c8a4  0f84ae020000         je 0x59cb58
// 0059c8aa  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0059c8ae  8b442444             mov eax, dword ptr [esp + 0x44]
// 0059c8b2  8bcf                 mov ecx, edi
// 0059c8b4  2bc7                 sub eax, edi
// 0059c8b6  ba01000000           mov edx, 1
// 0059c8bb  d3e2                 shl edx, cl
// 0059c8bd  8beb                 mov ebp, ebx
// 0059c8bf  8bc8                 mov ecx, eax
// 0059c8c1  d3fd                 sar ebp, cl
// 0059c8c3  4a                   dec edx
// 0059c8c4  23d5                 and edx, ebp
// 0059c8c6  3b14bd403a8d00       cmp edx, dword ptr [edi*4 + 0x8d3a40]
// 0059c8cd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0059c8d1  7d0b                 jge 0x59c8de
// 0059c8d3  8b3cbd803a8d00       mov edi, dword ptr [edi*4 + 0x8d3a80]
// 0059c8da  03fa                 add edi, edx
// 0059c8dc  eb02                 jmp 0x59c8e0
// 0059c8de  8bfa                 mov edi, edx
// 0059c8e0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059c8e4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059c8e8  80bc0a9800000000     cmp byte ptr [edx + ecx + 0x98], 0
// 0059c8f0  7413                 je 0x59c905
// 0059c8f2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059c8f6  8b09                 mov ecx, dword ptr [ecx]
// 0059c8f8  017c8c28             add dword ptr [esp + ecx*4 + 0x28], edi
// 0059c8fc  8d4c8c28             lea ecx, [esp + ecx*4 + 0x28]
// 0059c900  8b09                 mov ecx, dword ptr [ecx]
// 0059c902  66890e               mov word ptr [esi], cx
// 0059c905  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059c909  80bc0aa200000000     cmp byte ptr [edx + ecx + 0xa2], 0
// 0059c911  be01000000           mov esi, 1
// 0059c916  0f840b010000         je 0x59ca27
// 0059c91c  8d642400             lea esp, [esp]
// 0059c920  83f808               cmp eax, 8
// 0059c923  7d2d                 jge 0x59c952
// 0059c925  6a00                 push 0
// 0059c927  50                   push eax
// 0059c928  8d542440             lea edx, [esp + 0x40]
// 0059c92c  53                   push ebx
// 0059c92d  52                   push edx
// 0059c92e  e89dfbffff           call 0x59c4d0
// 0059c933  83c410               add esp, 0x10
// 0059c936  84c0                 test al, al
// 0059c938  0f841a020000         je 0x59cb58
// 0059c93e  8b442444             mov eax, dword ptr [esp + 0x44]
// 0059c942  83f808               cmp eax, 8
// 0059c945  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0059c949  7d07                 jge 0x59c952
// 0059c94b  b901000000           mov ecx, 1
// 0059c950  eb29                 jmp 0x59c97b
// 0059c952  8d48f8               lea ecx, [eax - 8]
// 0059c955  8bd3                 mov edx, ebx
// 0059c957  d3fa                 sar edx, cl
// 0059c959  81e2ff000000         and edx, 0xff
// 0059c95f  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 0059c966  85c9                 test ecx, ecx
// 0059c968  740c                 je 0x59c976
// 0059c96a  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 0059c972  2bc1                 sub eax, ecx
// 0059c974  eb28                 jmp 0x59c99e
// 0059c976  b909000000           mov ecx, 9
// 0059c97b  51                   push ecx
// 0059c97c  55                   push ebp
// 0059c97d  50                   push eax
// 0059c97e  8d442444             lea eax, [esp + 0x44]
// 0059c982  53                   push ebx
// 0059c983  50                   push eax
// 0059c984  e867fcffff           call 0x59c5f0
// 0059c989  8bf8                 mov edi, eax
// 0059c98b  83c414               add esp, 0x14
// 0059c98e  85ff                 test edi, edi
// 0059c990  0f8cc2010000         jl 0x59cb58
// 0059c996  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0059c99a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0059c99e  8bcf                 mov ecx, edi
// 0059c9a0  c1f904               sar ecx, 4
// 0059c9a3  83e70f               and edi, 0xf
// 0059c9a6  7465                 je 0x59ca0d
// 0059c9a8  03f1                 add esi, ecx
// 0059c9aa  3bc7                 cmp eax, edi
// 0059c9ac  7d20                 jge 0x59c9ce
// 0059c9ae  57                   push edi
// 0059c9af  50                   push eax
// 0059c9b0  8d4c2440             lea ecx, [esp + 0x40]
// 0059c9b4  53                   push ebx
// 0059c9b5  51                   push ecx
// 0059c9b6  e815fbffff           call 0x59c4d0
// 0059c9bb  83c410               add esp, 0x10
// 0059c9be  84c0                 test al, al
// 0059c9c0  0f8492010000         je 0x59cb58
// 0059c9c6  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0059c9ca  8b442444             mov eax, dword ptr [esp + 0x44]
// 0059c9ce  8bcf                 mov ecx, edi
// 0059c9d0  2bc7                 sub eax, edi
// 0059c9d2  ba01000000           mov edx, 1
// 0059c9d7  d3e2                 shl edx, cl
// 0059c9d9  8beb                 mov ebp, ebx
// 0059c9db  8bc8                 mov ecx, eax
// 0059c9dd  d3fd                 sar ebp, cl
// 0059c9df  4a                   dec edx
// 0059c9e0  23d5                 and edx, ebp
// 0059c9e2  3b14bd403a8d00       cmp edx, dword ptr [edi*4 + 0x8d3a40]
// 0059c9e9  7d0b                 jge 0x59c9f6
// 0059c9eb  8b3cbd803a8d00       mov edi, dword ptr [edi*4 + 0x8d3a80]
// 0059c9f2  03fa                 add edi, edx
// 0059c9f4  eb02                 jmp 0x59c9f8
// 0059c9f6  8bfa                 mov edi, edx
// 0059c9f8  8b14b5f8e88c00       mov edx, dword ptr [esi*4 + 0x8ce8f8]
// 0059c9ff  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059ca03  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0059ca07  66893c51             mov word ptr [ecx + edx*2], di
// 0059ca0b  eb0b                 jmp 0x59ca18
// 0059ca0d  83f90f               cmp ecx, 0xf
// 0059ca10  0f85d4000000         jne 0x59caea
// 0059ca16  03f1                 add esi, ecx
// 0059ca18  46                   inc esi
// 0059ca19  83fe40               cmp esi, 0x40
// 0059ca1c  0f8cfefeffff         jl 0x59c920
// 0059ca22  e9c3000000           jmp 0x59caea
// 0059ca27  83f808               cmp eax, 8
// 0059ca2a  7d2d                 jge 0x59ca59
// 0059ca2c  6a00                 push 0
// 0059ca2e  50                   push eax
// 0059ca2f  8d542440             lea edx, [esp + 0x40]
// 0059ca33  53                   push ebx
// 0059ca34  52                   push edx
// 0059ca35  e896faffff           call 0x59c4d0
// 0059ca3a  83c410               add esp, 0x10
// 0059ca3d  84c0                 test al, al
// 0059ca3f  0f8413010000         je 0x59cb58
// 0059ca45  8b442444             mov eax, dword ptr [esp + 0x44]
// 0059ca49  83f808               cmp eax, 8
// 0059ca4c  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0059ca50  7d07                 jge 0x59ca59
// 0059ca52  b901000000           mov ecx, 1
// 0059ca57  eb29                 jmp 0x59ca82
// 0059ca59  8d48f8               lea ecx, [eax - 8]
// 0059ca5c  8bd3                 mov edx, ebx
// 0059ca5e  d3fa                 sar edx, cl
// 0059ca60  81e2ff000000         and edx, 0xff
// 0059ca66  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 0059ca6d  85c9                 test ecx, ecx
// 0059ca6f  740c                 je 0x59ca7d
// 0059ca71  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 0059ca79  2bc1                 sub eax, ecx
// 0059ca7b  eb28                 jmp 0x59caa5
// 0059ca7d  b909000000           mov ecx, 9
// 0059ca82  51                   push ecx
// 0059ca83  55                   push ebp
// 0059ca84  50                   push eax
// 0059ca85  8d442444             lea eax, [esp + 0x44]
// 0059ca89  53                   push ebx
// 0059ca8a  50                   push eax
// 0059ca8b  e860fbffff           call 0x59c5f0
// 0059ca90  8bf8                 mov edi, eax
// 0059ca92  83c414               add esp, 0x14
// 0059ca95  85ff                 test edi, edi
// 0059ca97  0f8cbb000000         jl 0x59cb58
// 0059ca9d  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0059caa1  8b442444             mov eax, dword ptr [esp + 0x44]
// 0059caa5  8bcf                 mov ecx, edi
// 0059caa7  c1f904               sar ecx, 4
// 0059caaa  83e70f               and edi, 0xf
// 0059caad  742a                 je 0x59cad9
// 0059caaf  03f1                 add esi, ecx
// 0059cab1  3bc7                 cmp eax, edi
// 0059cab3  7d20                 jge 0x59cad5
// 0059cab5  57                   push edi
// 0059cab6  50                   push eax
// 0059cab7  8d4c2440             lea ecx, [esp + 0x40]
// 0059cabb  53                   push ebx
// 0059cabc  51                   push ecx
// 0059cabd  e80efaffff           call 0x59c4d0
// 0059cac2  83c410               add esp, 0x10
// 0059cac5  84c0                 test al, al
// 0059cac7  0f848b000000         je 0x59cb58
// 0059cacd  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0059cad1  8b442444             mov eax, dword ptr [esp + 0x44]
// 0059cad5  2bc7                 sub eax, edi
// 0059cad7  eb07                 jmp 0x59cae0
// 0059cad9  83f90f               cmp ecx, 0xf
// 0059cadc  750c                 jne 0x59caea
// 0059cade  03f1                 add esi, ecx
// 0059cae0  46                   inc esi
// 0059cae1  83fe40               cmp esi, 0x40
// 0059cae4  0f8c3dffffff         jl 0x59ca27
// 0059caea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059caee  ba04000000           mov edx, 4
// 0059caf3  01542418             add dword ptr [esp + 0x18], edx
// 0059caf7  0154241c             add dword ptr [esp + 0x1c], edx
// 0059cafb  8b542450             mov edx, dword ptr [esp + 0x50]
// 0059caff  41                   inc ecx
// 0059cb00  3b8a40010000         cmp ecx, dword ptr [edx + 0x140]
// 0059cb06  894c2410             mov dword ptr [esp + 0x10], ecx
// 0059cb0a  0f8ce0fcffff         jl 0x59c7f0
// 0059cb10  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0059cb14  8bf2                 mov esi, edx
// 0059cb16  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0059cb19  8b542438             mov edx, dword ptr [esp + 0x38]
// 0059cb1d  8911                 mov dword ptr [ecx], edx
// 0059cb1f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0059cb22  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0059cb26  895104               mov dword ptr [ecx + 4], edx
// 0059cb29  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059cb2d  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059cb31  894710               mov dword ptr [edi + 0x10], eax
// 0059cb34  8b442428             mov eax, dword ptr [esp + 0x28]
// 0059cb38  894714               mov dword ptr [edi + 0x14], eax
// 0059cb3b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059cb3f  894f18               mov dword ptr [edi + 0x18], ecx
// 0059cb42  89571c               mov dword ptr [edi + 0x1c], edx
// 0059cb45  895f0c               mov dword ptr [edi + 0xc], ebx
// 0059cb48  894720               mov dword ptr [edi + 0x20], eax
// 0059cb4b  ff4f24               dec dword ptr [edi + 0x24]
// 0059cb4e  5d                   pop ebp
// 0059cb4f  5b                   pop ebx
// 0059cb50  5f                   pop edi
// 0059cb51  b001                 mov al, 1
// 0059cb53  5e                   pop esi
// 0059cb54  83c43c               add esp, 0x3c
// 0059cb57  c3                   ret 
// 0059cb58  5d                   pop ebp
// 0059cb59  5b                   pop ebx
// 0059cb5a  5f                   pop edi
// 0059cb5b  32c0                 xor al, al
// 0059cb5d  5e                   pop esi
// 0059cb5e  83c43c               add esp, 0x3c
// 0059cb61  c3                   ret 
// library jpeg-6b/jdhuff.c (function _decode_mcu)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
