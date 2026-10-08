// from server: 100% by auto
// roc 2010-06 005802e0  unit: seg_00580000  size: 1042 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005802e0
//
// 005802e0  83ec3c               sub esp, 0x3c
// 005802e3  56                   push esi
// 005802e4  8b742444             mov esi, dword ptr [esp + 0x44]
// 005802e8  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 005802ef  57                   push edi
// 005802f0  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 005802f6  897c2418             mov dword ptr [esp + 0x18], edi
// 005802fa  7415                 je 0x580311
// 005802fc  837f2400             cmp dword ptr [edi + 0x24], 0
// 00580300  750f                 jne 0x580311
// 00580302  e859ffffff           call 0x580260
// 00580307  84c0                 test al, al
// 00580309  7506                 jne 0x580311
// 0058030b  5f                   pop edi
// 0058030c  5e                   pop esi
// 0058030d  83c43c               add esp, 0x3c
// 00580310  c3                   ret 
// 00580311  807f0800             cmp byte ptr [edi + 8], 0
// 00580315  53                   push ebx
// 00580316  55                   push ebp
// 00580317  0f85be030000         jne 0x5806db
// 0058031d  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 00580324  8b4618               mov eax, dword ptr [esi + 0x18]
// 00580327  8b08                 mov ecx, dword ptr [eax]
// 00580329  8b5004               mov edx, dword ptr [eax + 4]
// 0058032c  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 0058032f  8b4710               mov eax, dword ptr [edi + 0x10]
// 00580332  894c2438             mov dword ptr [esp + 0x38], ecx
// 00580336  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00580339  8954243c             mov dword ptr [esp + 0x3c], edx
// 0058033d  8b5718               mov edx, dword ptr [edi + 0x18]
// 00580340  894c2428             mov dword ptr [esp + 0x28], ecx
// 00580344  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00580347  8954242c             mov dword ptr [esp + 0x2c], edx
// 0058034b  8b5720               mov edx, dword ptr [edi + 0x20]
// 0058034e  89742448             mov dword ptr [esp + 0x48], esi
// 00580352  894c2430             mov dword ptr [esp + 0x30], ecx
// 00580356  89542434             mov dword ptr [esp + 0x34], edx
// 0058035a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00580362  0f8e3e030000         jle 0x5806a6
// 00580368  81c644010000         add esi, 0x144
// 0058036e  8d4f70               lea ecx, [edi + 0x70]
// 00580371  8974241c             mov dword ptr [esp + 0x1c], esi
// 00580375  894c2418             mov dword ptr [esp + 0x18], ecx
// 00580379  eb09                 jmp 0x580384
// 0058037b  eb03                 jmp 0x580380
// 0058037d  8d4900               lea ecx, [ecx]
// 00580380  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00580384  83f808               cmp eax, 8
// 00580387  8b542454             mov edx, dword ptr [esp + 0x54]
// 0058038b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058038f  8b34b2               mov esi, dword ptr [edx + esi*4]
// 00580392  8b29                 mov ebp, dword ptr [ecx]
// 00580394  8b79d8               mov edi, dword ptr [ecx - 0x28]
// 00580397  89742424             mov dword ptr [esp + 0x24], esi
// 0058039b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058039f  7d2d                 jge 0x5803ce
// 005803a1  6a00                 push 0
// 005803a3  50                   push eax
// 005803a4  8d442440             lea eax, [esp + 0x40]
// 005803a8  53                   push ebx
// 005803a9  50                   push eax
// 005803aa  e8b1fcffff           call 0x580060
// 005803af  83c410               add esp, 0x10
// 005803b2  84c0                 test al, al
// 005803b4  0f842e030000         je 0x5806e8
// 005803ba  8b442444             mov eax, dword ptr [esp + 0x44]
// 005803be  83f808               cmp eax, 8
// 005803c1  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005803c5  7d07                 jge 0x5803ce
// 005803c7  b901000000           mov ecx, 1
// 005803cc  eb29                 jmp 0x5803f7
// 005803ce  8d48f8               lea ecx, [eax - 8]
// 005803d1  8bd3                 mov edx, ebx
// 005803d3  d3fa                 sar edx, cl
// 005803d5  81e2ff000000         and edx, 0xff
// 005803db  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 005803e2  85c9                 test ecx, ecx
// 005803e4  740c                 je 0x5803f2
// 005803e6  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 005803ee  2bc1                 sub eax, ecx
// 005803f0  eb28                 jmp 0x58041a
// 005803f2  b909000000           mov ecx, 9
// 005803f7  51                   push ecx
// 005803f8  57                   push edi
// 005803f9  50                   push eax
// 005803fa  8d4c2444             lea ecx, [esp + 0x44]
// 005803fe  53                   push ebx
// 005803ff  51                   push ecx
// 00580400  e87bfdffff           call 0x580180
// 00580405  8bf8                 mov edi, eax
// 00580407  83c414               add esp, 0x14
// 0058040a  85ff                 test edi, edi
// 0058040c  0f8cd6020000         jl 0x5806e8
// 00580412  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00580416  8b442444             mov eax, dword ptr [esp + 0x44]
// 0058041a  85ff                 test edi, edi
// 0058041c  7452                 je 0x580470
// 0058041e  3bc7                 cmp eax, edi
// 00580420  7d20                 jge 0x580442
// 00580422  57                   push edi
// 00580423  50                   push eax
// 00580424  8d542440             lea edx, [esp + 0x40]
// 00580428  53                   push ebx
// 00580429  52                   push edx
// 0058042a  e831fcffff           call 0x580060
// 0058042f  83c410               add esp, 0x10
// 00580432  84c0                 test al, al
// 00580434  0f84ae020000         je 0x5806e8
// 0058043a  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0058043e  8b442444             mov eax, dword ptr [esp + 0x44]
// 00580442  8bcf                 mov ecx, edi
// 00580444  2bc7                 sub eax, edi
// 00580446  ba01000000           mov edx, 1
// 0058044b  d3e2                 shl edx, cl
// 0058044d  8beb                 mov ebp, ebx
// 0058044f  8bc8                 mov ecx, eax
// 00580451  d3fd                 sar ebp, cl
// 00580453  4a                   dec edx
// 00580454  23d5                 and edx, ebp
// 00580456  3b14bd5086a200       cmp edx, dword ptr [edi*4 + 0xa28650]
// 0058045d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00580461  7d0b                 jge 0x58046e
// 00580463  8b3cbd9086a200       mov edi, dword ptr [edi*4 + 0xa28690]
// 0058046a  03fa                 add edi, edx
// 0058046c  eb02                 jmp 0x580470
// 0058046e  8bfa                 mov edi, edx
// 00580470  8b542410             mov edx, dword ptr [esp + 0x10]
// 00580474  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00580478  80bc0a9800000000     cmp byte ptr [edx + ecx + 0x98], 0
// 00580480  7413                 je 0x580495
// 00580482  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00580486  8b09                 mov ecx, dword ptr [ecx]
// 00580488  017c8c28             add dword ptr [esp + ecx*4 + 0x28], edi
// 0058048c  8d4c8c28             lea ecx, [esp + ecx*4 + 0x28]
// 00580490  8b09                 mov ecx, dword ptr [ecx]
// 00580492  66890e               mov word ptr [esi], cx
// 00580495  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00580499  80bc0aa200000000     cmp byte ptr [edx + ecx + 0xa2], 0
// 005804a1  be01000000           mov esi, 1
// 005804a6  0f840b010000         je 0x5805b7
// 005804ac  8d642400             lea esp, [esp]
// 005804b0  83f808               cmp eax, 8
// 005804b3  7d2d                 jge 0x5804e2
// 005804b5  6a00                 push 0
// 005804b7  50                   push eax
// 005804b8  8d542440             lea edx, [esp + 0x40]
// 005804bc  53                   push ebx
// 005804bd  52                   push edx
// 005804be  e89dfbffff           call 0x580060
// 005804c3  83c410               add esp, 0x10
// 005804c6  84c0                 test al, al
// 005804c8  0f841a020000         je 0x5806e8
// 005804ce  8b442444             mov eax, dword ptr [esp + 0x44]
// 005804d2  83f808               cmp eax, 8
// 005804d5  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005804d9  7d07                 jge 0x5804e2
// 005804db  b901000000           mov ecx, 1
// 005804e0  eb29                 jmp 0x58050b
// 005804e2  8d48f8               lea ecx, [eax - 8]
// 005804e5  8bd3                 mov edx, ebx
// 005804e7  d3fa                 sar edx, cl
// 005804e9  81e2ff000000         and edx, 0xff
// 005804ef  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 005804f6  85c9                 test ecx, ecx
// 005804f8  740c                 je 0x580506
// 005804fa  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 00580502  2bc1                 sub eax, ecx
// 00580504  eb28                 jmp 0x58052e
// 00580506  b909000000           mov ecx, 9
// 0058050b  51                   push ecx
// 0058050c  55                   push ebp
// 0058050d  50                   push eax
// 0058050e  8d442444             lea eax, [esp + 0x44]
// 00580512  53                   push ebx
// 00580513  50                   push eax
// 00580514  e867fcffff           call 0x580180
// 00580519  8bf8                 mov edi, eax
// 0058051b  83c414               add esp, 0x14
// 0058051e  85ff                 test edi, edi
// 00580520  0f8cc2010000         jl 0x5806e8
// 00580526  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0058052a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0058052e  8bcf                 mov ecx, edi
// 00580530  c1f904               sar ecx, 4
// 00580533  83e70f               and edi, 0xf
// 00580536  7465                 je 0x58059d
// 00580538  03f1                 add esi, ecx
// 0058053a  3bc7                 cmp eax, edi
// 0058053c  7d20                 jge 0x58055e
// 0058053e  57                   push edi
// 0058053f  50                   push eax
// 00580540  8d4c2440             lea ecx, [esp + 0x40]
// 00580544  53                   push ebx
// 00580545  51                   push ecx
// 00580546  e815fbffff           call 0x580060
// 0058054b  83c410               add esp, 0x10
// 0058054e  84c0                 test al, al
// 00580550  0f8492010000         je 0x5806e8
// 00580556  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0058055a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0058055e  8bcf                 mov ecx, edi
// 00580560  2bc7                 sub eax, edi
// 00580562  ba01000000           mov edx, 1
// 00580567  d3e2                 shl edx, cl
// 00580569  8beb                 mov ebp, ebx
// 0058056b  8bc8                 mov ecx, eax
// 0058056d  d3fd                 sar ebp, cl
// 0058056f  4a                   dec edx
// 00580570  23d5                 and edx, ebp
// 00580572  3b14bd5086a200       cmp edx, dword ptr [edi*4 + 0xa28650]
// 00580579  7d0b                 jge 0x580586
// 0058057b  8b3cbd9086a200       mov edi, dword ptr [edi*4 + 0xa28690]
// 00580582  03fa                 add edi, edx
// 00580584  eb02                 jmp 0x580588
// 00580586  8bfa                 mov edi, edx
// 00580588  8b14b5f834a200       mov edx, dword ptr [esi*4 + 0xa234f8]
// 0058058f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00580593  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00580597  66893c51             mov word ptr [ecx + edx*2], di
// 0058059b  eb0b                 jmp 0x5805a8
// 0058059d  83f90f               cmp ecx, 0xf
// 005805a0  0f85d4000000         jne 0x58067a
// 005805a6  03f1                 add esi, ecx
// 005805a8  46                   inc esi
// 005805a9  83fe40               cmp esi, 0x40
// 005805ac  0f8cfefeffff         jl 0x5804b0
// 005805b2  e9c3000000           jmp 0x58067a
// 005805b7  83f808               cmp eax, 8
// 005805ba  7d2d                 jge 0x5805e9
// 005805bc  6a00                 push 0
// 005805be  50                   push eax
// 005805bf  8d542440             lea edx, [esp + 0x40]
// 005805c3  53                   push ebx
// 005805c4  52                   push edx
// 005805c5  e896faffff           call 0x580060
// 005805ca  83c410               add esp, 0x10
// 005805cd  84c0                 test al, al
// 005805cf  0f8413010000         je 0x5806e8
// 005805d5  8b442444             mov eax, dword ptr [esp + 0x44]
// 005805d9  83f808               cmp eax, 8
// 005805dc  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005805e0  7d07                 jge 0x5805e9
// 005805e2  b901000000           mov ecx, 1
// 005805e7  eb29                 jmp 0x580612
// 005805e9  8d48f8               lea ecx, [eax - 8]
// 005805ec  8bd3                 mov edx, ebx
// 005805ee  d3fa                 sar edx, cl
// 005805f0  81e2ff000000         and edx, 0xff
// 005805f6  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 005805fd  85c9                 test ecx, ecx
// 005805ff  740c                 je 0x58060d
// 00580601  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 00580609  2bc1                 sub eax, ecx
// 0058060b  eb28                 jmp 0x580635
// 0058060d  b909000000           mov ecx, 9
// 00580612  51                   push ecx
// 00580613  55                   push ebp
// 00580614  50                   push eax
// 00580615  8d442444             lea eax, [esp + 0x44]
// 00580619  53                   push ebx
// 0058061a  50                   push eax
// 0058061b  e860fbffff           call 0x580180
// 00580620  8bf8                 mov edi, eax
// 00580622  83c414               add esp, 0x14
// 00580625  85ff                 test edi, edi
// 00580627  0f8cbb000000         jl 0x5806e8
// 0058062d  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00580631  8b442444             mov eax, dword ptr [esp + 0x44]
// 00580635  8bcf                 mov ecx, edi
// 00580637  c1f904               sar ecx, 4
// 0058063a  83e70f               and edi, 0xf
// 0058063d  742a                 je 0x580669
// 0058063f  03f1                 add esi, ecx
// 00580641  3bc7                 cmp eax, edi
// 00580643  7d20                 jge 0x580665
// 00580645  57                   push edi
// 00580646  50                   push eax
// 00580647  8d4c2440             lea ecx, [esp + 0x40]
// 0058064b  53                   push ebx
// 0058064c  51                   push ecx
// 0058064d  e80efaffff           call 0x580060
// 00580652  83c410               add esp, 0x10
// 00580655  84c0                 test al, al
// 00580657  0f848b000000         je 0x5806e8
// 0058065d  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00580661  8b442444             mov eax, dword ptr [esp + 0x44]
// 00580665  2bc7                 sub eax, edi
// 00580667  eb07                 jmp 0x580670
// 00580669  83f90f               cmp ecx, 0xf
// 0058066c  750c                 jne 0x58067a
// 0058066e  03f1                 add esi, ecx
// 00580670  46                   inc esi
// 00580671  83fe40               cmp esi, 0x40
// 00580674  0f8c3dffffff         jl 0x5805b7
// 0058067a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058067e  ba04000000           mov edx, 4
// 00580683  01542418             add dword ptr [esp + 0x18], edx
// 00580687  0154241c             add dword ptr [esp + 0x1c], edx
// 0058068b  8b542450             mov edx, dword ptr [esp + 0x50]
// 0058068f  41                   inc ecx
// 00580690  3b8a40010000         cmp ecx, dword ptr [edx + 0x140]
// 00580696  894c2410             mov dword ptr [esp + 0x10], ecx
// 0058069a  0f8ce0fcffff         jl 0x580380
// 005806a0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005806a4  8bf2                 mov esi, edx
// 005806a6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005806a9  8b542438             mov edx, dword ptr [esp + 0x38]
// 005806ad  8911                 mov dword ptr [ecx], edx
// 005806af  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005806b2  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005806b6  895104               mov dword ptr [ecx + 4], edx
// 005806b9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005806bd  8b542430             mov edx, dword ptr [esp + 0x30]
// 005806c1  894710               mov dword ptr [edi + 0x10], eax
// 005806c4  8b442428             mov eax, dword ptr [esp + 0x28]
// 005806c8  894714               mov dword ptr [edi + 0x14], eax
// 005806cb  8b442434             mov eax, dword ptr [esp + 0x34]
// 005806cf  894f18               mov dword ptr [edi + 0x18], ecx
// 005806d2  89571c               mov dword ptr [edi + 0x1c], edx
// 005806d5  895f0c               mov dword ptr [edi + 0xc], ebx
// 005806d8  894720               mov dword ptr [edi + 0x20], eax
// 005806db  ff4f24               dec dword ptr [edi + 0x24]
// 005806de  5d                   pop ebp
// 005806df  5b                   pop ebx
// 005806e0  5f                   pop edi
// 005806e1  b001                 mov al, 1
// 005806e3  5e                   pop esi
// 005806e4  83c43c               add esp, 0x3c
// 005806e7  c3                   ret 
// 005806e8  5d                   pop ebp
// 005806e9  5b                   pop ebx
// 005806ea  5f                   pop edi
// 005806eb  32c0                 xor al, al
// 005806ed  5e                   pop esi
// 005806ee  83c43c               add esp, 0x3c
// 005806f1  c3                   ret 
// library jpeg-6b/jdhuff.c (function _decode_mcu)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
