// roc 2009-12 008d53a0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 1816 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d53a0
//
// 008d53a0  83ec2c               sub esp, 0x2c
// 008d53a3  53                   push ebx
// 008d53a4  55                   push ebp
// 008d53a5  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 008d53a9  8b4544               mov eax, dword ptr [ebp + 0x44]
// 008d53ac  8b554c               mov edx, dword ptr [ebp + 0x4c]
// 008d53af  8bd9                 mov ebx, ecx
// 008d53b1  8b4d48               mov ecx, dword ptr [ebp + 0x48]
// 008d53b4  89442414             mov dword ptr [esp + 0x14], eax
// 008d53b8  8b4550               mov eax, dword ptr [ebp + 0x50]
// 008d53bb  894c2418             mov dword ptr [esp + 0x18], ecx
// 008d53bf  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 008d53c2  8954241c             mov dword ptr [esp + 0x1c], edx
// 008d53c6  89442420             mov dword ptr [esp + 0x20], eax
// 008d53ca  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d53d0  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 008d53d6  56                   push esi
// 008d53d7  57                   push edi
// 008d53d8  895c2418             mov dword ptr [esp + 0x18], ebx
// 008d53dc  83f9ff               cmp ecx, -1
// 008d53df  750c                 jne 0x8d53ed
// 008d53e1  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 008d53e7  89542410             mov dword ptr [esp + 0x10], edx
// 008d53eb  eb04                 jmp 0x8d53f1
// 008d53ed  894c2410             mov dword ptr [esp + 0x10], ecx
// 008d53f1  8bb828010000         mov edi, dword ptr [eax + 0x128]
// 008d53f7  83ffff               cmp edi, -1
// 008d53fa  7506                 jne 0x8d5402
// 008d53fc  8bb824010000         mov edi, dword ptr [eax + 0x124]
// 008d5402  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 008d5408  83f9ff               cmp ecx, -1
// 008d540b  750c                 jne 0x8d5419
// 008d540d  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 008d5413  89442414             mov dword ptr [esp + 0x14], eax
// 008d5417  eb04                 jmp 0x8d541d
// 008d5419  894c2414             mov dword ptr [esp + 0x14], ecx
// 008d541d  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008d5420  8b11                 mov edx, dword ptr [ecx]
// 008d5422  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d5425  ffd0                 call eax
// 008d5427  8b742440             mov esi, dword ptr [esp + 0x40]
// 008d542b  83f803               cmp eax, 3
// 008d542e  0f8737060000         ja 0x8d5a6b
// 008d5434  ff2485a85a8d00       jmp dword ptr [eax*4 + 0x8d5aa8]
// 008d543b  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008d543e  b802000000           mov eax, 2
// 008d5443  396904               cmp dword ptr [ecx + 4], ebp
// 008d5446  750c                 jne 0x8d5454
// 008d5448  2944241c             sub dword ptr [esp + 0x1c], eax
// 008d544c  29442420             sub dword ptr [esp + 0x20], eax
// 008d5450  01442424             add dword ptr [esp + 0x24], eax
// 008d5454  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d5458  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 008d545b  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 008d5461  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d5465  8b19                 mov ebx, dword ptr [ecx]
// 008d5467  40                   inc eax
// 008d5468  89442430             mov dword ptr [esp + 0x30], eax
// 008d546c  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d5470  48                   dec eax
// 008d5471  89442434             mov dword ptr [esp + 0x34], eax
// 008d5475  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d5479  48                   dec eax
// 008d547a  55                   push ebp
// 008d547b  42                   inc edx
// 008d547c  8944243c             mov dword ptr [esp + 0x3c], eax
// 008d5480  83ec10               sub esp, 0x10
// 008d5483  8bc4                 mov eax, esp
// 008d5485  8910                 mov dword ptr [eax], edx
// 008d5487  8b542444             mov edx, dword ptr [esp + 0x44]
// 008d548b  895004               mov dword ptr [eax + 4], edx
// 008d548e  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d5492  895008               mov dword ptr [eax + 8], edx
// 008d5495  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008d5499  89500c               mov dword ptr [eax + 0xc], edx
// 008d549c  8b4318               mov eax, dword ptr [ebx + 0x18]
// 008d549f  56                   push esi
// 008d54a0  ffd0                 call eax
// 008d54a2  8b1d14b19800         mov ebx, dword ptr [0x98b114]
// 008d54a8  89442444             mov dword ptr [esp + 0x44], eax
// 008d54ac  83ffff               cmp edi, -1
// 008d54af  7455                 je 0x8d5506
// 008d54b1  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d54b5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d54b9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d54bd  2bc8                 sub ecx, eax
// 008d54bf  57                   push edi
// 008d54c0  83e902               sub ecx, 2
// 008d54c3  51                   push ecx
// 008d54c4  6a01                 push 1
// 008d54c6  83c002               add eax, 2
// 008d54c9  50                   push eax
// 008d54ca  52                   push edx
// 008d54cb  8bce                 mov ecx, esi
// 008d54cd  e8c40f0500           call 0x926496
// 008d54d2  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d54d6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d54da  8b5604               mov edx, dword ptr [esi + 4]
// 008d54dd  57                   push edi
// 008d54de  40                   inc eax
// 008d54df  50                   push eax
// 008d54e0  41                   inc ecx
// 008d54e1  51                   push ecx
// 008d54e2  52                   push edx
// 008d54e3  ffd3                 call ebx
// 008d54e5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d54e9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d54ed  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d54f1  57                   push edi
// 008d54f2  2bc8                 sub ecx, eax
// 008d54f4  6a01                 push 1
// 008d54f6  83e904               sub ecx, 4
// 008d54f9  51                   push ecx
// 008d54fa  52                   push edx
// 008d54fb  83c002               add eax, 2
// 008d54fe  50                   push eax
// 008d54ff  8bce                 mov ecx, esi
// 008d5501  e8900f0500           call 0x926496
// 008d5506  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008d550a  83ffff               cmp edi, -1
// 008d550d  7437                 je 0x8d5546
// 008d550f  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d5513  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d5517  8b5604               mov edx, dword ptr [esi + 4]
// 008d551a  57                   push edi
// 008d551b  40                   inc eax
// 008d551c  50                   push eax
// 008d551d  83c1fe               add ecx, -2
// 008d5520  51                   push ecx
// 008d5521  52                   push edx
// 008d5522  ffd3                 call ebx
// 008d5524  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d5528  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d552c  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d5530  2bc8                 sub ecx, eax
// 008d5532  57                   push edi
// 008d5533  83e903               sub ecx, 3
// 008d5536  51                   push ecx
// 008d5537  6a01                 push 1
// 008d5539  83c002               add eax, 2
// 008d553c  50                   push eax
// 008d553d  4a                   dec edx
// 008d553e  52                   push edx
// 008d553f  8bce                 mov ecx, esi
// 008d5541  e8500f0500           call 0x926496
// 008d5546  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d554a  83f8ff               cmp eax, -1
// 008d554d  7424                 je 0x8d5573
// 008d554f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d5553  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d5557  50                   push eax
// 008d5558  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d555c  2bc8                 sub ecx, eax
// 008d555e  83e903               sub ecx, 3
// 008d5561  51                   push ecx
// 008d5562  6a01                 push 1
// 008d5564  83c002               add eax, 2
// 008d5567  50                   push eax
// 008d5568  83c2fe               add edx, -2
// 008d556b  52                   push edx
// 008d556c  8bce                 mov ecx, esi
// 008d556e  e8230f0500           call 0x926496
// 008d5573  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008d5576  396804               cmp dword ptr [eax + 4], ebp
// 008d5579  0f85ec040000         jne 0x8d5a6b
// 008d557f  837d6400             cmp dword ptr [ebp + 0x64], 0
// 008d5583  0f85e2040000         jne 0x8d5a6b
// 008d5589  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d558d  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d5591  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d5595  51                   push ecx
// 008d5596  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d559a  2bd0                 sub edx, eax
// 008d559c  83ea03               sub edx, 3
// 008d559f  52                   push edx
// 008d55a0  49                   dec ecx
// 008d55a1  51                   push ecx
// 008d55a2  40                   inc eax
// 008d55a3  50                   push eax
// 008d55a4  56                   push esi
// 008d55a5  e8c6e8ffff           call 0x8d3e70
// 008d55aa  83c414               add esp, 0x14
// 008d55ad  e9b9040000           jmp 0x8d5a6b
// 008d55b2  8b5560               mov edx, dword ptr [ebp + 0x60]
// 008d55b5  b802000000           mov eax, 2
// 008d55ba  396a04               cmp dword ptr [edx + 4], ebp
// 008d55bd  750c                 jne 0x8d55cb
// 008d55bf  2944241c             sub dword ptr [esp + 0x1c], eax
// 008d55c3  29442420             sub dword ptr [esp + 0x20], eax
// 008d55c7  01442428             add dword ptr [esp + 0x28], eax
// 008d55cb  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 008d55ce  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d55d4  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d55d8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d55dc  8b19                 mov ebx, dword ptr [ecx]
// 008d55de  40                   inc eax
// 008d55df  89442430             mov dword ptr [esp + 0x30], eax
// 008d55e3  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d55e7  48                   dec eax
// 008d55e8  89442434             mov dword ptr [esp + 0x34], eax
// 008d55ec  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d55f0  48                   dec eax
// 008d55f1  55                   push ebp
// 008d55f2  42                   inc edx
// 008d55f3  8944243c             mov dword ptr [esp + 0x3c], eax
// 008d55f7  83ec10               sub esp, 0x10
// 008d55fa  8bc4                 mov eax, esp
// 008d55fc  8910                 mov dword ptr [eax], edx
// 008d55fe  8b542444             mov edx, dword ptr [esp + 0x44]
// 008d5602  895004               mov dword ptr [eax + 4], edx
// 008d5605  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d5609  895008               mov dword ptr [eax + 8], edx
// 008d560c  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008d5610  89500c               mov dword ptr [eax + 0xc], edx
// 008d5613  8b4318               mov eax, dword ptr [ebx + 0x18]
// 008d5616  56                   push esi
// 008d5617  ffd0                 call eax
// 008d5619  8b1d14b19800         mov ebx, dword ptr [0x98b114]
// 008d561f  89442444             mov dword ptr [esp + 0x44], eax
// 008d5623  83ffff               cmp edi, -1
// 008d5626  7455                 je 0x8d567d
// 008d5628  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d562c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d5630  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d5634  57                   push edi
// 008d5635  2bc8                 sub ecx, eax
// 008d5637  6a01                 push 1
// 008d5639  83e902               sub ecx, 2
// 008d563c  51                   push ecx
// 008d563d  52                   push edx
// 008d563e  83c002               add eax, 2
// 008d5641  50                   push eax
// 008d5642  8bce                 mov ecx, esi
// 008d5644  e84d0e0500           call 0x926496
// 008d5649  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d564d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d5651  8b5604               mov edx, dword ptr [esi + 4]
// 008d5654  57                   push edi
// 008d5655  40                   inc eax
// 008d5656  50                   push eax
// 008d5657  41                   inc ecx
// 008d5658  51                   push ecx
// 008d5659  52                   push edx
// 008d565a  ffd3                 call ebx
// 008d565c  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d5660  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d5664  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d5668  2bc8                 sub ecx, eax
// 008d566a  57                   push edi
// 008d566b  83e904               sub ecx, 4
// 008d566e  51                   push ecx
// 008d566f  6a01                 push 1
// 008d5671  83c002               add eax, 2
// 008d5674  50                   push eax
// 008d5675  52                   push edx
// 008d5676  8bce                 mov ecx, esi
// 008d5678  e8190e0500           call 0x926496
// 008d567d  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d5681  83f8ff               cmp eax, -1
// 008d5684  7422                 je 0x8d56a8
// 008d5686  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d568a  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d568e  50                   push eax
// 008d568f  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d5693  2bc8                 sub ecx, eax
// 008d5695  6a01                 push 1
// 008d5697  83e902               sub ecx, 2
// 008d569a  51                   push ecx
// 008d569b  83c2fe               add edx, -2
// 008d569e  52                   push edx
// 008d569f  40                   inc eax
// 008d56a0  50                   push eax
// 008d56a1  8bce                 mov ecx, esi
// 008d56a3  e8ee0d0500           call 0x926496
// 008d56a8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008d56ac  83ffff               cmp edi, -1
// 008d56af  7439                 je 0x8d56ea
// 008d56b1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d56b5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d56b9  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d56bd  57                   push edi
// 008d56be  2bc8                 sub ecx, eax
// 008d56c0  6a01                 push 1
// 008d56c2  83e903               sub ecx, 3
// 008d56c5  51                   push ecx
// 008d56c6  4a                   dec edx
// 008d56c7  52                   push edx
// 008d56c8  83c002               add eax, 2
// 008d56cb  50                   push eax
// 008d56cc  8bce                 mov ecx, esi
// 008d56ce  e8c30d0500           call 0x926496
// 008d56d3  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d56d7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d56db  8b5604               mov edx, dword ptr [esi + 4]
// 008d56de  57                   push edi
// 008d56df  83c0fe               add eax, -2
// 008d56e2  50                   push eax
// 008d56e3  83c102               add ecx, 2
// 008d56e6  51                   push ecx
// 008d56e7  52                   push edx
// 008d56e8  ffd3                 call ebx
// 008d56ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d56ee  83f8ff               cmp eax, -1
// 008d56f1  7415                 je 0x8d5708
// 008d56f3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d56f7  8b5604               mov edx, dword ptr [esi + 4]
// 008d56fa  50                   push eax
// 008d56fb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d56ff  48                   dec eax
// 008d5700  50                   push eax
// 008d5701  83c102               add ecx, 2
// 008d5704  51                   push ecx
// 008d5705  52                   push edx
// 008d5706  ffd3                 call ebx
// 008d5708  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008d570b  396804               cmp dword ptr [eax + 4], ebp
// 008d570e  0f8557030000         jne 0x8d5a6b
// 008d5714  837d6400             cmp dword ptr [ebp + 0x64], 0
// 008d5718  0f854d030000         jne 0x8d5a6b
// 008d571e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d5722  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d5726  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d572a  2bd0                 sub edx, eax
// 008d572c  51                   push ecx
// 008d572d  83ea03               sub edx, 3
// 008d5730  52                   push edx
// 008d5731  40                   inc eax
// 008d5732  50                   push eax
// 008d5733  8b442430             mov eax, dword ptr [esp + 0x30]
// 008d5737  48                   dec eax
// 008d5738  50                   push eax
// 008d5739  56                   push esi
// 008d573a  e801e7ffff           call 0x8d3e40
// 008d573f  83c414               add esp, 0x14
// 008d5742  e924030000           jmp 0x8d5a6b
// 008d5747  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008d574a  396904               cmp dword ptr [ecx + 4], ebp
// 008d574d  750f                 jne 0x8d575e
// 008d574f  6a02                 push 2
// 008d5751  6a02                 push 2
// 008d5753  8d542424             lea edx, [esp + 0x24]
// 008d5757  52                   push edx
// 008d5758  ff1558ca9800         call dword ptr [0x98ca58]
// 008d575e  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 008d5761  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d5767  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d576b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d576f  8b19                 mov ebx, dword ptr [ecx]
// 008d5771  40                   inc eax
// 008d5772  89442430             mov dword ptr [esp + 0x30], eax
// 008d5776  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d577a  48                   dec eax
// 008d577b  89442434             mov dword ptr [esp + 0x34], eax
// 008d577f  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d5783  48                   dec eax
// 008d5784  55                   push ebp
// 008d5785  42                   inc edx
// 008d5786  8944243c             mov dword ptr [esp + 0x3c], eax
// 008d578a  83ec10               sub esp, 0x10
// 008d578d  8bc4                 mov eax, esp
// 008d578f  8910                 mov dword ptr [eax], edx
// 008d5791  8b542444             mov edx, dword ptr [esp + 0x44]
// 008d5795  895004               mov dword ptr [eax + 4], edx
// 008d5798  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d579c  895008               mov dword ptr [eax + 8], edx
// 008d579f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008d57a3  89500c               mov dword ptr [eax + 0xc], edx
// 008d57a6  8b4318               mov eax, dword ptr [ebx + 0x18]
// 008d57a9  56                   push esi
// 008d57aa  ffd0                 call eax
// 008d57ac  8b1d14b19800         mov ebx, dword ptr [0x98b114]
// 008d57b2  89442444             mov dword ptr [esp + 0x44], eax
// 008d57b6  83ffff               cmp edi, -1
// 008d57b9  7432                 je 0x8d57ed
// 008d57bb  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d57bf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d57c3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d57c7  2bc8                 sub ecx, eax
// 008d57c9  57                   push edi
// 008d57ca  83e902               sub ecx, 2
// 008d57cd  51                   push ecx
// 008d57ce  6a01                 push 1
// 008d57d0  40                   inc eax
// 008d57d1  50                   push eax
// 008d57d2  52                   push edx
// 008d57d3  8bce                 mov ecx, esi
// 008d57d5  e8bc0c0500           call 0x926496
// 008d57da  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d57de  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d57e2  8b5604               mov edx, dword ptr [esi + 4]
// 008d57e5  57                   push edi
// 008d57e6  48                   dec eax
// 008d57e7  50                   push eax
// 008d57e8  41                   inc ecx
// 008d57e9  51                   push ecx
// 008d57ea  52                   push edx
// 008d57eb  ffd3                 call ebx
// 008d57ed  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d57f1  83f8ff               cmp eax, -1
// 008d57f4  7422                 je 0x8d5818
// 008d57f6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d57fa  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d57fe  50                   push eax
// 008d57ff  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d5803  2bc8                 sub ecx, eax
// 008d5805  6a01                 push 1
// 008d5807  83e904               sub ecx, 4
// 008d580a  51                   push ecx
// 008d580b  4a                   dec edx
// 008d580c  52                   push edx
// 008d580d  83c002               add eax, 2
// 008d5810  50                   push eax
// 008d5811  8bce                 mov ecx, esi
// 008d5813  e87e0c0500           call 0x926496
// 008d5818  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008d581c  83ffff               cmp edi, -1
// 008d581f  7453                 je 0x8d5874
// 008d5821  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d5825  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d5829  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d582d  57                   push edi
// 008d582e  2bc8                 sub ecx, eax
// 008d5830  6a01                 push 1
// 008d5832  83e904               sub ecx, 4
// 008d5835  51                   push ecx
// 008d5836  52                   push edx
// 008d5837  83c002               add eax, 2
// 008d583a  50                   push eax
// 008d583b  8bce                 mov ecx, esi
// 008d583d  e8540c0500           call 0x926496
// 008d5842  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d5846  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d584a  8b5604               mov edx, dword ptr [esi + 4]
// 008d584d  57                   push edi
// 008d584e  48                   dec eax
// 008d584f  50                   push eax
// 008d5850  83c1fe               add ecx, -2
// 008d5853  51                   push ecx
// 008d5854  52                   push edx
// 008d5855  ffd3                 call ebx
// 008d5857  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d585b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d585f  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d5863  57                   push edi
// 008d5864  2bc8                 sub ecx, eax
// 008d5866  49                   dec ecx
// 008d5867  51                   push ecx
// 008d5868  6a01                 push 1
// 008d586a  50                   push eax
// 008d586b  4a                   dec edx
// 008d586c  52                   push edx
// 008d586d  8bce                 mov ecx, esi
// 008d586f  e8220c0500           call 0x926496
// 008d5874  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d5878  83f8ff               cmp eax, -1
// 008d587b  741f                 je 0x8d589c
// 008d587d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d5881  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d5885  50                   push eax
// 008d5886  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d588a  2bc8                 sub ecx, eax
// 008d588c  49                   dec ecx
// 008d588d  51                   push ecx
// 008d588e  6a01                 push 1
// 008d5890  50                   push eax
// 008d5891  83c2fe               add edx, -2
// 008d5894  52                   push edx
// 008d5895  8bce                 mov ecx, esi
// 008d5897  e8fa0b0500           call 0x926496
// 008d589c  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008d589f  396804               cmp dword ptr [eax + 4], ebp
// 008d58a2  0f85c3010000         jne 0x8d5a6b
// 008d58a8  837d6400             cmp dword ptr [ebp + 0x64], 0
// 008d58ac  0f85b9010000         jne 0x8d5a6b
// 008d58b2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d58b6  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d58ba  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d58be  51                   push ecx
// 008d58bf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d58c3  2bd0                 sub edx, eax
// 008d58c5  4a                   dec edx
// 008d58c6  52                   push edx
// 008d58c7  41                   inc ecx
// 008d58c8  51                   push ecx
// 008d58c9  40                   inc eax
// 008d58ca  50                   push eax
// 008d58cb  56                   push esi
// 008d58cc  e89fe5ffff           call 0x8d3e70
// 008d58d1  83c414               add esp, 0x14
// 008d58d4  8344242802           add dword ptr [esp + 0x28], 2
// 008d58d9  e98d010000           jmp 0x8d5a6b
// 008d58de  8b5560               mov edx, dword ptr [ebp + 0x60]
// 008d58e1  396a04               cmp dword ptr [edx + 4], ebp
// 008d58e4  750f                 jne 0x8d58f5
// 008d58e6  6a02                 push 2
// 008d58e8  6a02                 push 2
// 008d58ea  8d442424             lea eax, [esp + 0x24]
// 008d58ee  50                   push eax
// 008d58ef  ff1558ca9800         call dword ptr [0x98ca58]
// 008d58f5  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d58f9  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 008d58fc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d5900  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008d5904  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 008d590a  48                   dec eax
// 008d590b  89442434             mov dword ptr [esp + 0x34], eax
// 008d590f  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d5913  48                   dec eax
// 008d5914  55                   push ebp
// 008d5915  8944243c             mov dword ptr [esp + 0x3c], eax
// 008d5919  83ec10               sub esp, 0x10
// 008d591c  8bc4                 mov eax, esp
// 008d591e  42                   inc edx
// 008d591f  8910                 mov dword ptr [eax], edx
// 008d5921  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d5925  43                   inc ebx
// 008d5926  895804               mov dword ptr [eax + 4], ebx
// 008d5929  895008               mov dword ptr [eax + 8], edx
// 008d592c  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008d5930  89500c               mov dword ptr [eax + 0xc], edx
// 008d5933  8b01                 mov eax, dword ptr [ecx]
// 008d5935  8b4018               mov eax, dword ptr [eax + 0x18]
// 008d5938  56                   push esi
// 008d5939  ffd0                 call eax
// 008d593b  8b1d14b19800         mov ebx, dword ptr [0x98b114]
// 008d5941  89442440             mov dword ptr [esp + 0x40], eax
// 008d5945  83ffff               cmp edi, -1
// 008d5948  7432                 je 0x8d597c
// 008d594a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d594e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d5952  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d5956  57                   push edi
// 008d5957  2bc8                 sub ecx, eax
// 008d5959  6a01                 push 1
// 008d595b  83e902               sub ecx, 2
// 008d595e  51                   push ecx
// 008d595f  52                   push edx
// 008d5960  40                   inc eax
// 008d5961  50                   push eax
// 008d5962  8bce                 mov ecx, esi
// 008d5964  e82d0b0500           call 0x926496
// 008d5969  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d596d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d5971  8b5604               mov edx, dword ptr [esi + 4]
// 008d5974  57                   push edi
// 008d5975  40                   inc eax
// 008d5976  50                   push eax
// 008d5977  49                   dec ecx
// 008d5978  51                   push ecx
// 008d5979  52                   push edx
// 008d597a  ffd3                 call ebx
// 008d597c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008d5980  83fdff               cmp ebp, -1
// 008d5983  7422                 je 0x8d59a7
// 008d5985  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d5989  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d598d  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d5991  2bc8                 sub ecx, eax
// 008d5993  55                   push ebp
// 008d5994  83e904               sub ecx, 4
// 008d5997  51                   push ecx
// 008d5998  6a01                 push 1
// 008d599a  83c002               add eax, 2
// 008d599d  50                   push eax
// 008d599e  4a                   dec edx
// 008d599f  52                   push edx
// 008d59a0  8bce                 mov ecx, esi
// 008d59a2  e8ef0a0500           call 0x926496
// 008d59a7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008d59ab  83ffff               cmp edi, -1
// 008d59ae  7436                 je 0x8d59e6
// 008d59b0  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d59b4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d59b8  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d59bc  2bc8                 sub ecx, eax
// 008d59be  57                   push edi
// 008d59bf  83e904               sub ecx, 4
// 008d59c2  51                   push ecx
// 008d59c3  6a01                 push 1
// 008d59c5  83c002               add eax, 2
// 008d59c8  50                   push eax
// 008d59c9  52                   push edx
// 008d59ca  8bce                 mov ecx, esi
// 008d59cc  e8c50a0500           call 0x926496
// 008d59d1  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d59d5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d59d9  8b5604               mov edx, dword ptr [esi + 4]
// 008d59dc  57                   push edi
// 008d59dd  83c0fe               add eax, -2
// 008d59e0  50                   push eax
// 008d59e1  49                   dec ecx
// 008d59e2  51                   push ecx
// 008d59e3  52                   push edx
// 008d59e4  ffd3                 call ebx
// 008d59e6  83fdff               cmp ebp, -1
// 008d59e9  7422                 je 0x8d5a0d
// 008d59eb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d59ef  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d59f3  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d59f7  55                   push ebp
// 008d59f8  2bc8                 sub ecx, eax
// 008d59fa  6a01                 push 1
// 008d59fc  83e902               sub ecx, 2
// 008d59ff  51                   push ecx
// 008d5a00  83c2fe               add edx, -2
// 008d5a03  52                   push edx
// 008d5a04  40                   inc eax
// 008d5a05  50                   push eax
// 008d5a06  8bce                 mov ecx, esi
// 008d5a08  e8890a0500           call 0x926496
// 008d5a0d  83ffff               cmp edi, -1
// 008d5a10  7420                 je 0x8d5a32
// 008d5a12  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d5a16  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d5a1a  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d5a1e  57                   push edi
// 008d5a1f  2bc8                 sub ecx, eax
// 008d5a21  6a01                 push 1
// 008d5a23  83e902               sub ecx, 2
// 008d5a26  51                   push ecx
// 008d5a27  4a                   dec edx
// 008d5a28  52                   push edx
// 008d5a29  40                   inc eax
// 008d5a2a  50                   push eax
// 008d5a2b  8bce                 mov ecx, esi
// 008d5a2d  e8640a0500           call 0x926496
// 008d5a32  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008d5a36  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008d5a39  396804               cmp dword ptr [eax + 4], ebp
// 008d5a3c  752d                 jne 0x8d5a6b
// 008d5a3e  837d6400             cmp dword ptr [ebp + 0x64], 0
// 008d5a42  7527                 jne 0x8d5a6b
// 008d5a44  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d5a48  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d5a4c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d5a50  2bd0                 sub edx, eax
// 008d5a52  51                   push ecx
// 008d5a53  4a                   dec edx
// 008d5a54  52                   push edx
// 008d5a55  40                   inc eax
// 008d5a56  50                   push eax
// 008d5a57  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d5a5b  40                   inc eax
// 008d5a5c  50                   push eax
// 008d5a5d  56                   push esi
// 008d5a5e  e8dde3ffff           call 0x8d3e40
// 008d5a63  83c414               add esp, 0x14
// 008d5a66  8344242402           add dword ptr [esp + 0x24], 2
// 008d5a6b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008d5a6f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d5a73  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 008d5a76  8b11                 mov edx, dword ptr [ecx]
// 008d5a78  6a01                 push 1
// 008d5a7a  83ec10               sub esp, 0x10
// 008d5a7d  8bc4                 mov eax, esp
// 008d5a7f  8938                 mov dword ptr [eax], edi
// 008d5a81  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008d5a85  897804               mov dword ptr [eax + 4], edi
// 008d5a88  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008d5a8c  897808               mov dword ptr [eax + 8], edi
// 008d5a8f  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008d5a93  55                   push ebp
// 008d5a94  89780c               mov dword ptr [eax + 0xc], edi
// 008d5a97  8b4268               mov eax, dword ptr [edx + 0x68]
// 008d5a9a  56                   push esi
// 008d5a9b  ffd0                 call eax
// 008d5a9d  5f                   pop edi
// 008d5a9e  5e                   pop esi
// 008d5a9f  5d                   pop ebp
// 008d5aa0  5b                   pop ebx
// 008d5aa1  83c42c               add esp, 0x2c
// 008d5aa4  c20800               ret 8
// 008d5aa7  90                   nop 
// 008d5aa8  3b548d00             cmp edx, dword ptr [ebp + ecx*4]
// 008d5aac  b255                 mov dl, 0x55
// 008d5aae  8d00                 lea eax, [eax]
// 008d5ab0  47                   inc edi
// 008d5ab1  57                   push edi
// 008d5ab2  8d00                 lea eax, [eax]
// 008d5ab4  de588d               ficomp word ptr [eax - 0x73]
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp