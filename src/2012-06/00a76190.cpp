// roc 2012-06 00a76190  unit: CXTPRibbonControlTab  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a76190
//
// 00a76190  83ec18               sub esp, 0x18
// 00a76193  56                   push esi
// 00a76194  57                   push edi
// 00a76195  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00a76199  8bf1                 mov esi, ecx
// 00a7619b  85ff                 test edi, edi
// 00a7619d  750d                 jne 0xa761ac
// 00a7619f  5f                   pop edi
// 00a761a0  b857000780           mov eax, 0x80070057
// 00a761a5  5e                   pop esi
// 00a761a6  83c418               add esp, 0x18
// 00a761a9  c20c00               ret 0xc
// 00a761ac  33c0                 xor eax, eax
// 00a761ae  668907               mov word ptr [edi], ax
// 00a761b1  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00a761b7  85c0                 test eax, eax
// 00a761b9  7406                 je 0xa761c1
// 00a761bb  83782000             cmp dword ptr [eax + 0x20], 0
// 00a761bf  750d                 jne 0xa761ce
// 00a761c1  5f                   pop edi
// 00a761c2  b801000000           mov eax, 1
// 00a761c7  5e                   pop esi
// 00a761c8  83c418               add esp, 0x18
// 00a761cb  c20c00               ret 0xc
// 00a761ce  53                   push ebx
// 00a761cf  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00a761d3  55                   push ebp
// 00a761d4  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00a761d8  50                   push eax
// 00a761d9  8d4c241c             lea ecx, [esp + 0x1c]
// 00a761dd  e85eeff5ff           call 0x9d5140
// 00a761e2  55                   push ebp
// 00a761e3  53                   push ebx
// 00a761e4  50                   push eax
// 00a761e5  ff15483bb200         call dword ptr [0xb23b48]
// 00a761eb  85c0                 test eax, eax
// 00a761ed  746d                 je 0xa7625c
// 00a761ef  b903000000           mov ecx, 3
// 00a761f4  66890f               mov word ptr [edi], cx
// 00a761f7  c7470800000000       mov dword ptr [edi + 8], 0
// 00a761fe  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00a76204  8d542410             lea edx, [esp + 0x10]
// 00a76208  895c2410             mov dword ptr [esp + 0x10], ebx
// 00a7620c  896c2414             mov dword ptr [esp + 0x14], ebp
// 00a76210  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a76213  52                   push edx
// 00a76214  51                   push ecx
// 00a76215  ff15883ab200         call dword ptr [0xb23a88]
// 00a7621b  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00a76221  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 00a76227  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00a7622d  89542418             mov dword ptr [esp + 0x18], edx
// 00a76231  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 00a76237  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a7623b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a7623f  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a76243  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a76247  50                   push eax
// 00a76248  89542428             mov dword ptr [esp + 0x28], edx
// 00a7624c  51                   push ecx
// 00a7624d  8d542420             lea edx, [esp + 0x20]
// 00a76251  52                   push edx
// 00a76252  ff15483bb200         call dword ptr [0xb23b48]
// 00a76258  85c0                 test eax, eax
// 00a7625a  750f                 jne 0xa7626b
// 00a7625c  5d                   pop ebp
// 00a7625d  5b                   pop ebx
// 00a7625e  5f                   pop edi
// 00a7625f  b801000000           mov eax, 1
// 00a76264  5e                   pop esi
// 00a76265  83c418               add esp, 0x18
// 00a76268  c20c00               ret 0xc
// 00a7626b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a7626f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a76273  50                   push eax
// 00a76274  51                   push ecx
// 00a76275  8d8e64010000         lea ecx, [esi + 0x164]
// 00a7627b  e83068fdff           call 0xa4cab0
// 00a76280  85c0                 test eax, eax
// 00a76282  7407                 je 0xa7628b
// 00a76284  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a76287  42                   inc edx
// 00a76288  895708               mov dword ptr [edi + 8], edx
// 00a7628b  5d                   pop ebp
// 00a7628c  5b                   pop ebx
// 00a7628d  5f                   pop edi
// 00a7628e  33c0                 xor eax, eax
// 00a76290  5e                   pop esi
// 00a76291  83c418               add esp, 0x18
// 00a76294  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?AccessibleHitTest@CXTPRibbonControlTab@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
