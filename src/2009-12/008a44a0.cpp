// roc 2009-12 008a44a0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 1683 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a44a0
//
// 008a44a0  6aff                 push -1
// 008a44a2  68d3249600           push 0x9624d3
// 008a44a7  64a100000000         mov eax, dword ptr fs:[0]
// 008a44ad  50                   push eax
// 008a44ae  81ec00010000         sub esp, 0x100
// 008a44b4  53                   push ebx
// 008a44b5  55                   push ebp
// 008a44b6  56                   push esi
// 008a44b7  57                   push edi
// 008a44b8  a10052b600           mov eax, dword ptr [0xb65200]
// 008a44bd  33c4                 xor eax, esp
// 008a44bf  50                   push eax
// 008a44c0  8d842414010000       lea eax, [esp + 0x114]
// 008a44c7  64a300000000         mov dword ptr fs:[0], eax
// 008a44cd  8bf1                 mov esi, ecx
// 008a44cf  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a44d2  85c9                 test ecx, ecx
// 008a44d4  0f843d060000         je 0x8a4b17
// 008a44da  e861eff7ff           call 0x823440
// 008a44df  8944243c             mov dword ptr [esp + 0x3c], eax
// 008a44e3  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a44e6  8ba810010000         mov ebp, dword ptr [eax + 0x110]
// 008a44ec  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 008a44f2  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 008a44f9  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008a44ff  899424a4000000       mov dword ptr [esp + 0xa4], edx
// 008a4506  8b8898000000         mov ecx, dword ptr [eax + 0x98]
// 008a450c  8d5e2c               lea ebx, [esi + 0x2c]
// 008a450f  898c24a8000000       mov dword ptr [esp + 0xa8], ecx
// 008a4516  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 008a451c  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 008a4523  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 008a452a  8903                 mov dword ptr [ebx], eax
// 008a452c  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 008a4533  894b04               mov dword ptr [ebx + 4], ecx
// 008a4536  899424ac000000       mov dword ptr [esp + 0xac], edx
// 008a453d  8b942430010000       mov edx, dword ptr [esp + 0x130]
// 008a4544  895308               mov dword ptr [ebx + 8], edx
// 008a4547  89430c               mov dword ptr [ebx + 0xc], eax
// 008a454a  8b842438010000       mov eax, dword ptr [esp + 0x138]
// 008a4551  2903                 sub dword ptr [ebx], eax
// 008a4553  294634               sub dword ptr [esi + 0x34], eax
// 008a4556  896c2434             mov dword ptr [esp + 0x34], ebp
// 008a455a  85ed                 test ebp, ebp
// 008a455c  7527                 jne 0x8a4585
// 008a455e  8b0b                 mov ecx, dword ptr [ebx]
// 008a4560  8b5304               mov edx, dword ptr [ebx + 4]
// 008a4563  8b4308               mov eax, dword ptr [ebx + 8]
// 008a4566  898c2428010000       mov dword ptr [esp + 0x128], ecx
// 008a456d  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008a4570  8994242c010000       mov dword ptr [esp + 0x12c], edx
// 008a4577  89842430010000       mov dword ptr [esp + 0x130], eax
// 008a457e  898c2434010000       mov dword ptr [esp + 0x134], ecx
// 008a4585  8d4c2460             lea ecx, [esp + 0x60]
// 008a4589  e8d260f7ff           call 0x81a660
// 008a458e  c7442460dc429f00     mov dword ptr [esp + 0x60], 0x9f42dc
// 008a4596  8b942424010000       mov edx, dword ptr [esp + 0x124]
// 008a459d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a45a0  c784241c01000000000000 mov dword ptr [esp + 0x11c], 0
// 008a45ab  89942484000000       mov dword ptr [esp + 0x84], edx
// 008a45b2  894c2464             mov dword ptr [esp + 0x64], ecx
// 008a45b6  89742468             mov dword ptr [esp + 0x68], esi
// 008a45ba  e8019ff7ff           call 0x81e4c0
// 008a45bf  8944242c             mov dword ptr [esp + 0x2c], eax
// 008a45c3  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a45c6  8bb800010000         mov edi, dword ptr [eax + 0x100]
// 008a45cc  50                   push eax
// 008a45cd  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 008a45d4  e8c798fcff           call 0x86dea0
// 008a45d9  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a45dc  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 008a45e2  8d9424b0000000       lea edx, [esp + 0xb0]
// 008a45e9  52                   push edx
// 008a45ea  c684242001000001     mov byte ptr [esp + 0x120], 1
// 008a45f2  e86991fcff           call 0x86d760
// 008a45f7  8b8424e0000000       mov eax, dword ptr [esp + 0xe0]
// 008a45fe  3be8                 cmp ebp, eax
// 008a4600  89442414             mov dword ptr [esp + 0x14], eax
// 008a4604  7c04                 jl 0x8a460a
// 008a4606  89442434             mov dword ptr [esp + 0x34], eax
// 008a460a  8b0b                 mov ecx, dword ptr [ebx]
// 008a460c  8b17                 mov edx, dword ptr [edi]
// 008a460e  8b5274               mov edx, dword ptr [edx + 0x74]
// 008a4611  83ec10               sub esp, 0x10
// 008a4614  8bc4                 mov eax, esp
// 008a4616  8908                 mov dword ptr [eax], ecx
// 008a4618  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008a461b  894804               mov dword ptr [eax + 4], ecx
// 008a461e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008a4621  894808               mov dword ptr [eax + 8], ecx
// 008a4624  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008a4627  89480c               mov dword ptr [eax + 0xc], ecx
// 008a462a  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 008a4631  56                   push esi
// 008a4632  50                   push eax
// 008a4633  8bcf                 mov ecx, edi
// 008a4635  ffd2                 call edx
// 008a4637  8b2b                 mov ebp, dword ptr [ebx]
// 008a4639  8b4638               mov eax, dword ptr [esi + 0x38]
// 008a463c  2b4668               sub eax, dword ptr [esi + 0x68]
// 008a463f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008a4642  8b5630               mov edx, dword ptr [esi + 0x30]
// 008a4645  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008a4649  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008a464d  89442428             mov dword ptr [esp + 0x28], eax
// 008a4651  89542420             mov dword ptr [esp + 0x20], edx
// 008a4655  894c2424             mov dword ptr [esp + 0x24], ecx
// 008a4659  8d842428010000       lea eax, [esp + 0x128]
// 008a4660  85ed                 test ebp, ebp
// 008a4662  7502                 jne 0x8a4666
// 008a4664  8bc3                 mov eax, ebx
// 008a4666  8b5004               mov edx, dword ptr [eax + 4]
// 008a4669  8b08                 mov ecx, dword ptr [eax]
// 008a466b  89542444             mov dword ptr [esp + 0x44], edx
// 008a466f  8b5008               mov edx, dword ptr [eax + 8]
// 008a4672  8b400c               mov eax, dword ptr [eax + 0xc]
// 008a4675  8944244c             mov dword ptr [esp + 0x4c], eax
// 008a4679  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008a467d  894c2440             mov dword ptr [esp + 0x40], ecx
// 008a4681  03c8                 add ecx, eax
// 008a4683  837e2000             cmp dword ptr [esi + 0x20], 0
// 008a4687  89542448             mov dword ptr [esp + 0x48], edx
// 008a468b  894c2448             mov dword ptr [esp + 0x48], ecx
// 008a468f  0f841e030000         je 0x8a49b3
// 008a4695  8b8c2428010000       mov ecx, dword ptr [esp + 0x128]
// 008a469c  03c8                 add ecx, eax
// 008a469e  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a46a2  83c0ff               add eax, -1
// 008a46a5  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 008a46ac  89442418             mov dword ptr [esp + 0x18], eax
// 008a46b0  0f8860020000         js 0x8a4916
// 008a46b6  8bd5                 mov edx, ebp
// 008a46b8  2bd0                 sub edx, eax
// 008a46ba  4a                   dec edx
// 008a46bb  89542414             mov dword ptr [esp + 0x14], edx
// 008a46bf  eb04                 jmp 0x8a46c5
// 008a46c1  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008a46c5  33c9                 xor ecx, ecx
// 008a46c7  3bc5                 cmp eax, ebp
// 008a46c9  0f9cc1               setl cl
// 008a46cc  894c2438             mov dword ptr [esp + 0x38], ecx
// 008a46d0  85c9                 test ecx, ecx
// 008a46d2  7408                 je 0x8a46dc
// 008a46d4  8bca                 mov ecx, edx
// 008a46d6  894c2430             mov dword ptr [esp + 0x30], ecx
// 008a46da  eb06                 jmp 0x8a46e2
// 008a46dc  89442430             mov dword ptr [esp + 0x30], eax
// 008a46e0  8bc8                 mov ecx, eax
// 008a46e2  85c9                 test ecx, ecx
// 008a46e4  0f8c1a020000         jl 0x8a4904
// 008a46ea  3b8c24e0000000       cmp ecx, dword ptr [esp + 0xe0]
// 008a46f1  0f8d0d020000         jge 0x8a4904
// 008a46f7  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 008a46fe  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 008a4702  85ed                 test ebp, ebp
// 008a4704  0f84fa010000         je 0x8a4904
// 008a470a  8b16                 mov edx, dword ptr [esi]
// 008a470c  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 008a4712  8bce                 mov ecx, esi
// 008a4714  ffd0                 call eax
// 008a4716  85c0                 test eax, eax
// 008a4718  0f84de010000         je 0x8a48fc
// 008a471e  8d8c2490000000       lea ecx, [esp + 0x90]
// 008a4725  51                   push ecx
// 008a4726  8bcd                 mov ecx, ebp
// 008a4728  e8a333f8ff           call 0x827ad0
// 008a472d  837c243000           cmp dword ptr [esp + 0x30], 0
// 008a4732  8b00                 mov eax, dword ptr [eax]
// 008a4734  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a4738  750f                 jne 0x8a4749
// 008a473a  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008a4741  3bc8                 cmp ecx, eax
// 008a4743  7e04                 jle 0x8a4749
// 008a4745  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008a4749  8d942404010000       lea edx, [esp + 0x104]
// 008a4750  52                   push edx
// 008a4751  8bcd                 mov ecx, ebp
// 008a4753  e87833f8ff           call 0x827ad0
// 008a4758  8b4008               mov eax, dword ptr [eax + 8]
// 008a475b  8d4c241c             lea ecx, [esp + 0x1c]
// 008a475f  51                   push ecx
// 008a4760  8d9424a4000000       lea edx, [esp + 0xa4]
// 008a4767  89442428             mov dword ptr [esp + 0x28], eax
// 008a476b  52                   push edx
// 008a476c  8d8424fc000000       lea eax, [esp + 0xfc]
// 008a4773  50                   push eax
// 008a4774  ff15dcca9800         call dword ptr [0x98cadc]
// 008a477a  85c0                 test eax, eax
// 008a477c  0f847a010000         je 0x8a48fc
// 008a4782  837c243800           cmp dword ptr [esp + 0x38], 0
// 008a4787  7451                 je 0x8a47da
// 008a4789  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a478c  8b17                 mov edx, dword ptr [edi]
// 008a478e  50                   push eax
// 008a478f  8b4270               mov eax, dword ptr [edx + 0x70]
// 008a4792  8bcf                 mov ecx, edi
// 008a4794  ffd0                 call eax
// 008a4796  50                   push eax
// 008a4797  8d4c2420             lea ecx, [esp + 0x20]
// 008a479b  51                   push ecx
// 008a479c  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 008a47a3  e856fef4ff           call 0x7f45fe
// 008a47a8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a47ac  8b17                 mov edx, dword ptr [edi]
// 008a47ae  8b5274               mov edx, dword ptr [edx + 0x74]
// 008a47b1  83ec10               sub esp, 0x10
// 008a47b4  8bc4                 mov eax, esp
// 008a47b6  8908                 mov dword ptr [eax], ecx
// 008a47b8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008a47bc  894804               mov dword ptr [eax + 4], ecx
// 008a47bf  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a47c3  894808               mov dword ptr [eax + 8], ecx
// 008a47c6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008a47ca  89480c               mov dword ptr [eax + 0xc], ecx
// 008a47cd  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 008a47d4  56                   push esi
// 008a47d5  50                   push eax
// 008a47d6  8bcf                 mov ecx, edi
// 008a47d8  ffd2                 call edx
// 008a47da  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a47de  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a47e2  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a47e6  894c2454             mov dword ptr [esp + 0x54], ecx
// 008a47ea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a47ee  89442450             mov dword ptr [esp + 0x50], eax
// 008a47f2  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008a47f6  48                   dec eax
// 008a47f7  8bcd                 mov ecx, ebp
// 008a47f9  89542458             mov dword ptr [esp + 0x58], edx
// 008a47fd  89442450             mov dword ptr [esp + 0x50], eax
// 008a4801  e8fa32f8ff           call 0x827b00
// 008a4806  85c0                 test eax, eax
// 008a4808  7434                 je 0x8a483e
// 008a480a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a480e  8b17                 mov edx, dword ptr [edi]
// 008a4810  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 008a4816  83ec10               sub esp, 0x10
// 008a4819  8bc4                 mov eax, esp
// 008a481b  8908                 mov dword ptr [eax], ecx
// 008a481d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008a4821  894804               mov dword ptr [eax + 4], ecx
// 008a4824  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a4828  894808               mov dword ptr [eax + 8], ecx
// 008a482b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008a482f  89480c               mov dword ptr [eax + 0xc], ecx
// 008a4832  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 008a4839  50                   push eax
// 008a483a  8bcf                 mov ecx, edi
// 008a483c  ffd2                 call edx
// 008a483e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a4841  55                   push ebp
// 008a4842  e8f964f8ff           call 0x82ad40
// 008a4847  89442438             mov dword ptr [esp + 0x38], eax
// 008a484b  85c0                 test eax, eax
// 008a484d  745b                 je 0x8a48aa
// 008a484f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a4853  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a4857  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a485b  89442474             mov dword ptr [esp + 0x74], eax
// 008a485f  8b442428             mov eax, dword ptr [esp + 0x28]
// 008a4863  894c2478             mov dword ptr [esp + 0x78], ecx
// 008a4867  8bcd                 mov ecx, ebp
// 008a4869  896c246c             mov dword ptr [esp + 0x6c], ebp
// 008a486d  8954247c             mov dword ptr [esp + 0x7c], edx
// 008a4871  89842480000000       mov dword ptr [esp + 0x80], eax
// 008a4878  e8c331f8ff           call 0x827a40
// 008a487d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008a4881  89842488000000       mov dword ptr [esp + 0x88], eax
// 008a4888  894c2470             mov dword ptr [esp + 0x70], ecx
// 008a488c  8b11                 mov edx, dword ptr [ecx]
// 008a488e  8b5258               mov edx, dword ptr [edx + 0x58]
// 008a4891  8d442460             lea eax, [esp + 0x60]
// 008a4895  50                   push eax
// 008a4896  ffd2                 call edx
// 008a4898  8b8d90000000         mov ecx, dword ptr [ebp + 0x90]
// 008a489e  3bc8                 cmp ecx, eax
// 008a48a0  7e02                 jle 0x8a48a4
// 008a48a2  8bc1                 mov eax, ecx
// 008a48a4  898590000000         mov dword ptr [ebp + 0x90], eax
// 008a48aa  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008a48ae  8b17                 mov edx, dword ptr [edi]
// 008a48b0  8bac2424010000       mov ebp, dword ptr [esp + 0x124]
// 008a48b7  8b5278               mov edx, dword ptr [edx + 0x78]
// 008a48ba  83ec10               sub esp, 0x10
// 008a48bd  8bc4                 mov eax, esp
// 008a48bf  8908                 mov dword ptr [eax], ecx
// 008a48c1  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008a48c5  894804               mov dword ptr [eax + 4], ecx
// 008a48c8  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008a48cc  894808               mov dword ptr [eax + 8], ecx
// 008a48cf  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008a48d3  6a01                 push 1
// 008a48d5  89480c               mov dword ptr [eax + 0xc], ecx
// 008a48d8  55                   push ebp
// 008a48d9  8bcf                 mov ecx, edi
// 008a48db  ffd2                 call edx
// 008a48dd  8b442434             mov eax, dword ptr [esp + 0x34]
// 008a48e1  48                   dec eax
// 008a48e2  39442430             cmp dword ptr [esp + 0x30], eax
// 008a48e6  7514                 jne 0x8a48fc
// 008a48e8  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a48eb  8b17                 mov edx, dword ptr [edi]
// 008a48ed  8b527c               mov edx, dword ptr [edx + 0x7c]
// 008a48f0  56                   push esi
// 008a48f1  50                   push eax
// 008a48f2  8d442458             lea eax, [esp + 0x58]
// 008a48f6  50                   push eax
// 008a48f7  55                   push ebp
// 008a48f8  8bcf                 mov ecx, edi
// 008a48fa  ffd2                 call edx
// 008a48fc  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a4900  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a4904  48                   dec eax
// 008a4905  42                   inc edx
// 008a4906  89442418             mov dword ptr [esp + 0x18], eax
// 008a490a  89542414             mov dword ptr [esp + 0x14], edx
// 008a490e  85c0                 test eax, eax
// 008a4910  0f8dabfdffff         jge 0x8a46c1
// 008a4916  8b06                 mov eax, dword ptr [esi]
// 008a4918  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 008a491e  8bce                 mov ecx, esi
// 008a4920  ffd2                 call edx
// 008a4922  85c0                 test eax, eax
// 008a4924  7452                 je 0x8a4978
// 008a4926  8b6b0c               mov ebp, dword ptr [ebx + 0xc]
// 008a4929  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008a492c  8b13                 mov edx, dword ptr [ebx]
// 008a492e  0354242c             add edx, dword ptr [esp + 0x2c]
// 008a4932  8bc5                 mov eax, ebp
// 008a4934  2b4668               sub eax, dword ptr [esi + 0x68]
// 008a4937  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 008a493e  2bc1                 sub eax, ecx
// 008a4940  03c8                 add ecx, eax
// 008a4942  8b4308               mov eax, dword ptr [ebx + 8]
// 008a4945  894c2478             mov dword ptr [esp + 0x78], ecx
// 008a4949  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a494c  33ed                 xor ebp, ebp
// 008a494e  89542474             mov dword ptr [esp + 0x74], edx
// 008a4952  8944247c             mov dword ptr [esp + 0x7c], eax
// 008a4956  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 008a495d  e82e5efbff           call 0x85a790
// 008a4962  89442470             mov dword ptr [esp + 0x70], eax
// 008a4966  896c246c             mov dword ptr [esp + 0x6c], ebp
// 008a496a  8b10                 mov edx, dword ptr [eax]
// 008a496c  8b5258               mov edx, dword ptr [edx + 0x58]
// 008a496f  8d4c2460             lea ecx, [esp + 0x60]
// 008a4973  51                   push ecx
// 008a4974  8bc8                 mov ecx, eax
// 008a4976  ffd2                 call edx
// 008a4978  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 008a497d  7e34                 jle 0x8a49b3
// 008a497f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008a4983  8b17                 mov edx, dword ptr [edi]
// 008a4985  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 008a498b  83ec10               sub esp, 0x10
// 008a498e  8bc4                 mov eax, esp
// 008a4990  8908                 mov dword ptr [eax], ecx
// 008a4992  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008a4996  894804               mov dword ptr [eax + 4], ecx
// 008a4999  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008a499d  894808               mov dword ptr [eax + 8], ecx
// 008a49a0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008a49a4  89480c               mov dword ptr [eax + 0xc], ecx
// 008a49a7  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 008a49ae  50                   push eax
// 008a49af  8bcf                 mov ecx, edi
// 008a49b1  ffd2                 call edx
// 008a49b3  8b6e38               mov ebp, dword ptr [esi + 0x38]
// 008a49b6  8b5634               mov edx, dword ptr [esi + 0x34]
// 008a49b9  33c0                 xor eax, eax
// 008a49bb  3987b8020000         cmp dword ptr [edi + 0x2b8], eax
// 008a49c1  89542418             mov dword ptr [esp + 0x18], edx
// 008a49c5  8b16                 mov edx, dword ptr [esi]
// 008a49c7  0f95c0               setne al
// 008a49ca  33c9                 xor ecx, ecx
// 008a49cc  85c0                 test eax, eax
// 008a49ce  8b4630               mov eax, dword ptr [esi + 0x30]
// 008a49d1  0f95c1               setne cl
// 008a49d4  89442414             mov dword ptr [esp + 0x14], eax
// 008a49d8  8b4270               mov eax, dword ptr [edx + 0x70]
// 008a49db  2be9                 sub ebp, ecx
// 008a49dd  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008a49e1  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 008a49e8  8bce                 mov ecx, esi
// 008a49ea  ffd0                 call eax
// 008a49ec  85c0                 test eax, eax
// 008a49ee  7446                 je 0x8a4a36
// 008a49f0  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 008a49f5  743f                 je 0x8a4a36
// 008a49f7  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a49fa  83b90402000000       cmp dword ptr [ecx + 0x204], 0
// 008a4a01  7433                 je 0x8a4a36
// 008a4a03  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008a4a0a  8b17                 mov edx, dword ptr [edi]
// 008a4a0c  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 008a4a12  83ec10               sub esp, 0x10
// 008a4a15  8bc4                 mov eax, esp
// 008a4a17  8908                 mov dword ptr [eax], ecx
// 008a4a19  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a4a1d  894804               mov dword ptr [eax + 4], ecx
// 008a4a20  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a4a24  894808               mov dword ptr [eax + 8], ecx
// 008a4a27  89680c               mov dword ptr [eax + 0xc], ebp
// 008a4a2a  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 008a4a31  50                   push eax
// 008a4a32  8bcf                 mov ecx, edi
// 008a4a34  ffd2                 call edx
// 008a4a36  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a4a39  8b5628               mov edx, dword ptr [esi + 0x28]
// 008a4a3c  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008a4a42  8954243c             mov dword ptr [esp + 0x3c], edx
// 008a4a46  e8d581f8ff           call 0x82cc20
// 008a4a4b  8bc8                 mov ecx, eax
// 008a4a4d  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008a4a51  49                   dec ecx
// 008a4a52  3bc1                 cmp eax, ecx
// 008a4a54  7d5e                 jge 0x8a4ab4
// 008a4a56  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 008a4a5b  7e57                 jle 0x8a4ab4
// 008a4a5d  8b5624               mov edx, dword ptr [esi + 0x24]
// 008a4a60  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 008a4a66  8b11                 mov edx, dword ptr [ecx]
// 008a4a68  40                   inc eax
// 008a4a69  50                   push eax
// 008a4a6a  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008a4a6d  ffd0                 call eax
// 008a4a6f  8bf0                 mov esi, eax
// 008a4a71  85f6                 test esi, esi
// 008a4a73  7448                 je 0x8a4abd
// 008a4a75  8b16                 mov edx, dword ptr [esi]
// 008a4a77  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 008a4a7d  8bce                 mov ecx, esi
// 008a4a7f  ffd0                 call eax
// 008a4a81  8bc8                 mov ecx, eax
// 008a4a83  0faf8f58020000       imul ecx, dword ptr [edi + 0x258]
// 008a4a8a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008a4a8e  3bc1                 cmp eax, ecx
// 008a4a90  7c13                 jl 0x8a4aa5
// 008a4a92  8b16                 mov edx, dword ptr [esi]
// 008a4a94  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 008a4a9a  8bce                 mov ecx, esi
// 008a4a9c  ffd0                 call eax
// 008a4a9e  0faf8758020000       imul eax, dword ptr [edi + 0x258]
// 008a4aa5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008a4aa9  03c1                 add eax, ecx
// 008a4aab  89842490000000       mov dword ptr [esp + 0x90], eax
// 008a4ab2  eb09                 jmp 0x8a4abd
// 008a4ab4  8b13                 mov edx, dword ptr [ebx]
// 008a4ab6  89942490000000       mov dword ptr [esp + 0x90], edx
// 008a4abd  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008a4ac4  8b17                 mov edx, dword ptr [edi]
// 008a4ac6  8b5278               mov edx, dword ptr [edx + 0x78]
// 008a4ac9  83ec10               sub esp, 0x10
// 008a4acc  8bc4                 mov eax, esp
// 008a4ace  8908                 mov dword ptr [eax], ecx
// 008a4ad0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a4ad4  894804               mov dword ptr [eax + 4], ecx
// 008a4ad7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a4adb  894808               mov dword ptr [eax + 8], ecx
// 008a4ade  89680c               mov dword ptr [eax + 0xc], ebp
// 008a4ae1  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 008a4ae8  6a00                 push 0
// 008a4aea  50                   push eax
// 008a4aeb  8bcf                 mov ecx, edi
// 008a4aed  ffd2                 call edx
// 008a4aef  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 008a4af6  c684241c01000000     mov byte ptr [esp + 0x11c], 0
// 008a4afe  e8cd94fcff           call 0x86dfd0
// 008a4b03  8d4c2460             lea ecx, [esp + 0x60]
// 008a4b07  c784241c010000ffffffff mov dword ptr [esp + 0x11c], 0xffffffff
// 008a4b12  e88955f7ff           call 0x81a0a0
// 008a4b17  8b8c2414010000       mov ecx, dword ptr [esp + 0x114]
// 008a4b1e  64890d00000000       mov dword ptr fs:[0], ecx
// 008a4b25  59                   pop ecx
// 008a4b26  5f                   pop edi
// 008a4b27  5e                   pop esi
// 008a4b28  5d                   pop ebp
// 008a4b29  5b                   pop ebx
// 008a4b2a  81c40c010000         add esp, 0x10c
// 008a4b30  c21800               ret 0x18
// copied from an identical function in another client (function ?Draw@CXTPReportRow@@UAEXPAVCDC@@VCRect@@H@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportRow.cpp