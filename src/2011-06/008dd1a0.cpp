// roc 2011-06 008dd1a0  unit: CXTPTabPaintManager::CAppearanceSetExcel  size: 1908 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dd1a0
//
// 008dd1a0  83ec34               sub esp, 0x34
// 008dd1a3  53                   push ebx
// 008dd1a4  55                   push ebp
// 008dd1a5  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008dd1a9  8b5548               mov edx, dword ptr [ebp + 0x48]
// 008dd1ac  8bc1                 mov eax, ecx
// 008dd1ae  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 008dd1b1  894c240c             mov dword ptr [esp + 0xc], ecx
// 008dd1b5  8b4d4c               mov ecx, dword ptr [ebp + 0x4c]
// 008dd1b8  89542410             mov dword ptr [esp + 0x10], edx
// 008dd1bc  8b5550               mov edx, dword ptr [ebp + 0x50]
// 008dd1bf  894c2414             mov dword ptr [esp + 0x14], ecx
// 008dd1c3  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008dd1c6  56                   push esi
// 008dd1c7  8954241c             mov dword ptr [esp + 0x1c], edx
// 008dd1cb  57                   push edi
// 008dd1cc  89442410             mov dword ptr [esp + 0x10], eax
// 008dd1d0  396904               cmp dword ptr [ecx + 4], ebp
// 008dd1d3  7511                 jne 0x8dd1e6
// 008dd1d5  8b401c               mov eax, dword ptr [eax + 0x1c]
// 008dd1d8  8bb0e4000000         mov esi, dword ptr [eax + 0xe4]
// 008dd1de  81c674010000         add esi, 0x174
// 008dd1e4  eb0f                 jmp 0x8dd1f5
// 008dd1e6  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008dd1e9  8bb2e4000000         mov esi, dword ptr [edx + 0xe4]
// 008dd1ef  81c6bc010000         add esi, 0x1bc
// 008dd1f5  8b01                 mov eax, dword ptr [ecx]
// 008dd1f7  8b5048               mov edx, dword ptr [eax + 0x48]
// 008dd1fa  ffd2                 call edx
// 008dd1fc  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008dd200  83f803               cmp eax, 3
// 008dd203  0f87c3060000         ja 0x8dd8cc
// 008dd209  ff248504d98d00       jmp dword ptr [eax*4 + 0x8dd904]
// 008dd210  8b442420             mov eax, dword ptr [esp + 0x20]
// 008dd214  48                   dec eax
// 008dd215  89442420             mov dword ptr [esp + 0x20], eax
// 008dd219  2b442418             sub eax, dword ptr [esp + 0x18]
// 008dd21d  6a00                 push 0
// 008dd21f  99                   cdq 
// 008dd220  2bc2                 sub eax, edx
// 008dd222  8bd8                 mov ebx, eax
// 008dd224  d1fb                 sar ebx, 1
// 008dd226  8bc3                 mov eax, ebx
// 008dd228  99                   cdq 
// 008dd229  2bc2                 sub eax, edx
// 008dd22b  d1f8                 sar eax, 1
// 008dd22d  f7d8                 neg eax
// 008dd22f  50                   push eax
// 008dd230  8d44241c             lea eax, [esp + 0x1c]
// 008dd234  50                   push eax
// 008dd235  ff15601ca400         call dword ptr [0xa41c60]
// 008dd23b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd23f  8b442414             mov eax, dword ptr [esp + 0x14]
// 008dd243  894c2428             mov dword ptr [esp + 0x28], ecx
// 008dd247  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008dd24b  2bc8                 sub ecx, eax
// 008dd24d  8bd3                 mov edx, ebx
// 008dd24f  f7da                 neg edx
// 008dd251  03d2                 add edx, edx
// 008dd253  2bcb                 sub ecx, ebx
// 008dd255  89542430             mov dword ptr [esp + 0x30], edx
// 008dd259  894c2434             mov dword ptr [esp + 0x34], ecx
// 008dd25d  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008dd260  89442424             mov dword ptr [esp + 0x24], eax
// 008dd264  8b01                 mov eax, dword ptr [ecx]
// 008dd266  8d141b               lea edx, [ebx + ebx]
// 008dd269  89542440             mov dword ptr [esp + 0x40], edx
// 008dd26d  8b5048               mov edx, dword ptr [eax + 0x48]
// 008dd270  6a00                 push 0
// 008dd272  895c2430             mov dword ptr [esp + 0x30], ebx
// 008dd276  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008dd27e  895c2440             mov dword ptr [esp + 0x40], ebx
// 008dd282  ffd2                 call edx
// 008dd284  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008dd288  50                   push eax
// 008dd289  6a04                 push 4
// 008dd28b  8d442430             lea eax, [esp + 0x30]
// 008dd28f  50                   push eax
// 008dd290  55                   push ebp
// 008dd291  57                   push edi
// 008dd292  e829c7ffff           call 0x8d99c0
// 008dd297  8944244c             mov dword ptr [esp + 0x4c], eax
// 008dd29b  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008dd29e  83f8ff               cmp eax, -1
// 008dd2a1  7503                 jne 0x8dd2a6
// 008dd2a3  8b4628               mov eax, dword ptr [esi + 0x28]
// 008dd2a6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dd2aa  51                   push ecx
// 008dd2ab  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dd2af  8d541901             lea edx, [ecx + ebx + 1]
// 008dd2b3  52                   push edx
// 008dd2b4  8b542428             mov edx, dword ptr [esp + 0x28]
// 008dd2b8  4a                   dec edx
// 008dd2b9  52                   push edx
// 008dd2ba  41                   inc ecx
// 008dd2bb  51                   push ecx
// 008dd2bc  50                   push eax
// 008dd2bd  57                   push edi
// 008dd2be  e86dc2ffff           call 0x8d9530
// 008dd2c3  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008dd2c6  83c418               add esp, 0x18
// 008dd2c9  83f8ff               cmp eax, -1
// 008dd2cc  7505                 jne 0x8dd2d3
// 008dd2ce  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008dd2d1  eb02                 jmp 0x8dd2d5
// 008dd2d3  8bc8                 mov ecx, eax
// 008dd2d5  8b442418             mov eax, dword ptr [esp + 0x18]
// 008dd2d9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008dd2dd  40                   inc eax
// 008dd2de  50                   push eax
// 008dd2df  52                   push edx
// 008dd2e0  50                   push eax
// 008dd2e1  8b442420             mov eax, dword ptr [esp + 0x20]
// 008dd2e5  03c3                 add eax, ebx
// 008dd2e7  50                   push eax
// 008dd2e8  51                   push ecx
// 008dd2e9  57                   push edi
// 008dd2ea  e841c2ffff           call 0x8d9530
// 008dd2ef  8b4638               mov eax, dword ptr [esi + 0x38]
// 008dd2f2  83c418               add esp, 0x18
// 008dd2f5  83f8ff               cmp eax, -1
// 008dd2f8  7503                 jne 0x8dd2fd
// 008dd2fa  8b4634               mov eax, dword ptr [esi + 0x34]
// 008dd2fd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd301  51                   push ecx
// 008dd302  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd306  8d5419ff             lea edx, [ecx + ebx - 1]
// 008dd30a  52                   push edx
// 008dd30b  8b542420             mov edx, dword ptr [esp + 0x20]
// 008dd30f  52                   push edx
// 008dd310  49                   dec ecx
// 008dd311  51                   push ecx
// 008dd312  50                   push eax
// 008dd313  57                   push edi
// 008dd314  e817c2ffff           call 0x8d9530
// 008dd319  8b4608               mov eax, dword ptr [esi + 8]
// 008dd31c  83c418               add esp, 0x18
// 008dd31f  83f8ff               cmp eax, -1
// 008dd322  7505                 jne 0x8dd329
// 008dd324  8b4e04               mov ecx, dword ptr [esi + 4]
// 008dd327  eb02                 jmp 0x8dd32b
// 008dd329  8bc8                 mov ecx, eax
// 008dd32b  8b442418             mov eax, dword ptr [esp + 0x18]
// 008dd32f  50                   push eax
// 008dd330  8b442418             mov eax, dword ptr [esp + 0x18]
// 008dd334  8d1418               lea edx, [eax + ebx]
// 008dd337  52                   push edx
// 008dd338  8b542428             mov edx, dword ptr [esp + 0x28]
// 008dd33c  4a                   dec edx
// 008dd33d  52                   push edx
// 008dd33e  50                   push eax
// 008dd33f  51                   push ecx
// 008dd340  57                   push edi
// 008dd341  e8eac1ffff           call 0x8d9530
// 008dd346  8b4608               mov eax, dword ptr [esi + 8]
// 008dd349  83c418               add esp, 0x18
// 008dd34c  83f8ff               cmp eax, -1
// 008dd34f  7503                 jne 0x8dd354
// 008dd351  8b4604               mov eax, dword ptr [esi + 4]
// 008dd354  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dd358  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008dd35c  51                   push ecx
// 008dd35d  52                   push edx
// 008dd35e  51                   push ecx
// 008dd35f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd363  03cb                 add ecx, ebx
// 008dd365  51                   push ecx
// 008dd366  50                   push eax
// 008dd367  57                   push edi
// 008dd368  e8c3c1ffff           call 0x8d9530
// 008dd36d  8b4620               mov eax, dword ptr [esi + 0x20]
// 008dd370  83c418               add esp, 0x18
// 008dd373  83f8ff               cmp eax, -1
// 008dd376  7503                 jne 0x8dd37b
// 008dd378  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008dd37b  8b542420             mov edx, dword ptr [esp + 0x20]
// 008dd37f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008dd383  52                   push edx
// 008dd384  8d1419               lea edx, [ecx + ebx]
// 008dd387  52                   push edx
// 008dd388  8b542420             mov edx, dword ptr [esp + 0x20]
// 008dd38c  52                   push edx
// 008dd38d  51                   push ecx
// 008dd38e  50                   push eax
// 008dd38f  57                   push edi
// 008dd390  e89bc1ffff           call 0x8d9530
// 008dd395  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008dd398  83c418               add esp, 0x18
// 008dd39b  396804               cmp dword ptr [eax + 4], ebp
// 008dd39e  0f8528050000         jne 0x8dd8cc
// 008dd3a4  8b442414             mov eax, dword ptr [esp + 0x14]
// 008dd3a8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008dd3ac  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008dd3b0  51                   push ecx
// 008dd3b1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008dd3b5  2bd0                 sub edx, eax
// 008dd3b7  03d3                 add edx, ebx
// 008dd3b9  52                   push edx
// 008dd3ba  51                   push ecx
// 008dd3bb  50                   push eax
// 008dd3bc  57                   push edi
// 008dd3bd  e89ebbffff           call 0x8d8f60
// 008dd3c2  e902050000           jmp 0x8dd8c9
// 008dd3c7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008dd3cb  48                   dec eax
// 008dd3cc  8944241c             mov dword ptr [esp + 0x1c], eax
// 008dd3d0  2b442414             sub eax, dword ptr [esp + 0x14]
// 008dd3d4  99                   cdq 
// 008dd3d5  2bc2                 sub eax, edx
// 008dd3d7  8bd8                 mov ebx, eax
// 008dd3d9  d1fb                 sar ebx, 1
// 008dd3db  8bc3                 mov eax, ebx
// 008dd3dd  99                   cdq 
// 008dd3de  2bc2                 sub eax, edx
// 008dd3e0  d1f8                 sar eax, 1
// 008dd3e2  f7d8                 neg eax
// 008dd3e4  50                   push eax
// 008dd3e5  6a00                 push 0
// 008dd3e7  8d54241c             lea edx, [esp + 0x1c]
// 008dd3eb  52                   push edx
// 008dd3ec  ff15601ca400         call dword ptr [0xa41c60]
// 008dd3f2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008dd3f6  8b542420             mov edx, dword ptr [esp + 0x20]
// 008dd3fa  89442424             mov dword ptr [esp + 0x24], eax
// 008dd3fe  8b442418             mov eax, dword ptr [esp + 0x18]
// 008dd402  8bcb                 mov ecx, ebx
// 008dd404  f7d9                 neg ecx
// 008dd406  03c9                 add ecx, ecx
// 008dd408  2bd3                 sub edx, ebx
// 008dd40a  2bd0                 sub edx, eax
// 008dd40c  89442428             mov dword ptr [esp + 0x28], eax
// 008dd410  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008dd414  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008dd417  89542438             mov dword ptr [esp + 0x38], edx
// 008dd41b  8b11                 mov edx, dword ptr [ecx]
// 008dd41d  8d041b               lea eax, [ebx + ebx]
// 008dd420  8944243c             mov dword ptr [esp + 0x3c], eax
// 008dd424  8b4248               mov eax, dword ptr [edx + 0x48]
// 008dd427  6a00                 push 0
// 008dd429  895c2434             mov dword ptr [esp + 0x34], ebx
// 008dd42d  c744243800000000     mov dword ptr [esp + 0x38], 0
// 008dd435  895c2444             mov dword ptr [esp + 0x44], ebx
// 008dd439  ffd0                 call eax
// 008dd43b  50                   push eax
// 008dd43c  6a04                 push 4
// 008dd43e  8d4c2430             lea ecx, [esp + 0x30]
// 008dd442  51                   push ecx
// 008dd443  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd447  55                   push ebp
// 008dd448  57                   push edi
// 008dd449  e872c5ffff           call 0x8d99c0
// 008dd44e  8944244c             mov dword ptr [esp + 0x4c], eax
// 008dd452  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008dd455  83f8ff               cmp eax, -1
// 008dd458  7503                 jne 0x8dd45d
// 008dd45a  8b4628               mov eax, dword ptr [esi + 0x28]
// 008dd45d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dd461  8d540b01             lea edx, [ebx + ecx + 1]
// 008dd465  52                   push edx
// 008dd466  8b542418             mov edx, dword ptr [esp + 0x18]
// 008dd46a  52                   push edx
// 008dd46b  41                   inc ecx
// 008dd46c  51                   push ecx
// 008dd46d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008dd471  49                   dec ecx
// 008dd472  51                   push ecx
// 008dd473  50                   push eax
// 008dd474  57                   push edi
// 008dd475  e8b6c0ffff           call 0x8d9530
// 008dd47a  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008dd47d  83c418               add esp, 0x18
// 008dd480  83f8ff               cmp eax, -1
// 008dd483  7505                 jne 0x8dd48a
// 008dd485  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008dd488  eb02                 jmp 0x8dd48c
// 008dd48a  8bc8                 mov ecx, eax
// 008dd48c  8b542420             mov edx, dword ptr [esp + 0x20]
// 008dd490  8b442414             mov eax, dword ptr [esp + 0x14]
// 008dd494  52                   push edx
// 008dd495  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008dd499  40                   inc eax
// 008dd49a  50                   push eax
// 008dd49b  03d3                 add edx, ebx
// 008dd49d  52                   push edx
// 008dd49e  50                   push eax
// 008dd49f  51                   push ecx
// 008dd4a0  57                   push edi
// 008dd4a1  e88ac0ffff           call 0x8d9530
// 008dd4a6  8b4638               mov eax, dword ptr [esi + 0x38]
// 008dd4a9  83c418               add esp, 0x18
// 008dd4ac  83f8ff               cmp eax, -1
// 008dd4af  7503                 jne 0x8dd4b4
// 008dd4b1  8b4634               mov eax, dword ptr [esi + 0x34]
// 008dd4b4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd4b8  8d540bff             lea edx, [ebx + ecx - 1]
// 008dd4bc  52                   push edx
// 008dd4bd  8b542420             mov edx, dword ptr [esp + 0x20]
// 008dd4c1  52                   push edx
// 008dd4c2  49                   dec ecx
// 008dd4c3  51                   push ecx
// 008dd4c4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd4c8  51                   push ecx
// 008dd4c9  50                   push eax
// 008dd4ca  57                   push edi
// 008dd4cb  e860c0ffff           call 0x8d9530
// 008dd4d0  8b4608               mov eax, dword ptr [esi + 8]
// 008dd4d3  83c418               add esp, 0x18
// 008dd4d6  83f8ff               cmp eax, -1
// 008dd4d9  7505                 jne 0x8dd4e0
// 008dd4db  8b4e04               mov ecx, dword ptr [esi + 4]
// 008dd4de  eb02                 jmp 0x8dd4e2
// 008dd4e0  8bc8                 mov ecx, eax
// 008dd4e2  8b442418             mov eax, dword ptr [esp + 0x18]
// 008dd4e6  8d1403               lea edx, [ebx + eax]
// 008dd4e9  52                   push edx
// 008dd4ea  8b542418             mov edx, dword ptr [esp + 0x18]
// 008dd4ee  52                   push edx
// 008dd4ef  50                   push eax
// 008dd4f0  8b442428             mov eax, dword ptr [esp + 0x28]
// 008dd4f4  48                   dec eax
// 008dd4f5  50                   push eax
// 008dd4f6  51                   push ecx
// 008dd4f7  57                   push edi
// 008dd4f8  e833c0ffff           call 0x8d9530
// 008dd4fd  8b4608               mov eax, dword ptr [esi + 8]
// 008dd500  83c418               add esp, 0x18
// 008dd503  83f8ff               cmp eax, -1
// 008dd506  7503                 jne 0x8dd50b
// 008dd508  8b4604               mov eax, dword ptr [esi + 4]
// 008dd50b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd50f  8b542418             mov edx, dword ptr [esp + 0x18]
// 008dd513  51                   push ecx
// 008dd514  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dd518  51                   push ecx
// 008dd519  03d3                 add edx, ebx
// 008dd51b  52                   push edx
// 008dd51c  51                   push ecx
// 008dd51d  50                   push eax
// 008dd51e  57                   push edi
// 008dd51f  e80cc0ffff           call 0x8d9530
// 008dd524  8b4620               mov eax, dword ptr [esi + 0x20]
// 008dd527  83c418               add esp, 0x18
// 008dd52a  83f8ff               cmp eax, -1
// 008dd52d  7503                 jne 0x8dd532
// 008dd52f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008dd532  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd536  8d140b               lea edx, [ebx + ecx]
// 008dd539  52                   push edx
// 008dd53a  8b542420             mov edx, dword ptr [esp + 0x20]
// 008dd53e  52                   push edx
// 008dd53f  51                   push ecx
// 008dd540  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd544  51                   push ecx
// 008dd545  50                   push eax
// 008dd546  57                   push edi
// 008dd547  e8e4bfffff           call 0x8d9530
// 008dd54c  8b5560               mov edx, dword ptr [ebp + 0x60]
// 008dd54f  83c418               add esp, 0x18
// 008dd552  396a04               cmp dword ptr [edx + 4], ebp
// 008dd555  0f8571030000         jne 0x8dd8cc
// 008dd55b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008dd55f  e94d030000           jmp 0x8dd8b1
// 008dd564  8b442420             mov eax, dword ptr [esp + 0x20]
// 008dd568  48                   dec eax
// 008dd569  89442420             mov dword ptr [esp + 0x20], eax
// 008dd56d  2b442418             sub eax, dword ptr [esp + 0x18]
// 008dd571  6a00                 push 0
// 008dd573  99                   cdq 
// 008dd574  2bc2                 sub eax, edx
// 008dd576  8bd8                 mov ebx, eax
// 008dd578  d1fb                 sar ebx, 1
// 008dd57a  8bc3                 mov eax, ebx
// 008dd57c  99                   cdq 
// 008dd57d  2bc2                 sub eax, edx
// 008dd57f  d1f8                 sar eax, 1
// 008dd581  f7d8                 neg eax
// 008dd583  50                   push eax
// 008dd584  8d54241c             lea edx, [esp + 0x1c]
// 008dd588  52                   push edx
// 008dd589  ff15601ca400         call dword ptr [0xa41c60]
// 008dd58f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dd593  8b442414             mov eax, dword ptr [esp + 0x14]
// 008dd597  41                   inc ecx
// 008dd598  894c2428             mov dword ptr [esp + 0x28], ecx
// 008dd59c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008dd5a0  8d141b               lea edx, [ebx + ebx]
// 008dd5a3  89542430             mov dword ptr [esp + 0x30], edx
// 008dd5a7  2bcb                 sub ecx, ebx
// 008dd5a9  2bc8                 sub ecx, eax
// 008dd5ab  8bd3                 mov edx, ebx
// 008dd5ad  f7da                 neg edx
// 008dd5af  894c2434             mov dword ptr [esp + 0x34], ecx
// 008dd5b3  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008dd5b6  03d2                 add edx, edx
// 008dd5b8  89442424             mov dword ptr [esp + 0x24], eax
// 008dd5bc  8b01                 mov eax, dword ptr [ecx]
// 008dd5be  89542440             mov dword ptr [esp + 0x40], edx
// 008dd5c2  8b5048               mov edx, dword ptr [eax + 0x48]
// 008dd5c5  6a00                 push 0
// 008dd5c7  895c2430             mov dword ptr [esp + 0x30], ebx
// 008dd5cb  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008dd5d3  895c2440             mov dword ptr [esp + 0x40], ebx
// 008dd5d7  ffd2                 call edx
// 008dd5d9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008dd5dd  50                   push eax
// 008dd5de  6a04                 push 4
// 008dd5e0  8d442430             lea eax, [esp + 0x30]
// 008dd5e4  50                   push eax
// 008dd5e5  55                   push ebp
// 008dd5e6  57                   push edi
// 008dd5e7  e8d4c3ffff           call 0x8d99c0
// 008dd5ec  8944244c             mov dword ptr [esp + 0x4c], eax
// 008dd5f0  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008dd5f3  83f8ff               cmp eax, -1
// 008dd5f6  7503                 jne 0x8dd5fb
// 008dd5f8  8b4628               mov eax, dword ptr [esi + 0x28]
// 008dd5fb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd5ff  51                   push ecx
// 008dd600  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dd604  8d540b01             lea edx, [ebx + ecx + 1]
// 008dd608  52                   push edx
// 008dd609  8b542420             mov edx, dword ptr [esp + 0x20]
// 008dd60d  42                   inc edx
// 008dd60e  52                   push edx
// 008dd60f  41                   inc ecx
// 008dd610  51                   push ecx
// 008dd611  50                   push eax
// 008dd612  57                   push edi
// 008dd613  e818bfffff           call 0x8d9530
// 008dd618  8b4644               mov eax, dword ptr [esi + 0x44]
// 008dd61b  83c418               add esp, 0x18
// 008dd61e  83f8ff               cmp eax, -1
// 008dd621  7505                 jne 0x8dd628
// 008dd623  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 008dd626  eb02                 jmp 0x8dd62a
// 008dd628  8bc8                 mov ecx, eax
// 008dd62a  8b442420             mov eax, dword ptr [esp + 0x20]
// 008dd62e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008dd632  48                   dec eax
// 008dd633  50                   push eax
// 008dd634  52                   push edx
// 008dd635  50                   push eax
// 008dd636  8b442420             mov eax, dword ptr [esp + 0x20]
// 008dd63a  8d1403               lea edx, [ebx + eax]
// 008dd63d  52                   push edx
// 008dd63e  51                   push ecx
// 008dd63f  57                   push edi
// 008dd640  e8ebbeffff           call 0x8d9530
// 008dd645  8b4638               mov eax, dword ptr [esi + 0x38]
// 008dd648  83c418               add esp, 0x18
// 008dd64b  83f8ff               cmp eax, -1
// 008dd64e  7503                 jne 0x8dd653
// 008dd650  8b4634               mov eax, dword ptr [esi + 0x34]
// 008dd653  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dd657  51                   push ecx
// 008dd658  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd65c  8d540bff             lea edx, [ebx + ecx - 1]
// 008dd660  52                   push edx
// 008dd661  8b542428             mov edx, dword ptr [esp + 0x28]
// 008dd665  52                   push edx
// 008dd666  49                   dec ecx
// 008dd667  51                   push ecx
// 008dd668  50                   push eax
// 008dd669  57                   push edi
// 008dd66a  e8c1beffff           call 0x8d9530
// 008dd66f  8b4608               mov eax, dword ptr [esi + 8]
// 008dd672  83c418               add esp, 0x18
// 008dd675  83f8ff               cmp eax, -1
// 008dd678  7505                 jne 0x8dd67f
// 008dd67a  8b4e04               mov ecx, dword ptr [esi + 4]
// 008dd67d  eb02                 jmp 0x8dd681
// 008dd67f  8bc8                 mov ecx, eax
// 008dd681  8b442420             mov eax, dword ptr [esp + 0x20]
// 008dd685  50                   push eax
// 008dd686  8b442418             mov eax, dword ptr [esp + 0x18]
// 008dd68a  8d1403               lea edx, [ebx + eax]
// 008dd68d  52                   push edx
// 008dd68e  8b542420             mov edx, dword ptr [esp + 0x20]
// 008dd692  42                   inc edx
// 008dd693  52                   push edx
// 008dd694  50                   push eax
// 008dd695  51                   push ecx
// 008dd696  57                   push edi
// 008dd697  e894beffff           call 0x8d9530
// 008dd69c  8b4614               mov eax, dword ptr [esi + 0x14]
// 008dd69f  83c418               add esp, 0x18
// 008dd6a2  83f8ff               cmp eax, -1
// 008dd6a5  7503                 jne 0x8dd6aa
// 008dd6a7  8b4610               mov eax, dword ptr [esi + 0x10]
// 008dd6aa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd6ae  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008dd6b2  51                   push ecx
// 008dd6b3  52                   push edx
// 008dd6b4  51                   push ecx
// 008dd6b5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd6b9  8d140b               lea edx, [ebx + ecx]
// 008dd6bc  52                   push edx
// 008dd6bd  50                   push eax
// 008dd6be  57                   push edi
// 008dd6bf  e86cbeffff           call 0x8d9530
// 008dd6c4  8b4620               mov eax, dword ptr [esi + 0x20]
// 008dd6c7  83c418               add esp, 0x18
// 008dd6ca  83f8ff               cmp eax, -1
// 008dd6cd  7503                 jne 0x8dd6d2
// 008dd6cf  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008dd6d2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dd6d6  51                   push ecx
// 008dd6d7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd6db  8d140b               lea edx, [ebx + ecx]
// 008dd6de  52                   push edx
// 008dd6df  8b542428             mov edx, dword ptr [esp + 0x28]
// 008dd6e3  52                   push edx
// 008dd6e4  51                   push ecx
// 008dd6e5  50                   push eax
// 008dd6e6  57                   push edi
// 008dd6e7  e844beffff           call 0x8d9530
// 008dd6ec  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008dd6ef  83c418               add esp, 0x18
// 008dd6f2  396804               cmp dword ptr [eax + 4], ebp
// 008dd6f5  0f85d1010000         jne 0x8dd8cc
// 008dd6fb  8b442414             mov eax, dword ptr [esp + 0x14]
// 008dd6ff  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008dd703  8b542418             mov edx, dword ptr [esp + 0x18]
// 008dd707  51                   push ecx
// 008dd708  2bd8                 sub ebx, eax
// 008dd70a  035c2420             add ebx, dword ptr [esp + 0x20]
// 008dd70e  53                   push ebx
// 008dd70f  52                   push edx
// 008dd710  50                   push eax
// 008dd711  57                   push edi
// 008dd712  e849b8ffff           call 0x8d8f60
// 008dd717  e9ad010000           jmp 0x8dd8c9
// 008dd71c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008dd720  48                   dec eax
// 008dd721  8944241c             mov dword ptr [esp + 0x1c], eax
// 008dd725  2b442414             sub eax, dword ptr [esp + 0x14]
// 008dd729  99                   cdq 
// 008dd72a  2bc2                 sub eax, edx
// 008dd72c  8bd8                 mov ebx, eax
// 008dd72e  d1fb                 sar ebx, 1
// 008dd730  8bc3                 mov eax, ebx
// 008dd732  99                   cdq 
// 008dd733  2bc2                 sub eax, edx
// 008dd735  d1f8                 sar eax, 1
// 008dd737  f7d8                 neg eax
// 008dd739  50                   push eax
// 008dd73a  6a00                 push 0
// 008dd73c  8d44241c             lea eax, [esp + 0x1c]
// 008dd740  50                   push eax
// 008dd741  ff15601ca400         call dword ptr [0xa41c60]
// 008dd747  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008dd74b  8b442418             mov eax, dword ptr [esp + 0x18]
// 008dd74f  41                   inc ecx
// 008dd750  894c2424             mov dword ptr [esp + 0x24], ecx
// 008dd754  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd758  8d141b               lea edx, [ebx + ebx]
// 008dd75b  8954242c             mov dword ptr [esp + 0x2c], edx
// 008dd75f  2bcb                 sub ecx, ebx
// 008dd761  2bc8                 sub ecx, eax
// 008dd763  8bd3                 mov edx, ebx
// 008dd765  f7da                 neg edx
// 008dd767  894c2438             mov dword ptr [esp + 0x38], ecx
// 008dd76b  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008dd76e  03d2                 add edx, edx
// 008dd770  89442428             mov dword ptr [esp + 0x28], eax
// 008dd774  8b01                 mov eax, dword ptr [ecx]
// 008dd776  8954243c             mov dword ptr [esp + 0x3c], edx
// 008dd77a  8b5048               mov edx, dword ptr [eax + 0x48]
// 008dd77d  6a00                 push 0
// 008dd77f  895c2434             mov dword ptr [esp + 0x34], ebx
// 008dd783  c744243800000000     mov dword ptr [esp + 0x38], 0
// 008dd78b  895c2444             mov dword ptr [esp + 0x44], ebx
// 008dd78f  ffd2                 call edx
// 008dd791  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008dd795  50                   push eax
// 008dd796  6a04                 push 4
// 008dd798  8d442430             lea eax, [esp + 0x30]
// 008dd79c  50                   push eax
// 008dd79d  55                   push ebp
// 008dd79e  57                   push edi
// 008dd79f  e81cc2ffff           call 0x8d99c0
// 008dd7a4  8944244c             mov dword ptr [esp + 0x4c], eax
// 008dd7a8  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008dd7ab  83f8ff               cmp eax, -1
// 008dd7ae  7503                 jne 0x8dd7b3
// 008dd7b0  8b4628               mov eax, dword ptr [esi + 0x28]
// 008dd7b3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dd7b7  8d540b01             lea edx, [ebx + ecx + 1]
// 008dd7bb  52                   push edx
// 008dd7bc  8b542420             mov edx, dword ptr [esp + 0x20]
// 008dd7c0  52                   push edx
// 008dd7c1  41                   inc ecx
// 008dd7c2  51                   push ecx
// 008dd7c3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd7c7  41                   inc ecx
// 008dd7c8  51                   push ecx
// 008dd7c9  50                   push eax
// 008dd7ca  57                   push edi
// 008dd7cb  e860bdffff           call 0x8d9530
// 008dd7d0  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008dd7d3  83c418               add esp, 0x18
// 008dd7d6  83f8ff               cmp eax, -1
// 008dd7d9  7505                 jne 0x8dd7e0
// 008dd7db  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008dd7de  eb02                 jmp 0x8dd7e2
// 008dd7e0  8bc8                 mov ecx, eax
// 008dd7e2  8b542420             mov edx, dword ptr [esp + 0x20]
// 008dd7e6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008dd7ea  52                   push edx
// 008dd7eb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008dd7ef  48                   dec eax
// 008dd7f0  50                   push eax
// 008dd7f1  03d3                 add edx, ebx
// 008dd7f3  52                   push edx
// 008dd7f4  50                   push eax
// 008dd7f5  51                   push ecx
// 008dd7f6  57                   push edi
// 008dd7f7  e834bdffff           call 0x8d9530
// 008dd7fc  8b4638               mov eax, dword ptr [esi + 0x38]
// 008dd7ff  83c418               add esp, 0x18
// 008dd802  83f8ff               cmp eax, -1
// 008dd805  7503                 jne 0x8dd80a
// 008dd807  8b4634               mov eax, dword ptr [esi + 0x34]
// 008dd80a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd80e  8d540bff             lea edx, [ebx + ecx - 1]
// 008dd812  52                   push edx
// 008dd813  8b542418             mov edx, dword ptr [esp + 0x18]
// 008dd817  52                   push edx
// 008dd818  49                   dec ecx
// 008dd819  51                   push ecx
// 008dd81a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008dd81e  51                   push ecx
// 008dd81f  50                   push eax
// 008dd820  57                   push edi
// 008dd821  e80abdffff           call 0x8d9530
// 008dd826  8b4608               mov eax, dword ptr [esi + 8]
// 008dd829  83c418               add esp, 0x18
// 008dd82c  83f8ff               cmp eax, -1
// 008dd82f  7505                 jne 0x8dd836
// 008dd831  8b4e04               mov ecx, dword ptr [esi + 4]
// 008dd834  eb02                 jmp 0x8dd838
// 008dd836  8bc8                 mov ecx, eax
// 008dd838  8b442418             mov eax, dword ptr [esp + 0x18]
// 008dd83c  8d1403               lea edx, [ebx + eax]
// 008dd83f  52                   push edx
// 008dd840  8b542420             mov edx, dword ptr [esp + 0x20]
// 008dd844  52                   push edx
// 008dd845  50                   push eax
// 008dd846  8b442420             mov eax, dword ptr [esp + 0x20]
// 008dd84a  40                   inc eax
// 008dd84b  50                   push eax
// 008dd84c  51                   push ecx
// 008dd84d  57                   push edi
// 008dd84e  e8ddbcffff           call 0x8d9530
// 008dd853  8b4608               mov eax, dword ptr [esi + 8]
// 008dd856  83c418               add esp, 0x18
// 008dd859  83f8ff               cmp eax, -1
// 008dd85c  7503                 jne 0x8dd861
// 008dd85e  8b4604               mov eax, dword ptr [esi + 4]
// 008dd861  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd865  8b542418             mov edx, dword ptr [esp + 0x18]
// 008dd869  51                   push ecx
// 008dd86a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd86e  51                   push ecx
// 008dd86f  03d3                 add edx, ebx
// 008dd871  52                   push edx
// 008dd872  51                   push ecx
// 008dd873  50                   push eax
// 008dd874  57                   push edi
// 008dd875  e8b6bcffff           call 0x8d9530
// 008dd87a  8b4620               mov eax, dword ptr [esi + 0x20]
// 008dd87d  83c418               add esp, 0x18
// 008dd880  83f8ff               cmp eax, -1
// 008dd883  7503                 jne 0x8dd888
// 008dd885  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008dd888  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dd88c  8d140b               lea edx, [ebx + ecx]
// 008dd88f  52                   push edx
// 008dd890  8b542418             mov edx, dword ptr [esp + 0x18]
// 008dd894  52                   push edx
// 008dd895  51                   push ecx
// 008dd896  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008dd89a  51                   push ecx
// 008dd89b  50                   push eax
// 008dd89c  57                   push edi
// 008dd89d  e88ebcffff           call 0x8d9530
// 008dd8a2  8b5560               mov edx, dword ptr [ebp + 0x60]
// 008dd8a5  83c418               add esp, 0x18
// 008dd8a8  396a04               cmp dword ptr [edx + 4], ebp
// 008dd8ab  751f                 jne 0x8dd8cc
// 008dd8ad  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008dd8b1  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008dd8b5  50                   push eax
// 008dd8b6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008dd8ba  2bd8                 sub ebx, eax
// 008dd8bc  035c2424             add ebx, dword ptr [esp + 0x24]
// 008dd8c0  53                   push ebx
// 008dd8c1  50                   push eax
// 008dd8c2  51                   push ecx
// 008dd8c3  57                   push edi
// 008dd8c4  e867b6ffff           call 0x8d8f30
// 008dd8c9  83c414               add esp, 0x14
// 008dd8cc  8b7544               mov esi, dword ptr [ebp + 0x44]
// 008dd8cf  8b542410             mov edx, dword ptr [esp + 0x10]
// 008dd8d3  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 008dd8d6  8b11                 mov edx, dword ptr [ecx]
// 008dd8d8  6a01                 push 1
// 008dd8da  83ec10               sub esp, 0x10
// 008dd8dd  8bc4                 mov eax, esp
// 008dd8df  8930                 mov dword ptr [eax], esi
// 008dd8e1  8b7548               mov esi, dword ptr [ebp + 0x48]
// 008dd8e4  897004               mov dword ptr [eax + 4], esi
// 008dd8e7  8b754c               mov esi, dword ptr [ebp + 0x4c]
// 008dd8ea  897008               mov dword ptr [eax + 8], esi
// 008dd8ed  8b7550               mov esi, dword ptr [ebp + 0x50]
// 008dd8f0  55                   push ebp
// 008dd8f1  89700c               mov dword ptr [eax + 0xc], esi
// 008dd8f4  8b4268               mov eax, dword ptr [edx + 0x68]
// 008dd8f7  57                   push edi
// 008dd8f8  ffd0                 call eax
// 008dd8fa  5f                   pop edi
// 008dd8fb  5e                   pop esi
// 008dd8fc  5d                   pop ebp
// 008dd8fd  5b                   pop ebx
// 008dd8fe  83c434               add esp, 0x34
// 008dd901  c20800               ret 8
// 008dd904  10d2                 adc dl, dl
// 008dd906  8d00                 lea eax, [eax]
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetExcel@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp