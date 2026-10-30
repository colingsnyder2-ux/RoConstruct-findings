// roc 2010-06 00821530  unit: CSelectionCaption  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00821530
//
// 00821530  8b442418             mov eax, dword ptr [esp + 0x18]
// 00821534  8b542414             mov edx, dword ptr [esp + 0x14]
// 00821538  83ec10               sub esp, 0x10
// 0082153b  55                   push ebp
// 0082153c  56                   push esi
// 0082153d  50                   push eax
// 0082153e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00821542  8bf1                 mov esi, ecx
// 00821544  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00821548  51                   push ecx
// 00821549  52                   push edx
// 0082154a  0d00000002           or eax, 0x2000000
// 0082154f  50                   push eax
// 00821550  33ed                 xor ebp, ebp
// 00821552  55                   push ebp
// 00821553  8bce                 mov ecx, esi
// 00821555  e8b273f8ff           call 0x7a890c
// 0082155a  85c0                 test eax, eax
// 0082155c  7508                 jne 0x821566
// 0082155e  5e                   pop esi
// 0082155f  5d                   pop ebp
// 00821560  83c410               add esp, 0x10
// 00821563  c21800               ret 0x18
// 00821566  e8556fffff           call 0x8184c0
// 0082156b  05dc000000           add eax, 0xdc
// 00821570  7403                 je 0x821575
// 00821572  8b4004               mov eax, dword ptr [eax + 4]
// 00821575  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00821578  53                   push ebx
// 00821579  57                   push edi
// 0082157a  6a01                 push 1
// 0082157c  50                   push eax
// 0082157d  6a30                 push 0x30
// 0082157f  51                   push ecx
// 00821580  ff1554ba9e00         call dword ptr [0x9eba54]
// 00821586  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0082158a  8bc1                 mov eax, ecx
// 0082158c  83e007               and eax, 7
// 0082158f  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 00821595  f7d0                 not eax
// 00821597  55                   push ebp
// 00821598  23c1                 and eax, ecx
// 0082159a  50                   push eax
// 0082159b  55                   push ebp
// 0082159c  8bce                 mov ecx, esi
// 0082159e  e8a369f8ff           call 0x7a7f46
// 008215a3  8b542428             mov edx, dword ptr [esp + 0x28]
// 008215a7  8d9ed0000000         lea ebx, [esi + 0xd0]
// 008215ad  52                   push edx
// 008215ae  8bcb                 mov ecx, ebx
// 008215b0  ff158cce9e00         call dword ptr [0x9ece8c]
// 008215b6  f686c800000004       test byte ptr [esi + 0xc8], 4
// 008215bd  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 008215c3  6a64                 push 0x64
// 008215c5  8dbedc000000         lea edi, [esi + 0xdc]
// 008215cb  8d4c2414             lea ecx, [esp + 0x14]
// 008215cf  56                   push esi
// 008215d0  896c2418             mov dword ptr [esp + 0x18], ebp
// 008215d4  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008215d8  896c2420             mov dword ptr [esp + 0x20], ebp
// 008215dc  896c2424             mov dword ptr [esp + 0x24], ebp
// 008215e0  51                   push ecx
// 008215e1  7472                 je 0x821655
// 008215e3  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 008215e9  684b0f0050           push 0x50000f4b
// 008215ee  55                   push ebp
// 008215ef  8bcf                 mov ecx, edi
// 008215f1  ffd2                 call edx
// 008215f3  85c0                 test eax, eax
// 008215f5  750d                 jne 0x821604
// 008215f7  5f                   pop edi
// 008215f8  5b                   pop ebx
// 008215f9  5e                   pop esi
// 008215fa  83c8ff               or eax, 0xffffffff
// 008215fd  5d                   pop ebp
// 008215fe  83c410               add esp, 0x10
// 00821601  c21800               ret 0x18
// 00821604  68ff00ff00           push 0xff00ff
// 00821609  6a01                 push 1
// 0082160b  6a10                 push 0x10
// 0082160d  6856240000           push 0x2456
// 00821612  8d8ed4000000         lea ecx, [esi + 0xd4]
// 00821618  e8e5bd1500           call 0x97d402
// 0082161d  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00821623  55                   push ebp
// 00821624  6a02                 push 2
// 00821626  50                   push eax
// 00821627  e83266f8ff           call 0x7a7c5e
// 0082162c  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00821632  8b08                 mov ecx, dword ptr [eax]
// 00821634  e827c5f9ff           call 0x7bdb60
// 00821639  8b1f                 mov ebx, dword ptr [edi]
// 0082163b  6a01                 push 1
// 0082163d  55                   push ebp
// 0082163e  b910000000           mov ecx, 0x10
// 00821643  8d51ff               lea edx, [ecx - 1]
// 00821646  50                   push eax
// 00821647  52                   push edx
// 00821648  8b9358010000         mov edx, dword ptr [ebx + 0x158]
// 0082164e  51                   push ecx
// 0082164f  8bcf                 mov ecx, edi
// 00821651  ffd2                 call edx
// 00821653  eb35                 jmp 0x82168a
// 00821655  684b0c0000           push 0xc4b
// 0082165a  8bcb                 mov ecx, ebx
// 0082165c  89442448             mov dword ptr [esp + 0x48], eax
// 00821660  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00821666  8b542448             mov edx, dword ptr [esp + 0x48]
// 0082166a  50                   push eax
// 0082166b  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 00821671  8bcf                 mov ecx, edi
// 00821673  ffd0                 call eax
// 00821675  85c0                 test eax, eax
// 00821677  750a                 jne 0x821683
// 00821679  5f                   pop edi
// 0082167a  5b                   pop ebx
// 0082167b  5e                   pop esi
// 0082167c  5d                   pop ebp
// 0082167d  83c410               add esp, 0x10
// 00821680  c21800               ret 0x18
// 00821683  c6868100000001       mov byte ptr [esi + 0x81], 1
// 0082168a  8b17                 mov edx, dword ptr [edi]
// 0082168c  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 00821692  55                   push ebp
// 00821693  55                   push ebp
// 00821694  8bcf                 mov ecx, edi
// 00821696  89b688010000         mov dword ptr [esi + 0x188], esi
// 0082169c  ffd0                 call eax
// 0082169e  6a23                 push 0x23
// 008216a0  55                   push ebp
// 008216a1  55                   push ebp
// 008216a2  55                   push ebp
// 008216a3  55                   push ebp
// 008216a4  55                   push ebp
// 008216a5  8bce                 mov ecx, esi
// 008216a7  e8c066f8ff           call 0x7a7d6c
// 008216ac  5f                   pop edi
// 008216ad  5b                   pop ebx
// 008216ae  5e                   pop esi
// 008216af  b801000000           mov eax, 1
// 008216b4  5d                   pop ebp
// 008216b5  83c410               add esp, 0x10
// 008216b8  c21800               ret 0x18
// copied from an identical function in another client (function ?Create@CXTCaption@@UAEHPAVCWnd@@PBDKKABVCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp