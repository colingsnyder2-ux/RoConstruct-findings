// roc 2012-06 009b1840  unit: CXTPReportControl  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b1840
//
// 009b1840  83ec70               sub esp, 0x70
// 009b1843  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009b1848  33c4                 xor eax, esp
// 009b184a  8944246c             mov dword ptr [esp + 0x6c], eax
// 009b184e  8b442474             mov eax, dword ptr [esp + 0x74]
// 009b1852  55                   push ebp
// 009b1853  57                   push edi
// 009b1854  8bbc2480000000       mov edi, dword ptr [esp + 0x80]
// 009b185b  8944240c             mov dword ptr [esp + 0xc], eax
// 009b185f  e82cecffff           call 0x9b0490
// 009b1864  a14494e500           mov eax, dword ptr [0xe59444]
// 009b1869  33ed                 xor ebp, ebp
// 009b186b  3bc5                 cmp eax, ebp
// 009b186d  89442410             mov dword ptr [esp + 0x10], eax
// 009b1871  896c2408             mov dword ptr [esp + 8], ebp
// 009b1875  0f8ead000000         jle 0x9b1928
// 009b187b  53                   push ebx
// 009b187c  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 009b1883  56                   push esi
// 009b1884  85ed                 test ebp, ebp
// 009b1886  0f8cad000000         jl 0x9b1939
// 009b188c  8b0d4494e500         mov ecx, dword ptr [0xe59444]
// 009b1892  394c2410             cmp dword ptr [esp + 0x10], ecx
// 009b1896  0f8d9d000000         jge 0x9b1939
// 009b189c  8b154094e500         mov edx, dword ptr [0xe59440]
// 009b18a2  8b042a               mov eax, dword ptr [edx + ebp]
// 009b18a5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009b18a9  8d342a               lea esi, [edx + ebp]
// 009b18ac  6a00                 push 0
// 009b18ae  50                   push eax
// 009b18af  ff154c49b200         call dword ptr [0xb2494c]
// 009b18b5  85c0                 test eax, eax
// 009b18b7  7c57                 jl 0x9b1910
// 009b18b9  6a60                 push 0x60
// 009b18bb  8d442420             lea eax, [esp + 0x20]
// 009b18bf  6a00                 push 0
// 009b18c1  50                   push eax
// 009b18c2  e8ad1afdff           call 0x983374
// 009b18c7  83c40c               add esp, 0xc
// 009b18ca  837e0800             cmp dword ptr [esi + 8], 0
// 009b18ce  6a60                 push 0x60
// 009b18d0  7415                 je 0x9b18e7
// 009b18d2  8b5604               mov edx, dword ptr [esi + 4]
// 009b18d5  8d4c2420             lea ecx, [esp + 0x20]
// 009b18d9  51                   push ecx
// 009b18da  52                   push edx
// 009b18db  57                   push edi
// 009b18dc  6a00                 push 0
// 009b18de  53                   push ebx
// 009b18df  ff155423b200         call dword ptr [0xb22354]
// 009b18e5  eb13                 jmp 0x9b18fa
// 009b18e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 009b18ea  8d442420             lea eax, [esp + 0x20]
// 009b18ee  50                   push eax
// 009b18ef  51                   push ecx
// 009b18f0  57                   push edi
// 009b18f1  6a00                 push 0
// 009b18f3  53                   push ebx
// 009b18f4  ff155023b200         call dword ptr [0xb22350]
// 009b18fa  85c0                 test eax, eax
// 009b18fc  7412                 je 0x9b1910
// 009b18fe  8b06                 mov eax, dword ptr [esi]
// 009b1900  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009b1904  8d54241c             lea edx, [esp + 0x1c]
// 009b1908  52                   push edx
// 009b1909  50                   push eax
// 009b190a  ff15983fb200         call dword ptr [0xb23f98]
// 009b1910  8b442410             mov eax, dword ptr [esp + 0x10]
// 009b1914  40                   inc eax
// 009b1915  83c50c               add ebp, 0xc
// 009b1918  3b442418             cmp eax, dword ptr [esp + 0x18]
// 009b191c  89442410             mov dword ptr [esp + 0x10], eax
// 009b1920  0f8c5effffff         jl 0x9b1884
// 009b1926  5e                   pop esi
// 009b1927  5b                   pop ebx
// 009b1928  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 009b192c  5f                   pop edi
// 009b192d  5d                   pop ebp
// 009b192e  33cc                 xor ecx, esp
// 009b1930  e80221fdff           call 0x983a37
// 009b1935  83c470               add esp, 0x70
// 009b1938  c3                   ret 
// 009b1939  e8820afdff           call 0x9823c0
// copied from an identical function in another client (function ?_ProcessMappedSpecs@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp