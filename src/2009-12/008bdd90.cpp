// roc 2009-12 008bdd90  unit: CXTPDockingPaneContext  size: 2274 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bdd90
//
// 008bdd90  6aff                 push -1
// 008bdd92  68683c9600           push 0x963c68
// 008bdd97  64a100000000         mov eax, dword ptr fs:[0]
// 008bdd9d  50                   push eax
// 008bdd9e  83ec70               sub esp, 0x70
// 008bdda1  53                   push ebx
// 008bdda2  55                   push ebp
// 008bdda3  56                   push esi
// 008bdda4  57                   push edi
// 008bdda5  a10052b600           mov eax, dword ptr [0xb65200]
// 008bddaa  33c4                 xor eax, esp
// 008bddac  50                   push eax
// 008bddad  8d842484000000       lea eax, [esp + 0x84]
// 008bddb4  64a300000000         mov dword ptr fs:[0], eax
// 008bddba  8bf1                 mov esi, ecx
// 008bddbc  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008bddc2  33db                 xor ebx, ebx
// 008bddc4  399800010000         cmp dword ptr [eax + 0x100], ebx
// 008bddca  0f84c2030000         je 0x8be192
// 008bddd0  399e2c010000         cmp dword ptr [esi + 0x12c], ebx
// 008bddd6  0f85b6030000         jne 0x8be192
// 008bdddc  399e48010000         cmp dword ptr [esi + 0x148], ebx
// 008bdde2  0f84aa030000         je 0x8be192
// 008bdde8  399e44010000         cmp dword ptr [esi + 0x144], ebx
// 008bddee  0f859e030000         jne 0x8be192
// 008bddf4  8daefc000000         lea ebp, [esi + 0xfc]
// 008bddfa  55                   push ebp
// 008bddfb  ff1568cc9800         call dword ptr [0x98cc68]
// 008bde01  85c0                 test eax, eax
// 008bde03  0f8589030000         jne 0x8be192
// 008bde09  8b4d00               mov ecx, dword ptr [ebp]
// 008bde0c  8b5504               mov edx, dword ptr [ebp + 4]
// 008bde0f  8b4508               mov eax, dword ptr [ebp + 8]
// 008bde12  894c2468             mov dword ptr [esp + 0x68], ecx
// 008bde16  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 008bde19  894c2474             mov dword ptr [esp + 0x74], ecx
// 008bde1d  8d4e58               lea ecx, [esi + 0x58]
// 008bde20  8954246c             mov dword ptr [esp + 0x6c], edx
// 008bde24  8b11                 mov edx, dword ptr [ecx]
// 008bde26  89442470             mov dword ptr [esp + 0x70], eax
// 008bde2a  8b4268               mov eax, dword ptr [edx + 0x68]
// 008bde2d  ffd0                 call eax
// 008bde2f  8b5604               mov edx, dword ptr [esi + 4]
// 008bde32  8b4268               mov eax, dword ptr [edx + 0x68]
// 008bde35  8d4e04               lea ecx, [esi + 4]
// 008bde38  ffd0                 call eax
// 008bde3a  399eb4000000         cmp dword ptr [esi + 0xb4], ebx
// 008bde40  0f85d6010000         jne 0x8be01c
// 008bde46  399e28010000         cmp dword ptr [esi + 0x128], ebx
// 008bde4c  0f85ca010000         jne 0x8be01c
// 008bde52  8d4c2468             lea ecx, [esp + 0x68]
// 008bde56  51                   push ecx
// 008bde57  ff159cca9800         call dword ptr [0x98ca9c]
// 008bde5d  bff82a9f00           mov edi, 0x9f2af8
// 008bde62  895c2444             mov dword ptr [esp + 0x44], ebx
// 008bde66  897c2440             mov dword ptr [esp + 0x40], edi
// 008bde6a  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 008bde71  895c2428             mov dword ptr [esp + 0x28], ebx
// 008bde75  897c2424             mov dword ptr [esp + 0x24], edi
// 008bde79  895c2418             mov dword ptr [esp + 0x18], ebx
// 008bde7d  897c2414             mov dword ptr [esp + 0x14], edi
// 008bde81  8b9644010000         mov edx, dword ptr [esi + 0x144]
// 008bde87  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008bde8b  6a01                 push 1
// 008bde8d  52                   push edx
// 008bde8e  8b542474             mov edx, dword ptr [esp + 0x74]
// 008bde92  83ec10               sub esp, 0x10
// 008bde95  8bc4                 mov eax, esp
// 008bde97  8908                 mov dword ptr [eax], ecx
// 008bde99  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008bdea0  895004               mov dword ptr [eax + 4], edx
// 008bdea3  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 008bdeaa  894808               mov dword ptr [eax + 8], ecx
// 008bdead  89500c               mov dword ptr [eax + 0xc], edx
// 008bdeb0  8d442458             lea eax, [esp + 0x58]
// 008bdeb4  50                   push eax
// 008bdeb5  8bce                 mov ecx, esi
// 008bdeb7  c68424a800000002     mov byte ptr [esp + 0xa8], 2
// 008bdebf  e80cefffff           call 0x8bcdd0
// 008bdec4  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 008bdeca  8b9650010000         mov edx, dword ptr [esi + 0x150]
// 008bded0  53                   push ebx
// 008bded1  51                   push ecx
// 008bded2  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 008bded8  83ec10               sub esp, 0x10
// 008bdedb  8bc4                 mov eax, esp
// 008bdedd  8910                 mov dword ptr [eax], edx
// 008bdedf  8b9658010000         mov edx, dword ptr [esi + 0x158]
// 008bdee5  894804               mov dword ptr [eax + 4], ecx
// 008bdee8  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008bdeee  895008               mov dword ptr [eax + 8], edx
// 008bdef1  8d54243c             lea edx, [esp + 0x3c]
// 008bdef5  89480c               mov dword ptr [eax + 0xc], ecx
// 008bdef8  52                   push edx
// 008bdef9  8bce                 mov ecx, esi
// 008bdefb  e8d0eeffff           call 0x8bcdd0
// 008bdf00  53                   push ebx
// 008bdf01  53                   push ebx
// 008bdf02  53                   push ebx
// 008bdf03  53                   push ebx
// 008bdf04  8d4c2424             lea ecx, [esp + 0x24]
// 008bdf08  e8536af4ff           call 0x804960
// 008bdf0d  6a03                 push 3
// 008bdf0f  8d442444             lea eax, [esp + 0x44]
// 008bdf13  50                   push eax
// 008bdf14  8d4c242c             lea ecx, [esp + 0x2c]
// 008bdf18  51                   push ecx
// 008bdf19  8d4c2420             lea ecx, [esp + 0x20]
// 008bdf1d  e8ae8ffeff           call 0x8a6ed0
// 008bdf22  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 008bdf28  8d542414             lea edx, [esp + 0x14]
// 008bdf2c  52                   push edx
// 008bdf2d  e832870600           call 0x926664
// 008bdf32  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 008bdf38  8b01                 mov eax, dword ptr [ecx]
// 008bdf3a  8b4058               mov eax, dword ptr [eax + 0x58]
// 008bdf3d  8d542468             lea edx, [esp + 0x68]
// 008bdf41  52                   push edx
// 008bdf42  ffd0                 call eax
// 008bdf44  e8338a0600           call 0x92697c
// 008bdf49  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 008bdf4f  50                   push eax
// 008bdf50  e877850600           call 0x9264cc
// 008bdf55  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008bdf59  8bd8                 mov ebx, eax
// 008bdf5b  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008bdf5f  6849005a00           push 0x5a0049
// 008bdf64  2bc8                 sub ecx, eax
// 008bdf66  8b542474             mov edx, dword ptr [esp + 0x74]
// 008bdf6a  51                   push ecx
// 008bdf6b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008bdf6f  2bd1                 sub edx, ecx
// 008bdf71  52                   push edx
// 008bdf72  50                   push eax
// 008bdf73  51                   push ecx
// 008bdf74  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 008bdf7a  e8116af4ff           call 0x804990
// 008bdf7f  85db                 test ebx, ebx
// 008bdf81  740c                 je 0x8bdf8f
// 008bdf83  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 008bdf89  53                   push ebx
// 008bdf8a  e83d850600           call 0x9264cc
// 008bdf8f  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 008bdf95  6a00                 push 0
// 008bdf97  e8c8860600           call 0x926664
// 008bdf9c  ff15e4cb9800         call dword ptr [0x98cbe4]
// 008bdfa2  50                   push eax
// 008bdfa3  e8825bf3ff           call 0x7f3b2a
// 008bdfa8  6a00                 push 0
// 008bdfaa  8bd8                 mov ebx, eax
// 008bdfac  ff15acca9800         call dword ptr [0x98caac]
// 008bdfb2  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 008bdfb8  85c0                 test eax, eax
// 008bdfba  7412                 je 0x8bdfce
// 008bdfbc  50                   push eax
// 008bdfbd  8bcb                 mov ecx, ebx
// 008bdfbf  e8cc85f3ff           call 0x7f6590
// 008bdfc4  c7868c01000000000000 mov dword ptr [esi + 0x18c], 0
// 008bdfce  8d4c2414             lea ecx, [esp + 0x14]
// 008bdfd2  c7862801000001000000 mov dword ptr [esi + 0x128], 1
// 008bdfdc  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 008bdfe4  897c2414             mov dword ptr [esp + 0x14], edi
// 008bdfe8  e84312b5ff           call 0x40f230
// 008bdfed  8d4c2424             lea ecx, [esp + 0x24]
// 008bdff1  c684248c00000000     mov byte ptr [esp + 0x8c], 0
// 008bdff9  897c2424             mov dword ptr [esp + 0x24], edi
// 008bdffd  e82e12b5ff           call 0x40f230
// 008be002  8d4c2440             lea ecx, [esp + 0x40]
// 008be006  c784248c000000ffffffff mov dword ptr [esp + 0x8c], 0xffffffff
// 008be011  897c2440             mov dword ptr [esp + 0x40], edi
// 008be015  e81612b5ff           call 0x40f230
// 008be01a  33db                 xor ebx, ebx
// 008be01c  8bbe20010000         mov edi, dword ptr [esi + 0x120]
// 008be022  837f1802             cmp dword ptr [edi + 0x18], 2
// 008be026  7532                 jne 0x8be05a
// 008be028  8d8650010000         lea eax, [esi + 0x150]
// 008be02e  50                   push eax
// 008be02f  8bcd                 mov ecx, ebp
// 008be031  e88a72f9ff           call 0x8552c0
// 008be036  85c0                 test eax, eax
// 008be038  0f8421010000         je 0x8be15f
// 008be03e  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 008be044  8b11                 mov edx, dword ptr [ecx]
// 008be046  8b4218               mov eax, dword ptr [edx + 0x18]
// 008be049  6a01                 push 1
// 008be04b  55                   push ebp
// 008be04c  ffd0                 call eax
// 008be04e  8bc8                 mov ecx, eax
// 008be050  e8abd3baff           call 0x46b400
// 008be055  e905010000           jmp 0x8be15f
// 008be05a  6a0a                 push 0xa
// 008be05c  8d4c2428             lea ecx, [esp + 0x28]
// 008be060  e85bb6f7ff           call 0x8396c0
// 008be065  8b17                 mov edx, dword ptr [edi]
// 008be067  8b520c               mov edx, dword ptr [edx + 0xc]
// 008be06a  8d442424             lea eax, [esp + 0x24]
// 008be06e  50                   push eax
// 008be06f  53                   push ebx
// 008be070  8bcf                 mov ecx, edi
// 008be072  c784249400000003000000 mov dword ptr [esp + 0x94], 3
// 008be07d  ffd2                 call edx
// 008be07f  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008be085  3bc3                 cmp eax, ebx
// 008be087  7d0b                 jge 0x8be094
// 008be089  f7d8                 neg eax
// 008be08b  50                   push eax
// 008be08c  53                   push ebx
// 008be08d  55                   push ebp
// 008be08e  ff156ccc9800         call dword ptr [0x98cc6c]
// 008be094  8b4d00               mov ecx, dword ptr [ebp]
// 008be097  8b5504               mov edx, dword ptr [ebp + 4]
// 008be09a  83ec10               sub esp, 0x10
// 008be09d  8bc4                 mov eax, esp
// 008be09f  8908                 mov dword ptr [eax], ecx
// 008be0a1  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008be0a4  895004               mov dword ptr [eax + 4], edx
// 008be0a7  8b550c               mov edx, dword ptr [ebp + 0xc]
// 008be0aa  894808               mov dword ptr [eax + 8], ecx
// 008be0ad  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008be0b3  89500c               mov dword ptr [eax + 0xc], edx
// 008be0b6  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008be0bc  50                   push eax
// 008be0bd  e80eaaf7ff           call 0x838ad0
// 008be0c2  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 008be0c8  53                   push ebx
// 008be0c9  51                   push ecx
// 008be0ca  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008be0d0  8bf8                 mov edi, eax
// 008be0d2  e8f9b1f7ff           call 0x8392d0
// 008be0d7  3bfb                 cmp edi, ebx
// 008be0d9  740e                 je 0x8be0e9
// 008be0db  8b17                 mov edx, dword ptr [edi]
// 008be0dd  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 008be0e3  6a01                 push 1
// 008be0e5  8bcf                 mov ecx, edi
// 008be0e7  ffd0                 call eax
// 008be0e9  8bbf30010000         mov edi, dword ptr [edi + 0x130]
// 008be0ef  3bfb                 cmp edi, ebx
// 008be0f1  7405                 je 0x8be0f8
// 008be0f3  8d4720               lea eax, [edi + 0x20]
// 008be0f6  eb02                 jmp 0x8be0fa
// 008be0f8  33c0                 xor eax, eax
// 008be0fa  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008be0fe  898620010000         mov dword ptr [esi + 0x120], eax
// 008be104  3bfb                 cmp edi, ebx
// 008be106  7426                 je 0x8be12e
// 008be108  8bc7                 mov eax, edi
// 008be10a  8b4008               mov eax, dword ptr [eax + 8]
// 008be10d  8b3f                 mov edi, dword ptr [edi]
// 008be10f  3bc3                 cmp eax, ebx
// 008be111  7405                 je 0x8be118
// 008be113  83c0e0               add eax, -0x20
// 008be116  eb02                 jmp 0x8be11a
// 008be118  33c0                 xor eax, eax
// 008be11a  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008be120  53                   push ebx
// 008be121  53                   push ebx
// 008be122  50                   push eax
// 008be123  6a01                 push 1
// 008be125  e8f6a3f7ff           call 0x838520
// 008be12a  3bfb                 cmp edi, ebx
// 008be12c  75da                 jne 0x8be108
// 008be12e  e8e35ef3ff           call 0x7f4016
// 008be133  8b10                 mov edx, dword ptr [eax]
// 008be135  8bc8                 mov ecx, eax
// 008be137  8b4264               mov eax, dword ptr [edx + 0x64]
// 008be13a  ffd0                 call eax
// 008be13c  e8d55ef3ff           call 0x7f4016
// 008be141  8b10                 mov edx, dword ptr [eax]
// 008be143  8bc8                 mov ecx, eax
// 008be145  8b4268               mov eax, dword ptr [edx + 0x68]
// 008be148  53                   push ebx
// 008be149  ffd0                 call eax
// 008be14b  8d4c2424             lea ecx, [esp + 0x24]
// 008be14f  c784248c000000ffffffff mov dword ptr [esp + 0x8c], 0xffffffff
// 008be15a  e891b5f7ff           call 0x8396f0
// 008be15f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008be163  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008be167  8b442470             mov eax, dword ptr [esp + 0x70]
// 008be16b  898e50010000         mov dword ptr [esi + 0x150], ecx
// 008be171  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008be175  899654010000         mov dword ptr [esi + 0x154], edx
// 008be17b  898658010000         mov dword ptr [esi + 0x158], eax
// 008be181  898e5c010000         mov dword ptr [esi + 0x15c], ecx
// 008be187  899e40010000         mov dword ptr [esi + 0x140], ebx
// 008be18d  e9c7040000           jmp 0x8be659
// 008be192  399e28010000         cmp dword ptr [esi + 0x128], ebx
// 008be198  0f84bc000000         je 0x8be25a
// 008be19e  8b3d24cc9800         mov edi, dword ptr [0x98cc24]
// 008be1a4  53                   push ebx
// 008be1a5  6a0f                 push 0xf
// 008be1a7  6a0f                 push 0xf
// 008be1a9  53                   push ebx
// 008be1aa  8d542478             lea edx, [esp + 0x78]
// 008be1ae  52                   push edx
// 008be1af  ffd7                 call edi
// 008be1b1  85c0                 test eax, eax
// 008be1b3  743b                 je 0x8be1f0
// 008be1b5  8b2d94ca9800         mov ebp, dword ptr [0x98ca94]
// 008be1bb  eb03                 jmp 0x8be1c0
// 008be1bd  8d4900               lea ecx, [ecx]
// 008be1c0  6a0f                 push 0xf
// 008be1c2  6a0f                 push 0xf
// 008be1c4  53                   push ebx
// 008be1c5  8d442474             lea eax, [esp + 0x74]
// 008be1c9  50                   push eax
// 008be1ca  ff15b0ca9800         call dword ptr [0x98cab0]
// 008be1d0  85c0                 test eax, eax
// 008be1d2  0f8481040000         je 0x8be659
// 008be1d8  8d4c2468             lea ecx, [esp + 0x68]
// 008be1dc  51                   push ecx
// 008be1dd  ffd5                 call ebp
// 008be1df  53                   push ebx
// 008be1e0  6a0f                 push 0xf
// 008be1e2  6a0f                 push 0xf
// 008be1e4  53                   push ebx
// 008be1e5  8d542478             lea edx, [esp + 0x78]
// 008be1e9  52                   push edx
// 008be1ea  ffd7                 call edi
// 008be1ec  85c0                 test eax, eax
// 008be1ee  75d0                 jne 0x8be1c0
// 008be1f0  ff15e4cb9800         call dword ptr [0x98cbe4]
// 008be1f6  50                   push eax
// 008be1f7  e82e59f3ff           call 0x7f3b2a
// 008be1fc  8bf8                 mov edi, eax
// 008be1fe  8b4720               mov eax, dword ptr [edi + 0x20]
// 008be201  50                   push eax
// 008be202  ff15acca9800         call dword ptr [0x98caac]
// 008be208  85c0                 test eax, eax
// 008be20a  740c                 je 0x8be218
// 008be20c  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008be20f  6803040000           push 0x403
// 008be214  53                   push ebx
// 008be215  51                   push ecx
// 008be216  eb07                 jmp 0x8be21f
// 008be218  8b5720               mov edx, dword ptr [edi + 0x20]
// 008be21b  6a03                 push 3
// 008be21d  53                   push ebx
// 008be21e  52                   push edx
// 008be21f  ff15a8ca9800         call dword ptr [0x98caa8]
// 008be225  50                   push eax
// 008be226  e805820600           call 0x926430
// 008be22b  8b3d9cca9800         mov edi, dword ptr [0x98ca9c]
// 008be231  89868c010000         mov dword ptr [esi + 0x18c], eax
// 008be237  8d8650010000         lea eax, [esi + 0x150]
// 008be23d  50                   push eax
// 008be23e  899e28010000         mov dword ptr [esi + 0x128], ebx
// 008be244  899e64010000         mov dword ptr [esi + 0x164], ebx
// 008be24a  899e60010000         mov dword ptr [esi + 0x160], ebx
// 008be250  899e68010000         mov dword ptr [esi + 0x168], ebx
// 008be256  ffd7                 call edi
// 008be258  eb06                 jmp 0x8be260
// 008be25a  8b3d9cca9800         mov edi, dword ptr [0x98ca9c]
// 008be260  8d86fc000000         lea eax, [esi + 0xfc]
// 008be266  399eb4000000         cmp dword ptr [esi + 0xb4], ebx
// 008be26c  0f84e0010000         je 0x8be452
// 008be272  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 008be278  3bd3                 cmp edx, ebx
// 008be27a  7406                 je 0x8be282
// 008be27c  8d8630010000         lea eax, [esi + 0x130]
// 008be282  8b4804               mov ecx, dword ptr [eax + 4]
// 008be285  8b28                 mov ebp, dword ptr [eax]
// 008be287  894c2428             mov dword ptr [esp + 0x28], ecx
// 008be28b  8b4808               mov ecx, dword ptr [eax + 8]
// 008be28e  8b400c               mov eax, dword ptr [eax + 0xc]
// 008be291  89ae50010000         mov dword ptr [esi + 0x150], ebp
// 008be297  896c2424             mov dword ptr [esp + 0x24], ebp
// 008be29b  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008be29f  89ae54010000         mov dword ptr [esi + 0x154], ebp
// 008be2a5  898e58010000         mov dword ptr [esi + 0x158], ecx
// 008be2ab  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008be2af  89442430             mov dword ptr [esp + 0x30], eax
// 008be2b3  89865c010000         mov dword ptr [esi + 0x15c], eax
// 008be2b9  399e48010000         cmp dword ptr [esi + 0x148], ebx
// 008be2bf  7513                 jne 0x8be2d4
// 008be2c1  3bd3                 cmp edx, ebx
// 008be2c3  750f                 jne 0x8be2d4
// 008be2c5  8d542424             lea edx, [esp + 0x24]
// 008be2c9  52                   push edx
// 008be2ca  ffd7                 call edi
// 008be2cc  8b442430             mov eax, dword ptr [esp + 0x30]
// 008be2d0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008be2d4  8b9644010000         mov edx, dword ptr [esi + 0x144]
// 008be2da  3b9640010000         cmp edx, dword ptr [esi + 0x140]
// 008be2e0  742a                 je 0x8be30c
// 008be2e2  899640010000         mov dword ptr [esi + 0x140], edx
// 008be2e8  3bd3                 cmp edx, ebx
// 008be2ea  740d                 je 0x8be2f9
// 008be2ec  8d4658               lea eax, [esi + 0x58]
// 008be2ef  50                   push eax
// 008be2f0  8bce                 mov ecx, esi
// 008be2f2  e849f5ffff           call 0x8bd840
// 008be2f7  eb0b                 jmp 0x8be304
// 008be2f9  8b5658               mov edx, dword ptr [esi + 0x58]
// 008be2fc  8b4268               mov eax, dword ptr [edx + 0x68]
// 008be2ff  8d4e58               lea ecx, [esi + 0x58]
// 008be302  ffd0                 call eax
// 008be304  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008be308  8b442430             mov eax, dword ptr [esp + 0x30]
// 008be30c  399e44010000         cmp dword ptr [esi + 0x144], ebx
// 008be312  0f84c9000000         je 0x8be3e1
// 008be318  2b442428             sub eax, dword ptr [esp + 0x28]
// 008be31c  bd14000000           mov ebp, 0x14
// 008be321  99                   cdq 
// 008be322  2bc2                 sub eax, edx
// 008be324  d1f8                 sar eax, 1
// 008be326  83f814               cmp eax, 0x14
// 008be329  7f02                 jg 0x8be32d
// 008be32b  8be8                 mov ebp, eax
// 008be32d  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 008be331  bb32000000           mov ebx, 0x32
// 008be336  83c1fb               add ecx, -5
// 008be339  83f932               cmp ecx, 0x32
// 008be33c  7f02                 jg 0x8be340
// 008be33e  8bd9                 mov ebx, ecx
// 008be340  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008be346  8b91d4000000         mov edx, dword ptr [ecx + 0xd4]
// 008be34c  8b8a9c000000         mov ecx, dword ptr [edx + 0x9c]
// 008be352  e8d9250100           call 0x8d0930
// 008be357  85c0                 test eax, eax
// 008be359  754f                 jne 0x8be3aa
// 008be35b  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 008be361  85c0                 test eax, eax
// 008be363  7445                 je 0x8be3aa
// 008be365  83781801             cmp dword ptr [eax + 0x18], 1
// 008be369  753f                 jne 0x8be3aa
// 008be36b  8d48ac               lea ecx, [eax - 0x54]
// 008be36e  e88d2affff           call 0x8b0e00
// 008be373  85c0                 test eax, eax
// 008be375  7423                 je 0x8be39a
// 008be377  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008be37d  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 008be383  8b5178               mov edx, dword ptr [ecx + 0x78]
// 008be386  8b442428             mov eax, dword ptr [esp + 0x28]
// 008be38a  8d4c1003             lea ecx, [eax + edx + 3]
// 008be38e  03cd                 add ecx, ebp
// 008be390  8bf9                 mov edi, ecx
// 008be392  894c2428             mov dword ptr [esp + 0x28], ecx
// 008be396  2bfd                 sub edi, ebp
// 008be398  eb1e                 jmp 0x8be3b8
// 008be39a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008be39e  03cd                 add ecx, ebp
// 008be3a0  8bf9                 mov edi, ecx
// 008be3a2  894c2428             mov dword ptr [esp + 0x28], ecx
// 008be3a6  2bfd                 sub edi, ebp
// 008be3a8  eb0e                 jmp 0x8be3b8
// 008be3aa  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008be3ae  2bfd                 sub edi, ebp
// 008be3b0  03ef                 add ebp, edi
// 008be3b2  897c2430             mov dword ptr [esp + 0x30], edi
// 008be3b6  8bcd                 mov ecx, ebp
// 008be3b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 008be3bc  6a54                 push 0x54
// 008be3be  8d5005               lea edx, [eax + 5]
// 008be3c1  2bcf                 sub ecx, edi
// 008be3c3  51                   push ecx
// 008be3c4  8d440305             lea eax, [ebx + eax + 5]
// 008be3c8  2bc2                 sub eax, edx
// 008be3ca  50                   push eax
// 008be3cb  57                   push edi
// 008be3cc  52                   push edx
// 008be3cd  6a00                 push 0
// 008be3cf  8d4e58               lea ecx, [esi + 0x58]
// 008be3d2  e85558f3ff           call 0x7f3c2c
// 008be3d7  8b442430             mov eax, dword ptr [esp + 0x30]
// 008be3db  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008be3df  33db                 xor ebx, ebx
// 008be3e1  8d7e04               lea edi, [esi + 4]
// 008be3e4  3bfb                 cmp edi, ebx
// 008be3e6  7432                 je 0x8be41a
// 008be3e8  395f20               cmp dword ptr [edi + 0x20], ebx
// 008be3eb  742d                 je 0x8be41a
// 008be3ed  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 008be3f1  2b442428             sub eax, dword ptr [esp + 0x28]
// 008be3f5  8be9                 mov ebp, ecx
// 008be3f7  57                   push edi
// 008be3f8  8d4c246c             lea ecx, [esp + 0x6c]
// 008be3fc  89442448             mov dword ptr [esp + 0x48], eax
// 008be400  e86bcef8ff           call 0x84b270
// 008be405  8b4808               mov ecx, dword ptr [eax + 8]
// 008be408  2b08                 sub ecx, dword ptr [eax]
// 008be40a  8b500c               mov edx, dword ptr [eax + 0xc]
// 008be40d  2b5004               sub edx, dword ptr [eax + 4]
// 008be410  3bcd                 cmp ecx, ebp
// 008be412  7506                 jne 0x8be41a
// 008be414  3b542444             cmp edx, dword ptr [esp + 0x44]
// 008be418  7411                 je 0x8be42b
// 008be41a  8b17                 mov edx, dword ptr [edi]
// 008be41c  8b4268               mov eax, dword ptr [edx + 0x68]
// 008be41f  8bcf                 mov ecx, edi
// 008be421  ffd0                 call eax
// 008be423  57                   push edi
// 008be424  8bce                 mov ecx, esi
// 008be426  e815f4ffff           call 0x8bd840
// 008be42b  8b442428             mov eax, dword ptr [esp + 0x28]
// 008be42f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008be433  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008be437  6a54                 push 0x54
// 008be439  2bc8                 sub ecx, eax
// 008be43b  51                   push ecx
// 008be43c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008be440  2bd1                 sub edx, ecx
// 008be442  52                   push edx
// 008be443  50                   push eax
// 008be444  51                   push ecx
// 008be445  53                   push ebx
// 008be446  8bcf                 mov ecx, edi
// 008be448  e8df57f3ff           call 0x7f3c2c
// 008be44d  e907020000           jmp 0x8be659
// 008be452  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 008be458  3bcb                 cmp ecx, ebx
// 008be45a  7406                 je 0x8be462
// 008be45c  8d8630010000         lea eax, [esi + 0x130]
// 008be462  8b10                 mov edx, dword ptr [eax]
// 008be464  89542458             mov dword ptr [esp + 0x58], edx
// 008be468  8b5004               mov edx, dword ptr [eax + 4]
// 008be46b  8954245c             mov dword ptr [esp + 0x5c], edx
// 008be46f  8b5008               mov edx, dword ptr [eax + 8]
// 008be472  8b400c               mov eax, dword ptr [eax + 0xc]
// 008be475  89542460             mov dword ptr [esp + 0x60], edx
// 008be479  89442464             mov dword ptr [esp + 0x64], eax
// 008be47d  399e48010000         cmp dword ptr [esi + 0x148], ebx
// 008be483  750b                 jne 0x8be490
// 008be485  3bcb                 cmp ecx, ebx
// 008be487  7507                 jne 0x8be490
// 008be489  8d4c2458             lea ecx, [esp + 0x58]
// 008be48d  51                   push ecx
// 008be48e  ffd7                 call edi
// 008be490  bff82a9f00           mov edi, 0x9f2af8
// 008be495  895c2454             mov dword ptr [esp + 0x54], ebx
// 008be499  897c2450             mov dword ptr [esp + 0x50], edi
// 008be49d  c784248c00000004000000 mov dword ptr [esp + 0x8c], 4
// 008be4a8  895c244c             mov dword ptr [esp + 0x4c], ebx
// 008be4ac  897c2448             mov dword ptr [esp + 0x48], edi
// 008be4b0  895c2420             mov dword ptr [esp + 0x20], ebx
// 008be4b4  897c241c             mov dword ptr [esp + 0x1c], edi
// 008be4b8  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008be4bf  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 008be4c5  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008be4c9  52                   push edx
// 008be4ca  8b542460             mov edx, dword ptr [esp + 0x60]
// 008be4ce  50                   push eax
// 008be4cf  83ec10               sub esp, 0x10
// 008be4d2  8bc4                 mov eax, esp
// 008be4d4  8908                 mov dword ptr [eax], ecx
// 008be4d6  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008be4da  895004               mov dword ptr [eax + 4], edx
// 008be4dd  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008be4e1  894808               mov dword ptr [eax + 8], ecx
// 008be4e4  89500c               mov dword ptr [eax + 0xc], edx
// 008be4e7  8d442468             lea eax, [esp + 0x68]
// 008be4eb  50                   push eax
// 008be4ec  8bce                 mov ecx, esi
// 008be4ee  c68424a800000006     mov byte ptr [esp + 0xa8], 6
// 008be4f6  e8d5e8ffff           call 0x8bcdd0
// 008be4fb  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 008be501  8b9650010000         mov edx, dword ptr [esi + 0x150]
// 008be507  53                   push ebx
// 008be508  51                   push ecx
// 008be509  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 008be50f  83ec10               sub esp, 0x10
// 008be512  8bc4                 mov eax, esp
// 008be514  8910                 mov dword ptr [eax], edx
// 008be516  8b9658010000         mov edx, dword ptr [esi + 0x158]
// 008be51c  894804               mov dword ptr [eax + 4], ecx
// 008be51f  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008be525  895008               mov dword ptr [eax + 8], edx
// 008be528  8d542460             lea edx, [esp + 0x60]
// 008be52c  89480c               mov dword ptr [eax + 0xc], ecx
// 008be52f  52                   push edx
// 008be530  8bce                 mov ecx, esi
// 008be532  e899e8ffff           call 0x8bcdd0
// 008be537  53                   push ebx
// 008be538  53                   push ebx
// 008be539  53                   push ebx
// 008be53a  53                   push ebx
// 008be53b  ff150cb19800         call dword ptr [0x98b10c]
// 008be541  50                   push eax
// 008be542  8d4c2420             lea ecx, [esp + 0x20]
// 008be546  e8df58f3ff           call 0x7f3e2a
// 008be54b  8b442454             mov eax, dword ptr [esp + 0x54]
// 008be54f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008be553  8b542420             mov edx, dword ptr [esp + 0x20]
// 008be557  6a03                 push 3
// 008be559  50                   push eax
// 008be55a  51                   push ecx
// 008be55b  52                   push edx
// 008be55c  ff15acb09800         call dword ptr [0x98b0ac]
// 008be562  8b442458             mov eax, dword ptr [esp + 0x58]
// 008be566  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008be56a  8b542460             mov edx, dword ptr [esp + 0x60]
// 008be56e  898650010000         mov dword ptr [esi + 0x150], eax
// 008be574  8b442464             mov eax, dword ptr [esp + 0x64]
// 008be578  898e54010000         mov dword ptr [esi + 0x154], ecx
// 008be57e  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 008be584  899658010000         mov dword ptr [esi + 0x158], edx
// 008be58a  8d54241c             lea edx, [esp + 0x1c]
// 008be58e  898e40010000         mov dword ptr [esi + 0x140], ecx
// 008be594  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 008be59a  52                   push edx
// 008be59b  89865c010000         mov dword ptr [esi + 0x15c], eax
// 008be5a1  e8be800600           call 0x926664
// 008be5a6  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 008be5ac  8b01                 mov eax, dword ptr [ecx]
// 008be5ae  8d542458             lea edx, [esp + 0x58]
// 008be5b2  52                   push edx
// 008be5b3  8b4058               mov eax, dword ptr [eax + 0x58]
// 008be5b6  ffd0                 call eax
// 008be5b8  e8bf830600           call 0x92697c
// 008be5bd  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 008be5c3  50                   push eax
// 008be5c4  e8037f0600           call 0x9264cc
// 008be5c9  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008be5cd  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008be5d1  2b4c2458             sub ecx, dword ptr [esp + 0x58]
// 008be5d5  8b9e8c010000         mov ebx, dword ptr [esi + 0x18c]
// 008be5db  8be8                 mov ebp, eax
// 008be5dd  8b442464             mov eax, dword ptr [esp + 0x64]
// 008be5e1  6849005a00           push 0x5a0049
// 008be5e6  2bc2                 sub eax, edx
// 008be5e8  50                   push eax
// 008be5e9  51                   push ecx
// 008be5ea  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008be5ee  52                   push edx
// 008be5ef  8b5304               mov edx, dword ptr [ebx + 4]
// 008be5f2  51                   push ecx
// 008be5f3  52                   push edx
// 008be5f4  ff1508b19800         call dword ptr [0x98b108]
// 008be5fa  85ed                 test ebp, ebp
// 008be5fc  740c                 je 0x8be60a
// 008be5fe  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 008be604  55                   push ebp
// 008be605  e8c27e0600           call 0x9264cc
// 008be60a  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 008be610  6a00                 push 0
// 008be612  e84d800600           call 0x926664
// 008be617  8d4c241c             lea ecx, [esp + 0x1c]
// 008be61b  c684248c00000005     mov byte ptr [esp + 0x8c], 5
// 008be623  897c241c             mov dword ptr [esp + 0x1c], edi
// 008be627  e8040cb5ff           call 0x40f230
// 008be62c  8d4c2448             lea ecx, [esp + 0x48]
// 008be630  c684248c00000004     mov byte ptr [esp + 0x8c], 4
// 008be638  897c2448             mov dword ptr [esp + 0x48], edi
// 008be63c  e8ef0bb5ff           call 0x40f230
// 008be641  8d4c2450             lea ecx, [esp + 0x50]
// 008be645  c784248c000000ffffffff mov dword ptr [esp + 0x8c], 0xffffffff
// 008be650  897c2450             mov dword ptr [esp + 0x50], edi
// 008be654  e8d70bb5ff           call 0x40f230
// 008be659  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008be660  64890d00000000       mov dword ptr fs:[0], ecx
// 008be667  59                   pop ecx
// 008be668  5f                   pop edi
// 008be669  5e                   pop esi
// 008be66a  5d                   pop ebp
// 008be66b  5b                   pop ebx
// 008be66c  83c47c               add esp, 0x7c
// 008be66f  c20400               ret 4
// copied from an identical function in another client (function ?DrawFocusRect@CXTPDockingPaneContext@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneContext.cpp