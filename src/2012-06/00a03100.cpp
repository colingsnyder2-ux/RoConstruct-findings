// roc 2012-06 00a03100  unit: CXTPRibbonTheme  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a03100
//
// 00a03100  83ec60               sub esp, 0x60
// 00a03103  53                   push ebx
// 00a03104  55                   push ebp
// 00a03105  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 00a03109  56                   push esi
// 00a0310a  57                   push edi
// 00a0310b  8bf1                 mov esi, ecx
// 00a0310d  55                   push ebp
// 00a0310e  8d4c2414             lea ecx, [esp + 0x14]
// 00a03112  e88920fdff           call 0x9d51a0
// 00a03117  8bcd                 mov ecx, ebp
// 00a03119  e832b30100           call 0xa1e450
// 00a0311e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a03122  85c0                 test eax, eax
// 00a03124  740a                 je 0xa03130
// 00a03126  038ec0050000         add ecx, dword ptr [esi + 0x5c0]
// 00a0312c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a03130  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a03134  8b8650060000         mov eax, dword ptr [esi + 0x650]
// 00a0313a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a0313e  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 00a03142  03c1                 add eax, ecx
// 00a03144  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a03148  8b8e6c060000         mov ecx, dword ptr [esi + 0x66c]
// 00a0314e  89542420             mov dword ptr [esp + 0x20], edx
// 00a03152  89542430             mov dword ptr [esp + 0x30], edx
// 00a03156  51                   push ecx
// 00a03157  89442430             mov dword ptr [esp + 0x30], eax
// 00a0315b  89442438             mov dword ptr [esp + 0x38], eax
// 00a0315f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a03163  8d542424             lea edx, [esp + 0x24]
// 00a03167  52                   push edx
// 00a03168  8bcb                 mov ecx, ebx
// 00a0316a  897c2430             mov dword ptr [esp + 0x30], edi
// 00a0316e  897c2440             mov dword ptr [esp + 0x40], edi
// 00a03172  89442444             mov dword ptr [esp + 0x44], eax
// 00a03176  e831fdf7ff           call 0x982eac
// 00a0317b  8b866c060000         mov eax, dword ptr [esi + 0x66c]
// 00a03181  50                   push eax
// 00a03182  8d4c2434             lea ecx, [esp + 0x34]
// 00a03186  51                   push ecx
// 00a03187  8bcb                 mov ecx, ebx
// 00a03189  e81efdf7ff           call 0x982eac
// 00a0318e  8bcd                 mov ecx, ebp
// 00a03190  e80bbc0100           call 0xa1eda0
// 00a03195  85c0                 test eax, eax
// 00a03197  0f8491000000         je 0xa0322e
// 00a0319d  8b952c020000         mov edx, dword ptr [ebp + 0x22c]
// 00a031a3  8b8d34020000         mov ecx, dword ptr [ebp + 0x234]
// 00a031a9  8b8530020000         mov eax, dword ptr [ebp + 0x230]
// 00a031af  89542440             mov dword ptr [esp + 0x40], edx
// 00a031b3  8b9538020000         mov edx, dword ptr [ebp + 0x238]
// 00a031b9  894c2448             mov dword ptr [esp + 0x48], ecx
// 00a031bd  6820bdc100           push 0xc1bd20
// 00a031c2  8bce                 mov ecx, esi
// 00a031c4  89442448             mov dword ptr [esp + 0x48], eax
// 00a031c8  89542450             mov dword ptr [esp + 0x50], edx
// 00a031cc  e89f460000           call 0xa07870
// 00a031d1  8bf8                 mov edi, eax
// 00a031d3  85ff                 test edi, edi
// 00a031d5  7457                 je 0xa0322e
// 00a031d7  6a01                 push 1
// 00a031d9  6a00                 push 0
// 00a031db  8d442468             lea eax, [esp + 0x68]
// 00a031df  bd03000000           mov ebp, 3
// 00a031e4  50                   push eax
// 00a031e5  8bcf                 mov ecx, edi
// 00a031e7  896c2468             mov dword ptr [esp + 0x68], ebp
// 00a031eb  e800290600           call 0xa65af0
// 00a031f0  83ec10               sub esp, 0x10
// 00a031f3  8bcc                 mov ecx, esp
// 00a031f5  8929                 mov dword ptr [ecx], ebp
// 00a031f7  8bd5                 mov edx, ebp
// 00a031f9  895104               mov dword ptr [ecx + 4], edx
// 00a031fc  895108               mov dword ptr [ecx + 8], edx
// 00a031ff  89510c               mov dword ptr [ecx + 0xc], edx
// 00a03202  8b10                 mov edx, dword ptr [eax]
// 00a03204  83ec10               sub esp, 0x10
// 00a03207  8bcc                 mov ecx, esp
// 00a03209  8911                 mov dword ptr [ecx], edx
// 00a0320b  8b5004               mov edx, dword ptr [eax + 4]
// 00a0320e  895104               mov dword ptr [ecx + 4], edx
// 00a03211  8b5008               mov edx, dword ptr [eax + 8]
// 00a03214  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a03217  895108               mov dword ptr [ecx + 8], edx
// 00a0321a  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0321d  8d4c2460             lea ecx, [esp + 0x60]
// 00a03221  51                   push ecx
// 00a03222  53                   push ebx
// 00a03223  8bcf                 mov ecx, edi
// 00a03225  e896210600           call 0xa653c0
// 00a0322a  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 00a0322e  8bcd                 mov ecx, ebp
// 00a03230  e8abb30100           call 0xa1e5e0
// 00a03235  85c0                 test eax, eax
// 00a03237  754b                 jne 0xa03284
// 00a03239  8bcd                 mov ecx, ebp
// 00a0323b  e860bb0100           call 0xa1eda0
// 00a03240  85c0                 test eax, eax
// 00a03242  7540                 jne 0xa03284
// 00a03244  8b9680060000         mov edx, dword ptr [esi + 0x680]
// 00a0324a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a0324e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a03252  52                   push edx
// 00a03253  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a03257  50                   push eax
// 00a03258  83c1fe               add ecx, -2
// 00a0325b  51                   push ecx
// 00a0325c  52                   push edx
// 00a0325d  53                   push ebx
// 00a0325e  8bce                 mov ecx, esi
// 00a03260  e85b48f8ff           call 0x987ac0
// 00a03265  8b867c060000         mov eax, dword ptr [esi + 0x67c]
// 00a0326b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0326f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a03273  50                   push eax
// 00a03274  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a03278  51                   push ecx
// 00a03279  4a                   dec edx
// 00a0327a  52                   push edx
// 00a0327b  50                   push eax
// 00a0327c  53                   push ebx
// 00a0327d  8bce                 mov ecx, esi
// 00a0327f  e83c48f8ff           call 0x987ac0
// 00a03284  5f                   pop edi
// 00a03285  5e                   pop esi
// 00a03286  5d                   pop ebp
// 00a03287  5b                   pop ebx
// 00a03288  83c460               add esp, 0x60
// 00a0328b  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillRibbonBar@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
