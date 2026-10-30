// roc 2009-12 00857e90  unit: CXTPTabClientWnd  size: 1092 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00857e90
//
// 00857e90  81ec88000000         sub esp, 0x88
// 00857e96  53                   push ebx
// 00857e97  55                   push ebp
// 00857e98  56                   push esi
// 00857e99  57                   push edi
// 00857e9a  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 00857ea1  33db                 xor ebx, ebx
// 00857ea3  3bfb                 cmp edi, ebx
// 00857ea5  8bf1                 mov esi, ecx
// 00857ea7  0f8ca5010000         jl 0x858052
// 00857ead  e89ee7ffff           call 0x856650
// 00857eb2  48                   dec eax
// 00857eb3  3bf8                 cmp edi, eax
// 00857eb5  0f8d97010000         jge 0x858052
// 00857ebb  e860ffffff           call 0x857e20
// 00857ec0  53                   push ebx
// 00857ec1  8d8c2484000000       lea ecx, [esp + 0x84]
// 00857ec8  e8333bffff           call 0x84ba00
// 00857ecd  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 00857ed0  0f8df9030000         jge 0x8582cf
// 00857ed6  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00857ed9  8b2cb8               mov ebp, dword ptr [eax + edi*4]
// 00857edc  8d4701               lea eax, [edi + 1]
// 00857edf  3bc3                 cmp eax, ebx
// 00857ee1  0f8ce8030000         jl 0x8582cf
// 00857ee7  3b4670               cmp eax, dword ptr [esi + 0x70]
// 00857eea  0f8ddf030000         jge 0x8582cf
// 00857ef0  8b5534               mov edx, dword ptr [ebp + 0x34]
// 00857ef3  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00857ef6  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 00857ef9  89542470             mov dword ptr [esp + 0x70], edx
// 00857efd  8b4538               mov eax, dword ptr [ebp + 0x38]
// 00857f00  89442474             mov dword ptr [esp + 0x74], eax
// 00857f04  8b4d3c               mov ecx, dword ptr [ebp + 0x3c]
// 00857f07  894c2478             mov dword ptr [esp + 0x78], ecx
// 00857f0b  8b5540               mov edx, dword ptr [ebp + 0x40]
// 00857f0e  8954247c             mov dword ptr [esp + 0x7c], edx
// 00857f12  8b4734               mov eax, dword ptr [edi + 0x34]
// 00857f15  89442460             mov dword ptr [esp + 0x60], eax
// 00857f19  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00857f1c  894c2464             mov dword ptr [esp + 0x64], ecx
// 00857f20  8b573c               mov edx, dword ptr [edi + 0x3c]
// 00857f23  89542468             mov dword ptr [esp + 0x68], edx
// 00857f27  8b4740               mov eax, dword ptr [edi + 0x40]
// 00857f2a  8d4c2460             lea ecx, [esp + 0x60]
// 00857f2e  51                   push ecx
// 00857f2f  8d542474             lea edx, [esp + 0x74]
// 00857f33  89442470             mov dword ptr [esp + 0x70], eax
// 00857f37  52                   push edx
// 00857f38  8d442428             lea eax, [esp + 0x28]
// 00857f3c  50                   push eax
// 00857f3d  897c244c             mov dword ptr [esp + 0x4c], edi
// 00857f41  ff1530cb9800         call dword ptr [0x98cb30]
// 00857f47  8b8da0000000         mov ecx, dword ptr [ebp + 0xa0]
// 00857f4d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00857f51  8b95a4000000         mov edx, dword ptr [ebp + 0xa4]
// 00857f57  89542414             mov dword ptr [esp + 0x14], edx
// 00857f5b  8b85a8000000         mov eax, dword ptr [ebp + 0xa8]
// 00857f61  89442418             mov dword ptr [esp + 0x18], eax
// 00857f65  8b8dac000000         mov ecx, dword ptr [ebp + 0xac]
// 00857f6b  8d542410             lea edx, [esp + 0x10]
// 00857f6f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00857f73  52                   push edx
// 00857f74  8bce                 mov ecx, esi
// 00857f76  e87fbef9ff           call 0x7f3dfa
// 00857f7b  8d442420             lea eax, [esp + 0x20]
// 00857f7f  50                   push eax
// 00857f80  8bce                 mov ecx, esi
// 00857f82  e873bef9ff           call 0x7f3dfa
// 00857f87  8b5620               mov edx, dword ptr [esi + 0x20]
// 00857f8a  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00857f91  51                   push ecx
// 00857f92  52                   push edx
// 00857f93  ff1554cc9800         call dword ptr [0x98cc54]
// 00857f99  399ecc000000         cmp dword ptr [esi + 0xcc], ebx
// 00857f9f  0f84ba000000         je 0x85805f
// 00857fa5  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00857fac  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00857fb3  33c0                 xor eax, eax
// 00857fb5  399e9c000000         cmp dword ptr [esi + 0x9c], ebx
// 00857fbb  0f94c0               sete al
// 00857fbe  50                   push eax
// 00857fbf  51                   push ecx
// 00857fc0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00857fc4  52                   push edx
// 00857fc5  8b542430             mov edx, dword ptr [esp + 0x30]
// 00857fc9  8d44241c             lea eax, [esp + 0x1c]
// 00857fcd  50                   push eax
// 00857fce  83ec10               sub esp, 0x10
// 00857fd1  8bc4                 mov eax, esp
// 00857fd3  8908                 mov dword ptr [eax], ecx
// 00857fd5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00857fd9  895004               mov dword ptr [eax + 4], edx
// 00857fdc  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00857fe0  894808               mov dword ptr [eax + 8], ecx
// 00857fe3  56                   push esi
// 00857fe4  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00857feb  89500c               mov dword ptr [eax + 0xc], edx
// 00857fee  e89d3affff           call 0x84ba90
// 00857ff3  85c0                 test eax, eax
// 00857ff5  745b                 je 0x858052
// 00857ff7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00857ffb  8b542424             mov edx, dword ptr [esp + 0x24]
// 00857fff  57                   push edi
// 00858000  55                   push ebp
// 00858001  83ec10               sub esp, 0x10
// 00858004  8bc4                 mov eax, esp
// 00858006  8908                 mov dword ptr [eax], ecx
// 00858008  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0085800c  895004               mov dword ptr [eax + 4], edx
// 0085800f  8b542444             mov edx, dword ptr [esp + 0x44]
// 00858013  894808               mov dword ptr [eax + 8], ecx
// 00858016  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0085801a  89500c               mov dword ptr [eax + 0xc], edx
// 0085801d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00858021  83ec10               sub esp, 0x10
// 00858024  8bc4                 mov eax, esp
// 00858026  8908                 mov dword ptr [eax], ecx
// 00858028  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0085802c  895004               mov dword ptr [eax + 4], edx
// 0085802f  8b542444             mov edx, dword ptr [esp + 0x44]
// 00858033  894808               mov dword ptr [eax + 8], ecx
// 00858036  8bce                 mov ecx, esi
// 00858038  89500c               mov dword ptr [eax + 0xc], edx
// 0085803b  e850e8ffff           call 0x856890
// 00858040  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00858046  8b01                 mov eax, dword ptr [ecx]
// 00858048  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0085804e  6a01                 push 1
// 00858050  ffd2                 call edx
// 00858052  5f                   pop edi
// 00858053  5e                   pop esi
// 00858054  5d                   pop ebp
// 00858055  5b                   pop ebx
// 00858056  81c488000000         add esp, 0x88
// 0085805c  c20c00               ret 0xc
// 0085805f  399e9c000000         cmp dword ptr [esi + 0x9c], ebx
// 00858065  7515                 jne 0x85807c
// 00858067  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085806b  2b8424a0000000       sub eax, dword ptr [esp + 0xa0]
// 00858072  895c2434             mov dword ptr [esp + 0x34], ebx
// 00858076  89442430             mov dword ptr [esp + 0x30], eax
// 0085807a  eb13                 jmp 0x85808f
// 0085807c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00858080  2b8c24a4000000       sub ecx, dword ptr [esp + 0xa4]
// 00858087  895c2430             mov dword ptr [esp + 0x30], ebx
// 0085808b  894c2434             mov dword ptr [esp + 0x34], ecx
// 0085808f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00858092  8d442430             lea eax, [esp + 0x30]
// 00858096  8b10                 mov edx, dword ptr [eax]
// 00858098  8b4004               mov eax, dword ptr [eax + 4]
// 0085809b  51                   push ecx
// 0085809c  8954243c             mov dword ptr [esp + 0x3c], edx
// 008580a0  89442440             mov dword ptr [esp + 0x40], eax
// 008580a4  ff152ccc9800         call dword ptr [0x98cc2c]
// 008580aa  50                   push eax
// 008580ab  e87abaf9ff           call 0x7f3b2a
// 008580b0  8b1d28cc9800         mov ebx, dword ptr [0x98cc28]
// 008580b6  ffd3                 call ebx
// 008580b8  50                   push eax
// 008580b9  e86cbaf9ff           call 0x7f3b2a
// 008580be  3bc6                 cmp eax, esi
// 008580c0  0f85e6010000         jne 0x8582ac
// 008580c6  8b3d24cc9800         mov edi, dword ptr [0x98cc24]
// 008580cc  6a00                 push 0
// 008580ce  6a0f                 push 0xf
// 008580d0  6a0f                 push 0xf
// 008580d2  6a00                 push 0
// 008580d4  8d542454             lea edx, [esp + 0x54]
// 008580d8  52                   push edx
// 008580d9  ffd7                 call edi
// 008580db  85c0                 test eax, eax
// 008580dd  7438                 je 0x858117
// 008580df  90                   nop 
// 008580e0  6a0f                 push 0xf
// 008580e2  6a0f                 push 0xf
// 008580e4  6a00                 push 0
// 008580e6  8d442450             lea eax, [esp + 0x50]
// 008580ea  50                   push eax
// 008580eb  ff15b0ca9800         call dword ptr [0x98cab0]
// 008580f1  85c0                 test eax, eax
// 008580f3  0f8459ffffff         je 0x858052
// 008580f9  8d4c2444             lea ecx, [esp + 0x44]
// 008580fd  51                   push ecx
// 008580fe  ff1594ca9800         call dword ptr [0x98ca94]
// 00858104  6a00                 push 0
// 00858106  6a0f                 push 0xf
// 00858108  6a0f                 push 0xf
// 0085810a  6a00                 push 0
// 0085810c  8d542454             lea edx, [esp + 0x54]
// 00858110  52                   push edx
// 00858111  ffd7                 call edi
// 00858113  85c0                 test eax, eax
// 00858115  75c9                 jne 0x8580e0
// 00858117  6a00                 push 0
// 00858119  6a00                 push 0
// 0085811b  6a00                 push 0
// 0085811d  8d442450             lea eax, [esp + 0x50]
// 00858121  50                   push eax
// 00858122  ff15b0ca9800         call dword ptr [0x98cab0]
// 00858128  85c0                 test eax, eax
// 0085812a  0f847c010000         je 0x8582ac
// 00858130  8b442448             mov eax, dword ptr [esp + 0x48]
// 00858134  3d00020000           cmp eax, 0x200
// 00858139  0f8537010000         jne 0x858276
// 0085813f  8b442450             mov eax, dword ptr [esp + 0x50]
// 00858143  8b5620               mov edx, dword ptr [esi + 0x20]
// 00858146  0fbfc8               movsx ecx, ax
// 00858149  c1e810               shr eax, 0x10
// 0085814c  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 00858153  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0085815a  98                   cwde 
// 0085815b  51                   push ecx
// 0085815c  52                   push edx
// 0085815d  898424ac000000       mov dword ptr [esp + 0xac], eax
// 00858164  ff1554cc9800         call dword ptr [0x98cc54]
// 0085816a  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00858171  03442438             add eax, dword ptr [esp + 0x38]
// 00858175  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0085817c  034c243c             add ecx, dword ptr [esp + 0x3c]
// 00858180  8b542428             mov edx, dword ptr [esp + 0x28]
// 00858184  3bc2                 cmp eax, edx
// 00858186  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 0085818d  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 00858194  8bf8                 mov edi, eax
// 00858196  7c02                 jl 0x85819a
// 00858198  8bfa                 mov edi, edx
// 0085819a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0085819e  3bfb                 cmp edi, ebx
// 008581a0  7e08                 jle 0x8581aa
// 008581a2  3bc2                 cmp eax, edx
// 008581a4  7c0d                 jl 0x8581b3
// 008581a6  8bc2                 mov eax, edx
// 008581a8  eb02                 jmp 0x8581ac
// 008581aa  8bc3                 mov eax, ebx
// 008581ac  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 008581b3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008581b7  3bcf                 cmp ecx, edi
// 008581b9  8bd1                 mov edx, ecx
// 008581bb  7c02                 jl 0x8581bf
// 008581bd  8bd7                 mov edx, edi
// 008581bf  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008581c3  3bd3                 cmp edx, ebx
// 008581c5  7e08                 jle 0x8581cf
// 008581c7  3bcf                 cmp ecx, edi
// 008581c9  7c0d                 jl 0x8581d8
// 008581cb  8bcf                 mov ecx, edi
// 008581cd  eb02                 jmp 0x8581d1
// 008581cf  8bcb                 mov ecx, ebx
// 008581d1  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 008581d8  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 008581df  7518                 jne 0x8581f9
// 008581e1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008581e5  3bc8                 cmp ecx, eax
// 008581e7  0f84a9000000         je 0x858296
// 008581ed  6a00                 push 0
// 008581ef  2bc1                 sub eax, ecx
// 008581f1  50                   push eax
// 008581f2  8d442418             lea eax, [esp + 0x18]
// 008581f6  50                   push eax
// 008581f7  eb16                 jmp 0x85820f
// 008581f9  8b442414             mov eax, dword ptr [esp + 0x14]
// 008581fd  3bc1                 cmp eax, ecx
// 008581ff  0f8491000000         je 0x858296
// 00858205  2bc8                 sub ecx, eax
// 00858207  51                   push ecx
// 00858208  6a00                 push 0
// 0085820a  8d4c2418             lea ecx, [esp + 0x18]
// 0085820e  51                   push ecx
// 0085820f  ff156ccc9800         call dword ptr [0x98cc6c]
// 00858215  8b542440             mov edx, dword ptr [esp + 0x40]
// 00858219  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085821d  52                   push edx
// 0085821e  8b542428             mov edx, dword ptr [esp + 0x28]
// 00858222  55                   push ebp
// 00858223  83ec10               sub esp, 0x10
// 00858226  8bc4                 mov eax, esp
// 00858228  8908                 mov dword ptr [eax], ecx
// 0085822a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0085822e  895004               mov dword ptr [eax + 4], edx
// 00858231  8b542444             mov edx, dword ptr [esp + 0x44]
// 00858235  894808               mov dword ptr [eax + 8], ecx
// 00858238  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0085823c  89500c               mov dword ptr [eax + 0xc], edx
// 0085823f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00858243  83ec10               sub esp, 0x10
// 00858246  8bc4                 mov eax, esp
// 00858248  8908                 mov dword ptr [eax], ecx
// 0085824a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0085824e  895004               mov dword ptr [eax + 4], edx
// 00858251  8b542444             mov edx, dword ptr [esp + 0x44]
// 00858255  894808               mov dword ptr [eax + 8], ecx
// 00858258  8bce                 mov ecx, esi
// 0085825a  89500c               mov dword ptr [eax + 0xc], edx
// 0085825d  e82ee6ffff           call 0x856890
// 00858262  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00858268  8b01                 mov eax, dword ptr [ecx]
// 0085826a  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00858270  6a01                 push 1
// 00858272  ffd2                 call edx
// 00858274  eb20                 jmp 0x858296
// 00858276  3d00010000           cmp eax, 0x100
// 0085827b  7507                 jne 0x858284
// 0085827d  837c244c1b           cmp dword ptr [esp + 0x4c], 0x1b
// 00858282  eb05                 jmp 0x858289
// 00858284  3d02020000           cmp eax, 0x202
// 00858289  7421                 je 0x8582ac
// 0085828b  8d442444             lea eax, [esp + 0x44]
// 0085828f  50                   push eax
// 00858290  ff1594ca9800         call dword ptr [0x98ca94]
// 00858296  8b1d28cc9800         mov ebx, dword ptr [0x98cc28]
// 0085829c  ffd3                 call ebx
// 0085829e  50                   push eax
// 0085829f  e886b8f9ff           call 0x7f3b2a
// 008582a4  3bc6                 cmp eax, esi
// 008582a6  0f841afeffff         je 0x8580c6
// 008582ac  ffd3                 call ebx
// 008582ae  50                   push eax
// 008582af  e876b8f9ff           call 0x7f3b2a
// 008582b4  3bc6                 cmp eax, esi
// 008582b6  0f8596fdffff         jne 0x858052
// 008582bc  ff1520cc9800         call dword ptr [0x98cc20]
// 008582c2  5f                   pop edi
// 008582c3  5e                   pop esi
// 008582c4  5d                   pop ebp
// 008582c5  5b                   pop ebx
// 008582c6  81c488000000         add esp, 0x88
// 008582cc  c20c00               ret 0xc
// 008582cf  e838b8f9ff           call 0x7f3b0c
// copied from an identical function in another client (function ?TrackSplitter@CXTPTabClientWnd@@IAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp