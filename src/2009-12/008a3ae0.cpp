// roc 2009-12 008a3ae0  unit: CXTPReportGroupRow_Batch  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3ae0
//
// 008a3ae0  6aff                 push -1
// 008a3ae2  686b249600           push 0x96246b
// 008a3ae7  64a100000000         mov eax, dword ptr fs:[0]
// 008a3aed  50                   push eax
// 008a3aee  83ec2c               sub esp, 0x2c
// 008a3af1  53                   push ebx
// 008a3af2  55                   push ebp
// 008a3af3  56                   push esi
// 008a3af4  57                   push edi
// 008a3af5  a10052b600           mov eax, dword ptr [0xb65200]
// 008a3afa  33c4                 xor eax, esp
// 008a3afc  50                   push eax
// 008a3afd  8d442440             lea eax, [esp + 0x40]
// 008a3b01  64a300000000         mov dword ptr fs:[0], eax
// 008a3b07  8bf1                 mov esi, ecx
// 008a3b09  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a3b0c  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 008a3b10  8ba800010000         mov ebp, dword ptr [eax + 0x100]
// 008a3b16  6a01                 push 1
// 008a3b18  8bcf                 mov ecx, edi
// 008a3b1a  e871290800           call 0x926490
// 008a3b1f  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008a3b23  8b542458             mov edx, dword ptr [esp + 0x58]
// 008a3b27  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008a3b2b  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008a3b2e  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008a3b32  895630               mov dword ptr [esi + 0x30], edx
// 008a3b35  894634               mov dword ptr [esi + 0x34], eax
// 008a3b38  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a3b3b  33db                 xor ebx, ebx
// 008a3b3d  894e38               mov dword ptr [esi + 0x38], ecx
// 008a3b40  399810010000         cmp dword ptr [eax + 0x110], ebx
// 008a3b46  750a                 jne 0x8a3b52
// 008a3b48  8b442464             mov eax, dword ptr [esp + 0x64]
// 008a3b4c  29462c               sub dword ptr [esi + 0x2c], eax
// 008a3b4f  294634               sub dword ptr [esi + 0x34], eax
// 008a3b52  8d4c2414             lea ecx, [esp + 0x14]
// 008a3b56  e8056bf7ff           call 0x81a660
// 008a3b5b  c7442414dc429f00     mov dword ptr [esp + 0x14], 0x9f42dc
// 008a3b63  8b5624               mov edx, dword ptr [esi + 0x24]
// 008a3b66  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008a3b69  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008a3b6c  89542418             mov dword ptr [esp + 0x18], edx
// 008a3b70  8b5634               mov edx, dword ptr [esi + 0x34]
// 008a3b73  89442428             mov dword ptr [esp + 0x28], eax
// 008a3b77  8b4638               mov eax, dword ptr [esi + 0x38]
// 008a3b7a  6a40                 push 0x40
// 008a3b7c  895c244c             mov dword ptr [esp + 0x4c], ebx
// 008a3b80  897c243c             mov dword ptr [esp + 0x3c], edi
// 008a3b84  895c2440             mov dword ptr [esp + 0x40], ebx
// 008a3b88  89742420             mov dword ptr [esp + 0x20], esi
// 008a3b8c  895c2424             mov dword ptr [esp + 0x24], ebx
// 008a3b90  895c2428             mov dword ptr [esp + 0x28], ebx
// 008a3b94  894c2430             mov dword ptr [esp + 0x30], ecx
// 008a3b98  89542434             mov dword ptr [esp + 0x34], edx
// 008a3b9c  89442438             mov dword ptr [esp + 0x38], eax
// 008a3ba0  e8bbfcf4ff           call 0x7f3860
// 008a3ba5  8bf8                 mov edi, eax
// 008a3ba7  83c404               add esp, 4
// 008a3baa  897c2464             mov dword ptr [esp + 0x64], edi
// 008a3bae  c644244801           mov byte ptr [esp + 0x48], 1
// 008a3bb3  3bfb                 cmp edi, ebx
// 008a3bb5  7434                 je 0x8a3beb
// 008a3bb7  8bcf                 mov ecx, edi
// 008a3bb9  e884280800           call 0x926442
// 008a3bbe  8d4f2c               lea ecx, [edi + 0x2c]
// 008a3bc1  c70744499f00         mov dword ptr [edi], 0x9f4944
// 008a3bc7  ff1574de9800         call dword ptr [0x98de74]
// 008a3bcd  83c8ff               or eax, 0xffffffff
// 008a3bd0  895f20               mov dword ptr [edi + 0x20], ebx
// 008a3bd3  894724               mov dword ptr [edi + 0x24], eax
// 008a3bd6  894728               mov dword ptr [edi + 0x28], eax
// 008a3bd9  894730               mov dword ptr [edi + 0x30], eax
// 008a3bdc  c7473408020000       mov dword ptr [edi + 0x34], 0x208
// 008a3be3  895f38               mov dword ptr [edi + 0x38], ebx
// 008a3be6  89473c               mov dword ptr [edi + 0x3c], eax
// 008a3be9  eb02                 jmp 0x8a3bed
// 008a3beb  33ff                 xor edi, edi
// 008a3bed  8b16                 mov edx, dword ptr [esi]
// 008a3bef  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 008a3bf5  8d442464             lea eax, [esp + 0x64]
// 008a3bf9  50                   push eax
// 008a3bfa  8bce                 mov ecx, esi
// 008a3bfc  885c244c             mov byte ptr [esp + 0x4c], bl
// 008a3c00  ffd2                 call edx
// 008a3c02  50                   push eax
// 008a3c03  8d4f2c               lea ecx, [edi + 0x2c]
// 008a3c06  c644244c02           mov byte ptr [esp + 0x4c], 2
// 008a3c0b  ff1538d59800         call dword ptr [0x98d538]
// 008a3c11  8d4c2464             lea ecx, [esp + 0x64]
// 008a3c15  885c2448             mov byte ptr [esp + 0x48], bl
// 008a3c19  ff15c0de9800         call dword ptr [0x98dec0]
// 008a3c1f  8b442450             mov eax, dword ptr [esp + 0x50]
// 008a3c23  8b400c               mov eax, dword ptr [eax + 0xc]
// 008a3c26  8b5500               mov edx, dword ptr [ebp]
// 008a3c29  50                   push eax
// 008a3c2a  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 008a3c30  57                   push edi
// 008a3c31  56                   push esi
// 008a3c32  8bcd                 mov ecx, ebp
// 008a3c34  ffd0                 call eax
// 008a3c36  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a3c39  3bcb                 cmp ecx, ebx
// 008a3c3b  7410                 je 0x8a3c4d
// 008a3c3d  8b11                 mov edx, dword ptr [ecx]
// 008a3c3f  8b92e4010000         mov edx, dword ptr [edx + 0x1e4]
// 008a3c45  57                   push edi
// 008a3c46  8d442418             lea eax, [esp + 0x18]
// 008a3c4a  50                   push eax
// 008a3c4b  ffd2                 call edx
// 008a3c4d  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 008a3c50  8b5500               mov edx, dword ptr [ebp]
// 008a3c53  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 008a3c59  57                   push edi
// 008a3c5a  83ec10               sub esp, 0x10
// 008a3c5d  8bc4                 mov eax, esp
// 008a3c5f  8908                 mov dword ptr [eax], ecx
// 008a3c61  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008a3c64  894804               mov dword ptr [eax + 4], ecx
// 008a3c67  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008a3c6a  894808               mov dword ptr [eax + 8], ecx
// 008a3c6d  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 008a3c70  89480c               mov dword ptr [eax + 0xc], ecx
// 008a3c73  8b442464             mov eax, dword ptr [esp + 0x64]
// 008a3c77  56                   push esi
// 008a3c78  50                   push eax
// 008a3c79  8bcd                 mov ecx, ebp
// 008a3c7b  ffd2                 call edx
// 008a3c7d  8bcf                 mov ecx, edi
// 008a3c7f  e85801f5ff           call 0x7f3ddc
// 008a3c84  8d4c2414             lea ecx, [esp + 0x14]
// 008a3c88  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008a3c90  e80b64f7ff           call 0x81a0a0
// 008a3c95  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008a3c99  64890d00000000       mov dword ptr fs:[0], ecx
// 008a3ca0  59                   pop ecx
// 008a3ca1  5f                   pop edi
// 008a3ca2  5e                   pop esi
// 008a3ca3  5d                   pop ebp
// 008a3ca4  5b                   pop ebx
// 008a3ca5  83c438               add esp, 0x38
// 008a3ca8  c21800               ret 0x18
// copied from an identical function in another client (function ?Draw@CXTPReportGroupRow@@UAEXPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportGroupRow.cpp