// roc 2009-06 00815510  unit: CXTPRibbonControlTab  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00815510
//
// 00815510  83ec18               sub esp, 0x18
// 00815513  56                   push esi
// 00815514  57                   push edi
// 00815515  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00815519  8bf1                 mov esi, ecx
// 0081551b  85ff                 test edi, edi
// 0081551d  750d                 jne 0x81552c
// 0081551f  5f                   pop edi
// 00815520  b857000780           mov eax, 0x80070057
// 00815525  5e                   pop esi
// 00815526  83c418               add esp, 0x18
// 00815529  c20c00               ret 0xc
// 0081552c  33c0                 xor eax, eax
// 0081552e  668907               mov word ptr [edi], ax
// 00815531  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00815537  85c0                 test eax, eax
// 00815539  7406                 je 0x815541
// 0081553b  83782000             cmp dword ptr [eax + 0x20], 0
// 0081553f  750d                 jne 0x81554e
// 00815541  5f                   pop edi
// 00815542  b801000000           mov eax, 1
// 00815547  5e                   pop esi
// 00815548  83c418               add esp, 0x18
// 0081554b  c20c00               ret 0xc
// 0081554e  53                   push ebx
// 0081554f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00815553  55                   push ebp
// 00815554  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00815558  50                   push eax
// 00815559  8d4c241c             lea ecx, [esp + 0x1c]
// 0081555d  e80eaff5ff           call 0x770470
// 00815562  55                   push ebp
// 00815563  53                   push ebx
// 00815564  50                   push eax
// 00815565  ff15c0ed8900         call dword ptr [0x89edc0]
// 0081556b  85c0                 test eax, eax
// 0081556d  746d                 je 0x8155dc
// 0081556f  b903000000           mov ecx, 3
// 00815574  66890f               mov word ptr [edi], cx
// 00815577  c7470800000000       mov dword ptr [edi + 8], 0
// 0081557e  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00815584  8d542410             lea edx, [esp + 0x10]
// 00815588  895c2410             mov dword ptr [esp + 0x10], ebx
// 0081558c  896c2414             mov dword ptr [esp + 0x14], ebp
// 00815590  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00815593  52                   push edx
// 00815594  51                   push ecx
// 00815595  ff1530ee8900         call dword ptr [0x89ee30]
// 0081559b  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008155a1  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 008155a7  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008155ad  89542418             mov dword ptr [esp + 0x18], edx
// 008155b1  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008155b7  8944241c             mov dword ptr [esp + 0x1c], eax
// 008155bb  8b442414             mov eax, dword ptr [esp + 0x14]
// 008155bf  894c2420             mov dword ptr [esp + 0x20], ecx
// 008155c3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008155c7  50                   push eax
// 008155c8  89542428             mov dword ptr [esp + 0x28], edx
// 008155cc  51                   push ecx
// 008155cd  8d542420             lea edx, [esp + 0x20]
// 008155d1  52                   push edx
// 008155d2  ff15c0ed8900         call dword ptr [0x89edc0]
// 008155d8  85c0                 test eax, eax
// 008155da  750f                 jne 0x8155eb
// 008155dc  5d                   pop ebp
// 008155dd  5b                   pop ebx
// 008155de  5f                   pop edi
// 008155df  b801000000           mov eax, 1
// 008155e4  5e                   pop esi
// 008155e5  83c418               add esp, 0x18
// 008155e8  c20c00               ret 0xc
// 008155eb  8b442414             mov eax, dword ptr [esp + 0x14]
// 008155ef  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008155f3  50                   push eax
// 008155f4  51                   push ecx
// 008155f5  8d8e64010000         lea ecx, [esi + 0x164]
// 008155fb  e8e0f4fdff           call 0x7f4ae0
// 00815600  85c0                 test eax, eax
// 00815602  7407                 je 0x81560b
// 00815604  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00815607  42                   inc edx
// 00815608  895708               mov dword ptr [edi + 8], edx
// 0081560b  5d                   pop ebp
// 0081560c  5b                   pop ebx
// 0081560d  5f                   pop edi
// 0081560e  33c0                 xor eax, eax
// 00815610  5e                   pop esi
// 00815611  83c418               add esp, 0x18
// 00815614  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?AccessibleHitTest@CXTPRibbonControlTab@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
