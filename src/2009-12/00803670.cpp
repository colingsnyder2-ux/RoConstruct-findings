// roc 2009-12 00803670  unit: CXTPPaintManager  size: 802 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00803670
//
// 00803670  6aff                 push -1
// 00803672  6821949500           push 0x959421
// 00803677  64a100000000         mov eax, dword ptr fs:[0]
// 0080367d  50                   push eax
// 0080367e  83ec34               sub esp, 0x34
// 00803681  53                   push ebx
// 00803682  55                   push ebp
// 00803683  56                   push esi
// 00803684  57                   push edi
// 00803685  a10052b600           mov eax, dword ptr [0xb65200]
// 0080368a  33c4                 xor eax, esp
// 0080368c  50                   push eax
// 0080368d  8d442448             lea eax, [esp + 0x48]
// 00803691  64a300000000         mov dword ptr fs:[0], eax
// 00803697  8bf9                 mov edi, ecx
// 00803699  897c241c             mov dword ptr [esp + 0x1c], edi
// 0080369d  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008036a1  8bce                 mov ecx, esi
// 008036a3  e8d8a50400           call 0x84dc80
// 008036a8  8be8                 mov ebp, eax
// 008036aa  c1ed1a               shr ebp, 0x1a
// 008036ad  f7d5                 not ebp
// 008036af  83e501               and ebp, 1
// 008036b2  896c2414             mov dword ptr [esp + 0x14], ebp
// 008036b6  7518                 jne 0x8036d0
// 008036b8  8bce                 mov ecx, esi
// 008036ba  e8112c0c00           call 0x8c62d0
// 008036bf  83b8b800000000       cmp dword ptr [eax + 0xb8], 0
// 008036c6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008036ce  7408                 je 0x8036d8
// 008036d0  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008036d8  8bce                 mov ecx, esi
// 008036da  e8b1700500           call 0x85a790
// 008036df  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 008036e3  83f8ff               cmp eax, -1
// 008036e6  7451                 je 0x803739
// 008036e8  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008036ec  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008036f0  8b542464             mov edx, dword ptr [esp + 0x64]
// 008036f4  89442428             mov dword ptr [esp + 0x28], eax
// 008036f8  8b442468             mov eax, dword ptr [esp + 0x68]
// 008036fc  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00803700  8bce                 mov ecx, esi
// 00803702  89542430             mov dword ptr [esp + 0x30], edx
// 00803706  89442434             mov dword ptr [esp + 0x34], eax
// 0080370a  e871a50400           call 0x84dc80
// 0080370f  a900010000           test eax, 0x100
// 00803714  750f                 jne 0x803725
// 00803716  6aff                 push -1
// 00803718  6aff                 push -1
// 0080371a  8d4c2430             lea ecx, [esp + 0x30]
// 0080371e  51                   push ecx
// 0080371f  ff1558ca9800         call dword ptr [0x98ca58]
// 00803725  8bce                 mov ecx, esi
// 00803727  e864700500           call 0x85a790
// 0080372c  50                   push eax
// 0080372d  8d54242c             lea edx, [esp + 0x2c]
// 00803731  52                   push edx
// 00803732  8bcb                 mov ecx, ebx
// 00803734  e8c50effff           call 0x7f45fe
// 00803739  837e7800             cmp dword ptr [esi + 0x78], 0
// 0080373d  742e                 je 0x80376d
// 0080373f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00803743  8b17                 mov edx, dword ptr [edi]
// 00803745  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 0080374b  56                   push esi
// 0080374c  83ec10               sub esp, 0x10
// 0080374f  8bc4                 mov eax, esp
// 00803751  8908                 mov dword ptr [eax], ecx
// 00803753  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00803757  894804               mov dword ptr [eax + 4], ecx
// 0080375a  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0080375e  894808               mov dword ptr [eax + 8], ecx
// 00803761  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00803765  89480c               mov dword ptr [eax + 0xc], ecx
// 00803768  53                   push ebx
// 00803769  8bcf                 mov ecx, edi
// 0080376b  ffd2                 call edx
// 0080376d  8b06                 mov eax, dword ptr [esi]
// 0080376f  8b5058               mov edx, dword ptr [eax + 0x58]
// 00803772  8bce                 mov ecx, esi
// 00803774  ffd2                 call edx
// 00803776  50                   push eax
// 00803777  53                   push ebx
// 00803778  8d4c2440             lea ecx, [esp + 0x40]
// 0080377c  e8df7e0400           call 0x84b660
// 00803781  8d442428             lea eax, [esp + 0x28]
// 00803785  50                   push eax
// 00803786  8bce                 mov ecx, esi
// 00803788  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00803790  e8db6f0500           call 0x85a770
// 00803795  8b08                 mov ecx, dword ptr [eax]
// 00803797  014c245c             add dword ptr [esp + 0x5c], ecx
// 0080379b  8b5004               mov edx, dword ptr [eax + 4]
// 0080379e  01542460             add dword ptr [esp + 0x60], edx
// 008037a2  8b4808               mov ecx, dword ptr [eax + 8]
// 008037a5  294c2464             sub dword ptr [esp + 0x64], ecx
// 008037a9  8b500c               mov edx, dword ptr [eax + 0xc]
// 008037ac  29542468             sub dword ptr [esp + 0x68], edx
// 008037b0  8d44246c             lea eax, [esp + 0x6c]
// 008037b4  50                   push eax
// 008037b5  8bce                 mov ecx, esi
// 008037b7  e8746d0900           call 0x89a530
// 008037bc  8b16                 mov edx, dword ptr [esi]
// 008037be  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008037c1  8bce                 mov ecx, esi
// 008037c3  c644245001           mov byte ptr [esp + 0x50], 1
// 008037c8  ffd0                 call eax
// 008037ca  8bce                 mov ecx, esi
// 008037cc  8bf8                 mov edi, eax
// 008037ce  e81dad0100           call 0x81e4f0
// 008037d3  85c0                 test eax, eax
// 008037d5  0f848c000000         je 0x803867
// 008037db  8d4c2420             lea ecx, [esp + 0x20]
// 008037df  51                   push ecx
// 008037e0  8d4c2470             lea ecx, [esp + 0x70]
// 008037e4  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008037ea  50                   push eax
// 008037eb  8d4c2474             lea ecx, [esp + 0x74]
// 008037ef  ff1580de9800         call dword ptr [0x98de80]
// 008037f5  8b5308               mov edx, dword ptr [ebx + 8]
// 008037f8  50                   push eax
// 008037f9  52                   push edx
// 008037fa  ff156cb19800         call dword ptr [0x98b16c]
// 00803800  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00803804  85ff                 test edi, edi
// 00803806  7416                 je 0x80381e
// 00803808  8bcf                 mov ecx, edi
// 0080380a  e871a40400           call 0x84dc80
// 0080380f  33c9                 xor ecx, ecx
// 00803811  85ed                 test ebp, ebp
// 00803813  0f9ec1               setle cl
// 00803816  49                   dec ecx
// 00803817  83e102               and ecx, 2
// 0080381a  03c1                 add eax, ecx
// 0080381c  eb02                 jmp 0x803820
// 0080381e  33c0                 xor eax, eax
// 00803820  8b542464             mov edx, dword ptr [esp + 0x64]
// 00803824  2b54245c             sub edx, dword ptr [esp + 0x5c]
// 00803828  03e8                 add ebp, eax
// 0080382a  3bd5                 cmp edx, ebp
// 0080382c  7e35                 jle 0x803863
// 0080382e  8bce                 mov ecx, esi
// 00803830  e8bbac0100           call 0x81e4f0
// 00803835  83f802               cmp eax, 2
// 00803838  750a                 jne 0x803844
// 0080383a  8b442464             mov eax, dword ptr [esp + 0x64]
// 0080383e  2bc5                 sub eax, ebp
// 00803840  8944245c             mov dword ptr [esp + 0x5c], eax
// 00803844  8bce                 mov ecx, esi
// 00803846  e8a5ac0100           call 0x81e4f0
// 0080384b  83f801               cmp eax, 1
// 0080384e  7513                 jne 0x803863
// 00803850  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00803854  2bc5                 sub eax, ebp
// 00803856  03442464             add eax, dword ptr [esp + 0x64]
// 0080385a  99                   cdq 
// 0080385b  2bc2                 sub eax, edx
// 0080385d  d1f8                 sar eax, 1
// 0080385f  8944245c             mov dword ptr [esp + 0x5c], eax
// 00803863  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00803867  85ff                 test edi, edi
// 00803869  0f8482000000         je 0x8038f1
// 0080386f  8bcf                 mov ecx, edi
// 00803871  e80aa40400           call 0x84dc80
// 00803876  0344245c             add eax, dword ptr [esp + 0x5c]
// 0080387a  39442464             cmp dword ptr [esp + 0x64], eax
// 0080387e  7c59                 jl 0x8038d9
// 00803880  8bcf                 mov ecx, edi
// 00803882  85ed                 test ebp, ebp
// 00803884  7407                 je 0x80388d
// 00803886  e8b5580000           call 0x809140
// 0080388b  eb07                 jmp 0x803894
// 0080388d  6a01                 push 1
// 0080388f  e80cc90000           call 0x8101a0
// 00803894  83ec08               sub esp, 8
// 00803897  8be8                 mov ebp, eax
// 00803899  8bc4                 mov eax, esp
// 0080389b  8bcf                 mov ecx, edi
// 0080389d  89642460             mov dword ptr [esp + 0x60], esp
// 008038a1  c70000000000         mov dword ptr [eax], 0
// 008038a7  c7400400000000       mov dword ptr [eax + 4], 0
// 008038ae  e8bd1fcdff           call 0x4d5870
// 008038b3  8b542470             mov edx, dword ptr [esp + 0x70]
// 008038b7  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008038bb  03ca                 add ecx, edx
// 008038bd  2bc8                 sub ecx, eax
// 008038bf  8bc1                 mov eax, ecx
// 008038c1  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008038c5  99                   cdq 
// 008038c6  2bc2                 sub eax, edx
// 008038c8  55                   push ebp
// 008038c9  d1f8                 sar eax, 1
// 008038cb  50                   push eax
// 008038cc  51                   push ecx
// 008038cd  53                   push ebx
// 008038ce  8bcf                 mov ecx, edi
// 008038d0  e8dbd50000           call 0x810eb0
// 008038d5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008038d9  8bcf                 mov ecx, edi
// 008038db  e8a0a30400           call 0x84dc80
// 008038e0  6a00                 push 0
// 008038e2  83c002               add eax, 2
// 008038e5  50                   push eax
// 008038e6  8d542464             lea edx, [esp + 0x64]
// 008038ea  52                   push edx
// 008038eb  ff156ccc9800         call dword ptr [0x98cc6c]
// 008038f1  837c241800           cmp dword ptr [esp + 0x18], 0
// 008038f6  7469                 je 0x803961
// 008038f8  6a01                 push 1
// 008038fa  8bcb                 mov ecx, ebx
// 008038fc  e88f2b1200           call 0x926490
// 00803901  85ed                 test ebp, ebp
// 00803903  750d                 jne 0x803912
// 00803905  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00803909  6a11                 push 0x11
// 0080390b  e8309dffff           call 0x7fd640
// 00803910  eb1c                 jmp 0x80392e
// 00803912  8bce                 mov ecx, esi
// 00803914  e867cbf3ff           call 0x740480
// 00803919  83f8ff               cmp eax, -1
// 0080391c  7409                 je 0x803927
// 0080391e  8bce                 mov ecx, esi
// 00803920  e85bcbf3ff           call 0x740480
// 00803925  eb07                 jmp 0x80392e
// 00803927  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0080392b  8b4024               mov eax, dword ptr [eax + 0x24]
// 0080392e  8b13                 mov edx, dword ptr [ebx]
// 00803930  50                   push eax
// 00803931  8b4238               mov eax, dword ptr [edx + 0x38]
// 00803934  8bcb                 mov ecx, ebx
// 00803936  ffd0                 call eax
// 00803938  8b33                 mov esi, dword ptr [ebx]
// 0080393a  6864080000           push 0x864
// 0080393f  8d4c2460             lea ecx, [esp + 0x60]
// 00803943  51                   push ecx
// 00803944  8d4c2474             lea ecx, [esp + 0x74]
// 00803948  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0080394e  50                   push eax
// 0080394f  8d4c2478             lea ecx, [esp + 0x78]
// 00803953  ff1580de9800         call dword ptr [0x98de80]
// 00803959  8b5670               mov edx, dword ptr [esi + 0x70]
// 0080395c  50                   push eax
// 0080395d  8bcb                 mov ecx, ebx
// 0080395f  ffd2                 call edx
// 00803961  8d4c246c             lea ecx, [esp + 0x6c]
// 00803965  ff15c0de9800         call dword ptr [0x98dec0]
// 0080396b  8d4c2438             lea ecx, [esp + 0x38]
// 0080396f  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00803977  e8647d0400           call 0x84b6e0
// 0080397c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00803980  64890d00000000       mov dword ptr fs:[0], ecx
// 00803987  59                   pop ecx
// 00803988  5f                   pop edi
// 00803989  5e                   pop esi
// 0080398a  5d                   pop ebp
// 0080398b  5b                   pop ebx
// 0080398c  83c440               add esp, 0x40
// 0080398f  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawStatusBarPaneEntry@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp