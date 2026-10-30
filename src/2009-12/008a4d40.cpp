// roc 2009-12 008a4d40  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a4d40
//
// 008a4d40  83ec28               sub esp, 0x28
// 008a4d43  53                   push ebx
// 008a4d44  56                   push esi
// 008a4d45  8bf1                 mov esi, ecx
// 008a4d47  8b06                 mov eax, dword ptr [esi]
// 008a4d49  8b90d0000000         mov edx, dword ptr [eax + 0xd0]
// 008a4d4f  57                   push edi
// 008a4d50  ffd2                 call edx
// 008a4d52  33ff                 xor edi, edi
// 008a4d54  85c0                 test eax, eax
// 008a4d56  0f8454010000         je 0x8a4eb0
// 008a4d5c  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 008a4d60  3bdf                 cmp ebx, edi
// 008a4d62  0f8448010000         je 0x8a4eb0
// 008a4d68  397e20               cmp dword ptr [esi + 0x20], edi
// 008a4d6b  0f843f010000         je 0x8a4eb0
// 008a4d71  8b06                 mov eax, dword ptr [esi]
// 008a4d73  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 008a4d79  55                   push ebp
// 008a4d7a  8bce                 mov ecx, esi
// 008a4d7c  ffd2                 call edx
// 008a4d7e  85c0                 test eax, eax
// 008a4d80  7445                 je 0x8a4dc7
// 008a4d82  8b06                 mov eax, dword ptr [esi]
// 008a4d84  8b5060               mov edx, dword ptr [eax + 0x60]
// 008a4d87  8bce                 mov ecx, esi
// 008a4d89  ffd2                 call edx
// 008a4d8b  8bc8                 mov ecx, eax
// 008a4d8d  e8fe59fbff           call 0x85a790
// 008a4d92  3bd8                 cmp ebx, eax
// 008a4d94  7531                 jne 0x8a4dc7
// 008a4d96  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 008a4d99  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a4d9c  8b6e34               mov ebp, dword ptr [esi + 0x34]
// 008a4d9f  8bfb                 mov edi, ebx
// 008a4da1  2b7e68               sub edi, dword ptr [esi + 0x68]
// 008a4da4  e81797f7ff           call 0x81e4c0
// 008a4da9  8bc8                 mov ecx, eax
// 008a4dab  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008a4daf  034e2c               add ecx, dword ptr [esi + 0x2c]
// 008a4db2  896808               mov dword ptr [eax + 8], ebp
// 008a4db5  5d                   pop ebp
// 008a4db6  897804               mov dword ptr [eax + 4], edi
// 008a4db9  5f                   pop edi
// 008a4dba  5e                   pop esi
// 008a4dbb  89580c               mov dword ptr [eax + 0xc], ebx
// 008a4dbe  8908                 mov dword ptr [eax], ecx
// 008a4dc0  5b                   pop ebx
// 008a4dc1  83c428               add esp, 0x28
// 008a4dc4  c20800               ret 8
// 008a4dc7  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a4dca  e8f196f7ff           call 0x81e4c0
// 008a4dcf  8b5624               mov edx, dword ptr [esi + 0x24]
// 008a4dd2  8be8                 mov ebp, eax
// 008a4dd4  8b82ec000000         mov eax, dword ptr [edx + 0xec]
// 008a4dda  8b4830               mov ecx, dword ptr [eax + 0x30]
// 008a4ddd  8b5630               mov edx, dword ptr [esi + 0x30]
// 008a4de0  036e2c               add ebp, dword ptr [esi + 0x2c]
// 008a4de3  8954241c             mov dword ptr [esp + 0x1c], edx
// 008a4de7  8b5638               mov edx, dword ptr [esi + 0x38]
// 008a4dea  2b5668               sub edx, dword ptr [esi + 0x68]
// 008a4ded  33db                 xor ebx, ebx
// 008a4def  3bcf                 cmp ecx, edi
// 008a4df1  89442414             mov dword ptr [esp + 0x14], eax
// 008a4df5  894c2410             mov dword ptr [esp + 0x10], ecx
// 008a4df9  897c2418             mov dword ptr [esp + 0x18], edi
// 008a4dfd  897c2420             mov dword ptr [esp + 0x20], edi
// 008a4e01  89542424             mov dword ptr [esp + 0x24], edx
// 008a4e05  7e55                 jle 0x8a4e5c
// 008a4e07  3bdf                 cmp ebx, edi
// 008a4e09  7c4c                 jl 0x8a4e57
// 008a4e0b  3b5830               cmp ebx, dword ptr [eax + 0x30]
// 008a4e0e  7d47                 jge 0x8a4e57
// 008a4e10  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008a4e13  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 008a4e16  85ff                 test edi, edi
// 008a4e18  743b                 je 0x8a4e55
// 008a4e1a  8bcf                 mov ecx, edi
// 008a4e1c  e89fec0000           call 0x8b3ac0
// 008a4e21  85c0                 test eax, eax
// 008a4e23  7428                 je 0x8a4e4d
// 008a4e25  8d442428             lea eax, [esp + 0x28]
// 008a4e29  50                   push eax
// 008a4e2a  8bcf                 mov ecx, edi
// 008a4e2c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008a4e30  e89b2cf8ff           call 0x827ad0
// 008a4e35  8b4008               mov eax, dword ptr [eax + 8]
// 008a4e38  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a4e3b  57                   push edi
// 008a4e3c  89442424             mov dword ptr [esp + 0x24], eax
// 008a4e40  8be8                 mov ebp, eax
// 008a4e42  e8f95ef8ff           call 0x82ad40
// 008a4e47  3b442440             cmp eax, dword ptr [esp + 0x40]
// 008a4e4b  7428                 je 0x8a4e75
// 008a4e4d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a4e51  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a4e55  33ff                 xor edi, edi
// 008a4e57  43                   inc ebx
// 008a4e58  3bd9                 cmp ebx, ecx
// 008a4e5a  7cab                 jl 0x8a4e07
// 008a4e5c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008a4e60  5d                   pop ebp
// 008a4e61  8938                 mov dword ptr [eax], edi
// 008a4e63  897804               mov dword ptr [eax + 4], edi
// 008a4e66  897808               mov dword ptr [eax + 8], edi
// 008a4e69  89780c               mov dword ptr [eax + 0xc], edi
// 008a4e6c  5f                   pop edi
// 008a4e6d  5e                   pop esi
// 008a4e6e  5b                   pop ebx
// 008a4e6f  83c428               add esp, 0x28
// 008a4e72  c20800               ret 8
// 008a4e75  8b16                 mov edx, dword ptr [esi]
// 008a4e77  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 008a4e7d  57                   push edi
// 008a4e7e  8d44241c             lea eax, [esp + 0x1c]
// 008a4e82  50                   push eax
// 008a4e83  8bce                 mov ecx, esi
// 008a4e85  ffd2                 call edx
// 008a4e87  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008a4e8b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a4e8f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008a4e93  5d                   pop ebp
// 008a4e94  8908                 mov dword ptr [eax], ecx
// 008a4e96  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a4e9a  895004               mov dword ptr [eax + 4], edx
// 008a4e9d  8b542420             mov edx, dword ptr [esp + 0x20]
// 008a4ea1  5f                   pop edi
// 008a4ea2  5e                   pop esi
// 008a4ea3  894808               mov dword ptr [eax + 8], ecx
// 008a4ea6  89500c               mov dword ptr [eax + 0xc], edx
// 008a4ea9  5b                   pop ebx
// 008a4eaa  83c428               add esp, 0x28
// 008a4ead  c20800               ret 8
// 008a4eb0  8b442438             mov eax, dword ptr [esp + 0x38]
// 008a4eb4  8938                 mov dword ptr [eax], edi
// 008a4eb6  897804               mov dword ptr [eax + 4], edi
// 008a4eb9  897808               mov dword ptr [eax + 8], edi
// 008a4ebc  89780c               mov dword ptr [eax + 0xc], edi
// 008a4ebf  5f                   pop edi
// 008a4ec0  5e                   pop esi
// 008a4ec1  5b                   pop ebx
// 008a4ec2  83c428               add esp, 0x28
// 008a4ec5  c20800               ret 8
// copied from an identical function in another client (function ?GetItemRect@CXTPReportRow@@UAE?AVCRect@@PAVCXTPReportRecordItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp