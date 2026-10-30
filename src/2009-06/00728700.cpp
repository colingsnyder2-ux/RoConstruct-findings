// roc 2009-06 00728700  unit: CXTPPaintManager  size: 802 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00728700
//
// 00728700  6aff                 push -1
// 00728702  6831518700           push 0x875131
// 00728707  64a100000000         mov eax, dword ptr fs:[0]
// 0072870d  50                   push eax
// 0072870e  83ec34               sub esp, 0x34
// 00728711  53                   push ebx
// 00728712  55                   push ebp
// 00728713  56                   push esi
// 00728714  57                   push edi
// 00728715  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0072871a  33c4                 xor eax, esp
// 0072871c  50                   push eax
// 0072871d  8d442448             lea eax, [esp + 0x48]
// 00728721  64a300000000         mov dword ptr fs:[0], eax
// 00728727  8bf9                 mov edi, ecx
// 00728729  897c241c             mov dword ptr [esp + 0x1c], edi
// 0072872d  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00728731  8bce                 mov ecx, esi
// 00728733  e8e8fa0900           call 0x7c8220
// 00728738  8be8                 mov ebp, eax
// 0072873a  c1ed1a               shr ebp, 0x1a
// 0072873d  f7d5                 not ebp
// 0072873f  83e501               and ebp, 1
// 00728742  896c2414             mov dword ptr [esp + 0x14], ebp
// 00728746  7518                 jne 0x728760
// 00728748  8bce                 mov ecx, esi
// 0072874a  e80121cfff           call 0x41a850
// 0072874f  83b8b800000000       cmp dword ptr [eax + 0xb8], 0
// 00728756  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0072875e  7408                 je 0x728768
// 00728760  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00728768  8bce                 mov ecx, esi
// 0072876a  e831ca0500           call 0x7851a0
// 0072876f  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00728773  83f8ff               cmp eax, -1
// 00728776  7451                 je 0x7287c9
// 00728778  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0072877c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00728780  8b542464             mov edx, dword ptr [esp + 0x64]
// 00728784  89442428             mov dword ptr [esp + 0x28], eax
// 00728788  8b442468             mov eax, dword ptr [esp + 0x68]
// 0072878c  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00728790  8bce                 mov ecx, esi
// 00728792  89542430             mov dword ptr [esp + 0x30], edx
// 00728796  89442434             mov dword ptr [esp + 0x34], eax
// 0072879a  e881fa0900           call 0x7c8220
// 0072879f  a900010000           test eax, 0x100
// 007287a4  750f                 jne 0x7287b5
// 007287a6  6aff                 push -1
// 007287a8  6aff                 push -1
// 007287aa  8d4c2430             lea ecx, [esp + 0x30]
// 007287ae  51                   push ecx
// 007287af  ff15bced8900         call dword ptr [0x89edbc]
// 007287b5  8bce                 mov ecx, esi
// 007287b7  e8e4c90500           call 0x7851a0
// 007287bc  50                   push eax
// 007287bd  8d54242c             lea edx, [esp + 0x2c]
// 007287c1  52                   push edx
// 007287c2  8bcb                 mov ecx, ebx
// 007287c4  e80710ffff           call 0x7197d0
// 007287c9  837e7800             cmp dword ptr [esi + 0x78], 0
// 007287cd  742e                 je 0x7287fd
// 007287cf  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007287d3  8b17                 mov edx, dword ptr [edi]
// 007287d5  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 007287db  56                   push esi
// 007287dc  83ec10               sub esp, 0x10
// 007287df  8bc4                 mov eax, esp
// 007287e1  8908                 mov dword ptr [eax], ecx
// 007287e3  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007287e7  894804               mov dword ptr [eax + 4], ecx
// 007287ea  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007287ee  894808               mov dword ptr [eax + 8], ecx
// 007287f1  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007287f5  89480c               mov dword ptr [eax + 0xc], ecx
// 007287f8  53                   push ebx
// 007287f9  8bcf                 mov ecx, edi
// 007287fb  ffd2                 call edx
// 007287fd  8b06                 mov eax, dword ptr [esi]
// 007287ff  8b5058               mov edx, dword ptr [eax + 0x58]
// 00728802  8bce                 mov ecx, esi
// 00728804  ffd2                 call edx
// 00728806  50                   push eax
// 00728807  53                   push ebx
// 00728808  8d4c2440             lea ecx, [esp + 0x40]
// 0072880c  e84f800400           call 0x770860
// 00728811  8d442428             lea eax, [esp + 0x28]
// 00728815  50                   push eax
// 00728816  8bce                 mov ecx, esi
// 00728818  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00728820  e88b6e0500           call 0x77f6b0
// 00728825  8b08                 mov ecx, dword ptr [eax]
// 00728827  014c245c             add dword ptr [esp + 0x5c], ecx
// 0072882b  8b5004               mov edx, dword ptr [eax + 4]
// 0072882e  01542460             add dword ptr [esp + 0x60], edx
// 00728832  8b4808               mov ecx, dword ptr [eax + 8]
// 00728835  294c2464             sub dword ptr [esp + 0x64], ecx
// 00728839  8b500c               mov edx, dword ptr [eax + 0xc]
// 0072883c  29542468             sub dword ptr [esp + 0x68], edx
// 00728840  8d44246c             lea eax, [esp + 0x6c]
// 00728844  50                   push eax
// 00728845  8bce                 mov ecx, esi
// 00728847  e8846e0500           call 0x77f6d0
// 0072884c  8b16                 mov edx, dword ptr [esi]
// 0072884e  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00728851  8bce                 mov ecx, esi
// 00728853  c644245001           mov byte ptr [esp + 0x50], 1
// 00728858  ffd0                 call eax
// 0072885a  8bce                 mov ecx, esi
// 0072885c  8bf8                 mov edi, eax
// 0072885e  e8bd6e0500           call 0x77f720
// 00728863  85c0                 test eax, eax
// 00728865  0f848c000000         je 0x7288f7
// 0072886b  8d4c2420             lea ecx, [esp + 0x20]
// 0072886f  51                   push ecx
// 00728870  8d4c2470             lea ecx, [esp + 0x70]
// 00728874  ff1554fb8900         call dword ptr [0x89fb54]
// 0072887a  50                   push eax
// 0072887b  8d4c2474             lea ecx, [esp + 0x74]
// 0072887f  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00728885  8b5308               mov edx, dword ptr [ebx + 8]
// 00728888  50                   push eax
// 00728889  52                   push edx
// 0072888a  ff1550e18900         call dword ptr [0x89e150]
// 00728890  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00728894  85ff                 test edi, edi
// 00728896  7416                 je 0x7288ae
// 00728898  8bcf                 mov ecx, edi
// 0072889a  e881f90900           call 0x7c8220
// 0072889f  33c9                 xor ecx, ecx
// 007288a1  85ed                 test ebp, ebp
// 007288a3  0f9ec1               setle cl
// 007288a6  49                   dec ecx
// 007288a7  83e102               and ecx, 2
// 007288aa  03c1                 add eax, ecx
// 007288ac  eb02                 jmp 0x7288b0
// 007288ae  33c0                 xor eax, eax
// 007288b0  8b542464             mov edx, dword ptr [esp + 0x64]
// 007288b4  2b54245c             sub edx, dword ptr [esp + 0x5c]
// 007288b8  03e8                 add ebp, eax
// 007288ba  3bd5                 cmp edx, ebp
// 007288bc  7e35                 jle 0x7288f3
// 007288be  8bce                 mov ecx, esi
// 007288c0  e85b6e0500           call 0x77f720
// 007288c5  83f802               cmp eax, 2
// 007288c8  750a                 jne 0x7288d4
// 007288ca  8b442464             mov eax, dword ptr [esp + 0x64]
// 007288ce  2bc5                 sub eax, ebp
// 007288d0  8944245c             mov dword ptr [esp + 0x5c], eax
// 007288d4  8bce                 mov ecx, esi
// 007288d6  e8456e0500           call 0x77f720
// 007288db  83f801               cmp eax, 1
// 007288de  7513                 jne 0x7288f3
// 007288e0  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007288e4  2bc5                 sub eax, ebp
// 007288e6  03442464             add eax, dword ptr [esp + 0x64]
// 007288ea  99                   cdq 
// 007288eb  2bc2                 sub eax, edx
// 007288ed  d1f8                 sar eax, 1
// 007288ef  8944245c             mov dword ptr [esp + 0x5c], eax
// 007288f3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007288f7  85ff                 test edi, edi
// 007288f9  0f8482000000         je 0x728981
// 007288ff  8bcf                 mov ecx, edi
// 00728901  e81af90900           call 0x7c8220
// 00728906  0344245c             add eax, dword ptr [esp + 0x5c]
// 0072890a  39442464             cmp dword ptr [esp + 0x64], eax
// 0072890e  7c59                 jl 0x728969
// 00728910  8bcf                 mov ecx, edi
// 00728912  85ed                 test ebp, ebp
// 00728914  7407                 je 0x72891d
// 00728916  e8a5960000           call 0x731fc0
// 0072891b  eb07                 jmp 0x728924
// 0072891d  6a01                 push 1
// 0072891f  e88c070100           call 0x7390b0
// 00728924  83ec08               sub esp, 8
// 00728927  8be8                 mov ebp, eax
// 00728929  8bc4                 mov eax, esp
// 0072892b  8bcf                 mov ecx, edi
// 0072892d  89642460             mov dword ptr [esp + 0x60], esp
// 00728931  c70000000000         mov dword ptr [eax], 0
// 00728937  c7400400000000       mov dword ptr [eax + 4], 0
// 0072893e  e86d450200           call 0x74ceb0
// 00728943  8b542470             mov edx, dword ptr [esp + 0x70]
// 00728947  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0072894b  03ca                 add ecx, edx
// 0072894d  2bc8                 sub ecx, eax
// 0072894f  8bc1                 mov eax, ecx
// 00728951  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00728955  99                   cdq 
// 00728956  2bc2                 sub eax, edx
// 00728958  55                   push ebp
// 00728959  d1f8                 sar eax, 1
// 0072895b  50                   push eax
// 0072895c  51                   push ecx
// 0072895d  53                   push ebx
// 0072895e  8bcf                 mov ecx, edi
// 00728960  e85b140100           call 0x739dc0
// 00728965  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00728969  8bcf                 mov ecx, edi
// 0072896b  e8b0f80900           call 0x7c8220
// 00728970  6a00                 push 0
// 00728972  83c002               add eax, 2
// 00728975  50                   push eax
// 00728976  8d542464             lea edx, [esp + 0x64]
// 0072897a  52                   push edx
// 0072897b  ff15f8ed8900         call dword ptr [0x89edf8]
// 00728981  837c241800           cmp dword ptr [esp + 0x18], 0
// 00728986  7469                 je 0x7289f1
// 00728988  6a01                 push 1
// 0072898a  8bcb                 mov ecx, ebx
// 0072898c  e875351200           call 0x84bf06
// 00728991  85ed                 test ebp, ebp
// 00728993  750d                 jne 0x7289a2
// 00728995  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00728999  6a11                 push 0x11
// 0072899b  e8e09dffff           call 0x722780
// 007289a0  eb1c                 jmp 0x7289be
// 007289a2  8bce                 mov ecx, esi
// 007289a4  e8278cf8ff           call 0x6b15d0
// 007289a9  83f8ff               cmp eax, -1
// 007289ac  7409                 je 0x7289b7
// 007289ae  8bce                 mov ecx, esi
// 007289b0  e81b8cf8ff           call 0x6b15d0
// 007289b5  eb07                 jmp 0x7289be
// 007289b7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007289bb  8b4024               mov eax, dword ptr [eax + 0x24]
// 007289be  8b13                 mov edx, dword ptr [ebx]
// 007289c0  50                   push eax
// 007289c1  8b4238               mov eax, dword ptr [edx + 0x38]
// 007289c4  8bcb                 mov ecx, ebx
// 007289c6  ffd0                 call eax
// 007289c8  8b33                 mov esi, dword ptr [ebx]
// 007289ca  6864080000           push 0x864
// 007289cf  8d4c2460             lea ecx, [esp + 0x60]
// 007289d3  51                   push ecx
// 007289d4  8d4c2474             lea ecx, [esp + 0x74]
// 007289d8  ff1554fb8900         call dword ptr [0x89fb54]
// 007289de  50                   push eax
// 007289df  8d4c2478             lea ecx, [esp + 0x78]
// 007289e3  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007289e9  8b5670               mov edx, dword ptr [esi + 0x70]
// 007289ec  50                   push eax
// 007289ed  8bcb                 mov ecx, ebx
// 007289ef  ffd2                 call edx
// 007289f1  8d4c246c             lea ecx, [esp + 0x6c]
// 007289f5  ff1510fd8900         call dword ptr [0x89fd10]
// 007289fb  8d4c2438             lea ecx, [esp + 0x38]
// 007289ff  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00728a07  e8d47e0400           call 0x7708e0
// 00728a0c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00728a10  64890d00000000       mov dword ptr fs:[0], ecx
// 00728a17  59                   pop ecx
// 00728a18  5f                   pop edi
// 00728a19  5e                   pop esi
// 00728a1a  5d                   pop ebp
// 00728a1b  5b                   pop ebx
// 00728a1c  83c440               add esp, 0x40
// 00728a1f  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawStatusBarPaneEntry@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp