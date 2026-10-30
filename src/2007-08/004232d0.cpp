// from server: 100% by auto
// roc 2007-08 004232d0  unit: CSelectionTreeCtrl  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004232d0
//
// 004232d0  56                   push esi
// 004232d1  57                   push edi
// 004232d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004232d6  8bf1                 mov esi, ecx
// 004232d8  3bf7                 cmp esi, edi
// 004232da  0f842b010000         je 0x42340b
// 004232e0  8b5704               mov edx, dword ptr [edi + 4]
// 004232e3  85d2                 test edx, edx
// 004232e5  53                   push ebx
// 004232e6  55                   push ebp
// 004232e7  740c                 je 0x4232f5
// 004232e9  8b6f08               mov ebp, dword ptr [edi + 8]
// 004232ec  8bdd                 mov ebx, ebp
// 004232ee  2bda                 sub ebx, edx
// 004232f0  c1fb03               sar ebx, 3
// 004232f3  750e                 jne 0x423303
// 004232f5  e846edffff           call 0x422040
// 004232fa  5d                   pop ebp
// 004232fb  5b                   pop ebx
// 004232fc  5f                   pop edi
// 004232fd  8bc6                 mov eax, esi
// 004232ff  5e                   pop esi
// 00423300  c20400               ret 4
// 00423303  8b4604               mov eax, dword ptr [esi + 4]
// 00423306  85c0                 test eax, eax
// 00423308  7504                 jne 0x42330e
// 0042330a  33c9                 xor ecx, ecx
// 0042330c  eb08                 jmp 0x423316
// 0042330e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00423311  2bc8                 sub ecx, eax
// 00423313  c1f903               sar ecx, 3
// 00423316  3bd9                 cmp ebx, ecx
// 00423318  7750                 ja 0x42336a
// 0042331a  50                   push eax
// 0042331b  55                   push ebp
// 0042331c  52                   push edx
// 0042331d  e88ea7feff           call 0x40dab0
// 00423322  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00423326  8b5608               mov edx, dword ptr [esi + 8]
// 00423329  51                   push ecx
// 0042332a  56                   push esi
// 0042332b  52                   push edx
// 0042332c  50                   push eax
// 0042332d  e81ea8feff           call 0x40db50
// 00423332  8b4704               mov eax, dword ptr [edi + 4]
// 00423335  83c41c               add esp, 0x1c
// 00423338  85c0                 test eax, eax
// 0042333a  7514                 jne 0x423350
// 0042333c  8b4604               mov eax, dword ptr [esi + 4]
// 0042333f  5d                   pop ebp
// 00423340  33ff                 xor edi, edi
// 00423342  8d0cf8               lea ecx, [eax + edi*8]
// 00423345  5b                   pop ebx
// 00423346  5f                   pop edi
// 00423347  894e08               mov dword ptr [esi + 8], ecx
// 0042334a  8bc6                 mov eax, esi
// 0042334c  5e                   pop esi
// 0042334d  c20400               ret 4
// 00423350  8b7f08               mov edi, dword ptr [edi + 8]
// 00423353  2bf8                 sub edi, eax
// 00423355  8b4604               mov eax, dword ptr [esi + 4]
// 00423358  5d                   pop ebp
// 00423359  c1ff03               sar edi, 3
// 0042335c  8d0cf8               lea ecx, [eax + edi*8]
// 0042335f  5b                   pop ebx
// 00423360  5f                   pop edi
// 00423361  894e08               mov dword ptr [esi + 8], ecx
// 00423364  8bc6                 mov eax, esi
// 00423366  5e                   pop esi
// 00423367  c20400               ret 4
// 0042336a  85c0                 test eax, eax
// 0042336c  7504                 jne 0x423372
// 0042336e  33c9                 xor ecx, ecx
// 00423370  eb08                 jmp 0x42337a
// 00423372  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00423375  2bc8                 sub ecx, eax
// 00423377  c1f903               sar ecx, 3
// 0042337a  3bd9                 cmp ebx, ecx
// 0042337c  773a                 ja 0x4233b8
// 0042337e  85c0                 test eax, eax
// 00423380  7504                 jne 0x423386
// 00423382  33c9                 xor ecx, ecx
// 00423384  eb08                 jmp 0x42338e
// 00423386  8b4e08               mov ecx, dword ptr [esi + 8]
// 00423389  2bc8                 sub ecx, eax
// 0042338b  c1f903               sar ecx, 3
// 0042338e  50                   push eax
// 0042338f  8d1cca               lea ebx, [edx + ecx*8]
// 00423392  53                   push ebx
// 00423393  52                   push edx
// 00423394  e817a7feff           call 0x40dab0
// 00423399  8b5608               mov edx, dword ptr [esi + 8]
// 0042339c  8b4708               mov eax, dword ptr [edi + 8]
// 0042339f  83c40c               add esp, 0xc
// 004233a2  52                   push edx
// 004233a3  50                   push eax
// 004233a4  53                   push ebx
// 004233a5  8bce                 mov ecx, esi
// 004233a7  e824601100           call 0x5393d0
// 004233ac  5d                   pop ebp
// 004233ad  5b                   pop ebx
// 004233ae  894608               mov dword ptr [esi + 8], eax
// 004233b1  5f                   pop edi
// 004233b2  8bc6                 mov eax, esi
// 004233b4  5e                   pop esi
// 004233b5  c20400               ret 4
// 004233b8  85c0                 test eax, eax
// 004233ba  7418                 je 0x4233d4
// 004233bc  8b4e08               mov ecx, dword ptr [esi + 8]
// 004233bf  51                   push ecx
// 004233c0  50                   push eax
// 004233c1  8bce                 mov ecx, esi
// 004233c3  e818a8feff           call 0x40dbe0
// 004233c8  8b5604               mov edx, dword ptr [esi + 4]
// 004233cb  52                   push edx
// 004233cc  e891c82000           call 0x62fc62
// 004233d1  83c404               add esp, 4
// 004233d4  8b4f04               mov ecx, dword ptr [edi + 4]
// 004233d7  85c9                 test ecx, ecx
// 004233d9  7504                 jne 0x4233df
// 004233db  33c0                 xor eax, eax
// 004233dd  eb08                 jmp 0x4233e7
// 004233df  8b4708               mov eax, dword ptr [edi + 8]
// 004233e2  2bc1                 sub eax, ecx
// 004233e4  c1f803               sar eax, 3
// 004233e7  50                   push eax
// 004233e8  8bce                 mov ecx, esi
// 004233ea  e801c7feff           call 0x40faf0
// 004233ef  84c0                 test al, al
// 004233f1  7416                 je 0x423409
// 004233f3  8b4604               mov eax, dword ptr [esi + 4]
// 004233f6  8b4f08               mov ecx, dword ptr [edi + 8]
// 004233f9  8b5704               mov edx, dword ptr [edi + 4]
// 004233fc  50                   push eax
// 004233fd  51                   push ecx
// 004233fe  52                   push edx
// 004233ff  8bce                 mov ecx, esi
// 00423401  e8ca5f1100           call 0x5393d0
// 00423406  894608               mov dword ptr [esi + 8], eax
// 00423409  5d                   pop ebp
// 0042340a  5b                   pop ebx
// 0042340b  5f                   pop edi
// 0042340c  8bc6                 mov eax, esi
// 0042340e  5e                   pop esi
// 0042340f  c20400               ret 4
// library templates-boost-1_34_1/vector_sp.cpp (function ??4?$vector@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
