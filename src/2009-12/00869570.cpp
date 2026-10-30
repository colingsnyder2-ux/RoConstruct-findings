// roc 2009-12 00869570  unit: CXTPPropertyGridView  size: 1090 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00869570
//
// 00869570  6aff                 push -1
// 00869572  6872f49500           push 0x95f472
// 00869577  64a100000000         mov eax, dword ptr fs:[0]
// 0086957d  50                   push eax
// 0086957e  83ec64               sub esp, 0x64
// 00869581  53                   push ebx
// 00869582  55                   push ebp
// 00869583  56                   push esi
// 00869584  57                   push edi
// 00869585  a10052b600           mov eax, dword ptr [0xb65200]
// 0086958a  33c4                 xor eax, esp
// 0086958c  50                   push eax
// 0086958d  8d442478             lea eax, [esp + 0x78]
// 00869591  64a300000000         mov dword ptr fs:[0], eax
// 00869597  8bf9                 mov edi, ecx
// 00869599  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008695a1  e8aa0bfeff           call 0x84a150
// 008695a6  85c0                 test eax, eax
// 008695a8  0f85ee030000         jne 0x86999c
// 008695ae  8b87b0000000         mov eax, dword ptr [edi + 0xb0]
// 008695b4  83786400             cmp dword ptr [eax + 0x64], 0
// 008695b8  0f84de030000         je 0x86999c
// 008695be  8d8fe8000000         lea ecx, [edi + 0xe8]
// 008695c4  85c9                 test ecx, ecx
// 008695c6  7406                 je 0x8695ce
// 008695c8  83792000             cmp dword ptr [ecx + 0x20], 0
// 008695cc  7506                 jne 0x8695d4
// 008695ce  57                   push edi
// 008695cf  e89ce6ffff           call 0x867c70
// 008695d4  83bf5801000000       cmp dword ptr [edi + 0x158], 0
// 008695db  0f85bb030000         jne 0x86999c
// 008695e1  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008695e8  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008695ef  51                   push ecx
// 008695f0  52                   push edx
// 008695f1  8bcf                 mov ecx, edi
// 008695f3  e898f4ffff           call 0x868a90
// 008695f8  8bf0                 mov esi, eax
// 008695fa  85f6                 test esi, esi
// 008695fc  742d                 je 0x86962b
// 008695fe  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 00869605  7524                 jne 0x86962b
// 00869607  8d442418             lea eax, [esp + 0x18]
// 0086960b  50                   push eax
// 0086960c  8bce                 mov ecx, esi
// 0086960e  e8bde2ffff           call 0x8678d0
// 00869613  8bc8                 mov ecx, eax
// 00869615  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0086961d  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00869623  84c0                 test al, al
// 00869625  7404                 je 0x86962b
// 00869627  32db                 xor bl, bl
// 00869629  eb02                 jmp 0x86962d
// 0086962b  b301                 mov bl, 1
// 0086962d  f644241401           test byte ptr [esp + 0x14], 1
// 00869632  740a                 je 0x86963e
// 00869634  8d4c2418             lea ecx, [esp + 0x18]
// 00869638  ff15c0de9800         call dword ptr [0x98dec0]
// 0086963e  84db                 test bl, bl
// 00869640  0f8556030000         jne 0x86999c
// 00869646  8bcf                 mov ecx, edi
// 00869648  e813f1ffff           call 0x868760
// 0086964d  8d4c2468             lea ecx, [esp + 0x68]
// 00869651  8bd8                 mov ebx, eax
// 00869653  51                   push ecx
// 00869654  8bce                 mov ecx, esi
// 00869656  895c2418             mov dword ptr [esp + 0x18], ebx
// 0086965a  e891bdffff           call 0x8653f0
// 0086965f  8b442468             mov eax, dword ptr [esp + 0x68]
// 00869663  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00869667  8d0c18               lea ecx, [eax + ebx]
// 0086966a  89442438             mov dword ptr [esp + 0x38], eax
// 0086966e  8b442474             mov eax, dword ptr [esp + 0x74]
// 00869672  894c2440             mov dword ptr [esp + 0x40], ecx
// 00869676  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0086967d  8954243c             mov dword ptr [esp + 0x3c], edx
// 00869681  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 00869688  51                   push ecx
// 00869689  89442448             mov dword ptr [esp + 0x48], eax
// 0086968d  52                   push edx
// 0086968e  8d442440             lea eax, [esp + 0x40]
// 00869692  50                   push eax
// 00869693  ff155cca9800         call dword ptr [0x98ca5c]
// 00869699  8d4c2418             lea ecx, [esp + 0x18]
// 0086969d  51                   push ecx
// 0086969e  8bce                 mov ecx, esi
// 008696a0  85c0                 test eax, eax
// 008696a2  0f8452010000         je 0x8697fa
// 008696a8  e8438fbcff           call 0x4325f0
// 008696ad  50                   push eax
// 008696ae  8dafd8000000         lea ebp, [edi + 0xd8]
// 008696b4  55                   push ebp
// 008696b5  e89603f9ff           call 0x7f9a50
// 008696ba  83c408               add esp, 8
// 008696bd  8d4c2418             lea ecx, [esp + 0x18]
// 008696c1  8ad8                 mov bl, al
// 008696c3  ff15c0de9800         call dword ptr [0x98dec0]
// 008696c9  84db                 test bl, bl
// 008696cb  0f85cb020000         jne 0x86999c
// 008696d1  8d542418             lea edx, [esp + 0x18]
// 008696d5  52                   push edx
// 008696d6  8bce                 mov ecx, esi
// 008696d8  e8138fbcff           call 0x4325f0
// 008696dd  50                   push eax
// 008696de  8bcd                 mov ecx, ebp
// 008696e0  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 008696eb  ff1538d59800         call dword ptr [0x98d538]
// 008696f1  8d4c2418             lea ecx, [esp + 0x18]
// 008696f5  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 00869700  ff15c0de9800         call dword ptr [0x98dec0]
// 00869706  8d442438             lea eax, [esp + 0x38]
// 0086970a  50                   push eax
// 0086970b  8bcf                 mov ecx, edi
// 0086970d  e8e8a6f8ff           call 0x7f3dfa
// 00869712  8b442440             mov eax, dword ptr [esp + 0x40]
// 00869716  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0086971a  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0086971e  89442450             mov dword ptr [esp + 0x50], eax
// 00869722  8b442444             mov eax, dword ptr [esp + 0x44]
// 00869726  89442454             mov dword ptr [esp + 0x54], eax
// 0086972a  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00869730  8d1cc500000000       lea ebx, [eax*8]
// 00869737  894c2448             mov dword ptr [esp + 0x48], ecx
// 0086973b  2bd8                 sub ebx, eax
// 0086973d  8d4c59ff             lea ecx, [ecx + ebx*2 - 1]
// 00869741  894c2448             mov dword ptr [esp + 0x48], ecx
// 00869745  4a                   dec edx
// 00869746  8bcf                 mov ecx, edi
// 00869748  8954244c             mov dword ptr [esp + 0x4c], edx
// 0086974c  e8ffe1ffff           call 0x867950
// 00869751  8b10                 mov edx, dword ptr [eax]
// 00869753  8b5228               mov edx, dword ptr [edx + 0x28]
// 00869756  8d4c2448             lea ecx, [esp + 0x48]
// 0086975a  51                   push ecx
// 0086975b  56                   push esi
// 0086975c  8bc8                 mov ecx, eax
// 0086975e  ffd2                 call edx
// 00869760  6a00                 push 0
// 00869762  56                   push esi
// 00869763  55                   push ebp
// 00869764  8d442424             lea eax, [esp + 0x24]
// 00869768  50                   push eax
// 00869769  8bcf                 mov ecx, edi
// 0086976b  e830fdffff           call 0x8694a0
// 00869770  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00869774  8b18                 mov ebx, dword ptr [eax]
// 00869776  2b4c2448             sub ecx, dword ptr [esp + 0x48]
// 0086977a  8d5303               lea edx, [ebx + 3]
// 0086977d  3bd1                 cmp edx, ecx
// 0086977f  0f8e17020000         jle 0x86999c
// 00869785  8bcf                 mov ecx, edi
// 00869787  e8eccc0b00           call 0x926478
// 0086978c  8b542440             mov edx, dword ptr [esp + 0x40]
// 00869790  a900004000           test eax, 0x400000
// 00869795  7422                 je 0x8697b9
// 00869797  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0086979d  8d0cc500000000       lea ecx, [eax*8]
// 008697a4  2bc8                 sub ecx, eax
// 008697a6  03c9                 add ecx, ecx
// 008697a8  8bc1                 mov eax, ecx
// 008697aa  8bca                 mov ecx, edx
// 008697ac  2bc8                 sub ecx, eax
// 008697ae  2bcb                 sub ecx, ebx
// 008697b0  83e907               sub ecx, 7
// 008697b3  894c2448             mov dword ptr [esp + 0x48], ecx
// 008697b7  eb04                 jmp 0x8697bd
// 008697b9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008697bd  6a00                 push 0
// 008697bf  56                   push esi
// 008697c0  83ec10               sub esp, 0x10
// 008697c3  8bc4                 mov eax, esp
// 008697c5  8908                 mov dword ptr [eax], ecx
// 008697c7  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008697cb  894804               mov dword ptr [eax + 4], ecx
// 008697ce  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008697d2  894808               mov dword ptr [eax + 8], ecx
// 008697d5  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008697d9  89480c               mov dword ptr [eax + 0xc], ecx
// 008697dc  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008697e0  83ec10               sub esp, 0x10
// 008697e3  8bc4                 mov eax, esp
// 008697e5  8908                 mov dword ptr [eax], ecx
// 008697e7  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008697eb  894804               mov dword ptr [eax + 4], ecx
// 008697ee  895008               mov dword ptr [eax + 8], edx
// 008697f1  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008697f5  e998010000           jmp 0x869992
// 008697fa  8b06                 mov eax, dword ptr [esi]
// 008697fc  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00869802  ffd2                 call edx
// 00869804  50                   push eax
// 00869805  8dafd8000000         lea ebp, [edi + 0xd8]
// 0086980b  55                   push ebp
// 0086980c  e83f02f9ff           call 0x7f9a50
// 00869811  83c408               add esp, 8
// 00869814  8d4c2418             lea ecx, [esp + 0x18]
// 00869818  8ad8                 mov bl, al
// 0086981a  ff15c0de9800         call dword ptr [0x98dec0]
// 00869820  84db                 test bl, bl
// 00869822  0f8574010000         jne 0x86999c
// 00869828  bb01000000           mov ebx, 1
// 0086982d  399e04010000         cmp dword ptr [esi + 0x104], ebx
// 00869833  0f8f63010000         jg 0x86999c
// 00869839  8b06                 mov eax, dword ptr [esi]
// 0086983b  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00869841  8d4c2418             lea ecx, [esp + 0x18]
// 00869845  51                   push ecx
// 00869846  8bce                 mov ecx, esi
// 00869848  ffd2                 call edx
// 0086984a  50                   push eax
// 0086984b  8bcd                 mov ecx, ebp
// 0086984d  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 00869854  ff1538d59800         call dword ptr [0x98d538]
// 0086985a  8d4c2418             lea ecx, [esp + 0x18]
// 0086985e  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 00869869  ff15c0de9800         call dword ptr [0x98dec0]
// 0086986f  8b1deccb9800         mov ebx, dword ptr [0x98cbec]
// 00869875  ffd3                 call ebx
// 00869877  50                   push eax
// 00869878  e8ada2f8ff           call 0x7f3b2a
// 0086987d  85c0                 test eax, eax
// 0086987f  7433                 je 0x8698b4
// 00869881  ffd3                 call ebx
// 00869883  50                   push eax
// 00869884  e8a1a2f8ff           call 0x7f3b2a
// 00869889  89442418             mov dword ptr [esp + 0x18], eax
// 0086988d  e83ed10500           call 0x8c69d0
// 00869892  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00869896  50                   push eax
// 00869897  e84ca5f8ff           call 0x7f3de8
// 0086989c  85c0                 test eax, eax
// 0086989e  7414                 je 0x8698b4
// 008698a0  ffd3                 call ebx
// 008698a2  50                   push eax
// 008698a3  e882a2f8ff           call 0x7f3b2a
// 008698a8  39b0a0000000         cmp dword ptr [eax + 0xa0], esi
// 008698ae  0f84e8000000         je 0x86999c
// 008698b4  8b442468             mov eax, dword ptr [esp + 0x68]
// 008698b8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008698bc  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008698c0  03c1                 add eax, ecx
// 008698c2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008698c6  8954245c             mov dword ptr [esp + 0x5c], edx
// 008698ca  89442458             mov dword ptr [esp + 0x58], eax
// 008698ce  8b442470             mov eax, dword ptr [esp + 0x70]
// 008698d2  8d542458             lea edx, [esp + 0x58]
// 008698d6  894c2464             mov dword ptr [esp + 0x64], ecx
// 008698da  52                   push edx
// 008698db  8bcf                 mov ecx, edi
// 008698dd  89442464             mov dword ptr [esp + 0x64], eax
// 008698e1  e814a5f8ff           call 0x7f3dfa
// 008698e6  8b06                 mov eax, dword ptr [esi]
// 008698e8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008698eb  8d4c2428             lea ecx, [esp + 0x28]
// 008698ef  51                   push ecx
// 008698f0  8bce                 mov ecx, esi
// 008698f2  ffd2                 call edx
// 008698f4  836c242c02           sub dword ptr [esp + 0x2c], 2
// 008698f9  8d442428             lea eax, [esp + 0x28]
// 008698fd  bb01000000           mov ebx, 1
// 00869902  295c2428             sub dword ptr [esp + 0x28], ebx
// 00869906  015c2434             add dword ptr [esp + 0x34], ebx
// 0086990a  50                   push eax
// 0086990b  8bcf                 mov ecx, edi
// 0086990d  e8e8a4f8ff           call 0x7f3dfa
// 00869912  53                   push ebx
// 00869913  56                   push esi
// 00869914  55                   push ebp
// 00869915  8d4c242c             lea ecx, [esp + 0x2c]
// 00869919  51                   push ecx
// 0086991a  8bcf                 mov ecx, edi
// 0086991c  e87ffbffff           call 0x8694a0
// 00869921  8b542430             mov edx, dword ptr [esp + 0x30]
// 00869925  8b28                 mov ebp, dword ptr [eax]
// 00869927  2b542428             sub edx, dword ptr [esp + 0x28]
// 0086992b  8d4503               lea eax, [ebp + 3]
// 0086992e  3bc2                 cmp eax, edx
// 00869930  7e6a                 jle 0x86999c
// 00869932  8bcf                 mov ecx, edi
// 00869934  e83fcb0b00           call 0x926478
// 00869939  8b542430             mov edx, dword ptr [esp + 0x30]
// 0086993d  a900004000           test eax, 0x400000
// 00869942  740d                 je 0x869951
// 00869944  8bca                 mov ecx, edx
// 00869946  2bcd                 sub ecx, ebp
// 00869948  83e908               sub ecx, 8
// 0086994b  894c2428             mov dword ptr [esp + 0x28], ecx
// 0086994f  eb04                 jmp 0x869955
// 00869951  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00869955  53                   push ebx
// 00869956  56                   push esi
// 00869957  83ec10               sub esp, 0x10
// 0086995a  8bc4                 mov eax, esp
// 0086995c  8908                 mov dword ptr [eax], ecx
// 0086995e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00869962  894804               mov dword ptr [eax + 4], ecx
// 00869965  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00869969  895008               mov dword ptr [eax + 8], edx
// 0086996c  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00869970  89500c               mov dword ptr [eax + 0xc], edx
// 00869973  8b542474             mov edx, dword ptr [esp + 0x74]
// 00869977  83ec10               sub esp, 0x10
// 0086997a  8bc4                 mov eax, esp
// 0086997c  8908                 mov dword ptr [eax], ecx
// 0086997e  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00869985  895004               mov dword ptr [eax + 4], edx
// 00869988  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 0086998f  894808               mov dword ptr [eax + 8], ecx
// 00869992  8bcf                 mov ecx, edi
// 00869994  89500c               mov dword ptr [eax + 0xc], edx
// 00869997  e834faffff           call 0x8693d0
// 0086999c  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008699a0  64890d00000000       mov dword ptr fs:[0], ecx
// 008699a7  59                   pop ecx
// 008699a8  5f                   pop edi
// 008699a9  5e                   pop esi
// 008699aa  5d                   pop ebp
// 008699ab  5b                   pop ebx
// 008699ac  83c470               add esp, 0x70
// 008699af  c20800               ret 8
// copied from an identical function in another client (function ?ShowToolTip@CXTPPropertyGridView@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridView.cpp