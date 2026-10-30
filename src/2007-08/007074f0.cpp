// roc 2007-08 007074f0  unit: CXTPTabPaintManager::CAppearanceSetExcel  size: 1960 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007074f0
//
// 007074f0  83ec34               sub esp, 0x34
// 007074f3  53                   push ebx
// 007074f4  55                   push ebp
// 007074f5  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 007074f9  8b5548               mov edx, dword ptr [ebp + 0x48]
// 007074fc  8bc1                 mov eax, ecx
// 007074fe  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 00707501  894c240c             mov dword ptr [esp + 0xc], ecx
// 00707505  8b4d4c               mov ecx, dword ptr [ebp + 0x4c]
// 00707508  89542410             mov dword ptr [esp + 0x10], edx
// 0070750c  8b5550               mov edx, dword ptr [ebp + 0x50]
// 0070750f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00707513  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00707516  56                   push esi
// 00707517  8954241c             mov dword ptr [esp + 0x1c], edx
// 0070751b  396904               cmp dword ptr [ecx + 4], ebp
// 0070751e  57                   push edi
// 0070751f  89442410             mov dword ptr [esp + 0x10], eax
// 00707523  7511                 jne 0x707536
// 00707525  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00707528  8bb0e4000000         mov esi, dword ptr [eax + 0xe4]
// 0070752e  81c674010000         add esi, 0x174
// 00707534  eb0f                 jmp 0x707545
// 00707536  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00707539  8bb2e4000000         mov esi, dword ptr [edx + 0xe4]
// 0070753f  81c6bc010000         add esi, 0x1bc
// 00707545  8b01                 mov eax, dword ptr [ecx]
// 00707547  8b5048               mov edx, dword ptr [eax + 0x48]
// 0070754a  ffd2                 call edx
// 0070754c  83f803               cmp eax, 3
// 0070754f  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 00707553  0f87f7060000         ja 0x707c50
// 00707559  ff2485887c7000       jmp dword ptr [eax*4 + 0x707c88]
// 00707560  8b442420             mov eax, dword ptr [esp + 0x20]
// 00707564  83e801               sub eax, 1
// 00707567  89442420             mov dword ptr [esp + 0x20], eax
// 0070756b  2b442418             sub eax, dword ptr [esp + 0x18]
// 0070756f  6a00                 push 0
// 00707571  99                   cdq 
// 00707572  2bc2                 sub eax, edx
// 00707574  8bd8                 mov ebx, eax
// 00707576  d1fb                 sar ebx, 1
// 00707578  8bc3                 mov eax, ebx
// 0070757a  99                   cdq 
// 0070757b  2bc2                 sub eax, edx
// 0070757d  d1f8                 sar eax, 1
// 0070757f  f7d8                 neg eax
// 00707581  50                   push eax
// 00707582  8d44241c             lea eax, [esp + 0x1c]
// 00707586  50                   push eax
// 00707587  ff15d8ed7700         call dword ptr [0x77edd8]
// 0070758d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00707591  8b442414             mov eax, dword ptr [esp + 0x14]
// 00707595  894c2428             mov dword ptr [esp + 0x28], ecx
// 00707599  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0070759d  2bc8                 sub ecx, eax
// 0070759f  8bd3                 mov edx, ebx
// 007075a1  f7da                 neg edx
// 007075a3  03d2                 add edx, edx
// 007075a5  2bcb                 sub ecx, ebx
// 007075a7  89542430             mov dword ptr [esp + 0x30], edx
// 007075ab  894c2434             mov dword ptr [esp + 0x34], ecx
// 007075af  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 007075b2  89442424             mov dword ptr [esp + 0x24], eax
// 007075b6  8b01                 mov eax, dword ptr [ecx]
// 007075b8  8d141b               lea edx, [ebx + ebx]
// 007075bb  89542440             mov dword ptr [esp + 0x40], edx
// 007075bf  8b5048               mov edx, dword ptr [eax + 0x48]
// 007075c2  6a00                 push 0
// 007075c4  895c2430             mov dword ptr [esp + 0x30], ebx
// 007075c8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 007075d0  895c2440             mov dword ptr [esp + 0x40], ebx
// 007075d4  ffd2                 call edx
// 007075d6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007075da  50                   push eax
// 007075db  6a04                 push 4
// 007075dd  8d442430             lea eax, [esp + 0x30]
// 007075e1  50                   push eax
// 007075e2  55                   push ebp
// 007075e3  57                   push edi
// 007075e4  e8a7c6ffff           call 0x703c90
// 007075e9  8944244c             mov dword ptr [esp + 0x4c], eax
// 007075ed  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007075f0  83f8ff               cmp eax, -1
// 007075f3  7503                 jne 0x7075f8
// 007075f5  8b4628               mov eax, dword ptr [esi + 0x28]
// 007075f8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007075fc  51                   push ecx
// 007075fd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00707601  8d541901             lea edx, [ecx + ebx + 1]
// 00707605  52                   push edx
// 00707606  8b542428             mov edx, dword ptr [esp + 0x28]
// 0070760a  83c2ff               add edx, -1
// 0070760d  52                   push edx
// 0070760e  83c101               add ecx, 1
// 00707611  51                   push ecx
// 00707612  50                   push eax
// 00707613  57                   push edi
// 00707614  e8e7c1ffff           call 0x703800
// 00707619  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0070761c  83c418               add esp, 0x18
// 0070761f  83f8ff               cmp eax, -1
// 00707622  7505                 jne 0x707629
// 00707624  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00707627  eb02                 jmp 0x70762b
// 00707629  8bc8                 mov ecx, eax
// 0070762b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0070762f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00707633  83c001               add eax, 1
// 00707636  50                   push eax
// 00707637  52                   push edx
// 00707638  50                   push eax
// 00707639  8b442420             mov eax, dword ptr [esp + 0x20]
// 0070763d  03c3                 add eax, ebx
// 0070763f  50                   push eax
// 00707640  51                   push ecx
// 00707641  57                   push edi
// 00707642  e8b9c1ffff           call 0x703800
// 00707647  8b4638               mov eax, dword ptr [esi + 0x38]
// 0070764a  83c418               add esp, 0x18
// 0070764d  83f8ff               cmp eax, -1
// 00707650  7503                 jne 0x707655
// 00707652  8b4634               mov eax, dword ptr [esi + 0x34]
// 00707655  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00707659  51                   push ecx
// 0070765a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070765e  8d5419ff             lea edx, [ecx + ebx - 1]
// 00707662  52                   push edx
// 00707663  8b542420             mov edx, dword ptr [esp + 0x20]
// 00707667  52                   push edx
// 00707668  83c1ff               add ecx, -1
// 0070766b  51                   push ecx
// 0070766c  50                   push eax
// 0070766d  57                   push edi
// 0070766e  e88dc1ffff           call 0x703800
// 00707673  8b4608               mov eax, dword ptr [esi + 8]
// 00707676  83c418               add esp, 0x18
// 00707679  83f8ff               cmp eax, -1
// 0070767c  7505                 jne 0x707683
// 0070767e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00707681  eb02                 jmp 0x707685
// 00707683  8bc8                 mov ecx, eax
// 00707685  8b442418             mov eax, dword ptr [esp + 0x18]
// 00707689  50                   push eax
// 0070768a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0070768e  8d1418               lea edx, [eax + ebx]
// 00707691  52                   push edx
// 00707692  8b542428             mov edx, dword ptr [esp + 0x28]
// 00707696  83c2ff               add edx, -1
// 00707699  52                   push edx
// 0070769a  50                   push eax
// 0070769b  51                   push ecx
// 0070769c  57                   push edi
// 0070769d  e85ec1ffff           call 0x703800
// 007076a2  8b4608               mov eax, dword ptr [esi + 8]
// 007076a5  83c418               add esp, 0x18
// 007076a8  83f8ff               cmp eax, -1
// 007076ab  7503                 jne 0x7076b0
// 007076ad  8b4604               mov eax, dword ptr [esi + 4]
// 007076b0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007076b4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007076b8  51                   push ecx
// 007076b9  52                   push edx
// 007076ba  51                   push ecx
// 007076bb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007076bf  03cb                 add ecx, ebx
// 007076c1  51                   push ecx
// 007076c2  50                   push eax
// 007076c3  57                   push edi
// 007076c4  e837c1ffff           call 0x703800
// 007076c9  8b4620               mov eax, dword ptr [esi + 0x20]
// 007076cc  83c418               add esp, 0x18
// 007076cf  83f8ff               cmp eax, -1
// 007076d2  7503                 jne 0x7076d7
// 007076d4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007076d7  8b542420             mov edx, dword ptr [esp + 0x20]
// 007076db  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007076df  52                   push edx
// 007076e0  8d1419               lea edx, [ecx + ebx]
// 007076e3  52                   push edx
// 007076e4  8b542420             mov edx, dword ptr [esp + 0x20]
// 007076e8  52                   push edx
// 007076e9  51                   push ecx
// 007076ea  50                   push eax
// 007076eb  57                   push edi
// 007076ec  e80fc1ffff           call 0x703800
// 007076f1  8b4560               mov eax, dword ptr [ebp + 0x60]
// 007076f4  83c418               add esp, 0x18
// 007076f7  396804               cmp dword ptr [eax + 4], ebp
// 007076fa  0f8550050000         jne 0x707c50
// 00707700  8b442414             mov eax, dword ptr [esp + 0x14]
// 00707704  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00707708  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0070770c  51                   push ecx
// 0070770d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00707711  2bd0                 sub edx, eax
// 00707713  03d3                 add edx, ebx
// 00707715  52                   push edx
// 00707716  51                   push ecx
// 00707717  50                   push eax
// 00707718  57                   push edi
// 00707719  e822bbffff           call 0x703240
// 0070771e  e92a050000           jmp 0x707c4d
// 00707723  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00707727  83e801               sub eax, 1
// 0070772a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0070772e  2b442414             sub eax, dword ptr [esp + 0x14]
// 00707732  99                   cdq 
// 00707733  2bc2                 sub eax, edx
// 00707735  8bd8                 mov ebx, eax
// 00707737  d1fb                 sar ebx, 1
// 00707739  8bc3                 mov eax, ebx
// 0070773b  99                   cdq 
// 0070773c  2bc2                 sub eax, edx
// 0070773e  d1f8                 sar eax, 1
// 00707740  f7d8                 neg eax
// 00707742  50                   push eax
// 00707743  6a00                 push 0
// 00707745  8d54241c             lea edx, [esp + 0x1c]
// 00707749  52                   push edx
// 0070774a  ff15d8ed7700         call dword ptr [0x77edd8]
// 00707750  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00707754  8b542420             mov edx, dword ptr [esp + 0x20]
// 00707758  89442424             mov dword ptr [esp + 0x24], eax
// 0070775c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00707760  8bcb                 mov ecx, ebx
// 00707762  f7d9                 neg ecx
// 00707764  03c9                 add ecx, ecx
// 00707766  2bd3                 sub edx, ebx
// 00707768  2bd0                 sub edx, eax
// 0070776a  89442428             mov dword ptr [esp + 0x28], eax
// 0070776e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00707772  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00707775  89542438             mov dword ptr [esp + 0x38], edx
// 00707779  8b11                 mov edx, dword ptr [ecx]
// 0070777b  8d041b               lea eax, [ebx + ebx]
// 0070777e  8944243c             mov dword ptr [esp + 0x3c], eax
// 00707782  8b4248               mov eax, dword ptr [edx + 0x48]
// 00707785  6a00                 push 0
// 00707787  895c2434             mov dword ptr [esp + 0x34], ebx
// 0070778b  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00707793  895c2444             mov dword ptr [esp + 0x44], ebx
// 00707797  ffd0                 call eax
// 00707799  50                   push eax
// 0070779a  6a04                 push 4
// 0070779c  8d4c2430             lea ecx, [esp + 0x30]
// 007077a0  51                   push ecx
// 007077a1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007077a5  55                   push ebp
// 007077a6  57                   push edi
// 007077a7  e8e4c4ffff           call 0x703c90
// 007077ac  8944244c             mov dword ptr [esp + 0x4c], eax
// 007077b0  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007077b3  83f8ff               cmp eax, -1
// 007077b6  7503                 jne 0x7077bb
// 007077b8  8b4628               mov eax, dword ptr [esi + 0x28]
// 007077bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007077bf  8d540b01             lea edx, [ebx + ecx + 1]
// 007077c3  52                   push edx
// 007077c4  8b542418             mov edx, dword ptr [esp + 0x18]
// 007077c8  52                   push edx
// 007077c9  83c101               add ecx, 1
// 007077cc  51                   push ecx
// 007077cd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007077d1  83c1ff               add ecx, -1
// 007077d4  51                   push ecx
// 007077d5  50                   push eax
// 007077d6  57                   push edi
// 007077d7  e824c0ffff           call 0x703800
// 007077dc  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007077df  83c418               add esp, 0x18
// 007077e2  83f8ff               cmp eax, -1
// 007077e5  7505                 jne 0x7077ec
// 007077e7  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007077ea  eb02                 jmp 0x7077ee
// 007077ec  8bc8                 mov ecx, eax
// 007077ee  8b542420             mov edx, dword ptr [esp + 0x20]
// 007077f2  8b442414             mov eax, dword ptr [esp + 0x14]
// 007077f6  52                   push edx
// 007077f7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007077fb  83c001               add eax, 1
// 007077fe  50                   push eax
// 007077ff  03d3                 add edx, ebx
// 00707801  52                   push edx
// 00707802  50                   push eax
// 00707803  51                   push ecx
// 00707804  57                   push edi
// 00707805  e8f6bfffff           call 0x703800
// 0070780a  8b4638               mov eax, dword ptr [esi + 0x38]
// 0070780d  83c418               add esp, 0x18
// 00707810  83f8ff               cmp eax, -1
// 00707813  7503                 jne 0x707818
// 00707815  8b4634               mov eax, dword ptr [esi + 0x34]
// 00707818  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070781c  8d540bff             lea edx, [ebx + ecx - 1]
// 00707820  52                   push edx
// 00707821  8b542420             mov edx, dword ptr [esp + 0x20]
// 00707825  52                   push edx
// 00707826  83c1ff               add ecx, -1
// 00707829  51                   push ecx
// 0070782a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070782e  51                   push ecx
// 0070782f  50                   push eax
// 00707830  57                   push edi
// 00707831  e8cabfffff           call 0x703800
// 00707836  8b4608               mov eax, dword ptr [esi + 8]
// 00707839  83c418               add esp, 0x18
// 0070783c  83f8ff               cmp eax, -1
// 0070783f  7505                 jne 0x707846
// 00707841  8b4e04               mov ecx, dword ptr [esi + 4]
// 00707844  eb02                 jmp 0x707848
// 00707846  8bc8                 mov ecx, eax
// 00707848  8b442418             mov eax, dword ptr [esp + 0x18]
// 0070784c  8d1403               lea edx, [ebx + eax]
// 0070784f  52                   push edx
// 00707850  8b542418             mov edx, dword ptr [esp + 0x18]
// 00707854  52                   push edx
// 00707855  50                   push eax
// 00707856  8b442428             mov eax, dword ptr [esp + 0x28]
// 0070785a  83c0ff               add eax, -1
// 0070785d  50                   push eax
// 0070785e  51                   push ecx
// 0070785f  57                   push edi
// 00707860  e89bbfffff           call 0x703800
// 00707865  8b4608               mov eax, dword ptr [esi + 8]
// 00707868  83c418               add esp, 0x18
// 0070786b  83f8ff               cmp eax, -1
// 0070786e  7503                 jne 0x707873
// 00707870  8b4604               mov eax, dword ptr [esi + 4]
// 00707873  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00707877  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070787b  51                   push ecx
// 0070787c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00707880  51                   push ecx
// 00707881  03d3                 add edx, ebx
// 00707883  52                   push edx
// 00707884  51                   push ecx
// 00707885  50                   push eax
// 00707886  57                   push edi
// 00707887  e874bfffff           call 0x703800
// 0070788c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0070788f  83c418               add esp, 0x18
// 00707892  83f8ff               cmp eax, -1
// 00707895  7503                 jne 0x70789a
// 00707897  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0070789a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070789e  8d140b               lea edx, [ebx + ecx]
// 007078a1  52                   push edx
// 007078a2  8b542420             mov edx, dword ptr [esp + 0x20]
// 007078a6  52                   push edx
// 007078a7  51                   push ecx
// 007078a8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007078ac  51                   push ecx
// 007078ad  50                   push eax
// 007078ae  57                   push edi
// 007078af  e84cbfffff           call 0x703800
// 007078b4  8b5560               mov edx, dword ptr [ebp + 0x60]
// 007078b7  83c418               add esp, 0x18
// 007078ba  396a04               cmp dword ptr [edx + 4], ebp
// 007078bd  0f858d030000         jne 0x707c50
// 007078c3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007078c7  e969030000           jmp 0x707c35
// 007078cc  8b442420             mov eax, dword ptr [esp + 0x20]
// 007078d0  83e801               sub eax, 1
// 007078d3  89442420             mov dword ptr [esp + 0x20], eax
// 007078d7  2b442418             sub eax, dword ptr [esp + 0x18]
// 007078db  6a00                 push 0
// 007078dd  99                   cdq 
// 007078de  2bc2                 sub eax, edx
// 007078e0  8bd8                 mov ebx, eax
// 007078e2  d1fb                 sar ebx, 1
// 007078e4  8bc3                 mov eax, ebx
// 007078e6  99                   cdq 
// 007078e7  2bc2                 sub eax, edx
// 007078e9  d1f8                 sar eax, 1
// 007078eb  f7d8                 neg eax
// 007078ed  50                   push eax
// 007078ee  8d54241c             lea edx, [esp + 0x1c]
// 007078f2  52                   push edx
// 007078f3  ff15d8ed7700         call dword ptr [0x77edd8]
// 007078f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007078fd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00707901  83c101               add ecx, 1
// 00707904  894c2428             mov dword ptr [esp + 0x28], ecx
// 00707908  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0070790c  8d141b               lea edx, [ebx + ebx]
// 0070790f  89542430             mov dword ptr [esp + 0x30], edx
// 00707913  2bcb                 sub ecx, ebx
// 00707915  2bc8                 sub ecx, eax
// 00707917  8bd3                 mov edx, ebx
// 00707919  f7da                 neg edx
// 0070791b  894c2434             mov dword ptr [esp + 0x34], ecx
// 0070791f  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00707922  03d2                 add edx, edx
// 00707924  89442424             mov dword ptr [esp + 0x24], eax
// 00707928  8b01                 mov eax, dword ptr [ecx]
// 0070792a  89542440             mov dword ptr [esp + 0x40], edx
// 0070792e  8b5048               mov edx, dword ptr [eax + 0x48]
// 00707931  6a00                 push 0
// 00707933  895c2430             mov dword ptr [esp + 0x30], ebx
// 00707937  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0070793f  895c2440             mov dword ptr [esp + 0x40], ebx
// 00707943  ffd2                 call edx
// 00707945  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00707949  50                   push eax
// 0070794a  6a04                 push 4
// 0070794c  8d442430             lea eax, [esp + 0x30]
// 00707950  50                   push eax
// 00707951  55                   push ebp
// 00707952  57                   push edi
// 00707953  e838c3ffff           call 0x703c90
// 00707958  8944244c             mov dword ptr [esp + 0x4c], eax
// 0070795c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0070795f  83f8ff               cmp eax, -1
// 00707962  7503                 jne 0x707967
// 00707964  8b4628               mov eax, dword ptr [esi + 0x28]
// 00707967  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070796b  51                   push ecx
// 0070796c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00707970  8d540b01             lea edx, [ebx + ecx + 1]
// 00707974  52                   push edx
// 00707975  8b542420             mov edx, dword ptr [esp + 0x20]
// 00707979  83c201               add edx, 1
// 0070797c  52                   push edx
// 0070797d  83c101               add ecx, 1
// 00707980  51                   push ecx
// 00707981  50                   push eax
// 00707982  57                   push edi
// 00707983  e878beffff           call 0x703800
// 00707988  8b4644               mov eax, dword ptr [esi + 0x44]
// 0070798b  83c418               add esp, 0x18
// 0070798e  83f8ff               cmp eax, -1
// 00707991  7505                 jne 0x707998
// 00707993  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00707996  eb02                 jmp 0x70799a
// 00707998  8bc8                 mov ecx, eax
// 0070799a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0070799e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007079a2  83c0ff               add eax, -1
// 007079a5  50                   push eax
// 007079a6  52                   push edx
// 007079a7  50                   push eax
// 007079a8  8b442420             mov eax, dword ptr [esp + 0x20]
// 007079ac  8d1403               lea edx, [ebx + eax]
// 007079af  52                   push edx
// 007079b0  51                   push ecx
// 007079b1  57                   push edi
// 007079b2  e849beffff           call 0x703800
// 007079b7  8b4638               mov eax, dword ptr [esi + 0x38]
// 007079ba  83c418               add esp, 0x18
// 007079bd  83f8ff               cmp eax, -1
// 007079c0  7503                 jne 0x7079c5
// 007079c2  8b4634               mov eax, dword ptr [esi + 0x34]
// 007079c5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007079c9  51                   push ecx
// 007079ca  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007079ce  8d540bff             lea edx, [ebx + ecx - 1]
// 007079d2  52                   push edx
// 007079d3  8b542428             mov edx, dword ptr [esp + 0x28]
// 007079d7  52                   push edx
// 007079d8  83c1ff               add ecx, -1
// 007079db  51                   push ecx
// 007079dc  50                   push eax
// 007079dd  57                   push edi
// 007079de  e81dbeffff           call 0x703800
// 007079e3  8b4608               mov eax, dword ptr [esi + 8]
// 007079e6  83c418               add esp, 0x18
// 007079e9  83f8ff               cmp eax, -1
// 007079ec  7505                 jne 0x7079f3
// 007079ee  8b4e04               mov ecx, dword ptr [esi + 4]
// 007079f1  eb02                 jmp 0x7079f5
// 007079f3  8bc8                 mov ecx, eax
// 007079f5  8b442420             mov eax, dword ptr [esp + 0x20]
// 007079f9  50                   push eax
// 007079fa  8b442418             mov eax, dword ptr [esp + 0x18]
// 007079fe  8d1403               lea edx, [ebx + eax]
// 00707a01  52                   push edx
// 00707a02  8b542420             mov edx, dword ptr [esp + 0x20]
// 00707a06  83c201               add edx, 1
// 00707a09  52                   push edx
// 00707a0a  50                   push eax
// 00707a0b  51                   push ecx
// 00707a0c  57                   push edi
// 00707a0d  e8eebdffff           call 0x703800
// 00707a12  8b4614               mov eax, dword ptr [esi + 0x14]
// 00707a15  83c418               add esp, 0x18
// 00707a18  83f8ff               cmp eax, -1
// 00707a1b  7503                 jne 0x707a20
// 00707a1d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00707a20  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00707a24  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00707a28  51                   push ecx
// 00707a29  52                   push edx
// 00707a2a  51                   push ecx
// 00707a2b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00707a2f  8d140b               lea edx, [ebx + ecx]
// 00707a32  52                   push edx
// 00707a33  50                   push eax
// 00707a34  57                   push edi
// 00707a35  e8c6bdffff           call 0x703800
// 00707a3a  8b4620               mov eax, dword ptr [esi + 0x20]
// 00707a3d  83c418               add esp, 0x18
// 00707a40  83f8ff               cmp eax, -1
// 00707a43  7503                 jne 0x707a48
// 00707a45  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00707a48  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00707a4c  51                   push ecx
// 00707a4d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00707a51  8d140b               lea edx, [ebx + ecx]
// 00707a54  52                   push edx
// 00707a55  8b542428             mov edx, dword ptr [esp + 0x28]
// 00707a59  52                   push edx
// 00707a5a  51                   push ecx
// 00707a5b  50                   push eax
// 00707a5c  57                   push edi
// 00707a5d  e89ebdffff           call 0x703800
// 00707a62  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00707a65  83c418               add esp, 0x18
// 00707a68  396804               cmp dword ptr [eax + 4], ebp
// 00707a6b  0f85df010000         jne 0x707c50
// 00707a71  8b442414             mov eax, dword ptr [esp + 0x14]
// 00707a75  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00707a79  8b542418             mov edx, dword ptr [esp + 0x18]
// 00707a7d  51                   push ecx
// 00707a7e  2bd8                 sub ebx, eax
// 00707a80  035c2420             add ebx, dword ptr [esp + 0x20]
// 00707a84  53                   push ebx
// 00707a85  52                   push edx
// 00707a86  50                   push eax
// 00707a87  57                   push edi
// 00707a88  e8b3b7ffff           call 0x703240
// 00707a8d  e9bb010000           jmp 0x707c4d
// 00707a92  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00707a96  83e801               sub eax, 1
// 00707a99  8944241c             mov dword ptr [esp + 0x1c], eax
// 00707a9d  2b442414             sub eax, dword ptr [esp + 0x14]
// 00707aa1  99                   cdq 
// 00707aa2  2bc2                 sub eax, edx
// 00707aa4  8bd8                 mov ebx, eax
// 00707aa6  d1fb                 sar ebx, 1
// 00707aa8  8bc3                 mov eax, ebx
// 00707aaa  99                   cdq 
// 00707aab  2bc2                 sub eax, edx
// 00707aad  d1f8                 sar eax, 1
// 00707aaf  f7d8                 neg eax
// 00707ab1  50                   push eax
// 00707ab2  6a00                 push 0
// 00707ab4  8d44241c             lea eax, [esp + 0x1c]
// 00707ab8  50                   push eax
// 00707ab9  ff15d8ed7700         call dword ptr [0x77edd8]
// 00707abf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00707ac3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00707ac7  83c101               add ecx, 1
// 00707aca  894c2424             mov dword ptr [esp + 0x24], ecx
// 00707ace  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00707ad2  8d141b               lea edx, [ebx + ebx]
// 00707ad5  8954242c             mov dword ptr [esp + 0x2c], edx
// 00707ad9  2bcb                 sub ecx, ebx
// 00707adb  2bc8                 sub ecx, eax
// 00707add  8bd3                 mov edx, ebx
// 00707adf  f7da                 neg edx
// 00707ae1  894c2438             mov dword ptr [esp + 0x38], ecx
// 00707ae5  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00707ae8  03d2                 add edx, edx
// 00707aea  89442428             mov dword ptr [esp + 0x28], eax
// 00707aee  8b01                 mov eax, dword ptr [ecx]
// 00707af0  8954243c             mov dword ptr [esp + 0x3c], edx
// 00707af4  8b5048               mov edx, dword ptr [eax + 0x48]
// 00707af7  6a00                 push 0
// 00707af9  895c2434             mov dword ptr [esp + 0x34], ebx
// 00707afd  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00707b05  895c2444             mov dword ptr [esp + 0x44], ebx
// 00707b09  ffd2                 call edx
// 00707b0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00707b0f  50                   push eax
// 00707b10  6a04                 push 4
// 00707b12  8d442430             lea eax, [esp + 0x30]
// 00707b16  50                   push eax
// 00707b17  55                   push ebp
// 00707b18  57                   push edi
// 00707b19  e872c1ffff           call 0x703c90
// 00707b1e  8944244c             mov dword ptr [esp + 0x4c], eax
// 00707b22  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00707b25  83f8ff               cmp eax, -1
// 00707b28  7503                 jne 0x707b2d
// 00707b2a  8b4628               mov eax, dword ptr [esi + 0x28]
// 00707b2d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00707b31  8d540b01             lea edx, [ebx + ecx + 1]
// 00707b35  52                   push edx
// 00707b36  8b542420             mov edx, dword ptr [esp + 0x20]
// 00707b3a  52                   push edx
// 00707b3b  83c101               add ecx, 1
// 00707b3e  51                   push ecx
// 00707b3f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00707b43  83c101               add ecx, 1
// 00707b46  51                   push ecx
// 00707b47  50                   push eax
// 00707b48  57                   push edi
// 00707b49  e8b2bcffff           call 0x703800
// 00707b4e  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00707b51  83c418               add esp, 0x18
// 00707b54  83f8ff               cmp eax, -1
// 00707b57  7505                 jne 0x707b5e
// 00707b59  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00707b5c  eb02                 jmp 0x707b60
// 00707b5e  8bc8                 mov ecx, eax
// 00707b60  8b542420             mov edx, dword ptr [esp + 0x20]
// 00707b64  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00707b68  52                   push edx
// 00707b69  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00707b6d  83c0ff               add eax, -1
// 00707b70  50                   push eax
// 00707b71  03d3                 add edx, ebx
// 00707b73  52                   push edx
// 00707b74  50                   push eax
// 00707b75  51                   push ecx
// 00707b76  57                   push edi
// 00707b77  e884bcffff           call 0x703800
// 00707b7c  8b4638               mov eax, dword ptr [esi + 0x38]
// 00707b7f  83c418               add esp, 0x18
// 00707b82  83f8ff               cmp eax, -1
// 00707b85  7503                 jne 0x707b8a
// 00707b87  8b4634               mov eax, dword ptr [esi + 0x34]
// 00707b8a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00707b8e  8d540bff             lea edx, [ebx + ecx - 1]
// 00707b92  52                   push edx
// 00707b93  8b542418             mov edx, dword ptr [esp + 0x18]
// 00707b97  52                   push edx
// 00707b98  83c1ff               add ecx, -1
// 00707b9b  51                   push ecx
// 00707b9c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00707ba0  51                   push ecx
// 00707ba1  50                   push eax
// 00707ba2  57                   push edi
// 00707ba3  e858bcffff           call 0x703800
// 00707ba8  8b4608               mov eax, dword ptr [esi + 8]
// 00707bab  83c418               add esp, 0x18
// 00707bae  83f8ff               cmp eax, -1
// 00707bb1  7505                 jne 0x707bb8
// 00707bb3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00707bb6  eb02                 jmp 0x707bba
// 00707bb8  8bc8                 mov ecx, eax
// 00707bba  8b442418             mov eax, dword ptr [esp + 0x18]
// 00707bbe  8d1403               lea edx, [ebx + eax]
// 00707bc1  52                   push edx
// 00707bc2  8b542420             mov edx, dword ptr [esp + 0x20]
// 00707bc6  52                   push edx
// 00707bc7  50                   push eax
// 00707bc8  8b442420             mov eax, dword ptr [esp + 0x20]
// 00707bcc  83c001               add eax, 1
// 00707bcf  50                   push eax
// 00707bd0  51                   push ecx
// 00707bd1  57                   push edi
// 00707bd2  e829bcffff           call 0x703800
// 00707bd7  8b4608               mov eax, dword ptr [esi + 8]
// 00707bda  83c418               add esp, 0x18
// 00707bdd  83f8ff               cmp eax, -1
// 00707be0  7503                 jne 0x707be5
// 00707be2  8b4604               mov eax, dword ptr [esi + 4]
// 00707be5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00707be9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00707bed  51                   push ecx
// 00707bee  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00707bf2  51                   push ecx
// 00707bf3  03d3                 add edx, ebx
// 00707bf5  52                   push edx
// 00707bf6  51                   push ecx
// 00707bf7  50                   push eax
// 00707bf8  57                   push edi
// 00707bf9  e802bcffff           call 0x703800
// 00707bfe  8b4620               mov eax, dword ptr [esi + 0x20]
// 00707c01  83c418               add esp, 0x18
// 00707c04  83f8ff               cmp eax, -1
// 00707c07  7503                 jne 0x707c0c
// 00707c09  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00707c0c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00707c10  8d140b               lea edx, [ebx + ecx]
// 00707c13  52                   push edx
// 00707c14  8b542418             mov edx, dword ptr [esp + 0x18]
// 00707c18  52                   push edx
// 00707c19  51                   push ecx
// 00707c1a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00707c1e  51                   push ecx
// 00707c1f  50                   push eax
// 00707c20  57                   push edi
// 00707c21  e8dabbffff           call 0x703800
// 00707c26  8b5560               mov edx, dword ptr [ebp + 0x60]
// 00707c29  83c418               add esp, 0x18
// 00707c2c  396a04               cmp dword ptr [edx + 4], ebp
// 00707c2f  751f                 jne 0x707c50
// 00707c31  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00707c35  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00707c39  50                   push eax
// 00707c3a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00707c3e  2bd8                 sub ebx, eax
// 00707c40  035c2424             add ebx, dword ptr [esp + 0x24]
// 00707c44  53                   push ebx
// 00707c45  50                   push eax
// 00707c46  51                   push ecx
// 00707c47  57                   push edi
// 00707c48  e8c3b5ffff           call 0x703210
// 00707c4d  83c414               add esp, 0x14
// 00707c50  8b7544               mov esi, dword ptr [ebp + 0x44]
// 00707c53  8b542410             mov edx, dword ptr [esp + 0x10]
// 00707c57  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 00707c5a  8b11                 mov edx, dword ptr [ecx]
// 00707c5c  6a01                 push 1
// 00707c5e  83ec10               sub esp, 0x10
// 00707c61  8bc4                 mov eax, esp
// 00707c63  8930                 mov dword ptr [eax], esi
// 00707c65  8b7548               mov esi, dword ptr [ebp + 0x48]
// 00707c68  897004               mov dword ptr [eax + 4], esi
// 00707c6b  8b754c               mov esi, dword ptr [ebp + 0x4c]
// 00707c6e  897008               mov dword ptr [eax + 8], esi
// 00707c71  8b7550               mov esi, dword ptr [ebp + 0x50]
// 00707c74  55                   push ebp
// 00707c75  89700c               mov dword ptr [eax + 0xc], esi
// 00707c78  8b4268               mov eax, dword ptr [edx + 0x68]
// 00707c7b  57                   push edi
// 00707c7c  ffd0                 call eax
// 00707c7e  5f                   pop edi
// 00707c7f  5e                   pop esi
// 00707c80  5d                   pop ebp
// 00707c81  5b                   pop ebx
// 00707c82  83c434               add esp, 0x34
// 00707c85  c20800               ret 8
// 00707c88  60                   pushal 
// 00707c89  7570                 jne 0x707cfb
// 00707c8b  0023                 add byte ptr [ebx], ah
// 00707c8d  7770                 ja 0x707cff
// 00707c8f  00cc                 add ah, cl
// 00707c91  7870                 js 0x707d03
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetExcel@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp