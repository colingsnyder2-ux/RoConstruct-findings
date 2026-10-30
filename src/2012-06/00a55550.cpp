// roc 2012-06 00a55550  unit: CXTPTabPaintManager::CAppearanceSetExcel  size: 1908 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a55550
//
// 00a55550  83ec34               sub esp, 0x34
// 00a55553  53                   push ebx
// 00a55554  55                   push ebp
// 00a55555  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00a55559  8b5548               mov edx, dword ptr [ebp + 0x48]
// 00a5555c  8bc1                 mov eax, ecx
// 00a5555e  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 00a55561  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a55565  8b4d4c               mov ecx, dword ptr [ebp + 0x4c]
// 00a55568  89542410             mov dword ptr [esp + 0x10], edx
// 00a5556c  8b5550               mov edx, dword ptr [ebp + 0x50]
// 00a5556f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a55573  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00a55576  56                   push esi
// 00a55577  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a5557b  57                   push edi
// 00a5557c  89442410             mov dword ptr [esp + 0x10], eax
// 00a55580  396904               cmp dword ptr [ecx + 4], ebp
// 00a55583  7511                 jne 0xa55596
// 00a55585  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00a55588  8bb0e4000000         mov esi, dword ptr [eax + 0xe4]
// 00a5558e  81c674010000         add esi, 0x174
// 00a55594  eb0f                 jmp 0xa555a5
// 00a55596  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00a55599  8bb2e4000000         mov esi, dword ptr [edx + 0xe4]
// 00a5559f  81c6bc010000         add esi, 0x1bc
// 00a555a5  8b01                 mov eax, dword ptr [ecx]
// 00a555a7  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a555aa  ffd2                 call edx
// 00a555ac  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 00a555b0  83f803               cmp eax, 3
// 00a555b3  0f87c3060000         ja 0xa55c7c
// 00a555b9  ff2485b45ca500       jmp dword ptr [eax*4 + 0xa55cb4]
// 00a555c0  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a555c4  48                   dec eax
// 00a555c5  89442420             mov dword ptr [esp + 0x20], eax
// 00a555c9  2b442418             sub eax, dword ptr [esp + 0x18]
// 00a555cd  6a00                 push 0
// 00a555cf  99                   cdq 
// 00a555d0  2bc2                 sub eax, edx
// 00a555d2  8bd8                 mov ebx, eax
// 00a555d4  d1fb                 sar ebx, 1
// 00a555d6  8bc3                 mov eax, ebx
// 00a555d8  99                   cdq 
// 00a555d9  2bc2                 sub eax, edx
// 00a555db  d1f8                 sar eax, 1
// 00a555dd  f7d8                 neg eax
// 00a555df  50                   push eax
// 00a555e0  8d44241c             lea eax, [esp + 0x1c]
// 00a555e4  50                   push eax
// 00a555e5  ff15f43ab200         call dword ptr [0xb23af4]
// 00a555eb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a555ef  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a555f3  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a555f7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a555fb  2bc8                 sub ecx, eax
// 00a555fd  8bd3                 mov edx, ebx
// 00a555ff  f7da                 neg edx
// 00a55601  03d2                 add edx, edx
// 00a55603  2bcb                 sub ecx, ebx
// 00a55605  89542430             mov dword ptr [esp + 0x30], edx
// 00a55609  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a5560d  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00a55610  89442424             mov dword ptr [esp + 0x24], eax
// 00a55614  8b01                 mov eax, dword ptr [ecx]
// 00a55616  8d141b               lea edx, [ebx + ebx]
// 00a55619  89542440             mov dword ptr [esp + 0x40], edx
// 00a5561d  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a55620  6a00                 push 0
// 00a55622  895c2430             mov dword ptr [esp + 0x30], ebx
// 00a55626  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00a5562e  895c2440             mov dword ptr [esp + 0x40], ebx
// 00a55632  ffd2                 call edx
// 00a55634  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a55638  50                   push eax
// 00a55639  6a04                 push 4
// 00a5563b  8d442430             lea eax, [esp + 0x30]
// 00a5563f  50                   push eax
// 00a55640  55                   push ebp
// 00a55641  57                   push edi
// 00a55642  e849c6ffff           call 0xa51c90
// 00a55647  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a5564b  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00a5564e  83f8ff               cmp eax, -1
// 00a55651  7503                 jne 0xa55656
// 00a55653  8b4628               mov eax, dword ptr [esi + 0x28]
// 00a55656  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a5565a  51                   push ecx
// 00a5565b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a5565f  8d541901             lea edx, [ecx + ebx + 1]
// 00a55663  52                   push edx
// 00a55664  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a55668  4a                   dec edx
// 00a55669  52                   push edx
// 00a5566a  41                   inc ecx
// 00a5566b  51                   push ecx
// 00a5566c  50                   push eax
// 00a5566d  57                   push edi
// 00a5566e  e8cdc1ffff           call 0xa51840
// 00a55673  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00a55676  83c418               add esp, 0x18
// 00a55679  83f8ff               cmp eax, -1
// 00a5567c  7505                 jne 0xa55683
// 00a5567e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00a55681  eb02                 jmp 0xa55685
// 00a55683  8bc8                 mov ecx, eax
// 00a55685  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a55689  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a5568d  40                   inc eax
// 00a5568e  50                   push eax
// 00a5568f  52                   push edx
// 00a55690  50                   push eax
// 00a55691  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a55695  03c3                 add eax, ebx
// 00a55697  50                   push eax
// 00a55698  51                   push ecx
// 00a55699  57                   push edi
// 00a5569a  e8a1c1ffff           call 0xa51840
// 00a5569f  8b4638               mov eax, dword ptr [esi + 0x38]
// 00a556a2  83c418               add esp, 0x18
// 00a556a5  83f8ff               cmp eax, -1
// 00a556a8  7503                 jne 0xa556ad
// 00a556aa  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a556ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a556b1  51                   push ecx
// 00a556b2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a556b6  8d5419ff             lea edx, [ecx + ebx - 1]
// 00a556ba  52                   push edx
// 00a556bb  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a556bf  52                   push edx
// 00a556c0  49                   dec ecx
// 00a556c1  51                   push ecx
// 00a556c2  50                   push eax
// 00a556c3  57                   push edi
// 00a556c4  e877c1ffff           call 0xa51840
// 00a556c9  8b4608               mov eax, dword ptr [esi + 8]
// 00a556cc  83c418               add esp, 0x18
// 00a556cf  83f8ff               cmp eax, -1
// 00a556d2  7505                 jne 0xa556d9
// 00a556d4  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a556d7  eb02                 jmp 0xa556db
// 00a556d9  8bc8                 mov ecx, eax
// 00a556db  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a556df  50                   push eax
// 00a556e0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a556e4  8d1418               lea edx, [eax + ebx]
// 00a556e7  52                   push edx
// 00a556e8  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a556ec  4a                   dec edx
// 00a556ed  52                   push edx
// 00a556ee  50                   push eax
// 00a556ef  51                   push ecx
// 00a556f0  57                   push edi
// 00a556f1  e84ac1ffff           call 0xa51840
// 00a556f6  8b4608               mov eax, dword ptr [esi + 8]
// 00a556f9  83c418               add esp, 0x18
// 00a556fc  83f8ff               cmp eax, -1
// 00a556ff  7503                 jne 0xa55704
// 00a55701  8b4604               mov eax, dword ptr [esi + 4]
// 00a55704  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a55708  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a5570c  51                   push ecx
// 00a5570d  52                   push edx
// 00a5570e  51                   push ecx
// 00a5570f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a55713  03cb                 add ecx, ebx
// 00a55715  51                   push ecx
// 00a55716  50                   push eax
// 00a55717  57                   push edi
// 00a55718  e823c1ffff           call 0xa51840
// 00a5571d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a55720  83c418               add esp, 0x18
// 00a55723  83f8ff               cmp eax, -1
// 00a55726  7503                 jne 0xa5572b
// 00a55728  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a5572b  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a5572f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a55733  52                   push edx
// 00a55734  8d1419               lea edx, [ecx + ebx]
// 00a55737  52                   push edx
// 00a55738  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a5573c  52                   push edx
// 00a5573d  51                   push ecx
// 00a5573e  50                   push eax
// 00a5573f  57                   push edi
// 00a55740  e8fbc0ffff           call 0xa51840
// 00a55745  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00a55748  83c418               add esp, 0x18
// 00a5574b  396804               cmp dword ptr [eax + 4], ebp
// 00a5574e  0f8528050000         jne 0xa55c7c
// 00a55754  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a55758  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a5575c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a55760  51                   push ecx
// 00a55761  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a55765  2bd0                 sub edx, eax
// 00a55767  03d3                 add edx, ebx
// 00a55769  52                   push edx
// 00a5576a  51                   push ecx
// 00a5576b  50                   push eax
// 00a5576c  57                   push edi
// 00a5576d  e8febaffff           call 0xa51270
// 00a55772  e902050000           jmp 0xa55c79
// 00a55777  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5577b  48                   dec eax
// 00a5577c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a55780  2b442414             sub eax, dword ptr [esp + 0x14]
// 00a55784  99                   cdq 
// 00a55785  2bc2                 sub eax, edx
// 00a55787  8bd8                 mov ebx, eax
// 00a55789  d1fb                 sar ebx, 1
// 00a5578b  8bc3                 mov eax, ebx
// 00a5578d  99                   cdq 
// 00a5578e  2bc2                 sub eax, edx
// 00a55790  d1f8                 sar eax, 1
// 00a55792  f7d8                 neg eax
// 00a55794  50                   push eax
// 00a55795  6a00                 push 0
// 00a55797  8d54241c             lea edx, [esp + 0x1c]
// 00a5579b  52                   push edx
// 00a5579c  ff15f43ab200         call dword ptr [0xb23af4]
// 00a557a2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a557a6  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a557aa  89442424             mov dword ptr [esp + 0x24], eax
// 00a557ae  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a557b2  8bcb                 mov ecx, ebx
// 00a557b4  f7d9                 neg ecx
// 00a557b6  03c9                 add ecx, ecx
// 00a557b8  2bd3                 sub edx, ebx
// 00a557ba  2bd0                 sub edx, eax
// 00a557bc  89442428             mov dword ptr [esp + 0x28], eax
// 00a557c0  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a557c4  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00a557c7  89542438             mov dword ptr [esp + 0x38], edx
// 00a557cb  8b11                 mov edx, dword ptr [ecx]
// 00a557cd  8d041b               lea eax, [ebx + ebx]
// 00a557d0  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a557d4  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a557d7  6a00                 push 0
// 00a557d9  895c2434             mov dword ptr [esp + 0x34], ebx
// 00a557dd  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00a557e5  895c2444             mov dword ptr [esp + 0x44], ebx
// 00a557e9  ffd0                 call eax
// 00a557eb  50                   push eax
// 00a557ec  6a04                 push 4
// 00a557ee  8d4c2430             lea ecx, [esp + 0x30]
// 00a557f2  51                   push ecx
// 00a557f3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a557f7  55                   push ebp
// 00a557f8  57                   push edi
// 00a557f9  e892c4ffff           call 0xa51c90
// 00a557fe  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a55802  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00a55805  83f8ff               cmp eax, -1
// 00a55808  7503                 jne 0xa5580d
// 00a5580a  8b4628               mov eax, dword ptr [esi + 0x28]
// 00a5580d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a55811  8d540b01             lea edx, [ebx + ecx + 1]
// 00a55815  52                   push edx
// 00a55816  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a5581a  52                   push edx
// 00a5581b  41                   inc ecx
// 00a5581c  51                   push ecx
// 00a5581d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a55821  49                   dec ecx
// 00a55822  51                   push ecx
// 00a55823  50                   push eax
// 00a55824  57                   push edi
// 00a55825  e816c0ffff           call 0xa51840
// 00a5582a  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00a5582d  83c418               add esp, 0x18
// 00a55830  83f8ff               cmp eax, -1
// 00a55833  7505                 jne 0xa5583a
// 00a55835  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00a55838  eb02                 jmp 0xa5583c
// 00a5583a  8bc8                 mov ecx, eax
// 00a5583c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a55840  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a55844  52                   push edx
// 00a55845  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a55849  40                   inc eax
// 00a5584a  50                   push eax
// 00a5584b  03d3                 add edx, ebx
// 00a5584d  52                   push edx
// 00a5584e  50                   push eax
// 00a5584f  51                   push ecx
// 00a55850  57                   push edi
// 00a55851  e8eabfffff           call 0xa51840
// 00a55856  8b4638               mov eax, dword ptr [esi + 0x38]
// 00a55859  83c418               add esp, 0x18
// 00a5585c  83f8ff               cmp eax, -1
// 00a5585f  7503                 jne 0xa55864
// 00a55861  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a55864  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a55868  8d540bff             lea edx, [ebx + ecx - 1]
// 00a5586c  52                   push edx
// 00a5586d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a55871  52                   push edx
// 00a55872  49                   dec ecx
// 00a55873  51                   push ecx
// 00a55874  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a55878  51                   push ecx
// 00a55879  50                   push eax
// 00a5587a  57                   push edi
// 00a5587b  e8c0bfffff           call 0xa51840
// 00a55880  8b4608               mov eax, dword ptr [esi + 8]
// 00a55883  83c418               add esp, 0x18
// 00a55886  83f8ff               cmp eax, -1
// 00a55889  7505                 jne 0xa55890
// 00a5588b  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a5588e  eb02                 jmp 0xa55892
// 00a55890  8bc8                 mov ecx, eax
// 00a55892  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a55896  8d1403               lea edx, [ebx + eax]
// 00a55899  52                   push edx
// 00a5589a  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a5589e  52                   push edx
// 00a5589f  50                   push eax
// 00a558a0  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a558a4  48                   dec eax
// 00a558a5  50                   push eax
// 00a558a6  51                   push ecx
// 00a558a7  57                   push edi
// 00a558a8  e893bfffff           call 0xa51840
// 00a558ad  8b4608               mov eax, dword ptr [esi + 8]
// 00a558b0  83c418               add esp, 0x18
// 00a558b3  83f8ff               cmp eax, -1
// 00a558b6  7503                 jne 0xa558bb
// 00a558b8  8b4604               mov eax, dword ptr [esi + 4]
// 00a558bb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a558bf  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a558c3  51                   push ecx
// 00a558c4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a558c8  51                   push ecx
// 00a558c9  03d3                 add edx, ebx
// 00a558cb  52                   push edx
// 00a558cc  51                   push ecx
// 00a558cd  50                   push eax
// 00a558ce  57                   push edi
// 00a558cf  e86cbfffff           call 0xa51840
// 00a558d4  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a558d7  83c418               add esp, 0x18
// 00a558da  83f8ff               cmp eax, -1
// 00a558dd  7503                 jne 0xa558e2
// 00a558df  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a558e2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a558e6  8d140b               lea edx, [ebx + ecx]
// 00a558e9  52                   push edx
// 00a558ea  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a558ee  52                   push edx
// 00a558ef  51                   push ecx
// 00a558f0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a558f4  51                   push ecx
// 00a558f5  50                   push eax
// 00a558f6  57                   push edi
// 00a558f7  e844bfffff           call 0xa51840
// 00a558fc  8b5560               mov edx, dword ptr [ebp + 0x60]
// 00a558ff  83c418               add esp, 0x18
// 00a55902  396a04               cmp dword ptr [edx + 4], ebp
// 00a55905  0f8571030000         jne 0xa55c7c
// 00a5590b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a5590f  e94d030000           jmp 0xa55c61
// 00a55914  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a55918  48                   dec eax
// 00a55919  89442420             mov dword ptr [esp + 0x20], eax
// 00a5591d  2b442418             sub eax, dword ptr [esp + 0x18]
// 00a55921  6a00                 push 0
// 00a55923  99                   cdq 
// 00a55924  2bc2                 sub eax, edx
// 00a55926  8bd8                 mov ebx, eax
// 00a55928  d1fb                 sar ebx, 1
// 00a5592a  8bc3                 mov eax, ebx
// 00a5592c  99                   cdq 
// 00a5592d  2bc2                 sub eax, edx
// 00a5592f  d1f8                 sar eax, 1
// 00a55931  f7d8                 neg eax
// 00a55933  50                   push eax
// 00a55934  8d54241c             lea edx, [esp + 0x1c]
// 00a55938  52                   push edx
// 00a55939  ff15f43ab200         call dword ptr [0xb23af4]
// 00a5593f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a55943  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a55947  41                   inc ecx
// 00a55948  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a5594c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a55950  8d141b               lea edx, [ebx + ebx]
// 00a55953  89542430             mov dword ptr [esp + 0x30], edx
// 00a55957  2bcb                 sub ecx, ebx
// 00a55959  2bc8                 sub ecx, eax
// 00a5595b  8bd3                 mov edx, ebx
// 00a5595d  f7da                 neg edx
// 00a5595f  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a55963  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00a55966  03d2                 add edx, edx
// 00a55968  89442424             mov dword ptr [esp + 0x24], eax
// 00a5596c  8b01                 mov eax, dword ptr [ecx]
// 00a5596e  89542440             mov dword ptr [esp + 0x40], edx
// 00a55972  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a55975  6a00                 push 0
// 00a55977  895c2430             mov dword ptr [esp + 0x30], ebx
// 00a5597b  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00a55983  895c2440             mov dword ptr [esp + 0x40], ebx
// 00a55987  ffd2                 call edx
// 00a55989  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5598d  50                   push eax
// 00a5598e  6a04                 push 4
// 00a55990  8d442430             lea eax, [esp + 0x30]
// 00a55994  50                   push eax
// 00a55995  55                   push ebp
// 00a55996  57                   push edi
// 00a55997  e8f4c2ffff           call 0xa51c90
// 00a5599c  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a559a0  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00a559a3  83f8ff               cmp eax, -1
// 00a559a6  7503                 jne 0xa559ab
// 00a559a8  8b4628               mov eax, dword ptr [esi + 0x28]
// 00a559ab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a559af  51                   push ecx
// 00a559b0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a559b4  8d540b01             lea edx, [ebx + ecx + 1]
// 00a559b8  52                   push edx
// 00a559b9  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a559bd  42                   inc edx
// 00a559be  52                   push edx
// 00a559bf  41                   inc ecx
// 00a559c0  51                   push ecx
// 00a559c1  50                   push eax
// 00a559c2  57                   push edi
// 00a559c3  e878beffff           call 0xa51840
// 00a559c8  8b4644               mov eax, dword ptr [esi + 0x44]
// 00a559cb  83c418               add esp, 0x18
// 00a559ce  83f8ff               cmp eax, -1
// 00a559d1  7505                 jne 0xa559d8
// 00a559d3  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00a559d6  eb02                 jmp 0xa559da
// 00a559d8  8bc8                 mov ecx, eax
// 00a559da  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a559de  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a559e2  48                   dec eax
// 00a559e3  50                   push eax
// 00a559e4  52                   push edx
// 00a559e5  50                   push eax
// 00a559e6  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a559ea  8d1403               lea edx, [ebx + eax]
// 00a559ed  52                   push edx
// 00a559ee  51                   push ecx
// 00a559ef  57                   push edi
// 00a559f0  e84bbeffff           call 0xa51840
// 00a559f5  8b4638               mov eax, dword ptr [esi + 0x38]
// 00a559f8  83c418               add esp, 0x18
// 00a559fb  83f8ff               cmp eax, -1
// 00a559fe  7503                 jne 0xa55a03
// 00a55a00  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a55a03  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a55a07  51                   push ecx
// 00a55a08  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a55a0c  8d540bff             lea edx, [ebx + ecx - 1]
// 00a55a10  52                   push edx
// 00a55a11  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a55a15  52                   push edx
// 00a55a16  49                   dec ecx
// 00a55a17  51                   push ecx
// 00a55a18  50                   push eax
// 00a55a19  57                   push edi
// 00a55a1a  e821beffff           call 0xa51840
// 00a55a1f  8b4608               mov eax, dword ptr [esi + 8]
// 00a55a22  83c418               add esp, 0x18
// 00a55a25  83f8ff               cmp eax, -1
// 00a55a28  7505                 jne 0xa55a2f
// 00a55a2a  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a55a2d  eb02                 jmp 0xa55a31
// 00a55a2f  8bc8                 mov ecx, eax
// 00a55a31  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a55a35  50                   push eax
// 00a55a36  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a55a3a  8d1403               lea edx, [ebx + eax]
// 00a55a3d  52                   push edx
// 00a55a3e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a55a42  42                   inc edx
// 00a55a43  52                   push edx
// 00a55a44  50                   push eax
// 00a55a45  51                   push ecx
// 00a55a46  57                   push edi
// 00a55a47  e8f4bdffff           call 0xa51840
// 00a55a4c  8b4614               mov eax, dword ptr [esi + 0x14]
// 00a55a4f  83c418               add esp, 0x18
// 00a55a52  83f8ff               cmp eax, -1
// 00a55a55  7503                 jne 0xa55a5a
// 00a55a57  8b4610               mov eax, dword ptr [esi + 0x10]
// 00a55a5a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a55a5e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a55a62  51                   push ecx
// 00a55a63  52                   push edx
// 00a55a64  51                   push ecx
// 00a55a65  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a55a69  8d140b               lea edx, [ebx + ecx]
// 00a55a6c  52                   push edx
// 00a55a6d  50                   push eax
// 00a55a6e  57                   push edi
// 00a55a6f  e8ccbdffff           call 0xa51840
// 00a55a74  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a55a77  83c418               add esp, 0x18
// 00a55a7a  83f8ff               cmp eax, -1
// 00a55a7d  7503                 jne 0xa55a82
// 00a55a7f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a55a82  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a55a86  51                   push ecx
// 00a55a87  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a55a8b  8d140b               lea edx, [ebx + ecx]
// 00a55a8e  52                   push edx
// 00a55a8f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a55a93  52                   push edx
// 00a55a94  51                   push ecx
// 00a55a95  50                   push eax
// 00a55a96  57                   push edi
// 00a55a97  e8a4bdffff           call 0xa51840
// 00a55a9c  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00a55a9f  83c418               add esp, 0x18
// 00a55aa2  396804               cmp dword ptr [eax + 4], ebp
// 00a55aa5  0f85d1010000         jne 0xa55c7c
// 00a55aab  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a55aaf  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a55ab3  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a55ab7  51                   push ecx
// 00a55ab8  2bd8                 sub ebx, eax
// 00a55aba  035c2420             add ebx, dword ptr [esp + 0x20]
// 00a55abe  53                   push ebx
// 00a55abf  52                   push edx
// 00a55ac0  50                   push eax
// 00a55ac1  57                   push edi
// 00a55ac2  e8a9b7ffff           call 0xa51270
// 00a55ac7  e9ad010000           jmp 0xa55c79
// 00a55acc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a55ad0  48                   dec eax
// 00a55ad1  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a55ad5  2b442414             sub eax, dword ptr [esp + 0x14]
// 00a55ad9  99                   cdq 
// 00a55ada  2bc2                 sub eax, edx
// 00a55adc  8bd8                 mov ebx, eax
// 00a55ade  d1fb                 sar ebx, 1
// 00a55ae0  8bc3                 mov eax, ebx
// 00a55ae2  99                   cdq 
// 00a55ae3  2bc2                 sub eax, edx
// 00a55ae5  d1f8                 sar eax, 1
// 00a55ae7  f7d8                 neg eax
// 00a55ae9  50                   push eax
// 00a55aea  6a00                 push 0
// 00a55aec  8d44241c             lea eax, [esp + 0x1c]
// 00a55af0  50                   push eax
// 00a55af1  ff15f43ab200         call dword ptr [0xb23af4]
// 00a55af7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a55afb  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a55aff  41                   inc ecx
// 00a55b00  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a55b04  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a55b08  8d141b               lea edx, [ebx + ebx]
// 00a55b0b  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a55b0f  2bcb                 sub ecx, ebx
// 00a55b11  2bc8                 sub ecx, eax
// 00a55b13  8bd3                 mov edx, ebx
// 00a55b15  f7da                 neg edx
// 00a55b17  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a55b1b  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00a55b1e  03d2                 add edx, edx
// 00a55b20  89442428             mov dword ptr [esp + 0x28], eax
// 00a55b24  8b01                 mov eax, dword ptr [ecx]
// 00a55b26  8954243c             mov dword ptr [esp + 0x3c], edx
// 00a55b2a  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a55b2d  6a00                 push 0
// 00a55b2f  895c2434             mov dword ptr [esp + 0x34], ebx
// 00a55b33  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00a55b3b  895c2444             mov dword ptr [esp + 0x44], ebx
// 00a55b3f  ffd2                 call edx
// 00a55b41  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a55b45  50                   push eax
// 00a55b46  6a04                 push 4
// 00a55b48  8d442430             lea eax, [esp + 0x30]
// 00a55b4c  50                   push eax
// 00a55b4d  55                   push ebp
// 00a55b4e  57                   push edi
// 00a55b4f  e83cc1ffff           call 0xa51c90
// 00a55b54  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a55b58  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00a55b5b  83f8ff               cmp eax, -1
// 00a55b5e  7503                 jne 0xa55b63
// 00a55b60  8b4628               mov eax, dword ptr [esi + 0x28]
// 00a55b63  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a55b67  8d540b01             lea edx, [ebx + ecx + 1]
// 00a55b6b  52                   push edx
// 00a55b6c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a55b70  52                   push edx
// 00a55b71  41                   inc ecx
// 00a55b72  51                   push ecx
// 00a55b73  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a55b77  41                   inc ecx
// 00a55b78  51                   push ecx
// 00a55b79  50                   push eax
// 00a55b7a  57                   push edi
// 00a55b7b  e8c0bcffff           call 0xa51840
// 00a55b80  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00a55b83  83c418               add esp, 0x18
// 00a55b86  83f8ff               cmp eax, -1
// 00a55b89  7505                 jne 0xa55b90
// 00a55b8b  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00a55b8e  eb02                 jmp 0xa55b92
// 00a55b90  8bc8                 mov ecx, eax
// 00a55b92  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a55b96  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a55b9a  52                   push edx
// 00a55b9b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a55b9f  48                   dec eax
// 00a55ba0  50                   push eax
// 00a55ba1  03d3                 add edx, ebx
// 00a55ba3  52                   push edx
// 00a55ba4  50                   push eax
// 00a55ba5  51                   push ecx
// 00a55ba6  57                   push edi
// 00a55ba7  e894bcffff           call 0xa51840
// 00a55bac  8b4638               mov eax, dword ptr [esi + 0x38]
// 00a55baf  83c418               add esp, 0x18
// 00a55bb2  83f8ff               cmp eax, -1
// 00a55bb5  7503                 jne 0xa55bba
// 00a55bb7  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a55bba  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a55bbe  8d540bff             lea edx, [ebx + ecx - 1]
// 00a55bc2  52                   push edx
// 00a55bc3  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a55bc7  52                   push edx
// 00a55bc8  49                   dec ecx
// 00a55bc9  51                   push ecx
// 00a55bca  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a55bce  51                   push ecx
// 00a55bcf  50                   push eax
// 00a55bd0  57                   push edi
// 00a55bd1  e86abcffff           call 0xa51840
// 00a55bd6  8b4608               mov eax, dword ptr [esi + 8]
// 00a55bd9  83c418               add esp, 0x18
// 00a55bdc  83f8ff               cmp eax, -1
// 00a55bdf  7505                 jne 0xa55be6
// 00a55be1  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a55be4  eb02                 jmp 0xa55be8
// 00a55be6  8bc8                 mov ecx, eax
// 00a55be8  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a55bec  8d1403               lea edx, [ebx + eax]
// 00a55bef  52                   push edx
// 00a55bf0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a55bf4  52                   push edx
// 00a55bf5  50                   push eax
// 00a55bf6  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a55bfa  40                   inc eax
// 00a55bfb  50                   push eax
// 00a55bfc  51                   push ecx
// 00a55bfd  57                   push edi
// 00a55bfe  e83dbcffff           call 0xa51840
// 00a55c03  8b4608               mov eax, dword ptr [esi + 8]
// 00a55c06  83c418               add esp, 0x18
// 00a55c09  83f8ff               cmp eax, -1
// 00a55c0c  7503                 jne 0xa55c11
// 00a55c0e  8b4604               mov eax, dword ptr [esi + 4]
// 00a55c11  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a55c15  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a55c19  51                   push ecx
// 00a55c1a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a55c1e  51                   push ecx
// 00a55c1f  03d3                 add edx, ebx
// 00a55c21  52                   push edx
// 00a55c22  51                   push ecx
// 00a55c23  50                   push eax
// 00a55c24  57                   push edi
// 00a55c25  e816bcffff           call 0xa51840
// 00a55c2a  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a55c2d  83c418               add esp, 0x18
// 00a55c30  83f8ff               cmp eax, -1
// 00a55c33  7503                 jne 0xa55c38
// 00a55c35  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a55c38  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a55c3c  8d140b               lea edx, [ebx + ecx]
// 00a55c3f  52                   push edx
// 00a55c40  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a55c44  52                   push edx
// 00a55c45  51                   push ecx
// 00a55c46  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a55c4a  51                   push ecx
// 00a55c4b  50                   push eax
// 00a55c4c  57                   push edi
// 00a55c4d  e8eebbffff           call 0xa51840
// 00a55c52  8b5560               mov edx, dword ptr [ebp + 0x60]
// 00a55c55  83c418               add esp, 0x18
// 00a55c58  396a04               cmp dword ptr [edx + 4], ebp
// 00a55c5b  751f                 jne 0xa55c7c
// 00a55c5d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a55c61  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a55c65  50                   push eax
// 00a55c66  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a55c6a  2bd8                 sub ebx, eax
// 00a55c6c  035c2424             add ebx, dword ptr [esp + 0x24]
// 00a55c70  53                   push ebx
// 00a55c71  50                   push eax
// 00a55c72  51                   push ecx
// 00a55c73  57                   push edi
// 00a55c74  e8c7b5ffff           call 0xa51240
// 00a55c79  83c414               add esp, 0x14
// 00a55c7c  8b7544               mov esi, dword ptr [ebp + 0x44]
// 00a55c7f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a55c83  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 00a55c86  8b11                 mov edx, dword ptr [ecx]
// 00a55c88  6a01                 push 1
// 00a55c8a  83ec10               sub esp, 0x10
// 00a55c8d  8bc4                 mov eax, esp
// 00a55c8f  8930                 mov dword ptr [eax], esi
// 00a55c91  8b7548               mov esi, dword ptr [ebp + 0x48]
// 00a55c94  897004               mov dword ptr [eax + 4], esi
// 00a55c97  8b754c               mov esi, dword ptr [ebp + 0x4c]
// 00a55c9a  897008               mov dword ptr [eax + 8], esi
// 00a55c9d  8b7550               mov esi, dword ptr [ebp + 0x50]
// 00a55ca0  55                   push ebp
// 00a55ca1  89700c               mov dword ptr [eax + 0xc], esi
// 00a55ca4  8b4268               mov eax, dword ptr [edx + 0x68]
// 00a55ca7  57                   push edi
// 00a55ca8  ffd0                 call eax
// 00a55caa  5f                   pop edi
// 00a55cab  5e                   pop esi
// 00a55cac  5d                   pop ebp
// 00a55cad  5b                   pop ebx
// 00a55cae  83c434               add esp, 0x34
// 00a55cb1  c20800               ret 8
// 00a55cb4  c055a500             rcl byte ptr [ebp - 0x5b], 0
// 00a55cb8  7757                 ja 0xa55d11
// 00a55cba  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a55cbb  001459               add byte ptr [ecx + ebx*2], dl
// 00a55cbe  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a55cbf  00cc                 add ah, cl
// 00a55cc1  5a                   pop edx
// 00a55cc2  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetExcel@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp