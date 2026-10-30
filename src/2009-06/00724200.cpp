// roc 2009-06 00724200  unit: CXTPPaintManager  size: 1508 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00724200
//
// 00724200  6aff                 push -1
// 00724202  68564f8700           push 0x874f56
// 00724207  64a100000000         mov eax, dword ptr fs:[0]
// 0072420d  50                   push eax
// 0072420e  83ec44               sub esp, 0x44
// 00724211  53                   push ebx
// 00724212  55                   push ebp
// 00724213  56                   push esi
// 00724214  57                   push edi
// 00724215  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0072421a  33c4                 xor eax, esp
// 0072421c  50                   push eax
// 0072421d  8d442458             lea eax, [esp + 0x58]
// 00724221  64a300000000         mov dword ptr fs:[0], eax
// 00724227  8be9                 mov ebp, ecx
// 00724229  8b742470             mov esi, dword ptr [esp + 0x70]
// 0072422d  8b06                 mov eax, dword ptr [esi]
// 0072422f  8b5058               mov edx, dword ptr [eax + 0x58]
// 00724232  8d4c2424             lea ecx, [esp + 0x24]
// 00724236  51                   push ecx
// 00724237  8bce                 mov ecx, esi
// 00724239  ffd2                 call edx
// 0072423b  8d442424             lea eax, [esp + 0x24]
// 0072423f  50                   push eax
// 00724240  8d4c2424             lea ecx, [esp + 0x24]
// 00724244  c744246400000000     mov dword ptr [esp + 0x64], 0
// 0072424c  ff15e4fc8900         call dword ptr [0x89fce4]
// 00724252  8d4c2420             lea ecx, [esp + 0x20]
// 00724256  51                   push ecx
// 00724257  c644246401           mov byte ptr [esp + 0x64], 1
// 0072425c  e8afe7ffff           call 0x722a10
// 00724261  83c404               add esp, 4
// 00724264  8d4c241c             lea ecx, [esp + 0x1c]
// 00724268  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0072426e  8d4c2418             lea ecx, [esp + 0x18]
// 00724272  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00724278  83bd9400000000       cmp dword ptr [ebp + 0x94], 0
// 0072427f  c644246003           mov byte ptr [esp + 0x60], 3
// 00724284  7418                 je 0x72429e
// 00724286  8d542418             lea edx, [esp + 0x18]
// 0072428a  52                   push edx
// 0072428b  8d442420             lea eax, [esp + 0x20]
// 0072428f  50                   push eax
// 00724290  8d4c242c             lea ecx, [esp + 0x2c]
// 00724294  51                   push ecx
// 00724295  8bcd                 mov ecx, ebp
// 00724297  e884e7ffff           call 0x722a20
// 0072429c  eb0f                 jmp 0x7242ad
// 0072429e  8d542424             lea edx, [esp + 0x24]
// 007242a2  52                   push edx
// 007242a3  8d4c2420             lea ecx, [esp + 0x20]
// 007242a7  ff1508fa8900         call dword ptr [0x89fa08]
// 007242ad  8d44241c             lea eax, [esp + 0x1c]
// 007242b1  50                   push eax
// 007242b2  8d4c2418             lea ecx, [esp + 0x18]
// 007242b6  ff15e4fc8900         call dword ptr [0x89fce4]
// 007242bc  8d4c2418             lea ecx, [esp + 0x18]
// 007242c0  51                   push ecx
// 007242c1  8d4c2474             lea ecx, [esp + 0x74]
// 007242c5  c644246404           mov byte ptr [esp + 0x64], 4
// 007242ca  ff15e4fc8900         call dword ptr [0x89fce4]
// 007242d0  8d542414             lea edx, [esp + 0x14]
// 007242d4  52                   push edx
// 007242d5  c644246405           mov byte ptr [esp + 0x64], 5
// 007242da  e831e7ffff           call 0x722a10
// 007242df  8d442474             lea eax, [esp + 0x74]
// 007242e3  50                   push eax
// 007242e4  e827e7ffff           call 0x722a10
// 007242e9  83c408               add esp, 8
// 007242ec  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 007242f4  0f8530010000         jne 0x72442a
// 007242fa  8d4c2420             lea ecx, [esp + 0x20]
// 007242fe  ff155cfb8900         call dword ptr [0x89fb5c]
// 00724304  84c0                 test al, al
// 00724306  7407                 je 0x72430f
// 00724308  b8f8338b00           mov eax, 0x8b33f8
// 0072430d  eb0a                 jmp 0x724319
// 0072430f  8d4c2414             lea ecx, [esp + 0x14]
// 00724313  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00724319  50                   push eax
// 0072431a  8d8c2488000000       lea ecx, [esp + 0x88]
// 00724321  ff1508fd8900         call dword ptr [0x89fd08]
// 00724327  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0072432b  8d4c2438             lea ecx, [esp + 0x38]
// 0072432f  51                   push ecx
// 00724330  8d8c2488000000       lea ecx, [esp + 0x88]
// 00724337  ff1554fb8900         call dword ptr [0x89fb54]
// 0072433d  50                   push eax
// 0072433e  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00724345  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0072434b  8b5608               mov edx, dword ptr [esi + 8]
// 0072434e  8b3d50e18900         mov edi, dword ptr [0x89e150]
// 00724354  50                   push eax
// 00724355  52                   push edx
// 00724356  ffd7                 call edi
// 00724358  8d8c2484000000       lea ecx, [esp + 0x84]
// 0072435f  ff1510fd8900         call dword ptr [0x89fd10]
// 00724365  8d4c2420             lea ecx, [esp + 0x20]
// 00724369  ff155cfb8900         call dword ptr [0x89fb5c]
// 0072436f  84c0                 test al, al
// 00724371  7407                 je 0x72437a
// 00724373  b8f8338b00           mov eax, 0x8b33f8
// 00724378  eb0a                 jmp 0x724384
// 0072437a  8d4c2470             lea ecx, [esp + 0x70]
// 0072437e  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00724384  50                   push eax
// 00724385  8d4c2470             lea ecx, [esp + 0x70]
// 00724389  ff1508fd8900         call dword ptr [0x89fd08]
// 0072438f  8d442428             lea eax, [esp + 0x28]
// 00724393  50                   push eax
// 00724394  8d4c2470             lea ecx, [esp + 0x70]
// 00724398  ff1554fb8900         call dword ptr [0x89fb54]
// 0072439e  50                   push eax
// 0072439f  8d4c2474             lea ecx, [esp + 0x74]
// 007243a3  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007243a9  8b4e08               mov ecx, dword ptr [esi + 8]
// 007243ac  50                   push eax
// 007243ad  51                   push ecx
// 007243ae  ffd7                 call edi
// 007243b0  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007243b4  8b742428             mov esi, dword ptr [esp + 0x28]
// 007243b8  8d4c246c             lea ecx, [esp + 0x6c]
// 007243bc  8954242c             mov dword ptr [esp + 0x2c], edx
// 007243c0  ff1510fd8900         call dword ptr [0x89fd10]
// 007243c6  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 007243ce  7403                 je 0x7243d3
// 007243d0  83c608               add esi, 8
// 007243d3  8b442438             mov eax, dword ptr [esp + 0x38]
// 007243d7  3bc6                 cmp eax, esi
// 007243d9  7e02                 jle 0x7243dd
// 007243db  8bf0                 mov esi, eax
// 007243dd  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 007243e5  b818000000           mov eax, 0x18
// 007243ea  89742438             mov dword ptr [esp + 0x38], esi
// 007243ee  8944243c             mov dword ptr [esp + 0x3c], eax
// 007243f2  741f                 je 0x724413
// 007243f4  89442428             mov dword ptr [esp + 0x28], eax
// 007243f8  8974242c             mov dword ptr [esp + 0x2c], esi
// 007243fc  8b742468             mov esi, dword ptr [esp + 0x68]
// 00724400  8d442428             lea eax, [esp + 0x28]
// 00724404  8b08                 mov ecx, dword ptr [eax]
// 00724406  8b5004               mov edx, dword ptr [eax + 4]
// 00724409  890e                 mov dword ptr [esi], ecx
// 0072440b  895604               mov dword ptr [esi + 4], edx
// 0072440e  e97d030000           jmp 0x724790
// 00724413  8b742468             mov esi, dword ptr [esp + 0x68]
// 00724417  8d442438             lea eax, [esp + 0x38]
// 0072441b  8b08                 mov ecx, dword ptr [eax]
// 0072441d  8b5004               mov edx, dword ptr [eax + 4]
// 00724420  890e                 mov dword ptr [esi], ecx
// 00724422  895604               mov dword ptr [esi + 4], edx
// 00724425  e966030000           jmp 0x724790
// 0072442a  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 00724432  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00724436  0f8573010000         jne 0x7245af
// 0072443c  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00724443  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00724447  03c7                 add eax, edi
// 00724449  99                   cdq 
// 0072444a  2bc2                 sub eax, edx
// 0072444c  8bd8                 mov ebx, eax
// 0072444e  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00724452  6a01                 push 1
// 00724454  6a00                 push 0
// 00724456  89442438             mov dword ptr [esp + 0x38], eax
// 0072445a  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00724461  83ec10               sub esp, 0x10
// 00724464  8944244c             mov dword ptr [esp + 0x4c], eax
// 00724468  8bc4                 mov eax, esp
// 0072446a  8908                 mov dword ptr [eax], ecx
// 0072446c  894c2440             mov dword ptr [esp + 0x40], ecx
// 00724470  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00724477  897804               mov dword ptr [eax + 4], edi
// 0072447a  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 00724481  d1fb                 sar ebx, 1
// 00724483  894808               mov dword ptr [eax + 8], ecx
// 00724486  8d5301               lea edx, [ebx + 1]
// 00724489  89500c               mov dword ptr [eax + 0xc], edx
// 0072448c  8d54242c             lea edx, [esp + 0x2c]
// 00724490  52                   push edx
// 00724491  8d442438             lea eax, [esp + 0x38]
// 00724495  50                   push eax
// 00724496  56                   push esi
// 00724497  57                   push edi
// 00724498  8bcd                 mov ecx, ebp
// 0072449a  e891faffff           call 0x723f30
// 0072449f  8d4c2470             lea ecx, [esp + 0x70]
// 007244a3  51                   push ecx
// 007244a4  8d54243c             lea edx, [esp + 0x3c]
// 007244a8  52                   push edx
// 007244a9  8bcf                 mov ecx, edi
// 007244ab  e850e3d3ff           call 0x462800
// 007244b0  8bbc248c000000       mov edi, dword ptr [esp + 0x8c]
// 007244b7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007244bb  f7df                 neg edi
// 007244bd  1bff                 sbb edi, edi
// 007244bf  83e709               and edi, 9
// 007244c2  0338                 add edi, dword ptr [eax]
// 007244c4  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 007244c8  2bc7                 sub eax, edi
// 007244ca  2b442474             sub eax, dword ptr [esp + 0x74]
// 007244ce  6a00                 push 0
// 007244d0  99                   cdq 
// 007244d1  2bc2                 sub eax, edx
// 007244d3  8b542438             mov edx, dword ptr [esp + 0x38]
// 007244d7  6a00                 push 0
// 007244d9  83ec10               sub esp, 0x10
// 007244dc  d1f8                 sar eax, 1
// 007244de  03c8                 add ecx, eax
// 007244e0  8bc4                 mov eax, esp
// 007244e2  8908                 mov dword ptr [eax], ecx
// 007244e4  894c2440             mov dword ptr [esp + 0x40], ecx
// 007244e8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007244ec  895804               mov dword ptr [eax + 4], ebx
// 007244ef  894808               mov dword ptr [eax + 8], ecx
// 007244f2  89500c               mov dword ptr [eax + 0xc], edx
// 007244f5  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007244fc  8d842488000000       lea eax, [esp + 0x88]
// 00724503  50                   push eax
// 00724504  8d4c2434             lea ecx, [esp + 0x34]
// 00724508  51                   push ecx
// 00724509  56                   push esi
// 0072450a  52                   push edx
// 0072450b  8bcd                 mov ecx, ebp
// 0072450d  e81efaffff           call 0x723f30
// 00724512  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 0072451a  0f845f020000         je 0x72477f
// 00724520  8d4c2418             lea ecx, [esp + 0x18]
// 00724524  ff155cfb8900         call dword ptr [0x89fb5c]
// 0072452a  84c0                 test al, al
// 0072452c  7414                 je 0x724542
// 0072452e  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00724532  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00724536  03c1                 add eax, ecx
// 00724538  99                   cdq 
// 00724539  2bc2                 sub eax, edx
// 0072453b  8bf8                 mov edi, eax
// 0072453d  d1ff                 sar edi, 1
// 0072453f  4f                   dec edi
// 00724540  eb08                 jmp 0x72454a
// 00724542  8b542428             mov edx, dword ptr [esp + 0x28]
// 00724546  8d7c3afc             lea edi, [edx + edi - 4]
// 0072454a  8b442434             mov eax, dword ptr [esp + 0x34]
// 0072454e  03c3                 add eax, ebx
// 00724550  99                   cdq 
// 00724551  2bc2                 sub eax, edx
// 00724553  8bd8                 mov ebx, eax
// 00724555  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0072455b  d1fb                 sar ebx, 1
// 0072455d  83f8ff               cmp eax, -1
// 00724560  750f                 jne 0x724571
// 00724562  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00724568  85c9                 test ecx, ecx
// 0072456a  7405                 je 0x724571
// 0072456c  e82fb9ffff           call 0x71fea0
// 00724571  8b4d00               mov ecx, dword ptr [ebp]
// 00724574  8b16                 mov edx, dword ptr [esi]
// 00724576  6a00                 push 0
// 00724578  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 0072457f  50                   push eax
// 00724580  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00724586  8bce                 mov ecx, esi
// 00724588  ffd0                 call eax
// 0072458a  8b16                 mov edx, dword ptr [esi]
// 0072458c  50                   push eax
// 0072458d  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00724590  8bce                 mov ecx, esi
// 00724592  ffd0                 call eax
// 00724594  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00724598  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 0072459f  50                   push eax
// 007245a0  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 007245a6  53                   push ebx
// 007245a7  57                   push edi
// 007245a8  56                   push esi
// 007245a9  51                   push ecx
// 007245aa  e9cc010000           jmp 0x72477b
// 007245af  8b442474             mov eax, dword ptr [esp + 0x74]
// 007245b3  8d4801               lea ecx, [eax + 1]
// 007245b6  894c2448             mov dword ptr [esp + 0x48], ecx
// 007245ba  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007245be  03c1                 add eax, ecx
// 007245c0  99                   cdq 
// 007245c1  2bc2                 sub eax, edx
// 007245c3  d1f8                 sar eax, 1
// 007245c5  89842484000000       mov dword ptr [esp + 0x84], eax
// 007245cc  8d5801               lea ebx, [eax + 1]
// 007245cf  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007245d6  49                   dec ecx
// 007245d7  8d542414             lea edx, [esp + 0x14]
// 007245db  89442454             mov dword ptr [esp + 0x54], eax
// 007245df  89442444             mov dword ptr [esp + 0x44], eax
// 007245e3  52                   push edx
// 007245e4  8d44242c             lea eax, [esp + 0x2c]
// 007245e8  894c2444             mov dword ptr [esp + 0x44], ecx
// 007245ec  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007245f0  50                   push eax
// 007245f1  897c2444             mov dword ptr [esp + 0x44], edi
// 007245f5  e806e2d3ff           call 0x462800
// 007245fa  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007245fe  8bc1                 mov eax, ecx
// 00724600  2b842484000000       sub eax, dword ptr [esp + 0x84]
// 00724607  6a00                 push 0
// 00724609  2b442430             sub eax, dword ptr [esp + 0x30]
// 0072460d  40                   inc eax
// 0072460e  99                   cdq 
// 0072460f  2bc2                 sub eax, edx
// 00724611  d1f8                 sar eax, 1
// 00724613  2bc8                 sub ecx, eax
// 00724615  8b442448             mov eax, dword ptr [esp + 0x48]
// 00724619  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 0072461d  2bc7                 sub eax, edi
// 0072461f  40                   inc eax
// 00724620  99                   cdq 
// 00724621  2bc2                 sub eax, edx
// 00724623  d1f8                 sar eax, 1
// 00724625  8bd7                 mov edx, edi
// 00724627  03d0                 add edx, eax
// 00724629  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00724630  50                   push eax
// 00724631  83ec10               sub esp, 0x10
// 00724634  8bc4                 mov eax, esp
// 00724636  8908                 mov dword ptr [eax], ecx
// 00724638  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0072463c  895004               mov dword ptr [eax + 4], edx
// 0072463f  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00724643  894808               mov dword ptr [eax + 8], ecx
// 00724646  89500c               mov dword ptr [eax + 0xc], edx
// 00724649  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00724650  8d44242c             lea eax, [esp + 0x2c]
// 00724654  50                   push eax
// 00724655  8d4c2438             lea ecx, [esp + 0x38]
// 00724659  51                   push ecx
// 0072465a  56                   push esi
// 0072465b  52                   push edx
// 0072465c  8bcd                 mov ecx, ebp
// 0072465e  e8cdf8ffff           call 0x723f30
// 00724663  8d442470             lea eax, [esp + 0x70]
// 00724667  50                   push eax
// 00724668  8d4c243c             lea ecx, [esp + 0x3c]
// 0072466c  51                   push ecx
// 0072466d  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00724671  e88ae1d3ff           call 0x462800
// 00724676  8b10                 mov edx, dword ptr [eax]
// 00724678  8b4804               mov ecx, dword ptr [eax + 4]
// 0072467b  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00724682  f7d8                 neg eax
// 00724684  1bc0                 sbb eax, eax
// 00724686  83e008               and eax, 8
// 00724689  03d0                 add edx, eax
// 0072468b  8b442454             mov eax, dword ptr [esp + 0x54]
// 0072468f  89542428             mov dword ptr [esp + 0x28], edx
// 00724693  8b542448             mov edx, dword ptr [esp + 0x48]
// 00724697  89442444             mov dword ptr [esp + 0x44], eax
// 0072469b  89542438             mov dword ptr [esp + 0x38], edx
// 0072469f  897c243c             mov dword ptr [esp + 0x3c], edi
// 007246a3  895c2440             mov dword ptr [esp + 0x40], ebx
// 007246a7  8bc3                 mov eax, ebx
// 007246a9  2bc2                 sub eax, edx
// 007246ab  2bc1                 sub eax, ecx
// 007246ad  40                   inc eax
// 007246ae  99                   cdq 
// 007246af  2bc2                 sub eax, edx
// 007246b1  d1f8                 sar eax, 1
// 007246b3  8bcb                 mov ecx, ebx
// 007246b5  2bc8                 sub ecx, eax
// 007246b7  8b442454             mov eax, dword ptr [esp + 0x54]
// 007246bb  2bc7                 sub eax, edi
// 007246bd  2b442428             sub eax, dword ptr [esp + 0x28]
// 007246c1  6a00                 push 0
// 007246c3  40                   inc eax
// 007246c4  99                   cdq 
// 007246c5  2bc2                 sub eax, edx
// 007246c7  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 007246ce  52                   push edx
// 007246cf  83ec10               sub esp, 0x10
// 007246d2  d1f8                 sar eax, 1
// 007246d4  03f8                 add edi, eax
// 007246d6  8bc4                 mov eax, esp
// 007246d8  8908                 mov dword ptr [eax], ecx
// 007246da  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007246de  897804               mov dword ptr [eax + 4], edi
// 007246e1  895808               mov dword ptr [eax + 8], ebx
// 007246e4  89480c               mov dword ptr [eax + 0xc], ecx
// 007246e7  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007246ee  8d942488000000       lea edx, [esp + 0x88]
// 007246f5  52                   push edx
// 007246f6  8d442434             lea eax, [esp + 0x34]
// 007246fa  50                   push eax
// 007246fb  56                   push esi
// 007246fc  51                   push ecx
// 007246fd  8bcd                 mov ecx, ebp
// 007246ff  e82cf8ffff           call 0x723f30
// 00724704  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 0072470c  7471                 je 0x72477f
// 0072470e  8b542438             mov edx, dword ptr [esp + 0x38]
// 00724712  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00724716  8bc3                 mov eax, ebx
// 00724718  03c2                 add eax, edx
// 0072471a  99                   cdq 
// 0072471b  2bc2                 sub eax, edx
// 0072471d  8bd8                 mov ebx, eax
// 0072471f  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00724725  d1fb                 sar ebx, 1
// 00724727  83eb02               sub ebx, 2
// 0072472a  8d540ffc             lea edx, [edi + ecx - 4]
// 0072472e  8954243c             mov dword ptr [esp + 0x3c], edx
// 00724732  83f8ff               cmp eax, -1
// 00724735  750f                 jne 0x724746
// 00724737  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0072473d  85c9                 test ecx, ecx
// 0072473f  7405                 je 0x724746
// 00724741  e85ab7ffff           call 0x71fea0
// 00724746  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0072474d  8b16                 mov edx, dword ptr [esi]
// 0072474f  8b7d00               mov edi, dword ptr [ebp]
// 00724752  51                   push ecx
// 00724753  50                   push eax
// 00724754  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0072475a  8bce                 mov ecx, esi
// 0072475c  ffd0                 call eax
// 0072475e  8b16                 mov edx, dword ptr [esi]
// 00724760  50                   push eax
// 00724761  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00724764  8bce                 mov ecx, esi
// 00724766  ffd0                 call eax
// 00724768  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072476c  8b542478             mov edx, dword ptr [esp + 0x78]
// 00724770  50                   push eax
// 00724771  8b87f4000000         mov eax, dword ptr [edi + 0xf4]
// 00724777  51                   push ecx
// 00724778  53                   push ebx
// 00724779  56                   push esi
// 0072477a  52                   push edx
// 0072477b  8bcd                 mov ecx, ebp
// 0072477d  ffd0                 call eax
// 0072477f  8b742468             mov esi, dword ptr [esp + 0x68]
// 00724783  c70600000000         mov dword ptr [esi], 0
// 00724789  c7460400000000       mov dword ptr [esi + 4], 0
// 00724790  8d4c2470             lea ecx, [esp + 0x70]
// 00724794  ff1510fd8900         call dword ptr [0x89fd10]
// 0072479a  8d4c2414             lea ecx, [esp + 0x14]
// 0072479e  ff1510fd8900         call dword ptr [0x89fd10]
// 007247a4  8d4c2418             lea ecx, [esp + 0x18]
// 007247a8  ff1510fd8900         call dword ptr [0x89fd10]
// 007247ae  8d4c241c             lea ecx, [esp + 0x1c]
// 007247b2  ff1510fd8900         call dword ptr [0x89fd10]
// 007247b8  8d4c2420             lea ecx, [esp + 0x20]
// 007247bc  ff1510fd8900         call dword ptr [0x89fd10]
// 007247c2  8d4c2424             lea ecx, [esp + 0x24]
// 007247c6  ff1510fd8900         call dword ptr [0x89fd10]
// 007247cc  8bc6                 mov eax, esi
// 007247ce  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007247d2  64890d00000000       mov dword ptr fs:[0], ecx
// 007247d9  59                   pop ecx
// 007247da  5f                   pop edi
// 007247db  5e                   pop esi
// 007247dc  5d                   pop ebp
// 007247dd  5b                   pop ebx
// 007247de  83c450               add esp, 0x50
// 007247e1  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawControlText2@CXTPPaintManager@@IAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp