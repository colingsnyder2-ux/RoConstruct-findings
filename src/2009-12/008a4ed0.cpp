// roc 2009-12 008a4ed0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 478 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a4ed0
//
// 008a4ed0  83ec28               sub esp, 0x28
// 008a4ed3  56                   push esi
// 008a4ed4  8bf1                 mov esi, ecx
// 008a4ed6  837e2000             cmp dword ptr [esi + 0x20], 0
// 008a4eda  7509                 jne 0x8a4ee5
// 008a4edc  33c0                 xor eax, eax
// 008a4ede  5e                   pop esi
// 008a4edf  83c428               add esp, 0x28
// 008a4ee2  c21000               ret 0x10
// 008a4ee5  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a4ee8  53                   push ebx
// 008a4ee9  55                   push ebp
// 008a4eea  57                   push edi
// 008a4eeb  e8d095f7ff           call 0x81e4c0
// 008a4ef0  8b16                 mov edx, dword ptr [esi]
// 008a4ef2  8be8                 mov ebp, eax
// 008a4ef4  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a4ef7  8bb8ec000000         mov edi, dword ptr [eax + 0xec]
// 008a4efd  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 008a4f00  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 008a4f06  036e2c               add ebp, dword ptr [esi + 0x2c]
// 008a4f09  894c2410             mov dword ptr [esp + 0x10], ecx
// 008a4f0d  8bce                 mov ecx, esi
// 008a4f0f  897c2414             mov dword ptr [esp + 0x14], edi
// 008a4f13  ffd0                 call eax
// 008a4f15  85c0                 test eax, eax
// 008a4f17  7479                 je 0x8a4f92
// 008a4f19  8b16                 mov edx, dword ptr [esi]
// 008a4f1b  8b4260               mov eax, dword ptr [edx + 0x60]
// 008a4f1e  8bce                 mov ecx, esi
// 008a4f20  ffd0                 call eax
// 008a4f22  8bc8                 mov ecx, eax
// 008a4f24  e86758fbff           call 0x85a790
// 008a4f29  8bd8                 mov ebx, eax
// 008a4f2b  85db                 test ebx, ebx
// 008a4f2d  7463                 je 0x8a4f92
// 008a4f2f  8b4638               mov eax, dword ptr [esi + 0x38]
// 008a4f32  8b5634               mov edx, dword ptr [esi + 0x34]
// 008a4f35  8bc8                 mov ecx, eax
// 008a4f37  2b4e68               sub ecx, dword ptr [esi + 0x68]
// 008a4f3a  89442434             mov dword ptr [esp + 0x34], eax
// 008a4f3e  8b442440             mov eax, dword ptr [esp + 0x40]
// 008a4f42  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008a4f46  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008a4f4a  50                   push eax
// 008a4f4b  89542434             mov dword ptr [esp + 0x34], edx
// 008a4f4f  51                   push ecx
// 008a4f50  8d542430             lea edx, [esp + 0x30]
// 008a4f54  52                   push edx
// 008a4f55  896c2434             mov dword ptr [esp + 0x34], ebp
// 008a4f59  ff155cca9800         call dword ptr [0x98ca5c]
// 008a4f5f  85c0                 test eax, eax
// 008a4f61  742f                 je 0x8a4f92
// 008a4f63  8b442444             mov eax, dword ptr [esp + 0x44]
// 008a4f67  85c0                 test eax, eax
// 008a4f69  741b                 je 0x8a4f86
// 008a4f6b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a4f6f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008a4f73  8908                 mov dword ptr [eax], ecx
// 008a4f75  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008a4f79  895004               mov dword ptr [eax + 4], edx
// 008a4f7c  8b542434             mov edx, dword ptr [esp + 0x34]
// 008a4f80  894808               mov dword ptr [eax + 8], ecx
// 008a4f83  89500c               mov dword ptr [eax + 0xc], edx
// 008a4f86  5f                   pop edi
// 008a4f87  5d                   pop ebp
// 008a4f88  8bc3                 mov eax, ebx
// 008a4f8a  5b                   pop ebx
// 008a4f8b  5e                   pop esi
// 008a4f8c  83c428               add esp, 0x28
// 008a4f8f  c21000               ret 0x10
// 008a4f92  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 008a4f95  2b4e68               sub ecx, dword ptr [esi + 0x68]
// 008a4f98  8b4630               mov eax, dword ptr [esi + 0x30]
// 008a4f9b  8b16                 mov edx, dword ptr [esi]
// 008a4f9d  33db                 xor ebx, ebx
// 008a4f9f  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a4fa3  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 008a4fa9  894c2424             mov dword ptr [esp + 0x24], ecx
// 008a4fad  8bce                 mov ecx, esi
// 008a4faf  895c2418             mov dword ptr [esp + 0x18], ebx
// 008a4fb3  895c2420             mov dword ptr [esp + 0x20], ebx
// 008a4fb7  ffd0                 call eax
// 008a4fb9  85c0                 test eax, eax
// 008a4fbb  0f84ab000000         je 0x8a506c
// 008a4fc1  395c2410             cmp dword ptr [esp + 0x10], ebx
// 008a4fc5  0f8ea1000000         jle 0x8a506c
// 008a4fcb  eb03                 jmp 0x8a4fd0
// 008a4fcd  8d4900               lea ecx, [ecx]
// 008a4fd0  85db                 test ebx, ebx
// 008a4fd2  0f8c89000000         jl 0x8a5061
// 008a4fd8  3b5f30               cmp ebx, dword ptr [edi + 0x30]
// 008a4fdb  0f8d80000000         jge 0x8a5061
// 008a4fe1  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008a4fe4  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 008a4fe7  85ff                 test edi, edi
// 008a4fe9  7472                 je 0x8a505d
// 008a4feb  8bcf                 mov ecx, edi
// 008a4fed  e8ceea0000           call 0x8b3ac0
// 008a4ff2  85c0                 test eax, eax
// 008a4ff4  7467                 je 0x8a505d
// 008a4ff6  8d542428             lea edx, [esp + 0x28]
// 008a4ffa  52                   push edx
// 008a4ffb  8bcf                 mov ecx, edi
// 008a4ffd  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008a5001  e8ca2af8ff           call 0x827ad0
// 008a5006  8b4008               mov eax, dword ptr [eax + 8]
// 008a5009  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008a500d  89442420             mov dword ptr [esp + 0x20], eax
// 008a5011  8be8                 mov ebp, eax
// 008a5013  8b442440             mov eax, dword ptr [esp + 0x40]
// 008a5017  50                   push eax
// 008a5018  51                   push ecx
// 008a5019  8d542420             lea edx, [esp + 0x20]
// 008a501d  52                   push edx
// 008a501e  ff155cca9800         call dword ptr [0x98ca5c]
// 008a5024  85c0                 test eax, eax
// 008a5026  740a                 je 0x8a5032
// 008a5028  8b442448             mov eax, dword ptr [esp + 0x48]
// 008a502c  85c0                 test eax, eax
// 008a502e  7402                 je 0x8a5032
// 008a5030  8938                 mov dword ptr [eax], edi
// 008a5032  8b06                 mov eax, dword ptr [esi]
// 008a5034  8b90ec000000         mov edx, dword ptr [eax + 0xec]
// 008a503a  57                   push edi
// 008a503b  8d4c241c             lea ecx, [esp + 0x1c]
// 008a503f  51                   push ecx
// 008a5040  8bce                 mov ecx, esi
// 008a5042  ffd2                 call edx
// 008a5044  8b442440             mov eax, dword ptr [esp + 0x40]
// 008a5048  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008a504c  50                   push eax
// 008a504d  51                   push ecx
// 008a504e  8d542420             lea edx, [esp + 0x20]
// 008a5052  52                   push edx
// 008a5053  ff155cca9800         call dword ptr [0x98ca5c]
// 008a5059  85c0                 test eax, eax
// 008a505b  751b                 jne 0x8a5078
// 008a505d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008a5061  43                   inc ebx
// 008a5062  3b5c2410             cmp ebx, dword ptr [esp + 0x10]
// 008a5066  0f8c64ffffff         jl 0x8a4fd0
// 008a506c  5f                   pop edi
// 008a506d  5d                   pop ebp
// 008a506e  5b                   pop ebx
// 008a506f  33c0                 xor eax, eax
// 008a5071  5e                   pop esi
// 008a5072  83c428               add esp, 0x28
// 008a5075  c21000               ret 0x10
// 008a5078  8b442444             mov eax, dword ptr [esp + 0x44]
// 008a507c  85c0                 test eax, eax
// 008a507e  741b                 je 0x8a509b
// 008a5080  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a5084  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008a5088  8908                 mov dword ptr [eax], ecx
// 008a508a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a508e  895004               mov dword ptr [eax + 4], edx
// 008a5091  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a5095  894808               mov dword ptr [eax + 8], ecx
// 008a5098  89500c               mov dword ptr [eax + 0xc], edx
// 008a509b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a509e  57                   push edi
// 008a509f  e89c5cf8ff           call 0x82ad40
// 008a50a4  5f                   pop edi
// 008a50a5  5d                   pop ebp
// 008a50a6  5b                   pop ebx
// 008a50a7  5e                   pop esi
// 008a50a8  83c428               add esp, 0x28
// 008a50ab  c21000               ret 0x10
// copied from an identical function in another client (function ?HitTest@CXTPReportRow@@UBEPAVCXTPReportRecordItem@@VCPoint@@PAVCRect@@PAPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp