// roc 2010-06 00857c20  unit: CXTPReportGroupRow_Batch  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00857c20
//
// 00857c20  6aff                 push -1
// 00857c22  681b849b00           push 0x9b841b
// 00857c27  64a100000000         mov eax, dword ptr fs:[0]
// 00857c2d  50                   push eax
// 00857c2e  83ec2c               sub esp, 0x2c
// 00857c31  53                   push ebx
// 00857c32  55                   push ebp
// 00857c33  56                   push esi
// 00857c34  57                   push edi
// 00857c35  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00857c3a  33c4                 xor eax, esp
// 00857c3c  50                   push eax
// 00857c3d  8d442440             lea eax, [esp + 0x40]
// 00857c41  64a300000000         mov dword ptr fs:[0], eax
// 00857c47  8bf1                 mov esi, ecx
// 00857c49  8b4624               mov eax, dword ptr [esi + 0x24]
// 00857c4c  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00857c50  8ba800010000         mov ebp, dword ptr [eax + 0x100]
// 00857c56  6a01                 push 1
// 00857c58  8bcf                 mov ecx, edi
// 00857c5a  e855511200           call 0x97cdb4
// 00857c5f  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00857c63  8b542458             mov edx, dword ptr [esp + 0x58]
// 00857c67  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00857c6b  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00857c6e  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00857c72  895630               mov dword ptr [esi + 0x30], edx
// 00857c75  894634               mov dword ptr [esi + 0x34], eax
// 00857c78  8b4624               mov eax, dword ptr [esi + 0x24]
// 00857c7b  33db                 xor ebx, ebx
// 00857c7d  894e38               mov dword ptr [esi + 0x38], ecx
// 00857c80  399810010000         cmp dword ptr [eax + 0x110], ebx
// 00857c86  750a                 jne 0x857c92
// 00857c88  8b442464             mov eax, dword ptr [esp + 0x64]
// 00857c8c  29462c               sub dword ptr [esi + 0x2c], eax
// 00857c8f  294634               sub dword ptr [esi + 0x34], eax
// 00857c92  8d4c2414             lea ecx, [esp + 0x14]
// 00857c96  e8956af7ff           call 0x7ce730
// 00857c9b  c7442414cc85a500     mov dword ptr [esp + 0x14], 0xa585cc
// 00857ca3  8b5624               mov edx, dword ptr [esi + 0x24]
// 00857ca6  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00857ca9  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00857cac  89542418             mov dword ptr [esp + 0x18], edx
// 00857cb0  8b5634               mov edx, dword ptr [esi + 0x34]
// 00857cb3  89442428             mov dword ptr [esp + 0x28], eax
// 00857cb7  8b4638               mov eax, dword ptr [esi + 0x38]
// 00857cba  6a40                 push 0x40
// 00857cbc  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00857cc0  897c243c             mov dword ptr [esp + 0x3c], edi
// 00857cc4  895c2440             mov dword ptr [esp + 0x40], ebx
// 00857cc8  89742420             mov dword ptr [esp + 0x20], esi
// 00857ccc  895c2424             mov dword ptr [esp + 0x24], ebx
// 00857cd0  895c2428             mov dword ptr [esp + 0x28], ebx
// 00857cd4  894c2430             mov dword ptr [esp + 0x30], ecx
// 00857cd8  89542434             mov dword ptr [esp + 0x34], edx
// 00857cdc  89442438             mov dword ptr [esp + 0x38], eax
// 00857ce0  e8bbfcf4ff           call 0x7a79a0
// 00857ce5  8bf8                 mov edi, eax
// 00857ce7  83c404               add esp, 4
// 00857cea  897c2464             mov dword ptr [esp + 0x64], edi
// 00857cee  c644244801           mov byte ptr [esp + 0x48], 1
// 00857cf3  3bfb                 cmp edi, ebx
// 00857cf5  7434                 je 0x857d2b
// 00857cf7  8bcf                 mov ecx, edi
// 00857cf9  e880501200           call 0x97cd7e
// 00857cfe  8d4f2c               lea ecx, [edi + 0x2c]
// 00857d01  c707348ca500         mov dword ptr [edi], 0xa58c34
// 00857d07  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00857d0d  83c8ff               or eax, 0xffffffff
// 00857d10  895f20               mov dword ptr [edi + 0x20], ebx
// 00857d13  894724               mov dword ptr [edi + 0x24], eax
// 00857d16  894728               mov dword ptr [edi + 0x28], eax
// 00857d19  894730               mov dword ptr [edi + 0x30], eax
// 00857d1c  c7473408020000       mov dword ptr [edi + 0x34], 0x208
// 00857d23  895f38               mov dword ptr [edi + 0x38], ebx
// 00857d26  89473c               mov dword ptr [edi + 0x3c], eax
// 00857d29  eb02                 jmp 0x857d2d
// 00857d2b  33ff                 xor edi, edi
// 00857d2d  8b16                 mov edx, dword ptr [esi]
// 00857d2f  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 00857d35  8d442464             lea eax, [esp + 0x64]
// 00857d39  50                   push eax
// 00857d3a  8bce                 mov ecx, esi
// 00857d3c  885c244c             mov byte ptr [esp + 0x4c], bl
// 00857d40  ffd2                 call edx
// 00857d42  50                   push eax
// 00857d43  8d4f2c               lea ecx, [edi + 0x2c]
// 00857d46  c644244c02           mov byte ptr [esp + 0x4c], 2
// 00857d4b  ff1580c59e00         call dword ptr [0x9ec580]
// 00857d51  8d4c2464             lea ecx, [esp + 0x64]
// 00857d55  885c2448             mov byte ptr [esp + 0x48], bl
// 00857d59  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00857d5f  8b442450             mov eax, dword ptr [esp + 0x50]
// 00857d63  8b400c               mov eax, dword ptr [eax + 0xc]
// 00857d66  8b5500               mov edx, dword ptr [ebp]
// 00857d69  50                   push eax
// 00857d6a  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00857d70  57                   push edi
// 00857d71  56                   push esi
// 00857d72  8bcd                 mov ecx, ebp
// 00857d74  ffd0                 call eax
// 00857d76  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00857d79  3bcb                 cmp ecx, ebx
// 00857d7b  7410                 je 0x857d8d
// 00857d7d  8b11                 mov edx, dword ptr [ecx]
// 00857d7f  8b92e4010000         mov edx, dword ptr [edx + 0x1e4]
// 00857d85  57                   push edi
// 00857d86  8d442418             lea eax, [esp + 0x18]
// 00857d8a  50                   push eax
// 00857d8b  ffd2                 call edx
// 00857d8d  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00857d90  8b5500               mov edx, dword ptr [ebp]
// 00857d93  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 00857d99  57                   push edi
// 00857d9a  83ec10               sub esp, 0x10
// 00857d9d  8bc4                 mov eax, esp
// 00857d9f  8908                 mov dword ptr [eax], ecx
// 00857da1  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00857da4  894804               mov dword ptr [eax + 4], ecx
// 00857da7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00857daa  894808               mov dword ptr [eax + 8], ecx
// 00857dad  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00857db0  89480c               mov dword ptr [eax + 0xc], ecx
// 00857db3  8b442464             mov eax, dword ptr [esp + 0x64]
// 00857db7  56                   push esi
// 00857db8  50                   push eax
// 00857db9  8bcd                 mov ecx, ebp
// 00857dbb  ffd2                 call edx
// 00857dbd  8bcf                 mov ecx, edi
// 00857dbf  e85801f5ff           call 0x7a7f1c
// 00857dc4  8d4c2414             lea ecx, [esp + 0x14]
// 00857dc8  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00857dd0  e88b63f7ff           call 0x7ce160
// 00857dd5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00857dd9  64890d00000000       mov dword ptr fs:[0], ecx
// 00857de0  59                   pop ecx
// 00857de1  5f                   pop edi
// 00857de2  5e                   pop esi
// 00857de3  5d                   pop ebp
// 00857de4  5b                   pop ebx
// 00857de5  83c438               add esp, 0x38
// 00857de8  c21800               ret 0x18
// copied from an identical function in another client (function ?Draw@CXTPReportGroupRow@@UAEXPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportGroupRow.cpp