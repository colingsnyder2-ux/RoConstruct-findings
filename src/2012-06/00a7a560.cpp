// roc 2012-06 00a7a560  unit: CXTCaptionButtonTheme  size: 614 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7a560
//
// 00a7a560  6aff                 push -1
// 00a7a562  684993ae00           push 0xae9349
// 00a7a567  64a100000000         mov eax, dword ptr fs:[0]
// 00a7a56d  50                   push eax
// 00a7a56e  83ec1c               sub esp, 0x1c
// 00a7a571  53                   push ebx
// 00a7a572  55                   push ebp
// 00a7a573  56                   push esi
// 00a7a574  57                   push edi
// 00a7a575  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a7a57a  33c4                 xor eax, esp
// 00a7a57c  50                   push eax
// 00a7a57d  8d442430             lea eax, [esp + 0x30]
// 00a7a581  64a300000000         mov dword ptr fs:[0], eax
// 00a7a587  8be9                 mov ebp, ecx
// 00a7a589  8d4c2414             lea ecx, [esp + 0x14]
// 00a7a58d  ff158447b200         call dword ptr [0xb24784]
// 00a7a593  8b742454             mov esi, dword ptr [esp + 0x54]
// 00a7a597  8d442414             lea eax, [esp + 0x14]
// 00a7a59b  50                   push eax
// 00a7a59c  8bce                 mov ecx, esi
// 00a7a59e  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00a7a5a6  e84b81f0ff           call 0x9826f6
// 00a7a5ab  e8e0cbf5ff           call 0x9d7190
// 00a7a5b0  8d4c2414             lea ecx, [esp + 0x14]
// 00a7a5b4  51                   push ecx
// 00a7a5b5  e8069cf5ff           call 0x9d41c0
// 00a7a5ba  83c404               add esp, 4
// 00a7a5bd  8d542418             lea edx, [esp + 0x18]
// 00a7a5c1  52                   push edx
// 00a7a5c2  8d4c2418             lea ecx, [esp + 0x18]
// 00a7a5c6  ff155846b200         call dword ptr [0xb24658]
// 00a7a5cc  50                   push eax
// 00a7a5cd  8d4c241c             lea ecx, [esp + 0x1c]
// 00a7a5d1  ff159847b200         call dword ptr [0xb24798]
// 00a7a5d7  50                   push eax
// 00a7a5d8  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a7a5dc  8b4808               mov ecx, dword ptr [eax + 8]
// 00a7a5df  51                   push ecx
// 00a7a5e0  ff154021b200         call dword ptr [0xb22140]
// 00a7a5e6  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00a7a5ea  8b17                 mov edx, dword ptr [edi]
// 00a7a5ec  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00a7a5f0  8913                 mov dword ptr [ebx], edx
// 00a7a5f2  8b4704               mov eax, dword ptr [edi + 4]
// 00a7a5f5  8bce                 mov ecx, esi
// 00a7a5f7  894304               mov dword ptr [ebx + 4], eax
// 00a7a5fa  e8d3ef0100           call 0xa995d2
// 00a7a5ff  837e7800             cmp dword ptr [esi + 0x78], 0
// 00a7a603  89442454             mov dword ptr [esp + 0x54], eax
// 00a7a607  7418                 je 0xa7a621
// 00a7a609  8d4c2418             lea ecx, [esp + 0x18]
// 00a7a60d  51                   push ecx
// 00a7a60e  8bce                 mov ecx, esi
// 00a7a610  e8eb09ffff           call 0xa6b000
// 00a7a615  8b10                 mov edx, dword ptr [eax]
// 00a7a617  8913                 mov dword ptr [ebx], edx
// 00a7a619  8b4004               mov eax, dword ptr [eax + 4]
// 00a7a61c  e980010000           jmp 0xa7a7a1
// 00a7a621  8b4d00               mov ecx, dword ptr [ebp]
// 00a7a624  8d542420             lea edx, [esp + 0x20]
// 00a7a628  894c2444             mov dword ptr [esp + 0x44], ecx
// 00a7a62c  52                   push edx
// 00a7a62d  8bce                 mov ecx, esi
// 00a7a62f  e88c09ffff           call 0xa6afc0
// 00a7a634  8b4804               mov ecx, dword ptr [eax + 4]
// 00a7a637  8b10                 mov edx, dword ptr [eax]
// 00a7a639  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a7a63d  56                   push esi
// 00a7a63e  51                   push ecx
// 00a7a63f  52                   push edx
// 00a7a640  8b5040               mov edx, dword ptr [eax + 0x40]
// 00a7a643  53                   push ebx
// 00a7a644  8bcd                 mov ecx, ebp
// 00a7a646  ffd2                 call edx
// 00a7a648  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00a7a64b  8903                 mov dword ptr [ebx], eax
// 00a7a64d  8b16                 mov edx, dword ptr [esi]
// 00a7a64f  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00a7a655  8bce                 mov ecx, esi
// 00a7a657  ffd0                 call eax
// 00a7a659  8d4c2414             lea ecx, [esp + 0x14]
// 00a7a65d  a804                 test al, 4
// 00a7a65f  0f84af000000         je 0xa7a714
// 00a7a665  ff156046b200         call dword ptr [0xb24660]
// 00a7a66b  84c0                 test al, al
// 00a7a66d  751a                 jne 0xa7a689
// 00a7a66f  8b4670               mov eax, dword ptr [esi + 0x70]
// 00a7a672  99                   cdq 
// 00a7a673  2bc2                 sub eax, edx
// 00a7a675  8bc8                 mov ecx, eax
// 00a7a677  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a7a67b  99                   cdq 
// 00a7a67c  2bc2                 sub eax, edx
// 00a7a67e  d1f8                 sar eax, 1
// 00a7a680  d1f9                 sar ecx, 1
// 00a7a682  f7d8                 neg eax
// 00a7a684  2bc1                 sub eax, ecx
// 00a7a686  014304               add dword ptr [ebx + 4], eax
// 00a7a689  8bce                 mov ecx, esi
// 00a7a68b  e842ef0100           call 0xa995d2
// 00a7a690  2500030000           and eax, 0x300
// 00a7a695  3d00010000           cmp eax, 0x100
// 00a7a69a  0f8404010000         je 0xa7a7a4
// 00a7a6a0  8bce                 mov ecx, esi
// 00a7a6a2  3d00020000           cmp eax, 0x200
// 00a7a6a7  7450                 je 0xa7a6f9
// 00a7a6a9  8b6f08               mov ebp, dword ptr [edi + 8]
// 00a7a6ac  2b2f                 sub ebp, dword ptr [edi]
// 00a7a6ae  8d542420             lea edx, [esp + 0x20]
// 00a7a6b2  52                   push edx
// 00a7a6b3  e80809ffff           call 0xa6afc0
// 00a7a6b8  8bc8                 mov ecx, eax
// 00a7a6ba  8bc5                 mov eax, ebp
// 00a7a6bc  2b01                 sub eax, dword ptr [ecx]
// 00a7a6be  99                   cdq 
// 00a7a6bf  2bc2                 sub eax, edx
// 00a7a6c1  d1f8                 sar eax, 1
// 00a7a6c3  790d                 jns 0xa7a6d2
// 00a7a6c5  8b0f                 mov ecx, dword ptr [edi]
// 00a7a6c7  33c0                 xor eax, eax
// 00a7a6c9  03c8                 add ecx, eax
// 00a7a6cb  890b                 mov dword ptr [ebx], ecx
// 00a7a6cd  e9d2000000           jmp 0xa7a7a4
// 00a7a6d2  8b6f08               mov ebp, dword ptr [edi + 8]
// 00a7a6d5  2b2f                 sub ebp, dword ptr [edi]
// 00a7a6d7  8d442418             lea eax, [esp + 0x18]
// 00a7a6db  50                   push eax
// 00a7a6dc  8bce                 mov ecx, esi
// 00a7a6de  e8dd08ffff           call 0xa6afc0
// 00a7a6e3  8bc8                 mov ecx, eax
// 00a7a6e5  8bc5                 mov eax, ebp
// 00a7a6e7  2b01                 sub eax, dword ptr [ecx]
// 00a7a6e9  8b0f                 mov ecx, dword ptr [edi]
// 00a7a6eb  99                   cdq 
// 00a7a6ec  2bc2                 sub eax, edx
// 00a7a6ee  d1f8                 sar eax, 1
// 00a7a6f0  03c8                 add ecx, eax
// 00a7a6f2  890b                 mov dword ptr [ebx], ecx
// 00a7a6f4  e9ab000000           jmp 0xa7a7a4
// 00a7a6f9  8b6e6c               mov ebp, dword ptr [esi + 0x6c]
// 00a7a6fc  8d542428             lea edx, [esp + 0x28]
// 00a7a700  52                   push edx
// 00a7a701  e8ba08ffff           call 0xa6afc0
// 00a7a706  8b4f08               mov ecx, dword ptr [edi + 8]
// 00a7a709  2b08                 sub ecx, dword ptr [eax]
// 00a7a70b  2bcd                 sub ecx, ebp
// 00a7a70d  890b                 mov dword ptr [ebx], ecx
// 00a7a70f  e990000000           jmp 0xa7a7a4
// 00a7a714  ff156046b200         call dword ptr [0xb24660]
// 00a7a71a  84c0                 test al, al
// 00a7a71c  0f8482000000         je 0xa7a7a4
// 00a7a722  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a7a726  8bd0                 mov edx, eax
// 00a7a728  81e200030000         and edx, 0x300
// 00a7a72e  81fa00030000         cmp edx, 0x300
// 00a7a734  7532                 jne 0xa7a768
// 00a7a736  8b6f08               mov ebp, dword ptr [edi + 8]
// 00a7a739  2b2f                 sub ebp, dword ptr [edi]
// 00a7a73b  8d442428             lea eax, [esp + 0x28]
// 00a7a73f  50                   push eax
// 00a7a740  8bce                 mov ecx, esi
// 00a7a742  e87908ffff           call 0xa6afc0
// 00a7a747  3b28                 cmp ebp, dword ptr [eax]
// 00a7a749  7c19                 jl 0xa7a764
// 00a7a74b  8d4c2428             lea ecx, [esp + 0x28]
// 00a7a74f  51                   push ecx
// 00a7a750  8bce                 mov ecx, esi
// 00a7a752  e86908ffff           call 0xa6afc0
// 00a7a757  8bc8                 mov ecx, eax
// 00a7a759  8bc5                 mov eax, ebp
// 00a7a75b  2b01                 sub eax, dword ptr [ecx]
// 00a7a75d  99                   cdq 
// 00a7a75e  2bc2                 sub eax, edx
// 00a7a760  d1f8                 sar eax, 1
// 00a7a762  8903                 mov dword ptr [ebx], eax
// 00a7a764  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a7a768  25000c0000           and eax, 0xc00
// 00a7a76d  3d000c0000           cmp eax, 0xc00
// 00a7a772  7530                 jne 0xa7a7a4
// 00a7a774  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00a7a777  2b6f04               sub ebp, dword ptr [edi + 4]
// 00a7a77a  8d542428             lea edx, [esp + 0x28]
// 00a7a77e  52                   push edx
// 00a7a77f  8bce                 mov ecx, esi
// 00a7a781  e83a08ffff           call 0xa6afc0
// 00a7a786  3b6804               cmp ebp, dword ptr [eax + 4]
// 00a7a789  7c19                 jl 0xa7a7a4
// 00a7a78b  8d442428             lea eax, [esp + 0x28]
// 00a7a78f  50                   push eax
// 00a7a790  8bce                 mov ecx, esi
// 00a7a792  e82908ffff           call 0xa6afc0
// 00a7a797  2b6804               sub ebp, dword ptr [eax + 4]
// 00a7a79a  8bc5                 mov eax, ebp
// 00a7a79c  99                   cdq 
// 00a7a79d  2bc2                 sub eax, edx
// 00a7a79f  d1f8                 sar eax, 1
// 00a7a7a1  894304               mov dword ptr [ebx + 4], eax
// 00a7a7a4  8d4c2414             lea ecx, [esp + 0x14]
// 00a7a7a8  ff15d047b200         call dword ptr [0xb247d0]
// 00a7a7ae  8bc3                 mov eax, ebx
// 00a7a7b0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a7a7b4  64890d00000000       mov dword ptr fs:[0], ecx
// 00a7a7bb  59                   pop ecx
// 00a7a7bc  5f                   pop edi
// 00a7a7bd  5e                   pop esi
// 00a7a7be  5d                   pop ebp
// 00a7a7bf  5b                   pop ebx
// 00a7a7c0  83c428               add esp, 0x28
// 00a7a7c3  c21800               ret 0x18
// copied from an identical function in another client (function ?CalculateImagePosition@CXTButtonTheme@@MAE?AVCPoint@@PAVCDC@@IAAVCRect@@_NPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTButtonTheme.cpp