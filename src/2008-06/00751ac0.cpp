// roc 2008-06 00751ac0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 478 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00751ac0
//
// 00751ac0  83ec28               sub esp, 0x28
// 00751ac3  56                   push esi
// 00751ac4  8bf1                 mov esi, ecx
// 00751ac6  837e2000             cmp dword ptr [esi + 0x20], 0
// 00751aca  7509                 jne 0x751ad5
// 00751acc  33c0                 xor eax, eax
// 00751ace  5e                   pop esi
// 00751acf  83c428               add esp, 0x28
// 00751ad2  c21000               ret 0x10
// 00751ad5  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00751ad8  53                   push ebx
// 00751ad9  55                   push ebp
// 00751ada  57                   push edi
// 00751adb  e82095f7ff           call 0x6cb000
// 00751ae0  8b16                 mov edx, dword ptr [esi]
// 00751ae2  8be8                 mov ebp, eax
// 00751ae4  8b4624               mov eax, dword ptr [esi + 0x24]
// 00751ae7  8bb8ec000000         mov edi, dword ptr [eax + 0xec]
// 00751aed  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 00751af0  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 00751af6  036e2c               add ebp, dword ptr [esi + 0x2c]
// 00751af9  894c2410             mov dword ptr [esp + 0x10], ecx
// 00751afd  8bce                 mov ecx, esi
// 00751aff  897c2414             mov dword ptr [esp + 0x14], edi
// 00751b03  ffd0                 call eax
// 00751b05  85c0                 test eax, eax
// 00751b07  7479                 je 0x751b82
// 00751b09  8b16                 mov edx, dword ptr [esi]
// 00751b0b  8b4260               mov eax, dword ptr [edx + 0x60]
// 00751b0e  8bce                 mov ecx, esi
// 00751b10  ffd0                 call eax
// 00751b12  8bc8                 mov ecx, eax
// 00751b14  e857ec0400           call 0x7a0770
// 00751b19  8bd8                 mov ebx, eax
// 00751b1b  85db                 test ebx, ebx
// 00751b1d  7463                 je 0x751b82
// 00751b1f  8b4638               mov eax, dword ptr [esi + 0x38]
// 00751b22  8b5634               mov edx, dword ptr [esi + 0x34]
// 00751b25  8bc8                 mov ecx, eax
// 00751b27  2b4e68               sub ecx, dword ptr [esi + 0x68]
// 00751b2a  89442434             mov dword ptr [esp + 0x34], eax
// 00751b2e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00751b32  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00751b36  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00751b3a  50                   push eax
// 00751b3b  89542434             mov dword ptr [esp + 0x34], edx
// 00751b3f  51                   push ecx
// 00751b40  8d542430             lea edx, [esp + 0x30]
// 00751b44  52                   push edx
// 00751b45  896c2434             mov dword ptr [esp + 0x34], ebp
// 00751b49  ff152c2d8000         call dword ptr [0x802d2c]
// 00751b4f  85c0                 test eax, eax
// 00751b51  742f                 je 0x751b82
// 00751b53  8b442444             mov eax, dword ptr [esp + 0x44]
// 00751b57  85c0                 test eax, eax
// 00751b59  741b                 je 0x751b76
// 00751b5b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00751b5f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00751b63  8908                 mov dword ptr [eax], ecx
// 00751b65  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00751b69  895004               mov dword ptr [eax + 4], edx
// 00751b6c  8b542434             mov edx, dword ptr [esp + 0x34]
// 00751b70  894808               mov dword ptr [eax + 8], ecx
// 00751b73  89500c               mov dword ptr [eax + 0xc], edx
// 00751b76  5f                   pop edi
// 00751b77  5d                   pop ebp
// 00751b78  8bc3                 mov eax, ebx
// 00751b7a  5b                   pop ebx
// 00751b7b  5e                   pop esi
// 00751b7c  83c428               add esp, 0x28
// 00751b7f  c21000               ret 0x10
// 00751b82  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00751b85  2b4e68               sub ecx, dword ptr [esi + 0x68]
// 00751b88  8b4630               mov eax, dword ptr [esi + 0x30]
// 00751b8b  8b16                 mov edx, dword ptr [esi]
// 00751b8d  33db                 xor ebx, ebx
// 00751b8f  8944241c             mov dword ptr [esp + 0x1c], eax
// 00751b93  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 00751b99  894c2424             mov dword ptr [esp + 0x24], ecx
// 00751b9d  8bce                 mov ecx, esi
// 00751b9f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00751ba3  895c2420             mov dword ptr [esp + 0x20], ebx
// 00751ba7  ffd0                 call eax
// 00751ba9  85c0                 test eax, eax
// 00751bab  0f84ab000000         je 0x751c5c
// 00751bb1  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00751bb5  0f8ea1000000         jle 0x751c5c
// 00751bbb  eb03                 jmp 0x751bc0
// 00751bbd  8d4900               lea ecx, [ecx]
// 00751bc0  85db                 test ebx, ebx
// 00751bc2  0f8c89000000         jl 0x751c51
// 00751bc8  3b5f30               cmp ebx, dword ptr [edi + 0x30]
// 00751bcb  0f8d80000000         jge 0x751c51
// 00751bd1  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00751bd4  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 00751bd7  85ff                 test edi, edi
// 00751bd9  7472                 je 0x751c4d
// 00751bdb  8bcf                 mov ecx, edi
// 00751bdd  e8fe29f8ff           call 0x6d45e0
// 00751be2  85c0                 test eax, eax
// 00751be4  7467                 je 0x751c4d
// 00751be6  8d542428             lea edx, [esp + 0x28]
// 00751bea  52                   push edx
// 00751beb  8bcf                 mov ecx, edi
// 00751bed  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00751bf1  e88a29f8ff           call 0x6d4580
// 00751bf6  8b4008               mov eax, dword ptr [eax + 8]
// 00751bf9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00751bfd  89442420             mov dword ptr [esp + 0x20], eax
// 00751c01  8be8                 mov ebp, eax
// 00751c03  8b442440             mov eax, dword ptr [esp + 0x40]
// 00751c07  50                   push eax
// 00751c08  51                   push ecx
// 00751c09  8d542420             lea edx, [esp + 0x20]
// 00751c0d  52                   push edx
// 00751c0e  ff152c2d8000         call dword ptr [0x802d2c]
// 00751c14  85c0                 test eax, eax
// 00751c16  740a                 je 0x751c22
// 00751c18  8b442448             mov eax, dword ptr [esp + 0x48]
// 00751c1c  85c0                 test eax, eax
// 00751c1e  7402                 je 0x751c22
// 00751c20  8938                 mov dword ptr [eax], edi
// 00751c22  8b06                 mov eax, dword ptr [esi]
// 00751c24  8b90ec000000         mov edx, dword ptr [eax + 0xec]
// 00751c2a  57                   push edi
// 00751c2b  8d4c241c             lea ecx, [esp + 0x1c]
// 00751c2f  51                   push ecx
// 00751c30  8bce                 mov ecx, esi
// 00751c32  ffd2                 call edx
// 00751c34  8b442440             mov eax, dword ptr [esp + 0x40]
// 00751c38  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00751c3c  50                   push eax
// 00751c3d  51                   push ecx
// 00751c3e  8d542420             lea edx, [esp + 0x20]
// 00751c42  52                   push edx
// 00751c43  ff152c2d8000         call dword ptr [0x802d2c]
// 00751c49  85c0                 test eax, eax
// 00751c4b  751b                 jne 0x751c68
// 00751c4d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00751c51  43                   inc ebx
// 00751c52  3b5c2410             cmp ebx, dword ptr [esp + 0x10]
// 00751c56  0f8c64ffffff         jl 0x751bc0
// 00751c5c  5f                   pop edi
// 00751c5d  5d                   pop ebp
// 00751c5e  5b                   pop ebx
// 00751c5f  33c0                 xor eax, eax
// 00751c61  5e                   pop esi
// 00751c62  83c428               add esp, 0x28
// 00751c65  c21000               ret 0x10
// 00751c68  8b442444             mov eax, dword ptr [esp + 0x44]
// 00751c6c  85c0                 test eax, eax
// 00751c6e  741b                 je 0x751c8b
// 00751c70  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00751c74  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00751c78  8908                 mov dword ptr [eax], ecx
// 00751c7a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00751c7e  895004               mov dword ptr [eax + 4], edx
// 00751c81  8b542424             mov edx, dword ptr [esp + 0x24]
// 00751c85  894808               mov dword ptr [eax + 8], ecx
// 00751c88  89500c               mov dword ptr [eax + 0xc], edx
// 00751c8b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00751c8e  57                   push edi
// 00751c8f  e8ac62f8ff           call 0x6d7f40
// 00751c94  5f                   pop edi
// 00751c95  5d                   pop ebp
// 00751c96  5b                   pop ebx
// 00751c97  5e                   pop esi
// 00751c98  83c428               add esp, 0x28
// 00751c9b  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?HitTest@CXTPReportRow@@UBEPAVCXTPReportRecordItem@@VCPoint@@PAVCRect@@PAPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
