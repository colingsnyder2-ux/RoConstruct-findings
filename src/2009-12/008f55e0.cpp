// roc 2009-12 008f55e0  unit: CXTButtonThemeOfficeXP  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f55e0
//
// 008f55e0  83ec10               sub esp, 0x10
// 008f55e3  53                   push ebx
// 008f55e4  55                   push ebp
// 008f55e5  56                   push esi
// 008f55e6  57                   push edi
// 008f55e7  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008f55eb  8b4718               mov eax, dword ptr [edi + 0x18]
// 008f55ee  50                   push eax
// 008f55ef  8bf1                 mov esi, ecx
// 008f55f1  e83a0e0300           call 0x926430
// 008f55f6  8d4f1c               lea ecx, [edi + 0x1c]
// 008f55f9  51                   push ecx
// 008f55fa  8d542414             lea edx, [esp + 0x14]
// 008f55fe  52                   push edx
// 008f55ff  8bd8                 mov ebx, eax
// 008f5601  ff1564cc9800         call dword ptr [0x98cc64]
// 008f5607  8b7f10               mov edi, dword ptr [edi + 0x10]
// 008f560a  8b442428             mov eax, dword ptr [esp + 0x28]
// 008f560e  8b2d28cc9800         mov ebp, dword ptr [0x98cc28]
// 008f5614  83e701               and edi, 1
// 008f5617  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 008f561e  7556                 jne 0x8f5676
// 008f5620  ffd5                 call ebp
// 008f5622  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008f5626  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 008f5629  744b                 je 0x8f5676
// 008f562b  85ff                 test edi, edi
// 008f562d  754b                 jne 0x8f567a
// 008f562f  8bd1                 mov edx, ecx
// 008f5631  397a7c               cmp dword ptr [edx + 0x7c], edi
// 008f5634  754c                 jne 0x8f5682
// 008f5636  8b4628               mov eax, dword ptr [esi + 0x28]
// 008f5639  83f8ff               cmp eax, -1
// 008f563c  7503                 jne 0x8f5641
// 008f563e  8b4624               mov eax, dword ptr [esi + 0x24]
// 008f5641  50                   push eax
// 008f5642  8d442414             lea eax, [esp + 0x14]
// 008f5646  50                   push eax
// 008f5647  8bcb                 mov ecx, ebx
// 008f5649  e8b0efefff           call 0x7f45fe
// 008f564e  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 008f5655  0f8414010000         je 0x8f576f
// 008f565b  8b4658               mov eax, dword ptr [esi + 0x58]
// 008f565e  83f8ff               cmp eax, -1
// 008f5661  7505                 jne 0x8f5668
// 008f5663  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008f5666  eb02                 jmp 0x8f566a
// 008f5668  8bc8                 mov ecx, eax
// 008f566a  83f8ff               cmp eax, -1
// 008f566d  7503                 jne 0x8f5672
// 008f566f  8b4654               mov eax, dword ptr [esi + 0x54]
// 008f5672  51                   push ecx
// 008f5673  50                   push eax
// 008f5674  eb70                 jmp 0x8f56e6
// 008f5676  85ff                 test edi, edi
// 008f5678  7408                 je 0x8f5682
// 008f567a  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008f5680  eb34                 jmp 0x8f56b6
// 008f5682  8b442428             mov eax, dword ptr [esp + 0x28]
// 008f5686  83787c00             cmp dword ptr [eax + 0x7c], 0
// 008f568a  7424                 je 0x8f56b0
// 008f568c  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 008f5693  750b                 jne 0x8f56a0
// 008f5695  ffd5                 call ebp
// 008f5697  8b542428             mov edx, dword ptr [esp + 0x28]
// 008f569b  3b4220               cmp eax, dword ptr [edx + 0x20]
// 008f569e  7508                 jne 0x8f56a8
// 008f56a0  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008f56a6  eb0e                 jmp 0x8f56b6
// 008f56a8  8d8ebc000000         lea ecx, [esi + 0xbc]
// 008f56ae  eb06                 jmp 0x8f56b6
// 008f56b0  8d8e98000000         lea ecx, [esi + 0x98]
// 008f56b6  8b4108               mov eax, dword ptr [ecx + 8]
// 008f56b9  83f8ff               cmp eax, -1
// 008f56bc  7503                 jne 0x8f56c1
// 008f56be  8b4104               mov eax, dword ptr [ecx + 4]
// 008f56c1  50                   push eax
// 008f56c2  8d442414             lea eax, [esp + 0x14]
// 008f56c6  50                   push eax
// 008f56c7  8bcb                 mov ecx, ebx
// 008f56c9  e830efefff           call 0x7f45fe
// 008f56ce  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008f56d1  83f8ff               cmp eax, -1
// 008f56d4  7503                 jne 0x8f56d9
// 008f56d6  8b4648               mov eax, dword ptr [esi + 0x48]
// 008f56d9  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 008f56dc  83f9ff               cmp ecx, -1
// 008f56df  7503                 jne 0x8f56e4
// 008f56e1  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 008f56e4  50                   push eax
// 008f56e5  51                   push ecx
// 008f56e6  8d4c2418             lea ecx, [esp + 0x18]
// 008f56ea  51                   push ecx
// 008f56eb  8bcb                 mov ecx, ebx
// 008f56ed  e806efefff           call 0x7f45f8
// 008f56f2  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 008f56f9  7474                 je 0x8f576f
// 008f56fb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008f56ff  e8fcfdfeff           call 0x8e5500
// 008f5704  3c01                 cmp al, 1
// 008f5706  7567                 jne 0x8f576f
// 008f5708  e8c3a2f3ff           call 0x82f9d0
// 008f570d  6a0d                 push 0xd
// 008f570f  8bc8                 mov ecx, eax
// 008f5711  e8ea99f3ff           call 0x82f100
// 008f5716  8bf0                 mov esi, eax
// 008f5718  e8b3a2f3ff           call 0x82f9d0
// 008f571d  6a0d                 push 0xd
// 008f571f  8bc8                 mov ecx, eax
// 008f5721  e8da99f3ff           call 0x82f100
// 008f5726  56                   push esi
// 008f5727  50                   push eax
// 008f5728  8d542418             lea edx, [esp + 0x18]
// 008f572c  52                   push edx
// 008f572d  8bcb                 mov ecx, ebx
// 008f572f  e8c4eeefff           call 0x7f45f8
// 008f5734  6aff                 push -1
// 008f5736  6aff                 push -1
// 008f5738  8d442418             lea eax, [esp + 0x18]
// 008f573c  50                   push eax
// 008f573d  ff1558ca9800         call dword ptr [0x98ca58]
// 008f5743  e888a2f3ff           call 0x82f9d0
// 008f5748  6a0d                 push 0xd
// 008f574a  8bc8                 mov ecx, eax
// 008f574c  e8af99f3ff           call 0x82f100
// 008f5751  8bf0                 mov esi, eax
// 008f5753  e878a2f3ff           call 0x82f9d0
// 008f5758  6a0d                 push 0xd
// 008f575a  8bc8                 mov ecx, eax
// 008f575c  e89f99f3ff           call 0x82f100
// 008f5761  56                   push esi
// 008f5762  50                   push eax
// 008f5763  8d4c2418             lea ecx, [esp + 0x18]
// 008f5767  51                   push ecx
// 008f5768  8bcb                 mov ecx, ebx
// 008f576a  e889eeefff           call 0x7f45f8
// 008f576f  5f                   pop edi
// 008f5770  5e                   pop esi
// 008f5771  5d                   pop ebp
// 008f5772  b801000000           mov eax, 1
// 008f5777  5b                   pop ebx
// 008f5778  83c410               add esp, 0x10
// 008f577b  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonThemeBackground@CXTButtonThemeOfficeXP@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
