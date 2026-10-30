// roc 2010-06 0088c300  unit: CXTPTabPaintManager::CAppearanceSetExcel  size: 1908 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088c300
//
// 0088c300  83ec34               sub esp, 0x34
// 0088c303  53                   push ebx
// 0088c304  55                   push ebp
// 0088c305  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0088c309  8b5548               mov edx, dword ptr [ebp + 0x48]
// 0088c30c  8bc1                 mov eax, ecx
// 0088c30e  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 0088c311  894c240c             mov dword ptr [esp + 0xc], ecx
// 0088c315  8b4d4c               mov ecx, dword ptr [ebp + 0x4c]
// 0088c318  89542410             mov dword ptr [esp + 0x10], edx
// 0088c31c  8b5550               mov edx, dword ptr [ebp + 0x50]
// 0088c31f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0088c323  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 0088c326  56                   push esi
// 0088c327  8954241c             mov dword ptr [esp + 0x1c], edx
// 0088c32b  57                   push edi
// 0088c32c  89442410             mov dword ptr [esp + 0x10], eax
// 0088c330  396904               cmp dword ptr [ecx + 4], ebp
// 0088c333  7511                 jne 0x88c346
// 0088c335  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0088c338  8bb0e4000000         mov esi, dword ptr [eax + 0xe4]
// 0088c33e  81c674010000         add esi, 0x174
// 0088c344  eb0f                 jmp 0x88c355
// 0088c346  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0088c349  8bb2e4000000         mov esi, dword ptr [edx + 0xe4]
// 0088c34f  81c6bc010000         add esi, 0x1bc
// 0088c355  8b01                 mov eax, dword ptr [ecx]
// 0088c357  8b5048               mov edx, dword ptr [eax + 0x48]
// 0088c35a  ffd2                 call edx
// 0088c35c  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0088c360  83f803               cmp eax, 3
// 0088c363  0f87c3060000         ja 0x88ca2c
// 0088c369  ff248564ca8800       jmp dword ptr [eax*4 + 0x88ca64]
// 0088c370  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088c374  48                   dec eax
// 0088c375  89442420             mov dword ptr [esp + 0x20], eax
// 0088c379  2b442418             sub eax, dword ptr [esp + 0x18]
// 0088c37d  6a00                 push 0
// 0088c37f  99                   cdq 
// 0088c380  2bc2                 sub eax, edx
// 0088c382  8bd8                 mov ebx, eax
// 0088c384  d1fb                 sar ebx, 1
// 0088c386  8bc3                 mov eax, ebx
// 0088c388  99                   cdq 
// 0088c389  2bc2                 sub eax, edx
// 0088c38b  d1f8                 sar eax, 1
// 0088c38d  f7d8                 neg eax
// 0088c38f  50                   push eax
// 0088c390  8d44241c             lea eax, [esp + 0x1c]
// 0088c394  50                   push eax
// 0088c395  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0088c39b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c39f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088c3a3  894c2428             mov dword ptr [esp + 0x28], ecx
// 0088c3a7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088c3ab  2bc8                 sub ecx, eax
// 0088c3ad  8bd3                 mov edx, ebx
// 0088c3af  f7da                 neg edx
// 0088c3b1  03d2                 add edx, edx
// 0088c3b3  2bcb                 sub ecx, ebx
// 0088c3b5  89542430             mov dword ptr [esp + 0x30], edx
// 0088c3b9  894c2434             mov dword ptr [esp + 0x34], ecx
// 0088c3bd  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 0088c3c0  89442424             mov dword ptr [esp + 0x24], eax
// 0088c3c4  8b01                 mov eax, dword ptr [ecx]
// 0088c3c6  8d141b               lea edx, [ebx + ebx]
// 0088c3c9  89542440             mov dword ptr [esp + 0x40], edx
// 0088c3cd  8b5048               mov edx, dword ptr [eax + 0x48]
// 0088c3d0  6a00                 push 0
// 0088c3d2  895c2430             mov dword ptr [esp + 0x30], ebx
// 0088c3d6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0088c3de  895c2440             mov dword ptr [esp + 0x40], ebx
// 0088c3e2  ffd2                 call edx
// 0088c3e4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088c3e8  50                   push eax
// 0088c3e9  6a04                 push 4
// 0088c3eb  8d442430             lea eax, [esp + 0x30]
// 0088c3ef  50                   push eax
// 0088c3f0  55                   push ebp
// 0088c3f1  57                   push edi
// 0088c3f2  e849c6ffff           call 0x888a40
// 0088c3f7  8944244c             mov dword ptr [esp + 0x4c], eax
// 0088c3fb  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0088c3fe  83f8ff               cmp eax, -1
// 0088c401  7503                 jne 0x88c406
// 0088c403  8b4628               mov eax, dword ptr [esi + 0x28]
// 0088c406  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088c40a  51                   push ecx
// 0088c40b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088c40f  8d541901             lea edx, [ecx + ebx + 1]
// 0088c413  52                   push edx
// 0088c414  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088c418  4a                   dec edx
// 0088c419  52                   push edx
// 0088c41a  41                   inc ecx
// 0088c41b  51                   push ecx
// 0088c41c  50                   push eax
// 0088c41d  57                   push edi
// 0088c41e  e8cdc1ffff           call 0x8885f0
// 0088c423  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0088c426  83c418               add esp, 0x18
// 0088c429  83f8ff               cmp eax, -1
// 0088c42c  7505                 jne 0x88c433
// 0088c42e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0088c431  eb02                 jmp 0x88c435
// 0088c433  8bc8                 mov ecx, eax
// 0088c435  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088c439  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088c43d  40                   inc eax
// 0088c43e  50                   push eax
// 0088c43f  52                   push edx
// 0088c440  50                   push eax
// 0088c441  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088c445  03c3                 add eax, ebx
// 0088c447  50                   push eax
// 0088c448  51                   push ecx
// 0088c449  57                   push edi
// 0088c44a  e8a1c1ffff           call 0x8885f0
// 0088c44f  8b4638               mov eax, dword ptr [esi + 0x38]
// 0088c452  83c418               add esp, 0x18
// 0088c455  83f8ff               cmp eax, -1
// 0088c458  7503                 jne 0x88c45d
// 0088c45a  8b4634               mov eax, dword ptr [esi + 0x34]
// 0088c45d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c461  51                   push ecx
// 0088c462  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c466  8d5419ff             lea edx, [ecx + ebx - 1]
// 0088c46a  52                   push edx
// 0088c46b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088c46f  52                   push edx
// 0088c470  49                   dec ecx
// 0088c471  51                   push ecx
// 0088c472  50                   push eax
// 0088c473  57                   push edi
// 0088c474  e877c1ffff           call 0x8885f0
// 0088c479  8b4608               mov eax, dword ptr [esi + 8]
// 0088c47c  83c418               add esp, 0x18
// 0088c47f  83f8ff               cmp eax, -1
// 0088c482  7505                 jne 0x88c489
// 0088c484  8b4e04               mov ecx, dword ptr [esi + 4]
// 0088c487  eb02                 jmp 0x88c48b
// 0088c489  8bc8                 mov ecx, eax
// 0088c48b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088c48f  50                   push eax
// 0088c490  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088c494  8d1418               lea edx, [eax + ebx]
// 0088c497  52                   push edx
// 0088c498  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088c49c  4a                   dec edx
// 0088c49d  52                   push edx
// 0088c49e  50                   push eax
// 0088c49f  51                   push ecx
// 0088c4a0  57                   push edi
// 0088c4a1  e84ac1ffff           call 0x8885f0
// 0088c4a6  8b4608               mov eax, dword ptr [esi + 8]
// 0088c4a9  83c418               add esp, 0x18
// 0088c4ac  83f8ff               cmp eax, -1
// 0088c4af  7503                 jne 0x88c4b4
// 0088c4b1  8b4604               mov eax, dword ptr [esi + 4]
// 0088c4b4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088c4b8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088c4bc  51                   push ecx
// 0088c4bd  52                   push edx
// 0088c4be  51                   push ecx
// 0088c4bf  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c4c3  03cb                 add ecx, ebx
// 0088c4c5  51                   push ecx
// 0088c4c6  50                   push eax
// 0088c4c7  57                   push edi
// 0088c4c8  e823c1ffff           call 0x8885f0
// 0088c4cd  8b4620               mov eax, dword ptr [esi + 0x20]
// 0088c4d0  83c418               add esp, 0x18
// 0088c4d3  83f8ff               cmp eax, -1
// 0088c4d6  7503                 jne 0x88c4db
// 0088c4d8  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0088c4db  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088c4df  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088c4e3  52                   push edx
// 0088c4e4  8d1419               lea edx, [ecx + ebx]
// 0088c4e7  52                   push edx
// 0088c4e8  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088c4ec  52                   push edx
// 0088c4ed  51                   push ecx
// 0088c4ee  50                   push eax
// 0088c4ef  57                   push edi
// 0088c4f0  e8fbc0ffff           call 0x8885f0
// 0088c4f5  8b4560               mov eax, dword ptr [ebp + 0x60]
// 0088c4f8  83c418               add esp, 0x18
// 0088c4fb  396804               cmp dword ptr [eax + 4], ebp
// 0088c4fe  0f8528050000         jne 0x88ca2c
// 0088c504  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088c508  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088c50c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0088c510  51                   push ecx
// 0088c511  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088c515  2bd0                 sub edx, eax
// 0088c517  03d3                 add edx, ebx
// 0088c519  52                   push edx
// 0088c51a  51                   push ecx
// 0088c51b  50                   push eax
// 0088c51c  57                   push edi
// 0088c51d  e8febaffff           call 0x888020
// 0088c522  e902050000           jmp 0x88ca29
// 0088c527  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088c52b  48                   dec eax
// 0088c52c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088c530  2b442414             sub eax, dword ptr [esp + 0x14]
// 0088c534  99                   cdq 
// 0088c535  2bc2                 sub eax, edx
// 0088c537  8bd8                 mov ebx, eax
// 0088c539  d1fb                 sar ebx, 1
// 0088c53b  8bc3                 mov eax, ebx
// 0088c53d  99                   cdq 
// 0088c53e  2bc2                 sub eax, edx
// 0088c540  d1f8                 sar eax, 1
// 0088c542  f7d8                 neg eax
// 0088c544  50                   push eax
// 0088c545  6a00                 push 0
// 0088c547  8d54241c             lea edx, [esp + 0x1c]
// 0088c54b  52                   push edx
// 0088c54c  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0088c552  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088c556  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088c55a  89442424             mov dword ptr [esp + 0x24], eax
// 0088c55e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088c562  8bcb                 mov ecx, ebx
// 0088c564  f7d9                 neg ecx
// 0088c566  03c9                 add ecx, ecx
// 0088c568  2bd3                 sub edx, ebx
// 0088c56a  2bd0                 sub edx, eax
// 0088c56c  89442428             mov dword ptr [esp + 0x28], eax
// 0088c570  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0088c574  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 0088c577  89542438             mov dword ptr [esp + 0x38], edx
// 0088c57b  8b11                 mov edx, dword ptr [ecx]
// 0088c57d  8d041b               lea eax, [ebx + ebx]
// 0088c580  8944243c             mov dword ptr [esp + 0x3c], eax
// 0088c584  8b4248               mov eax, dword ptr [edx + 0x48]
// 0088c587  6a00                 push 0
// 0088c589  895c2434             mov dword ptr [esp + 0x34], ebx
// 0088c58d  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0088c595  895c2444             mov dword ptr [esp + 0x44], ebx
// 0088c599  ffd0                 call eax
// 0088c59b  50                   push eax
// 0088c59c  6a04                 push 4
// 0088c59e  8d4c2430             lea ecx, [esp + 0x30]
// 0088c5a2  51                   push ecx
// 0088c5a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c5a7  55                   push ebp
// 0088c5a8  57                   push edi
// 0088c5a9  e892c4ffff           call 0x888a40
// 0088c5ae  8944244c             mov dword ptr [esp + 0x4c], eax
// 0088c5b2  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0088c5b5  83f8ff               cmp eax, -1
// 0088c5b8  7503                 jne 0x88c5bd
// 0088c5ba  8b4628               mov eax, dword ptr [esi + 0x28]
// 0088c5bd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088c5c1  8d540b01             lea edx, [ebx + ecx + 1]
// 0088c5c5  52                   push edx
// 0088c5c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0088c5ca  52                   push edx
// 0088c5cb  41                   inc ecx
// 0088c5cc  51                   push ecx
// 0088c5cd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088c5d1  49                   dec ecx
// 0088c5d2  51                   push ecx
// 0088c5d3  50                   push eax
// 0088c5d4  57                   push edi
// 0088c5d5  e816c0ffff           call 0x8885f0
// 0088c5da  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0088c5dd  83c418               add esp, 0x18
// 0088c5e0  83f8ff               cmp eax, -1
// 0088c5e3  7505                 jne 0x88c5ea
// 0088c5e5  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0088c5e8  eb02                 jmp 0x88c5ec
// 0088c5ea  8bc8                 mov ecx, eax
// 0088c5ec  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088c5f0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088c5f4  52                   push edx
// 0088c5f5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088c5f9  40                   inc eax
// 0088c5fa  50                   push eax
// 0088c5fb  03d3                 add edx, ebx
// 0088c5fd  52                   push edx
// 0088c5fe  50                   push eax
// 0088c5ff  51                   push ecx
// 0088c600  57                   push edi
// 0088c601  e8eabfffff           call 0x8885f0
// 0088c606  8b4638               mov eax, dword ptr [esi + 0x38]
// 0088c609  83c418               add esp, 0x18
// 0088c60c  83f8ff               cmp eax, -1
// 0088c60f  7503                 jne 0x88c614
// 0088c611  8b4634               mov eax, dword ptr [esi + 0x34]
// 0088c614  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c618  8d540bff             lea edx, [ebx + ecx - 1]
// 0088c61c  52                   push edx
// 0088c61d  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088c621  52                   push edx
// 0088c622  49                   dec ecx
// 0088c623  51                   push ecx
// 0088c624  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c628  51                   push ecx
// 0088c629  50                   push eax
// 0088c62a  57                   push edi
// 0088c62b  e8c0bfffff           call 0x8885f0
// 0088c630  8b4608               mov eax, dword ptr [esi + 8]
// 0088c633  83c418               add esp, 0x18
// 0088c636  83f8ff               cmp eax, -1
// 0088c639  7505                 jne 0x88c640
// 0088c63b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0088c63e  eb02                 jmp 0x88c642
// 0088c640  8bc8                 mov ecx, eax
// 0088c642  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088c646  8d1403               lea edx, [ebx + eax]
// 0088c649  52                   push edx
// 0088c64a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0088c64e  52                   push edx
// 0088c64f  50                   push eax
// 0088c650  8b442428             mov eax, dword ptr [esp + 0x28]
// 0088c654  48                   dec eax
// 0088c655  50                   push eax
// 0088c656  51                   push ecx
// 0088c657  57                   push edi
// 0088c658  e893bfffff           call 0x8885f0
// 0088c65d  8b4608               mov eax, dword ptr [esi + 8]
// 0088c660  83c418               add esp, 0x18
// 0088c663  83f8ff               cmp eax, -1
// 0088c666  7503                 jne 0x88c66b
// 0088c668  8b4604               mov eax, dword ptr [esi + 4]
// 0088c66b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c66f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0088c673  51                   push ecx
// 0088c674  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088c678  51                   push ecx
// 0088c679  03d3                 add edx, ebx
// 0088c67b  52                   push edx
// 0088c67c  51                   push ecx
// 0088c67d  50                   push eax
// 0088c67e  57                   push edi
// 0088c67f  e86cbfffff           call 0x8885f0
// 0088c684  8b4620               mov eax, dword ptr [esi + 0x20]
// 0088c687  83c418               add esp, 0x18
// 0088c68a  83f8ff               cmp eax, -1
// 0088c68d  7503                 jne 0x88c692
// 0088c68f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0088c692  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c696  8d140b               lea edx, [ebx + ecx]
// 0088c699  52                   push edx
// 0088c69a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088c69e  52                   push edx
// 0088c69f  51                   push ecx
// 0088c6a0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c6a4  51                   push ecx
// 0088c6a5  50                   push eax
// 0088c6a6  57                   push edi
// 0088c6a7  e844bfffff           call 0x8885f0
// 0088c6ac  8b5560               mov edx, dword ptr [ebp + 0x60]
// 0088c6af  83c418               add esp, 0x18
// 0088c6b2  396a04               cmp dword ptr [edx + 4], ebp
// 0088c6b5  0f8571030000         jne 0x88ca2c
// 0088c6bb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088c6bf  e94d030000           jmp 0x88ca11
// 0088c6c4  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088c6c8  48                   dec eax
// 0088c6c9  89442420             mov dword ptr [esp + 0x20], eax
// 0088c6cd  2b442418             sub eax, dword ptr [esp + 0x18]
// 0088c6d1  6a00                 push 0
// 0088c6d3  99                   cdq 
// 0088c6d4  2bc2                 sub eax, edx
// 0088c6d6  8bd8                 mov ebx, eax
// 0088c6d8  d1fb                 sar ebx, 1
// 0088c6da  8bc3                 mov eax, ebx
// 0088c6dc  99                   cdq 
// 0088c6dd  2bc2                 sub eax, edx
// 0088c6df  d1f8                 sar eax, 1
// 0088c6e1  f7d8                 neg eax
// 0088c6e3  50                   push eax
// 0088c6e4  8d54241c             lea edx, [esp + 0x1c]
// 0088c6e8  52                   push edx
// 0088c6e9  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0088c6ef  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088c6f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088c6f7  41                   inc ecx
// 0088c6f8  894c2428             mov dword ptr [esp + 0x28], ecx
// 0088c6fc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088c700  8d141b               lea edx, [ebx + ebx]
// 0088c703  89542430             mov dword ptr [esp + 0x30], edx
// 0088c707  2bcb                 sub ecx, ebx
// 0088c709  2bc8                 sub ecx, eax
// 0088c70b  8bd3                 mov edx, ebx
// 0088c70d  f7da                 neg edx
// 0088c70f  894c2434             mov dword ptr [esp + 0x34], ecx
// 0088c713  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 0088c716  03d2                 add edx, edx
// 0088c718  89442424             mov dword ptr [esp + 0x24], eax
// 0088c71c  8b01                 mov eax, dword ptr [ecx]
// 0088c71e  89542440             mov dword ptr [esp + 0x40], edx
// 0088c722  8b5048               mov edx, dword ptr [eax + 0x48]
// 0088c725  6a00                 push 0
// 0088c727  895c2430             mov dword ptr [esp + 0x30], ebx
// 0088c72b  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0088c733  895c2440             mov dword ptr [esp + 0x40], ebx
// 0088c737  ffd2                 call edx
// 0088c739  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088c73d  50                   push eax
// 0088c73e  6a04                 push 4
// 0088c740  8d442430             lea eax, [esp + 0x30]
// 0088c744  50                   push eax
// 0088c745  55                   push ebp
// 0088c746  57                   push edi
// 0088c747  e8f4c2ffff           call 0x888a40
// 0088c74c  8944244c             mov dword ptr [esp + 0x4c], eax
// 0088c750  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0088c753  83f8ff               cmp eax, -1
// 0088c756  7503                 jne 0x88c75b
// 0088c758  8b4628               mov eax, dword ptr [esi + 0x28]
// 0088c75b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c75f  51                   push ecx
// 0088c760  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088c764  8d540b01             lea edx, [ebx + ecx + 1]
// 0088c768  52                   push edx
// 0088c769  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088c76d  42                   inc edx
// 0088c76e  52                   push edx
// 0088c76f  41                   inc ecx
// 0088c770  51                   push ecx
// 0088c771  50                   push eax
// 0088c772  57                   push edi
// 0088c773  e878beffff           call 0x8885f0
// 0088c778  8b4644               mov eax, dword ptr [esi + 0x44]
// 0088c77b  83c418               add esp, 0x18
// 0088c77e  83f8ff               cmp eax, -1
// 0088c781  7505                 jne 0x88c788
// 0088c783  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0088c786  eb02                 jmp 0x88c78a
// 0088c788  8bc8                 mov ecx, eax
// 0088c78a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088c78e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088c792  48                   dec eax
// 0088c793  50                   push eax
// 0088c794  52                   push edx
// 0088c795  50                   push eax
// 0088c796  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088c79a  8d1403               lea edx, [ebx + eax]
// 0088c79d  52                   push edx
// 0088c79e  51                   push ecx
// 0088c79f  57                   push edi
// 0088c7a0  e84bbeffff           call 0x8885f0
// 0088c7a5  8b4638               mov eax, dword ptr [esi + 0x38]
// 0088c7a8  83c418               add esp, 0x18
// 0088c7ab  83f8ff               cmp eax, -1
// 0088c7ae  7503                 jne 0x88c7b3
// 0088c7b0  8b4634               mov eax, dword ptr [esi + 0x34]
// 0088c7b3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088c7b7  51                   push ecx
// 0088c7b8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c7bc  8d540bff             lea edx, [ebx + ecx - 1]
// 0088c7c0  52                   push edx
// 0088c7c1  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088c7c5  52                   push edx
// 0088c7c6  49                   dec ecx
// 0088c7c7  51                   push ecx
// 0088c7c8  50                   push eax
// 0088c7c9  57                   push edi
// 0088c7ca  e821beffff           call 0x8885f0
// 0088c7cf  8b4608               mov eax, dword ptr [esi + 8]
// 0088c7d2  83c418               add esp, 0x18
// 0088c7d5  83f8ff               cmp eax, -1
// 0088c7d8  7505                 jne 0x88c7df
// 0088c7da  8b4e04               mov ecx, dword ptr [esi + 4]
// 0088c7dd  eb02                 jmp 0x88c7e1
// 0088c7df  8bc8                 mov ecx, eax
// 0088c7e1  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088c7e5  50                   push eax
// 0088c7e6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088c7ea  8d1403               lea edx, [ebx + eax]
// 0088c7ed  52                   push edx
// 0088c7ee  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088c7f2  42                   inc edx
// 0088c7f3  52                   push edx
// 0088c7f4  50                   push eax
// 0088c7f5  51                   push ecx
// 0088c7f6  57                   push edi
// 0088c7f7  e8f4bdffff           call 0x8885f0
// 0088c7fc  8b4614               mov eax, dword ptr [esi + 0x14]
// 0088c7ff  83c418               add esp, 0x18
// 0088c802  83f8ff               cmp eax, -1
// 0088c805  7503                 jne 0x88c80a
// 0088c807  8b4610               mov eax, dword ptr [esi + 0x10]
// 0088c80a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c80e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088c812  51                   push ecx
// 0088c813  52                   push edx
// 0088c814  51                   push ecx
// 0088c815  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c819  8d140b               lea edx, [ebx + ecx]
// 0088c81c  52                   push edx
// 0088c81d  50                   push eax
// 0088c81e  57                   push edi
// 0088c81f  e8ccbdffff           call 0x8885f0
// 0088c824  8b4620               mov eax, dword ptr [esi + 0x20]
// 0088c827  83c418               add esp, 0x18
// 0088c82a  83f8ff               cmp eax, -1
// 0088c82d  7503                 jne 0x88c832
// 0088c82f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0088c832  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088c836  51                   push ecx
// 0088c837  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c83b  8d140b               lea edx, [ebx + ecx]
// 0088c83e  52                   push edx
// 0088c83f  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088c843  52                   push edx
// 0088c844  51                   push ecx
// 0088c845  50                   push eax
// 0088c846  57                   push edi
// 0088c847  e8a4bdffff           call 0x8885f0
// 0088c84c  8b4560               mov eax, dword ptr [ebp + 0x60]
// 0088c84f  83c418               add esp, 0x18
// 0088c852  396804               cmp dword ptr [eax + 4], ebp
// 0088c855  0f85d1010000         jne 0x88ca2c
// 0088c85b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088c85f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0088c863  8b542418             mov edx, dword ptr [esp + 0x18]
// 0088c867  51                   push ecx
// 0088c868  2bd8                 sub ebx, eax
// 0088c86a  035c2420             add ebx, dword ptr [esp + 0x20]
// 0088c86e  53                   push ebx
// 0088c86f  52                   push edx
// 0088c870  50                   push eax
// 0088c871  57                   push edi
// 0088c872  e8a9b7ffff           call 0x888020
// 0088c877  e9ad010000           jmp 0x88ca29
// 0088c87c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088c880  48                   dec eax
// 0088c881  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088c885  2b442414             sub eax, dword ptr [esp + 0x14]
// 0088c889  99                   cdq 
// 0088c88a  2bc2                 sub eax, edx
// 0088c88c  8bd8                 mov ebx, eax
// 0088c88e  d1fb                 sar ebx, 1
// 0088c890  8bc3                 mov eax, ebx
// 0088c892  99                   cdq 
// 0088c893  2bc2                 sub eax, edx
// 0088c895  d1f8                 sar eax, 1
// 0088c897  f7d8                 neg eax
// 0088c899  50                   push eax
// 0088c89a  6a00                 push 0
// 0088c89c  8d44241c             lea eax, [esp + 0x1c]
// 0088c8a0  50                   push eax
// 0088c8a1  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0088c8a7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088c8ab  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088c8af  41                   inc ecx
// 0088c8b0  894c2424             mov dword ptr [esp + 0x24], ecx
// 0088c8b4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c8b8  8d141b               lea edx, [ebx + ebx]
// 0088c8bb  8954242c             mov dword ptr [esp + 0x2c], edx
// 0088c8bf  2bcb                 sub ecx, ebx
// 0088c8c1  2bc8                 sub ecx, eax
// 0088c8c3  8bd3                 mov edx, ebx
// 0088c8c5  f7da                 neg edx
// 0088c8c7  894c2438             mov dword ptr [esp + 0x38], ecx
// 0088c8cb  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 0088c8ce  03d2                 add edx, edx
// 0088c8d0  89442428             mov dword ptr [esp + 0x28], eax
// 0088c8d4  8b01                 mov eax, dword ptr [ecx]
// 0088c8d6  8954243c             mov dword ptr [esp + 0x3c], edx
// 0088c8da  8b5048               mov edx, dword ptr [eax + 0x48]
// 0088c8dd  6a00                 push 0
// 0088c8df  895c2434             mov dword ptr [esp + 0x34], ebx
// 0088c8e3  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0088c8eb  895c2444             mov dword ptr [esp + 0x44], ebx
// 0088c8ef  ffd2                 call edx
// 0088c8f1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088c8f5  50                   push eax
// 0088c8f6  6a04                 push 4
// 0088c8f8  8d442430             lea eax, [esp + 0x30]
// 0088c8fc  50                   push eax
// 0088c8fd  55                   push ebp
// 0088c8fe  57                   push edi
// 0088c8ff  e83cc1ffff           call 0x888a40
// 0088c904  8944244c             mov dword ptr [esp + 0x4c], eax
// 0088c908  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0088c90b  83f8ff               cmp eax, -1
// 0088c90e  7503                 jne 0x88c913
// 0088c910  8b4628               mov eax, dword ptr [esi + 0x28]
// 0088c913  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088c917  8d540b01             lea edx, [ebx + ecx + 1]
// 0088c91b  52                   push edx
// 0088c91c  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088c920  52                   push edx
// 0088c921  41                   inc ecx
// 0088c922  51                   push ecx
// 0088c923  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c927  41                   inc ecx
// 0088c928  51                   push ecx
// 0088c929  50                   push eax
// 0088c92a  57                   push edi
// 0088c92b  e8c0bcffff           call 0x8885f0
// 0088c930  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0088c933  83c418               add esp, 0x18
// 0088c936  83f8ff               cmp eax, -1
// 0088c939  7505                 jne 0x88c940
// 0088c93b  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0088c93e  eb02                 jmp 0x88c942
// 0088c940  8bc8                 mov ecx, eax
// 0088c942  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088c946  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088c94a  52                   push edx
// 0088c94b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088c94f  48                   dec eax
// 0088c950  50                   push eax
// 0088c951  03d3                 add edx, ebx
// 0088c953  52                   push edx
// 0088c954  50                   push eax
// 0088c955  51                   push ecx
// 0088c956  57                   push edi
// 0088c957  e894bcffff           call 0x8885f0
// 0088c95c  8b4638               mov eax, dword ptr [esi + 0x38]
// 0088c95f  83c418               add esp, 0x18
// 0088c962  83f8ff               cmp eax, -1
// 0088c965  7503                 jne 0x88c96a
// 0088c967  8b4634               mov eax, dword ptr [esi + 0x34]
// 0088c96a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c96e  8d540bff             lea edx, [ebx + ecx - 1]
// 0088c972  52                   push edx
// 0088c973  8b542418             mov edx, dword ptr [esp + 0x18]
// 0088c977  52                   push edx
// 0088c978  49                   dec ecx
// 0088c979  51                   push ecx
// 0088c97a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088c97e  51                   push ecx
// 0088c97f  50                   push eax
// 0088c980  57                   push edi
// 0088c981  e86abcffff           call 0x8885f0
// 0088c986  8b4608               mov eax, dword ptr [esi + 8]
// 0088c989  83c418               add esp, 0x18
// 0088c98c  83f8ff               cmp eax, -1
// 0088c98f  7505                 jne 0x88c996
// 0088c991  8b4e04               mov ecx, dword ptr [esi + 4]
// 0088c994  eb02                 jmp 0x88c998
// 0088c996  8bc8                 mov ecx, eax
// 0088c998  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088c99c  8d1403               lea edx, [ebx + eax]
// 0088c99f  52                   push edx
// 0088c9a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088c9a4  52                   push edx
// 0088c9a5  50                   push eax
// 0088c9a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088c9aa  40                   inc eax
// 0088c9ab  50                   push eax
// 0088c9ac  51                   push ecx
// 0088c9ad  57                   push edi
// 0088c9ae  e83dbcffff           call 0x8885f0
// 0088c9b3  8b4608               mov eax, dword ptr [esi + 8]
// 0088c9b6  83c418               add esp, 0x18
// 0088c9b9  83f8ff               cmp eax, -1
// 0088c9bc  7503                 jne 0x88c9c1
// 0088c9be  8b4604               mov eax, dword ptr [esi + 4]
// 0088c9c1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c9c5  8b542418             mov edx, dword ptr [esp + 0x18]
// 0088c9c9  51                   push ecx
// 0088c9ca  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c9ce  51                   push ecx
// 0088c9cf  03d3                 add edx, ebx
// 0088c9d1  52                   push edx
// 0088c9d2  51                   push ecx
// 0088c9d3  50                   push eax
// 0088c9d4  57                   push edi
// 0088c9d5  e816bcffff           call 0x8885f0
// 0088c9da  8b4620               mov eax, dword ptr [esi + 0x20]
// 0088c9dd  83c418               add esp, 0x18
// 0088c9e0  83f8ff               cmp eax, -1
// 0088c9e3  7503                 jne 0x88c9e8
// 0088c9e5  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0088c9e8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088c9ec  8d140b               lea edx, [ebx + ecx]
// 0088c9ef  52                   push edx
// 0088c9f0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0088c9f4  52                   push edx
// 0088c9f5  51                   push ecx
// 0088c9f6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088c9fa  51                   push ecx
// 0088c9fb  50                   push eax
// 0088c9fc  57                   push edi
// 0088c9fd  e8eebbffff           call 0x8885f0
// 0088ca02  8b5560               mov edx, dword ptr [ebp + 0x60]
// 0088ca05  83c418               add esp, 0x18
// 0088ca08  396a04               cmp dword ptr [edx + 4], ebp
// 0088ca0b  751f                 jne 0x88ca2c
// 0088ca0d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088ca11  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0088ca15  50                   push eax
// 0088ca16  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088ca1a  2bd8                 sub ebx, eax
// 0088ca1c  035c2424             add ebx, dword ptr [esp + 0x24]
// 0088ca20  53                   push ebx
// 0088ca21  50                   push eax
// 0088ca22  51                   push ecx
// 0088ca23  57                   push edi
// 0088ca24  e8c7b5ffff           call 0x887ff0
// 0088ca29  83c414               add esp, 0x14
// 0088ca2c  8b7544               mov esi, dword ptr [ebp + 0x44]
// 0088ca2f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0088ca33  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 0088ca36  8b11                 mov edx, dword ptr [ecx]
// 0088ca38  6a01                 push 1
// 0088ca3a  83ec10               sub esp, 0x10
// 0088ca3d  8bc4                 mov eax, esp
// 0088ca3f  8930                 mov dword ptr [eax], esi
// 0088ca41  8b7548               mov esi, dword ptr [ebp + 0x48]
// 0088ca44  897004               mov dword ptr [eax + 4], esi
// 0088ca47  8b754c               mov esi, dword ptr [ebp + 0x4c]
// 0088ca4a  897008               mov dword ptr [eax + 8], esi
// 0088ca4d  8b7550               mov esi, dword ptr [ebp + 0x50]
// 0088ca50  55                   push ebp
// 0088ca51  89700c               mov dword ptr [eax + 0xc], esi
// 0088ca54  8b4268               mov eax, dword ptr [edx + 0x68]
// 0088ca57  57                   push edi
// 0088ca58  ffd0                 call eax
// 0088ca5a  5f                   pop edi
// 0088ca5b  5e                   pop esi
// 0088ca5c  5d                   pop ebp
// 0088ca5d  5b                   pop ebx
// 0088ca5e  83c434               add esp, 0x34
// 0088ca61  c20800               ret 8
// 0088ca64  70c3                 jo 0x88ca29
// 0088ca66  8800                 mov byte ptr [eax], al
// 0088ca68  27                   daa 
// 0088ca69  c58800c4c688         lds ecx, ptr [eax - 0x77393c00]
// 0088ca6f  007cc888             add byte ptr [eax + ecx*8 - 0x78], bh
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetExcel@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp