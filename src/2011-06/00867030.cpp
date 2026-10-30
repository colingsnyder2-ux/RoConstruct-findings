// roc 2011-06 00867030  unit: CXTPTabClientWnd  size: 1092 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00867030
//
// 00867030  81ec88000000         sub esp, 0x88
// 00867036  53                   push ebx
// 00867037  55                   push ebp
// 00867038  56                   push esi
// 00867039  57                   push edi
// 0086703a  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 00867041  33db                 xor ebx, ebx
// 00867043  3bfb                 cmp edi, ebx
// 00867045  8bf1                 mov esi, ecx
// 00867047  0f8ca5010000         jl 0x8671f2
// 0086704d  e8fee7ffff           call 0x865850
// 00867052  48                   dec eax
// 00867053  3bf8                 cmp edi, eax
// 00867055  0f8d97010000         jge 0x8671f2
// 0086705b  e860ffffff           call 0x866fc0
// 00867060  53                   push ebx
// 00867061  8d8c2484000000       lea ecx, [esp + 0x84]
// 00867068  e85364ffff           call 0x85d4c0
// 0086706d  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 00867070  0f8df9030000         jge 0x86746f
// 00867076  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00867079  8b2cb8               mov ebp, dword ptr [eax + edi*4]
// 0086707c  8d4701               lea eax, [edi + 1]
// 0086707f  3bc3                 cmp eax, ebx
// 00867081  0f8ce8030000         jl 0x86746f
// 00867087  3b4670               cmp eax, dword ptr [esi + 0x70]
// 0086708a  0f8ddf030000         jge 0x86746f
// 00867090  8b5534               mov edx, dword ptr [ebp + 0x34]
// 00867093  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00867096  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 00867099  89542470             mov dword ptr [esp + 0x70], edx
// 0086709d  8b4538               mov eax, dword ptr [ebp + 0x38]
// 008670a0  89442474             mov dword ptr [esp + 0x74], eax
// 008670a4  8b4d3c               mov ecx, dword ptr [ebp + 0x3c]
// 008670a7  894c2478             mov dword ptr [esp + 0x78], ecx
// 008670ab  8b5540               mov edx, dword ptr [ebp + 0x40]
// 008670ae  8954247c             mov dword ptr [esp + 0x7c], edx
// 008670b2  8b4734               mov eax, dword ptr [edi + 0x34]
// 008670b5  89442460             mov dword ptr [esp + 0x60], eax
// 008670b9  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 008670bc  894c2464             mov dword ptr [esp + 0x64], ecx
// 008670c0  8b573c               mov edx, dword ptr [edi + 0x3c]
// 008670c3  89542468             mov dword ptr [esp + 0x68], edx
// 008670c7  8b4740               mov eax, dword ptr [edi + 0x40]
// 008670ca  8d4c2460             lea ecx, [esp + 0x60]
// 008670ce  51                   push ecx
// 008670cf  8d542474             lea edx, [esp + 0x74]
// 008670d3  89442470             mov dword ptr [esp + 0x70], eax
// 008670d7  52                   push edx
// 008670d8  8d442428             lea eax, [esp + 0x28]
// 008670dc  50                   push eax
// 008670dd  897c244c             mov dword ptr [esp + 0x4c], edi
// 008670e1  ff150c1ca400         call dword ptr [0xa41c0c]
// 008670e7  8b8da0000000         mov ecx, dword ptr [ebp + 0xa0]
// 008670ed  894c2410             mov dword ptr [esp + 0x10], ecx
// 008670f1  8b95a4000000         mov edx, dword ptr [ebp + 0xa4]
// 008670f7  89542414             mov dword ptr [esp + 0x14], edx
// 008670fb  8b85a8000000         mov eax, dword ptr [ebp + 0xa8]
// 00867101  89442418             mov dword ptr [esp + 0x18], eax
// 00867105  8b8dac000000         mov ecx, dword ptr [ebp + 0xac]
// 0086710b  8d542410             lea edx, [esp + 0x10]
// 0086710f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00867113  52                   push edx
// 00867114  8bce                 mov ecx, esi
// 00867116  e8e334faff           call 0x80a5fe
// 0086711b  8d442420             lea eax, [esp + 0x20]
// 0086711f  50                   push eax
// 00867120  8bce                 mov ecx, esi
// 00867122  e8d734faff           call 0x80a5fe
// 00867127  8b5620               mov edx, dword ptr [esi + 0x20]
// 0086712a  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00867131  51                   push ecx
// 00867132  52                   push edx
// 00867133  ff15781ca400         call dword ptr [0xa41c78]
// 00867139  399ecc000000         cmp dword ptr [esi + 0xcc], ebx
// 0086713f  0f84ba000000         je 0x8671ff
// 00867145  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0086714c  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00867153  33c0                 xor eax, eax
// 00867155  399e9c000000         cmp dword ptr [esi + 0x9c], ebx
// 0086715b  0f94c0               sete al
// 0086715e  50                   push eax
// 0086715f  51                   push ecx
// 00867160  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00867164  52                   push edx
// 00867165  8b542430             mov edx, dword ptr [esp + 0x30]
// 00867169  8d44241c             lea eax, [esp + 0x1c]
// 0086716d  50                   push eax
// 0086716e  83ec10               sub esp, 0x10
// 00867171  8bc4                 mov eax, esp
// 00867173  8908                 mov dword ptr [eax], ecx
// 00867175  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00867179  895004               mov dword ptr [eax + 4], edx
// 0086717c  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00867180  894808               mov dword ptr [eax + 8], ecx
// 00867183  56                   push esi
// 00867184  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0086718b  89500c               mov dword ptr [eax + 0xc], edx
// 0086718e  e8bd63ffff           call 0x85d550
// 00867193  85c0                 test eax, eax
// 00867195  745b                 je 0x8671f2
// 00867197  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0086719b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0086719f  57                   push edi
// 008671a0  55                   push ebp
// 008671a1  83ec10               sub esp, 0x10
// 008671a4  8bc4                 mov eax, esp
// 008671a6  8908                 mov dword ptr [eax], ecx
// 008671a8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008671ac  895004               mov dword ptr [eax + 4], edx
// 008671af  8b542444             mov edx, dword ptr [esp + 0x44]
// 008671b3  894808               mov dword ptr [eax + 8], ecx
// 008671b6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008671ba  89500c               mov dword ptr [eax + 0xc], edx
// 008671bd  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008671c1  83ec10               sub esp, 0x10
// 008671c4  8bc4                 mov eax, esp
// 008671c6  8908                 mov dword ptr [eax], ecx
// 008671c8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008671cc  895004               mov dword ptr [eax + 4], edx
// 008671cf  8b542444             mov edx, dword ptr [esp + 0x44]
// 008671d3  894808               mov dword ptr [eax + 8], ecx
// 008671d6  8bce                 mov ecx, esi
// 008671d8  89500c               mov dword ptr [eax + 0xc], edx
// 008671db  e8b0e8ffff           call 0x865a90
// 008671e0  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008671e6  8b01                 mov eax, dword ptr [ecx]
// 008671e8  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008671ee  6a01                 push 1
// 008671f0  ffd2                 call edx
// 008671f2  5f                   pop edi
// 008671f3  5e                   pop esi
// 008671f4  5d                   pop ebp
// 008671f5  5b                   pop ebx
// 008671f6  81c488000000         add esp, 0x88
// 008671fc  c20c00               ret 0xc
// 008671ff  399e9c000000         cmp dword ptr [esi + 0x9c], ebx
// 00867205  7515                 jne 0x86721c
// 00867207  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086720b  2b8424a0000000       sub eax, dword ptr [esp + 0xa0]
// 00867212  895c2434             mov dword ptr [esp + 0x34], ebx
// 00867216  89442430             mov dword ptr [esp + 0x30], eax
// 0086721a  eb13                 jmp 0x86722f
// 0086721c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00867220  2b8c24a4000000       sub ecx, dword ptr [esp + 0xa4]
// 00867227  895c2430             mov dword ptr [esp + 0x30], ebx
// 0086722b  894c2434             mov dword ptr [esp + 0x34], ecx
// 0086722f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00867232  8d442430             lea eax, [esp + 0x30]
// 00867236  8b10                 mov edx, dword ptr [eax]
// 00867238  8b4004               mov eax, dword ptr [eax + 4]
// 0086723b  51                   push ecx
// 0086723c  8954243c             mov dword ptr [esp + 0x3c], edx
// 00867240  89442440             mov dword ptr [esp + 0x40], eax
// 00867244  ff15341ba400         call dword ptr [0xa41b34]
// 0086724a  50                   push eax
// 0086724b  e8d830faff           call 0x80a328
// 00867250  8b1d381ba400         mov ebx, dword ptr [0xa41b38]
// 00867256  ffd3                 call ebx
// 00867258  50                   push eax
// 00867259  e8ca30faff           call 0x80a328
// 0086725e  3bc6                 cmp eax, esi
// 00867260  0f85e6010000         jne 0x86744c
// 00867266  8b3d3c1ba400         mov edi, dword ptr [0xa41b3c]
// 0086726c  6a00                 push 0
// 0086726e  6a0f                 push 0xf
// 00867270  6a0f                 push 0xf
// 00867272  6a00                 push 0
// 00867274  8d542454             lea edx, [esp + 0x54]
// 00867278  52                   push edx
// 00867279  ffd7                 call edi
// 0086727b  85c0                 test eax, eax
// 0086727d  7438                 je 0x8672b7
// 0086727f  90                   nop 
// 00867280  6a0f                 push 0xf
// 00867282  6a0f                 push 0xf
// 00867284  6a00                 push 0
// 00867286  8d442450             lea eax, [esp + 0x50]
// 0086728a  50                   push eax
// 0086728b  ff15281ca400         call dword ptr [0xa41c28]
// 00867291  85c0                 test eax, eax
// 00867293  0f8459ffffff         je 0x8671f2
// 00867299  8d4c2444             lea ecx, [esp + 0x44]
// 0086729d  51                   push ecx
// 0086729e  ff150c1aa400         call dword ptr [0xa41a0c]
// 008672a4  6a00                 push 0
// 008672a6  6a0f                 push 0xf
// 008672a8  6a0f                 push 0xf
// 008672aa  6a00                 push 0
// 008672ac  8d542454             lea edx, [esp + 0x54]
// 008672b0  52                   push edx
// 008672b1  ffd7                 call edi
// 008672b3  85c0                 test eax, eax
// 008672b5  75c9                 jne 0x867280
// 008672b7  6a00                 push 0
// 008672b9  6a00                 push 0
// 008672bb  6a00                 push 0
// 008672bd  8d442450             lea eax, [esp + 0x50]
// 008672c1  50                   push eax
// 008672c2  ff15281ca400         call dword ptr [0xa41c28]
// 008672c8  85c0                 test eax, eax
// 008672ca  0f847c010000         je 0x86744c
// 008672d0  8b442448             mov eax, dword ptr [esp + 0x48]
// 008672d4  3d00020000           cmp eax, 0x200
// 008672d9  0f8537010000         jne 0x867416
// 008672df  8b442450             mov eax, dword ptr [esp + 0x50]
// 008672e3  8b5620               mov edx, dword ptr [esi + 0x20]
// 008672e6  0fbfc8               movsx ecx, ax
// 008672e9  c1e810               shr eax, 0x10
// 008672ec  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 008672f3  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 008672fa  98                   cwde 
// 008672fb  51                   push ecx
// 008672fc  52                   push edx
// 008672fd  898424ac000000       mov dword ptr [esp + 0xac], eax
// 00867304  ff15781ca400         call dword ptr [0xa41c78]
// 0086730a  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00867311  03442438             add eax, dword ptr [esp + 0x38]
// 00867315  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0086731c  034c243c             add ecx, dword ptr [esp + 0x3c]
// 00867320  8b542428             mov edx, dword ptr [esp + 0x28]
// 00867324  3bc2                 cmp eax, edx
// 00867326  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 0086732d  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 00867334  8bf8                 mov edi, eax
// 00867336  7c02                 jl 0x86733a
// 00867338  8bfa                 mov edi, edx
// 0086733a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0086733e  3bfb                 cmp edi, ebx
// 00867340  7e08                 jle 0x86734a
// 00867342  3bc2                 cmp eax, edx
// 00867344  7c0d                 jl 0x867353
// 00867346  8bc2                 mov eax, edx
// 00867348  eb02                 jmp 0x86734c
// 0086734a  8bc3                 mov eax, ebx
// 0086734c  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 00867353  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00867357  3bcf                 cmp ecx, edi
// 00867359  8bd1                 mov edx, ecx
// 0086735b  7c02                 jl 0x86735f
// 0086735d  8bd7                 mov edx, edi
// 0086735f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00867363  3bd3                 cmp edx, ebx
// 00867365  7e08                 jle 0x86736f
// 00867367  3bcf                 cmp ecx, edi
// 00867369  7c0d                 jl 0x867378
// 0086736b  8bcf                 mov ecx, edi
// 0086736d  eb02                 jmp 0x867371
// 0086736f  8bcb                 mov ecx, ebx
// 00867371  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 00867378  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 0086737f  7518                 jne 0x867399
// 00867381  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00867385  3bc8                 cmp ecx, eax
// 00867387  0f84a9000000         je 0x867436
// 0086738d  6a00                 push 0
// 0086738f  2bc1                 sub eax, ecx
// 00867391  50                   push eax
// 00867392  8d442418             lea eax, [esp + 0x18]
// 00867396  50                   push eax
// 00867397  eb16                 jmp 0x8673af
// 00867399  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086739d  3bc1                 cmp eax, ecx
// 0086739f  0f8491000000         je 0x867436
// 008673a5  2bc8                 sub ecx, eax
// 008673a7  51                   push ecx
// 008673a8  6a00                 push 0
// 008673aa  8d4c2418             lea ecx, [esp + 0x18]
// 008673ae  51                   push ecx
// 008673af  ff15601ca400         call dword ptr [0xa41c60]
// 008673b5  8b542440             mov edx, dword ptr [esp + 0x40]
// 008673b9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008673bd  52                   push edx
// 008673be  8b542428             mov edx, dword ptr [esp + 0x28]
// 008673c2  55                   push ebp
// 008673c3  83ec10               sub esp, 0x10
// 008673c6  8bc4                 mov eax, esp
// 008673c8  8908                 mov dword ptr [eax], ecx
// 008673ca  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008673ce  895004               mov dword ptr [eax + 4], edx
// 008673d1  8b542444             mov edx, dword ptr [esp + 0x44]
// 008673d5  894808               mov dword ptr [eax + 8], ecx
// 008673d8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008673dc  89500c               mov dword ptr [eax + 0xc], edx
// 008673df  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008673e3  83ec10               sub esp, 0x10
// 008673e6  8bc4                 mov eax, esp
// 008673e8  8908                 mov dword ptr [eax], ecx
// 008673ea  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008673ee  895004               mov dword ptr [eax + 4], edx
// 008673f1  8b542444             mov edx, dword ptr [esp + 0x44]
// 008673f5  894808               mov dword ptr [eax + 8], ecx
// 008673f8  8bce                 mov ecx, esi
// 008673fa  89500c               mov dword ptr [eax + 0xc], edx
// 008673fd  e88ee6ffff           call 0x865a90
// 00867402  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00867408  8b01                 mov eax, dword ptr [ecx]
// 0086740a  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00867410  6a01                 push 1
// 00867412  ffd2                 call edx
// 00867414  eb20                 jmp 0x867436
// 00867416  3d00010000           cmp eax, 0x100
// 0086741b  7507                 jne 0x867424
// 0086741d  837c244c1b           cmp dword ptr [esp + 0x4c], 0x1b
// 00867422  eb05                 jmp 0x867429
// 00867424  3d02020000           cmp eax, 0x202
// 00867429  7421                 je 0x86744c
// 0086742b  8d442444             lea eax, [esp + 0x44]
// 0086742f  50                   push eax
// 00867430  ff150c1aa400         call dword ptr [0xa41a0c]
// 00867436  8b1d381ba400         mov ebx, dword ptr [0xa41b38]
// 0086743c  ffd3                 call ebx
// 0086743e  50                   push eax
// 0086743f  e8e42efaff           call 0x80a328
// 00867444  3bc6                 cmp eax, esi
// 00867446  0f841afeffff         je 0x867266
// 0086744c  ffd3                 call ebx
// 0086744e  50                   push eax
// 0086744f  e8d42efaff           call 0x80a328
// 00867454  3bc6                 cmp eax, esi
// 00867456  0f8596fdffff         jne 0x8671f2
// 0086745c  ff15401ba400         call dword ptr [0xa41b40]
// 00867462  5f                   pop edi
// 00867463  5e                   pop esi
// 00867464  5d                   pop ebp
// 00867465  5b                   pop ebx
// 00867466  81c488000000         add esp, 0x88
// 0086746c  c20c00               ret 0xc
// 0086746f  e8962efaff           call 0x80a30a
// copied from an identical function in another client (function ?TrackSplitter@CXTPTabClientWnd@@IAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp