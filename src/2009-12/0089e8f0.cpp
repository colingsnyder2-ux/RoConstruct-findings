// roc 2009-12 0089e8f0  unit: CXTPReportPaintManager  size: 971 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089e8f0
//
// 0089e8f0  6aff                 push -1
// 0089e8f2  685b1e9600           push 0x961e5b
// 0089e8f7  64a100000000         mov eax, dword ptr fs:[0]
// 0089e8fd  50                   push eax
// 0089e8fe  83ec2c               sub esp, 0x2c
// 0089e901  53                   push ebx
// 0089e902  55                   push ebp
// 0089e903  56                   push esi
// 0089e904  57                   push edi
// 0089e905  a10052b600           mov eax, dword ptr [0xb65200]
// 0089e90a  33c4                 xor eax, esp
// 0089e90c  50                   push eax
// 0089e90d  8d442440             lea eax, [esp + 0x40]
// 0089e911  64a300000000         mov dword ptr fs:[0], eax
// 0089e917  8be9                 mov ebp, ecx
// 0089e919  8b442450             mov eax, dword ptr [esp + 0x50]
// 0089e91d  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0089e920  8b5810               mov ebx, dword ptr [eax + 0x10]
// 0089e923  8b542470             mov edx, dword ptr [esp + 0x70]
// 0089e927  8b02                 mov eax, dword ptr [edx]
// 0089e929  8b13                 mov edx, dword ptr [ebx]
// 0089e92b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0089e92f  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0089e933  8b31                 mov esi, dword ptr [ecx]
// 0089e935  8944241c             mov dword ptr [esp + 0x1c], eax
// 0089e939  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0089e93f  8bcb                 mov ecx, ebx
// 0089e941  895c2428             mov dword ptr [esp + 0x28], ebx
// 0089e945  ffd0                 call eax
// 0089e947  8d4c2458             lea ecx, [esp + 0x58]
// 0089e94b  51                   push ecx
// 0089e94c  8d542434             lea edx, [esp + 0x34]
// 0089e950  52                   push edx
// 0089e951  89442428             mov dword ptr [esp + 0x28], eax
// 0089e955  8bfe                 mov edi, esi
// 0089e957  ff1564cc9800         call dword ptr [0x98cc64]
// 0089e95d  837c242000           cmp dword ptr [esp + 0x20], 0
// 0089e962  8d4c2430             lea ecx, [esp + 0x30]
// 0089e966  753c                 jne 0x89e9a4
// 0089e968  8b442450             mov eax, dword ptr [esp + 0x50]
// 0089e96c  8b4028               mov eax, dword ptr [eax + 0x28]
// 0089e96f  0b442468             or eax, dword ptr [esp + 0x68]
// 0089e973  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0089e977  8b33                 mov esi, dword ptr [ebx]
// 0089e979  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0089e97d  0d20080000           or eax, 0x820
// 0089e982  50                   push eax
// 0089e983  51                   push ecx
// 0089e984  8bcf                 mov ecx, edi
// 0089e986  83c670               add esi, 0x70
// 0089e989  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089e98f  50                   push eax
// 0089e990  8bcf                 mov ecx, edi
// 0089e992  ff1580de9800         call dword ptr [0x98de80]
// 0089e998  8b16                 mov edx, dword ptr [esi]
// 0089e99a  50                   push eax
// 0089e99b  8bcb                 mov ecx, ebx
// 0089e99d  ffd2                 call edx
// 0089e99f  e901030000           jmp 0x89eca5
// 0089e9a4  8b442418             mov eax, dword ptr [esp + 0x18]
// 0089e9a8  8b00                 mov eax, dword ptr [eax]
// 0089e9aa  68200c0000           push 0xc20
// 0089e9af  83c070               add eax, 0x70
// 0089e9b2  51                   push ecx
// 0089e9b3  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0089e9b7  8944242c             mov dword ptr [esp + 0x2c], eax
// 0089e9bb  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089e9c1  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0089e9c5  50                   push eax
// 0089e9c6  ff1580de9800         call dword ptr [0x98de80]
// 0089e9cc  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089e9d0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089e9d4  50                   push eax
// 0089e9d5  8b02                 mov eax, dword ptr [edx]
// 0089e9d7  ffd0                 call eax
// 0089e9d9  8b542438             mov edx, dword ptr [esp + 0x38]
// 0089e9dd  8b442460             mov eax, dword ptr [esp + 0x60]
// 0089e9e1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0089e9e5  2b542430             sub edx, dword ptr [esp + 0x30]
// 0089e9e9  2bc1                 sub eax, ecx
// 0089e9eb  3bd0                 cmp edx, eax
// 0089e9ed  7d3b                 jge 0x89ea2a
// 0089e9ef  8b542450             mov edx, dword ptr [esp + 0x50]
// 0089e9f3  8b4228               mov eax, dword ptr [edx + 0x28]
// 0089e9f6  83e003               and eax, 3
// 0089e9f9  83e801               sub eax, 1
// 0089e9fc  7413                 je 0x89ea11
// 0089e9fe  83e801               sub eax, 1
// 0089ea01  7527                 jne 0x89ea2a
// 0089ea03  8b442460             mov eax, dword ptr [esp + 0x60]
// 0089ea07  2b442438             sub eax, dword ptr [esp + 0x38]
// 0089ea0b  01442430             add dword ptr [esp + 0x30], eax
// 0089ea0f  eb19                 jmp 0x89ea2a
// 0089ea11  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089ea15  2b442438             sub eax, dword ptr [esp + 0x38]
// 0089ea19  2bc1                 sub eax, ecx
// 0089ea1b  03442460             add eax, dword ptr [esp + 0x60]
// 0089ea1f  99                   cdq 
// 0089ea20  2bc2                 sub eax, edx
// 0089ea22  d1f8                 sar eax, 1
// 0089ea24  03c1                 add eax, ecx
// 0089ea26  89442430             mov dword ptr [esp + 0x30], eax
// 0089ea2a  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0089ea2e  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089ea32  894c2438             mov dword ptr [esp + 0x38], ecx
// 0089ea36  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0089ea3a  89542414             mov dword ptr [esp + 0x14], edx
// 0089ea3e  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089ea44  3bc6                 cmp eax, esi
// 0089ea46  0f8e48020000         jle 0x89ec94
// 0089ea4c  eb06                 jmp 0x89ea54
// 0089ea4e  8bff                 mov edi, edi
// 0089ea50  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0089ea54  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089ea58  3b442438             cmp eax, dword ptr [esp + 0x38]
// 0089ea5c  0f8d32020000         jge 0x89ec94
// 0089ea62  8d4c2470             lea ecx, [esp + 0x70]
// 0089ea66  ff1574de9800         call dword ptr [0x98de74]
// 0089ea6c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0089ea70  39442420             cmp dword ptr [esp + 0x20], eax
// 0089ea74  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0089ea7c  0f8e7c010000         jle 0x89ebfe
// 0089ea82  8b13                 mov edx, dword ptr [ebx]
// 0089ea84  50                   push eax
// 0089ea85  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 0089ea8b  8bcb                 mov ecx, ebx
// 0089ea8d  ffd0                 call eax
// 0089ea8f  8bd8                 mov ebx, eax
// 0089ea91  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0089ea94  2bcf                 sub ecx, edi
// 0089ea96  51                   push ecx
// 0089ea97  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0089ea9b  57                   push edi
// 0089ea9c  8d54242c             lea edx, [esp + 0x2c]
// 0089eaa0  52                   push edx
// 0089eaa1  ff1540d89800         call dword ptr [0x98d840]
// 0089eaa7  50                   push eax
// 0089eaa8  8d4c2474             lea ecx, [esp + 0x74]
// 0089eaac  c644244c01           mov byte ptr [esp + 0x4c], 1
// 0089eab1  ff1538d59800         call dword ptr [0x98d538]
// 0089eab7  8d4c2424             lea ecx, [esp + 0x24]
// 0089eabb  c644244800           mov byte ptr [esp + 0x48], 0
// 0089eac0  ff15c0de9800         call dword ptr [0x98dec0]
// 0089eac6  8d4c2470             lea ecx, [esp + 0x70]
// 0089eaca  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089ead0  85c0                 test eax, eax
// 0089ead2  0f8e84000000         jle 0x89eb5c
// 0089ead8  6a0a                 push 0xa
// 0089eada  8d4c2474             lea ecx, [esp + 0x74]
// 0089eade  ff1580dc9800         call dword ptr [0x98dc80]
// 0089eae4  6a0d                 push 0xd
// 0089eae6  8d4c2474             lea ecx, [esp + 0x74]
// 0089eaea  ff1580dc9800         call dword ptr [0x98dc80]
// 0089eaf0  8b442468             mov eax, dword ptr [esp + 0x68]
// 0089eaf4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089eaf8  8b5500               mov edx, dword ptr [ebp]
// 0089eafb  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 0089eb01  50                   push eax
// 0089eb02  83ec10               sub esp, 0x10
// 0089eb05  8bc4                 mov eax, esp
// 0089eb07  8908                 mov dword ptr [eax], ecx
// 0089eb09  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0089eb0d  894804               mov dword ptr [eax + 4], ecx
// 0089eb10  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0089eb14  894808               mov dword ptr [eax + 8], ecx
// 0089eb17  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0089eb1b  89480c               mov dword ptr [eax + 0xc], ecx
// 0089eb1e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089eb22  8d842484000000       lea eax, [esp + 0x84]
// 0089eb29  50                   push eax
// 0089eb2a  51                   push ecx
// 0089eb2b  8d442430             lea eax, [esp + 0x30]
// 0089eb2f  50                   push eax
// 0089eb30  8bcd                 mov ecx, ebp
// 0089eb32  ffd2                 call edx
// 0089eb34  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089eb38  8bf0                 mov esi, eax
// 0089eb3a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089eb3e  3bc1                 cmp eax, ecx
// 0089eb40  894c2430             mov dword ptr [esp + 0x30], ecx
// 0089eb44  7f04                 jg 0x89eb4a
// 0089eb46  89442430             mov dword ptr [esp + 0x30], eax
// 0089eb4a  8d4c2470             lea ecx, [esp + 0x70]
// 0089eb4e  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089eb54  3bf0                 cmp esi, eax
// 0089eb56  0f8c24010000         jl 0x89ec80
// 0089eb5c  8b442468             mov eax, dword ptr [esp + 0x68]
// 0089eb60  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089eb64  8b542434             mov edx, dword ptr [esp + 0x34]
// 0089eb68  50                   push eax
// 0089eb69  83ec10               sub esp, 0x10
// 0089eb6c  8bc4                 mov eax, esp
// 0089eb6e  8908                 mov dword ptr [eax], ecx
// 0089eb70  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0089eb74  895004               mov dword ptr [eax + 4], edx
// 0089eb77  8b542450             mov edx, dword ptr [esp + 0x50]
// 0089eb7b  894808               mov dword ptr [eax + 8], ecx
// 0089eb7e  51                   push ecx
// 0089eb7f  89500c               mov dword ptr [eax + 0xc], edx
// 0089eb82  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0089eb86  8bcc                 mov ecx, esp
// 0089eb88  89642444             mov dword ptr [esp + 0x44], esp
// 0089eb8c  50                   push eax
// 0089eb8d  ff1594de9800         call dword ptr [0x98de94]
// 0089eb93  8b442468             mov eax, dword ptr [esp + 0x68]
// 0089eb97  8b5500               mov edx, dword ptr [ebp]
// 0089eb9a  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 0089eba0  53                   push ebx
// 0089eba1  50                   push eax
// 0089eba2  8d4c2434             lea ecx, [esp + 0x34]
// 0089eba6  51                   push ecx
// 0089eba7  8bcd                 mov ecx, ebp
// 0089eba9  ffd2                 call edx
// 0089ebab  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089ebaf  8bf0                 mov esi, eax
// 0089ebb1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089ebb5  3bc1                 cmp eax, ecx
// 0089ebb7  894c2430             mov dword ptr [esp + 0x30], ecx
// 0089ebbb  7f04                 jg 0x89ebc1
// 0089ebbd  89442430             mov dword ptr [esp + 0x30], eax
// 0089ebc1  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0089ebc4  8b7b30               mov edi, dword ptr [ebx + 0x30]
// 0089ebc7  ff44241c             inc dword ptr [esp + 0x1c]
// 0089ebcb  03f8                 add edi, eax
// 0089ebcd  3bf0                 cmp esi, eax
// 0089ebcf  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0089ebd7  8d4c2470             lea ecx, [esp + 0x70]
// 0089ebdb  0f8cab000000         jl 0x89ec8c
// 0089ebe1  ff15c0de9800         call dword ptr [0x98dec0]
// 0089ebe7  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0089ebeb  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089ebf1  3bc7                 cmp eax, edi
// 0089ebf3  0f8f57feffff         jg 0x89ea50
// 0089ebf9  e996000000           jmp 0x89ec94
// 0089ebfe  8b742454             mov esi, dword ptr [esp + 0x54]
// 0089ec02  8bce                 mov ecx, esi
// 0089ec04  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089ec0a  2bc7                 sub eax, edi
// 0089ec0c  50                   push eax
// 0089ec0d  57                   push edi
// 0089ec0e  8d44245c             lea eax, [esp + 0x5c]
// 0089ec12  50                   push eax
// 0089ec13  8bce                 mov ecx, esi
// 0089ec15  ff1540d89800         call dword ptr [0x98d840]
// 0089ec1b  50                   push eax
// 0089ec1c  8d4c2474             lea ecx, [esp + 0x74]
// 0089ec20  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0089ec25  ff1538d59800         call dword ptr [0x98d538]
// 0089ec2b  8d4c2454             lea ecx, [esp + 0x54]
// 0089ec2f  c644244800           mov byte ptr [esp + 0x48], 0
// 0089ec34  ff15c0de9800         call dword ptr [0x98dec0]
// 0089ec3a  8b442468             mov eax, dword ptr [esp + 0x68]
// 0089ec3e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089ec42  8b5500               mov edx, dword ptr [ebp]
// 0089ec45  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 0089ec4b  50                   push eax
// 0089ec4c  83ec10               sub esp, 0x10
// 0089ec4f  8bc4                 mov eax, esp
// 0089ec51  8908                 mov dword ptr [eax], ecx
// 0089ec53  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0089ec57  894804               mov dword ptr [eax + 4], ecx
// 0089ec5a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0089ec5e  894808               mov dword ptr [eax + 8], ecx
// 0089ec61  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0089ec65  89480c               mov dword ptr [eax + 0xc], ecx
// 0089ec68  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089ec6c  8d842484000000       lea eax, [esp + 0x84]
// 0089ec73  50                   push eax
// 0089ec74  51                   push ecx
// 0089ec75  8d442430             lea eax, [esp + 0x30]
// 0089ec79  50                   push eax
// 0089ec7a  8bcd                 mov ecx, ebp
// 0089ec7c  ffd2                 call edx
// 0089ec7e  8bf0                 mov esi, eax
// 0089ec80  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0089ec88  8d4c2470             lea ecx, [esp + 0x70]
// 0089ec8c  03f7                 add esi, edi
// 0089ec8e  ff15c0de9800         call dword ptr [0x98dec0]
// 0089ec94  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089ec98  6a00                 push 0
// 0089ec9a  e8a95af5ff           call 0x7f4748
// 0089ec9f  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0089eca3  8930                 mov dword ptr [eax], esi
// 0089eca5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0089eca9  64890d00000000       mov dword ptr fs:[0], ecx
// 0089ecb0  59                   pop ecx
// 0089ecb1  5f                   pop edi
// 0089ecb2  5e                   pop esi
// 0089ecb3  5d                   pop ebp
// 0089ecb4  5b                   pop ebx
// 0089ecb5  83c438               add esp, 0x38
// 0089ecb8  c22400               ret 0x24
// copied from an identical function in another client (function ?DrawTextLine@CXTPReportPaintManager@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HAAH3@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp