// roc 2011-06 008ae1f0  unit: CXTPReportPaintManager  size: 1759 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ae1f0
//
// 008ae1f0  6aff                 push -1
// 008ae1f2  6881aea000           push 0xa0ae81
// 008ae1f7  64a100000000         mov eax, dword ptr fs:[0]
// 008ae1fd  50                   push eax
// 008ae1fe  83ec64               sub esp, 0x64
// 008ae201  53                   push ebx
// 008ae202  55                   push ebp
// 008ae203  56                   push esi
// 008ae204  57                   push edi
// 008ae205  a12058c900           mov eax, dword ptr [0xc95820]
// 008ae20a  33c4                 xor eax, esp
// 008ae20c  50                   push eax
// 008ae20d  8d442478             lea eax, [esp + 0x78]
// 008ae211  64a300000000         mov dword ptr fs:[0], eax
// 008ae217  8bf9                 mov edi, ecx
// 008ae219  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 008ae220  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 008ae227  85f6                 test esi, esi
// 008ae229  7431                 je 0x8ae25c
// 008ae22b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008ae232  e8391bf8ff           call 0x82fd70
// 008ae237  85c0                 test eax, eax
// 008ae239  7421                 je 0x8ae25c
// 008ae23b  83bc249400000000     cmp dword ptr [esp + 0x94], 0
// 008ae243  7517                 jne 0x8ae25c
// 008ae245  83bc249800000000     cmp dword ptr [esp + 0x98], 0
// 008ae24d  750d                 jne 0x8ae25c
// 008ae24f  837d4000             cmp dword ptr [ebp + 0x40], 0
// 008ae253  7407                 je 0x8ae25c
// 008ae255  b801000000           mov eax, 1
// 008ae25a  eb02                 jmp 0x8ae25e
// 008ae25c  33c0                 xor eax, eax
// 008ae25e  85f6                 test esi, esi
// 008ae260  7412                 je 0x8ae274
// 008ae262  85c0                 test eax, eax
// 008ae264  750e                 jne 0x8ae274
// 008ae266  bb01000000           mov ebx, 1
// 008ae26b  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 008ae272  eb12                 jmp 0x8ae286
// 008ae274  c784249000000000000000 mov dword ptr [esp + 0x90], 0
// 008ae27f  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 008ae286  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008ae28d  e8de1af8ff           call 0x82fd70
// 008ae292  85c0                 test eax, eax
// 008ae294  7411                 je 0x8ae2a7
// 008ae296  85f6                 test esi, esi
// 008ae298  750d                 jne 0x8ae2a7
// 008ae29a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 008ae2a2  397540               cmp dword ptr [ebp + 0x40], esi
// 008ae2a5  7508                 jne 0x8ae2af
// 008ae2a7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008ae2af  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008ae2b6  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 008ae2bd  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 008ae2c4  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 008ae2cb  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008ae2cf  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 008ae2d2  89542450             mov dword ptr [esp + 0x50], edx
// 008ae2d6  89442448             mov dword ptr [esp + 0x48], eax
// 008ae2da  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 008ae2e1  8d9424a4000000       lea edx, [esp + 0xa4]
// 008ae2e8  894c2414             mov dword ptr [esp + 0x14], ecx
// 008ae2ec  52                   push edx
// 008ae2ed  8bcd                 mov ecx, ebp
// 008ae2ef  89442458             mov dword ptr [esp + 0x58], eax
// 008ae2f3  e8f8d8f8ff           call 0x83bbf0
// 008ae2f8  33c0                 xor eax, eax
// 008ae2fa  89842480000000       mov dword ptr [esp + 0x80], eax
// 008ae301  3bd8                 cmp ebx, eax
// 008ae303  0f8511020000         jne 0x8ae51a
// 008ae309  3987bc020000         cmp dword ptr [edi + 0x2bc], eax
// 008ae30f  0f8505020000         jne 0x8ae51a
// 008ae315  c744241804000000     mov dword ptr [esp + 0x18], 4
// 008ae31d  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008ae324  8b17                 mov edx, dword ptr [edi]
// 008ae326  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 008ae32d  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 008ae333  8d44241c             lea eax, [esp + 0x1c]
// 008ae337  50                   push eax
// 008ae338  83ec10               sub esp, 0x10
// 008ae33b  8bc4                 mov eax, esp
// 008ae33d  8908                 mov dword ptr [eax], ecx
// 008ae33f  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 008ae346  894804               mov dword ptr [eax + 4], ecx
// 008ae349  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 008ae350  894808               mov dword ptr [eax + 8], ecx
// 008ae353  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008ae35a  55                   push ebp
// 008ae35b  89480c               mov dword ptr [eax + 0xc], ecx
// 008ae35e  56                   push esi
// 008ae35f  8bcf                 mov ecx, edi
// 008ae361  ffd2                 call edx
// 008ae363  8b4778               mov eax, dword ptr [edi + 0x78]
// 008ae366  83f8ff               cmp eax, -1
// 008ae369  7503                 jne 0x8ae36e
// 008ae36b  8b4774               mov eax, dword ptr [edi + 0x74]
// 008ae36e  8b16                 mov edx, dword ptr [esi]
// 008ae370  50                   push eax
// 008ae371  8b4234               mov eax, dword ptr [edx + 0x34]
// 008ae374  8bce                 mov ecx, esi
// 008ae376  ffd0                 call eax
// 008ae378  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 008ae37f  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008ae386  83c9ff               or ecx, 0xffffffff
// 008ae389  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 008ae38d  89542438             mov dword ptr [esp + 0x38], edx
// 008ae391  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 008ae398  03c1                 add eax, ecx
// 008ae39a  83bda800000000       cmp dword ptr [ebp + 0xa8], 0
// 008ae3a1  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008ae3a8  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 008ae3af  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008ae3b3  89542440             mov dword ptr [esp + 0x40], edx
// 008ae3b7  89442444             mov dword ptr [esp + 0x44], eax
// 008ae3bb  750f                 jne 0x8ae3cc
// 008ae3bd  85db                 test ebx, ebx
// 008ae3bf  750b                 jne 0x8ae3cc
// 008ae3c1  8bcd                 mov ecx, ebp
// 008ae3c3  e8a81cf8ff           call 0x830070
// 008ae3c8  01442438             add dword ptr [esp + 0x38], eax
// 008ae3cc  8bcd                 mov ecx, ebp
// 008ae3ce  e85d19f8ff           call 0x82fd30
// 008ae3d3  85c0                 test eax, eax
// 008ae3d5  7411                 je 0x8ae3e8
// 008ae3d7  837e0c00             cmp dword ptr [esi + 0xc], 0
// 008ae3db  c784248800000001000000 mov dword ptr [esp + 0x88], 1
// 008ae3e6  740b                 je 0x8ae3f3
// 008ae3e8  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 008ae3f3  8d4730               lea eax, [edi + 0x30]
// 008ae3f6  50                   push eax
// 008ae3f7  56                   push esi
// 008ae3f8  8d4c2470             lea ecx, [esp + 0x70]
// 008ae3fc  e81fedfaff           call 0x85d120
// 008ae401  8d4c2428             lea ecx, [esp + 0x28]
// 008ae405  51                   push ecx
// 008ae406  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 008ae40d  c684248400000001     mov byte ptr [esp + 0x84], 1
// 008ae415  ff15a826a400         call dword ptr [0xa426a8]
// 008ae41b  50                   push eax
// 008ae41c  8d8c24ac000000       lea ecx, [esp + 0xac]
// 008ae423  ff15c82da400         call dword ptr [0xa42dc8]
// 008ae429  8b5608               mov edx, dword ptr [esi + 8]
// 008ae42c  50                   push eax
// 008ae42d  52                   push edx
// 008ae42e  ff153801a400         call dword ptr [0xa40138]
// 008ae434  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008ae438  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008ae43c  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008ae443  896c2420             mov dword ptr [esp + 0x20], ebp
// 008ae447  89442424             mov dword ptr [esp + 0x24], eax
// 008ae44b  e83017f8ff           call 0x82fb80
// 008ae450  85c0                 test eax, eax
// 008ae452  0f84c2010000         je 0x8ae61a
// 008ae458  85db                 test ebx, ebx
// 008ae45a  0f85ba010000         jne 0x8ae61a
// 008ae460  83c506               add ebp, 6
// 008ae463  837c2414ff           cmp dword ptr [esp + 0x14], -1
// 008ae468  744b                 je 0x8ae4b5
// 008ae46a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ae46e  8b542438             mov edx, dword ptr [esp + 0x38]
// 008ae472  8b1f                 mov ebx, dword ptr [edi]
// 008ae474  51                   push ecx
// 008ae475  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008ae479  83ec10               sub esp, 0x10
// 008ae47c  8bc4                 mov eax, esp
// 008ae47e  8910                 mov dword ptr [eax], edx
// 008ae480  8b542454             mov edx, dword ptr [esp + 0x54]
// 008ae484  894804               mov dword ptr [eax + 4], ecx
// 008ae487  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008ae48b  895008               mov dword ptr [eax + 8], edx
// 008ae48e  89480c               mov dword ptr [eax + 0xc], ecx
// 008ae491  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008ae498  e84319f8ff           call 0x82fde0
// 008ae49d  8b93a8000000         mov edx, dword ptr [ebx + 0xa8]
// 008ae4a3  50                   push eax
// 008ae4a4  6a00                 push 0
// 008ae4a6  8bcf                 mov ecx, edi
// 008ae4a8  ffd2                 call edx
// 008ae4aa  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 008ae4b1  8d6c2802             lea ebp, [eax + ebp + 2]
// 008ae4b5  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 008ae4bd  7403                 je 0x8ae4c2
// 008ae4bf  83c51b               add ebp, 0x1b
// 008ae4c2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008ae4c6  8b442438             mov eax, dword ptr [esp + 0x38]
// 008ae4ca  2bc8                 sub ecx, eax
// 008ae4cc  3bcd                 cmp ecx, ebp
// 008ae4ce  0f8e4a010000         jle 0x8ae61e
// 008ae4d4  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008ae4db  e8a016f8ff           call 0x82fb80
// 008ae4e0  a802                 test al, 2
// 008ae4e2  740a                 je 0x8ae4ee
// 008ae4e4  8b542440             mov edx, dword ptr [esp + 0x40]
// 008ae4e8  2bd5                 sub edx, ebp
// 008ae4ea  89542438             mov dword ptr [esp + 0x38], edx
// 008ae4ee  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008ae4f5  e88616f8ff           call 0x82fb80
// 008ae4fa  a801                 test al, 1
// 008ae4fc  0f8418010000         je 0x8ae61a
// 008ae502  8b442440             mov eax, dword ptr [esp + 0x40]
// 008ae506  2bc5                 sub eax, ebp
// 008ae508  03442438             add eax, dword ptr [esp + 0x38]
// 008ae50c  99                   cdq 
// 008ae50d  2bc2                 sub eax, edx
// 008ae50f  d1f8                 sar eax, 1
// 008ae511  89442438             mov dword ptr [esp + 0x38], eax
// 008ae515  e904010000           jmp 0x8ae61e
// 008ae51a  89442418             mov dword ptr [esp + 0x18], eax
// 008ae51e  3bd8                 cmp ebx, eax
// 008ae520  0f84f7fdffff         je 0x8ae31d
// 008ae526  83bfbc02000004       cmp dword ptr [edi + 0x2bc], 4
// 008ae52d  755d                 jne 0x8ae58c
// 008ae52f  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 008ae536  50                   push eax
// 008ae537  50                   push eax
// 008ae538  8d8754010000         lea eax, [edi + 0x154]
// 008ae53e  50                   push eax
// 008ae53f  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 008ae546  51                   push ecx
// 008ae547  56                   push esi
// 008ae548  e83308fbff           call 0x85ed80
// 008ae54d  8bc8                 mov ecx, eax
// 008ae54f  e84c0bfbff           call 0x85f0a0
// 008ae554  8b87bc010000         mov eax, dword ptr [edi + 0x1bc]
// 008ae55a  83f8ff               cmp eax, -1
// 008ae55d  7506                 jne 0x8ae565
// 008ae55f  8b87b8010000         mov eax, dword ptr [edi + 0x1b8]
// 008ae565  8b8fbc010000         mov ecx, dword ptr [edi + 0x1bc]
// 008ae56b  83f9ff               cmp ecx, -1
// 008ae56e  7506                 jne 0x8ae576
// 008ae570  8b8fb8010000         mov ecx, dword ptr [edi + 0x1b8]
// 008ae576  50                   push eax
// 008ae577  51                   push ecx
// 008ae578  8d94249c000000       lea edx, [esp + 0x9c]
// 008ae57f  52                   push edx
// 008ae580  8bce                 mov ecx, esi
// 008ae582  e893c8f5ff           call 0x80ae1a
// 008ae587  e9d7fdffff           jmp 0x8ae363
// 008ae58c  8b87d8000000         mov eax, dword ptr [edi + 0xd8]
// 008ae592  83f8ff               cmp eax, -1
// 008ae595  7508                 jne 0x8ae59f
// 008ae597  8b8fd4000000         mov ecx, dword ptr [edi + 0xd4]
// 008ae59d  eb02                 jmp 0x8ae5a1
// 008ae59f  8bc8                 mov ecx, eax
// 008ae5a1  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 008ae5a7  83f8ff               cmp eax, -1
// 008ae5aa  7506                 jne 0x8ae5b2
// 008ae5ac  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 008ae5b2  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 008ae5b9  51                   push ecx
// 008ae5ba  50                   push eax
// 008ae5bb  8d84249c000000       lea eax, [esp + 0x9c]
// 008ae5c2  50                   push eax
// 008ae5c3  8bce                 mov ecx, esi
// 008ae5c5  e850c8f5ff           call 0x80ae1a
// 008ae5ca  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008ae5d1  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008ae5d8  51                   push ecx
// 008ae5d9  52                   push edx
// 008ae5da  8d442430             lea eax, [esp + 0x30]
// 008ae5de  50                   push eax
// 008ae5df  8bce                 mov ecx, esi
// 008ae5e1  e88ac9f5ff           call 0x80af70
// 008ae5e6  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008ae5ed  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 008ae5f4  51                   push ecx
// 008ae5f5  52                   push edx
// 008ae5f6  8bce                 mov ecx, esi
// 008ae5f8  e86dc9f5ff           call 0x80af6a
// 008ae5fd  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 008ae604  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008ae60b  48                   dec eax
// 008ae60c  50                   push eax
// 008ae60d  51                   push ecx
// 008ae60e  8bce                 mov ecx, esi
// 008ae610  e855c9f5ff           call 0x80af6a
// 008ae615  e949fdffff           jmp 0x8ae363
// 008ae61a  8b442438             mov eax, dword ptr [esp + 0x38]
// 008ae61e  837c2414ff           cmp dword ptr [esp + 0x14], -1
// 008ae623  0f8481000000         je 0x8ae6aa
// 008ae629  85db                 test ebx, ebx
// 008ae62b  757d                 jne 0x8ae6aa
// 008ae62d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008ae631  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008ae635  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008ae639  8bc8                 mov ecx, eax
// 008ae63b  8b442444             mov eax, dword ptr [esp + 0x44]
// 008ae63f  89442464             mov dword ptr [esp + 0x64], eax
// 008ae643  03c3                 add eax, ebx
// 008ae645  8b1f                 mov ebx, dword ptr [edi]
// 008ae647  89442464             mov dword ptr [esp + 0x64], eax
// 008ae64b  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ae64f  50                   push eax
// 008ae650  83ec10               sub esp, 0x10
// 008ae653  8bc4                 mov eax, esp
// 008ae655  8908                 mov dword ptr [eax], ecx
// 008ae657  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008ae65b  895004               mov dword ptr [eax + 4], edx
// 008ae65e  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008ae662  896808               mov dword ptr [eax + 8], ebp
// 008ae665  89480c               mov dword ptr [eax + 0xc], ecx
// 008ae668  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008ae66c  83ec10               sub esp, 0x10
// 008ae66f  8bc4                 mov eax, esp
// 008ae671  8910                 mov dword ptr [eax], edx
// 008ae673  8b542474             mov edx, dword ptr [esp + 0x74]
// 008ae677  894804               mov dword ptr [eax + 4], ecx
// 008ae67a  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008ae67e  895008               mov dword ptr [eax + 8], edx
// 008ae681  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 008ae688  89480c               mov dword ptr [eax + 0xc], ecx
// 008ae68b  8b83ac000000         mov eax, dword ptr [ebx + 0xac]
// 008ae691  52                   push edx
// 008ae692  56                   push esi
// 008ae693  8bcf                 mov ecx, edi
// 008ae695  ffd0                 call eax
// 008ae697  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008ae69b  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 008ae6a2  8d540102             lea edx, [ecx + eax + 2]
// 008ae6a6  89542438             mov dword ptr [esp + 0x38], edx
// 008ae6aa  6a01                 push 1
// 008ae6ac  8bce                 mov ecx, esi
// 008ae6ae  e83bdf1100           call 0x9cc5ee
// 008ae6b3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008ae6b7  8b442438             mov eax, dword ptr [esp + 0x38]
// 008ae6bb  83e903               sub ecx, 3
// 008ae6be  83c003               add eax, 3
// 008ae6c1  894c2440             mov dword ptr [esp + 0x40], ecx
// 008ae6c5  894c2450             mov dword ptr [esp + 0x50], ecx
// 008ae6c9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008ae6cd  8be8                 mov ebp, eax
// 008ae6cf  89442438             mov dword ptr [esp + 0x38], eax
// 008ae6d3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008ae6d7  894c2454             mov dword ptr [esp + 0x54], ecx
// 008ae6db  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 008ae6e2  896c2448             mov dword ptr [esp + 0x48], ebp
// 008ae6e6  8944244c             mov dword ptr [esp + 0x4c], eax
// 008ae6ea  ff15a826a400         call dword ptr [0xa426a8]
// 008ae6f0  85c0                 test eax, eax
// 008ae6f2  0f8e2f010000         jle 0x8ae827
// 008ae6f8  8b542440             mov edx, dword ptr [esp + 0x40]
// 008ae6fc  3b542438             cmp edx, dword ptr [esp + 0x38]
// 008ae700  0f8e21010000         jle 0x8ae827
// 008ae706  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 008ae70c  83f8ff               cmp eax, -1
// 008ae70f  7506                 jne 0x8ae717
// 008ae711  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 008ae717  8b16                 mov edx, dword ptr [esi]
// 008ae719  50                   push eax
// 008ae71a  8b4238               mov eax, dword ptr [edx + 0x38]
// 008ae71d  8bce                 mov ecx, esi
// 008ae71f  ffd0                 call eax
// 008ae721  83bf2802000000       cmp dword ptr [edi + 0x228], 0
// 008ae728  744c                 je 0x8ae776
// 008ae72a  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 008ae732  7442                 je 0x8ae776
// 008ae734  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 008ae738  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 008ae73c  8b542428             mov edx, dword ptr [esp + 0x28]
// 008ae740  8bcb                 mov ecx, ebx
// 008ae742  2bcd                 sub ecx, ebp
// 008ae744  8d41e5               lea eax, [ecx - 0x1b]
// 008ae747  3bd0                 cmp edx, eax
// 008ae749  8bca                 mov ecx, edx
// 008ae74b  7c02                 jl 0x8ae74f
// 008ae74d  8bc8                 mov ecx, eax
// 008ae74f  83f9fb               cmp ecx, -5
// 008ae752  7d0a                 jge 0x8ae75e
// 008ae754  c7442420fbffffff     mov dword ptr [esp + 0x20], 0xfffffffb
// 008ae75c  eb08                 jmp 0x8ae766
// 008ae75e  3bd0                 cmp edx, eax
// 008ae760  7c04                 jl 0x8ae766
// 008ae762  89442420             mov dword ptr [esp + 0x20], eax
// 008ae766  8b542420             mov edx, dword ptr [esp + 0x20]
// 008ae76a  8d442a08             lea eax, [edx + ebp + 8]
// 008ae76e  3bd8                 cmp ebx, eax
// 008ae770  7c04                 jl 0x8ae776
// 008ae772  89442440             mov dword ptr [esp + 0x40], eax
// 008ae776  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008ae77d  e8fe13f8ff           call 0x82fb80
// 008ae782  a810                 test al, 0x10
// 008ae784  745e                 je 0x8ae7e4
// 008ae786  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008ae78a  8b542440             mov edx, dword ptr [esp + 0x40]
// 008ae78e  8b442438             mov eax, dword ptr [esp + 0x38]
// 008ae792  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008ae796  68108c0000           push 0x8c10
// 008ae79b  8d4c242c             lea ecx, [esp + 0x2c]
// 008ae79f  89542434             mov dword ptr [esp + 0x34], edx
// 008ae7a3  51                   push ecx
// 008ae7a4  89442430             mov dword ptr [esp + 0x30], eax
// 008ae7a8  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008ae7ac  8d9424ac000000       lea edx, [esp + 0xac]
// 008ae7b3  52                   push edx
// 008ae7b4  8bce                 mov ecx, esi
// 008ae7b6  bb10880000           mov ebx, 0x8810
// 008ae7bb  89442440             mov dword ptr [esp + 0x40], eax
// 008ae7bf  e82c19f6ff           call 0x8100f0
// 008ae7c4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008ae7c8  2b442434             sub eax, dword ptr [esp + 0x34]
// 008ae7cc  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 008ae7d0  03442444             add eax, dword ptr [esp + 0x44]
// 008ae7d4  83f801               cmp eax, 1
// 008ae7d7  7e10                 jle 0x8ae7e9
// 008ae7d9  99                   cdq 
// 008ae7da  2bc2                 sub eax, edx
// 008ae7dc  d1f8                 sar eax, 1
// 008ae7de  0144243c             add dword ptr [esp + 0x3c], eax
// 008ae7e2  eb05                 jmp 0x8ae7e9
// 008ae7e4  bb24880000           mov ebx, 0x8824
// 008ae7e9  8b2e                 mov ebp, dword ptr [esi]
// 008ae7eb  53                   push ebx
// 008ae7ec  8d44243c             lea eax, [esp + 0x3c]
// 008ae7f0  50                   push eax
// 008ae7f1  8d8c24ac000000       lea ecx, [esp + 0xac]
// 008ae7f8  ff15a826a400         call dword ptr [0xa426a8]
// 008ae7fe  50                   push eax
// 008ae7ff  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 008ae806  ff15c82da400         call dword ptr [0xa42dc8]
// 008ae80c  8b5570               mov edx, dword ptr [ebp + 0x70]
// 008ae80f  50                   push eax
// 008ae810  8bce                 mov ecx, esi
// 008ae812  ffd2                 call edx
// 008ae814  8b442420             mov eax, dword ptr [esp + 0x20]
// 008ae818  01442448             add dword ptr [esp + 0x48], eax
// 008ae81c  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 008ae823  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 008ae827  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 008ae82f  743d                 je 0x8ae86e
// 008ae831  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008ae838  f7db                 neg ebx
// 008ae83a  1bdb                 sbb ebx, ebx
// 008ae83c  83e307               and ebx, 7
// 008ae83f  83c30a               add ebx, 0xa
// 008ae842  03eb                 add ebp, ebx
// 008ae844  e8e713f8ff           call 0x82fc30
// 008ae849  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008ae84d  8b542450             mov edx, dword ptr [esp + 0x50]
// 008ae851  50                   push eax
// 008ae852  83ec10               sub esp, 0x10
// 008ae855  8bc4                 mov eax, esp
// 008ae857  8928                 mov dword ptr [eax], ebp
// 008ae859  894804               mov dword ptr [eax + 4], ecx
// 008ae85c  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008ae860  895008               mov dword ptr [eax + 8], edx
// 008ae863  89480c               mov dword ptr [eax + 0xc], ecx
// 008ae866  56                   push esi
// 008ae867  8bcf                 mov ecx, edi
// 008ae869  e842e4ffff           call 0x8accb0
// 008ae86e  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008ae873  7426                 je 0x8ae89b
// 008ae875  83bf1002000000       cmp dword ptr [edi + 0x210], 0
// 008ae87c  741d                 je 0x8ae89b
// 008ae87e  8b4e04               mov ecx, dword ptr [esi + 4]
// 008ae881  8b542418             mov edx, dword ptr [esp + 0x18]
// 008ae885  019424a0000000       add dword ptr [esp + 0xa0], edx
// 008ae88c  8d842494000000       lea eax, [esp + 0x94]
// 008ae893  50                   push eax
// 008ae894  51                   push ecx
// 008ae895  ff15301ba400         call dword ptr [0xa41b30]
// 008ae89b  8d4c2468             lea ecx, [esp + 0x68]
// 008ae89f  c684248000000000     mov byte ptr [esp + 0x80], 0
// 008ae8a7  e8f4e8faff           call 0x85d1a0
// 008ae8ac  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 008ae8b3  ff15082ea400         call dword ptr [0xa42e08]
// 008ae8b9  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008ae8bd  64890d00000000       mov dword ptr fs:[0], ecx
// 008ae8c4  59                   pop ecx
// 008ae8c5  5f                   pop edi
// 008ae8c6  5e                   pop esi
// 008ae8c7  5d                   pop ebp
// 008ae8c8  5b                   pop ebx
// 008ae8c9  83c470               add esp, 0x70
// 008ae8cc  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawColumn@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportColumn@@PAVCXTPReportHeader@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp