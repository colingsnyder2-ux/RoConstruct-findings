// roc 2009-12 0082dc10  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 614 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082dc10
//
// 0082dc10  83ec08               sub esp, 8
// 0082dc13  53                   push ebx
// 0082dc14  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0082dc18  8b0b                 mov ecx, dword ptr [ebx]
// 0082dc1a  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0082dc1d  8b11                 mov edx, dword ptr [ecx]
// 0082dc1f  55                   push ebp
// 0082dc20  8ba8ec000000         mov ebp, dword ptr [eax + 0xec]
// 0082dc26  8b4260               mov eax, dword ptr [edx + 0x60]
// 0082dc29  56                   push esi
// 0082dc2a  57                   push edi
// 0082dc2b  ffd0                 call eax
// 0082dc2d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0082dc31  8b09                 mov ecx, dword ptr [ecx]
// 0082dc33  8b11                 mov edx, dword ptr [ecx]
// 0082dc35  8bf8                 mov edi, eax
// 0082dc37  8b4260               mov eax, dword ptr [edx + 0x60]
// 0082dc3a  897c2414             mov dword ptr [esp + 0x14], edi
// 0082dc3e  ffd0                 call eax
// 0082dc40  8bf0                 mov esi, eax
// 0082dc42  89742410             mov dword ptr [esp + 0x10], esi
// 0082dc46  3bfe                 cmp edi, esi
// 0082dc48  750e                 jne 0x82dc58
// 0082dc4a  85ff                 test edi, edi
// 0082dc4c  7412                 je 0x82dc60
// 0082dc4e  5f                   pop edi
// 0082dc4f  5e                   pop esi
// 0082dc50  5d                   pop ebp
// 0082dc51  33c0                 xor eax, eax
// 0082dc53  5b                   pop ebx
// 0082dc54  83c408               add esp, 8
// 0082dc57  c3                   ret 
// 0082dc58  85ff                 test edi, edi
// 0082dc5a  0f85f4000000         jne 0x82dd54
// 0082dc60  85f6                 test esi, esi
// 0082dc62  0f85e4000000         jne 0x82dd4c
// 0082dc68  8b0b                 mov ecx, dword ptr [ebx]
// 0082dc6a  8b11                 mov edx, dword ptr [ecx]
// 0082dc6c  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0082dc72  ffd0                 call eax
// 0082dc74  85c0                 test eax, eax
// 0082dc76  0f84d0000000         je 0x82dd4c
// 0082dc7c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0082dc80  8b09                 mov ecx, dword ptr [ecx]
// 0082dc82  8b11                 mov edx, dword ptr [ecx]
// 0082dc84  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0082dc8a  ffd0                 call eax
// 0082dc8c  85c0                 test eax, eax
// 0082dc8e  0f84b8000000         je 0x82dd4c
// 0082dc94  8b542420             mov edx, dword ptr [esp + 0x20]
// 0082dc98  8b02                 mov eax, dword ptr [edx]
// 0082dc9a  8b0b                 mov ecx, dword ptr [ebx]
// 0082dc9c  89442420             mov dword ptr [esp + 0x20], eax
// 0082dca0  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0082dca4  8b11                 mov edx, dword ptr [ecx]
// 0082dca6  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082dcac  ffd0                 call eax
// 0082dcae  85c0                 test eax, eax
// 0082dcb0  0f8496000000         je 0x82dd4c
// 0082dcb6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082dcba  8b11                 mov edx, dword ptr [ecx]
// 0082dcbc  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082dcc2  ffd0                 call eax
// 0082dcc4  8bc8                 mov ecx, eax
// 0082dcc6  e855efffff           call 0x82cc20
// 0082dccb  85c0                 test eax, eax
// 0082dccd  747d                 je 0x82dd4c
// 0082dccf  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0082dcd3  8b11                 mov edx, dword ptr [ecx]
// 0082dcd5  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082dcdb  ffd0                 call eax
// 0082dcdd  85c0                 test eax, eax
// 0082dcdf  746b                 je 0x82dd4c
// 0082dce1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0082dce5  8b11                 mov edx, dword ptr [ecx]
// 0082dce7  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082dced  ffd0                 call eax
// 0082dcef  8bc8                 mov ecx, eax
// 0082dcf1  e82aefffff           call 0x82cc20
// 0082dcf6  85c0                 test eax, eax
// 0082dcf8  7452                 je 0x82dd4c
// 0082dcfa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082dcfe  8b11                 mov edx, dword ptr [ecx]
// 0082dd00  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082dd06  ffd0                 call eax
// 0082dd08  8b10                 mov edx, dword ptr [eax]
// 0082dd0a  8bc8                 mov ecx, eax
// 0082dd0c  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0082dd0f  56                   push esi
// 0082dd10  ffd0                 call eax
// 0082dd12  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0082dd16  8944241c             mov dword ptr [esp + 0x1c], eax
// 0082dd1a  8b11                 mov edx, dword ptr [ecx]
// 0082dd1c  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082dd22  ffd0                 call eax
// 0082dd24  8b10                 mov edx, dword ptr [eax]
// 0082dd26  8bc8                 mov ecx, eax
// 0082dd28  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0082dd2b  56                   push esi
// 0082dd2c  ffd0                 call eax
// 0082dd2e  8d4c2420             lea ecx, [esp + 0x20]
// 0082dd32  51                   push ecx
// 0082dd33  8d542420             lea edx, [esp + 0x20]
// 0082dd37  52                   push edx
// 0082dd38  89442428             mov dword ptr [esp + 0x28], eax
// 0082dd3c  e8cffeffff           call 0x82dc10
// 0082dd41  83c408               add esp, 8
// 0082dd44  5f                   pop edi
// 0082dd45  5e                   pop esi
// 0082dd46  5d                   pop ebp
// 0082dd47  5b                   pop ebx
// 0082dd48  83c408               add esp, 8
// 0082dd4b  c3                   ret 
// 0082dd4c  85ff                 test edi, edi
// 0082dd4e  0f84fafeffff         je 0x82dc4e
// 0082dd54  85f6                 test esi, esi
// 0082dd56  0f84f2feffff         je 0x82dc4e
// 0082dd5c  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0082dd5f  33db                 xor ebx, ebx
// 0082dd61  e80a7bcaff           call 0x4d5870
// 0082dd66  85c0                 test eax, eax
// 0082dd68  7e62                 jle 0x82ddcc
// 0082dd6a  8d9b00000000         lea ebx, [ebx]
// 0082dd70  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0082dd73  53                   push ebx
// 0082dd74  e837f80300           call 0x86d5b0
// 0082dd79  8bf0                 mov esi, eax
// 0082dd7b  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 0082dd7f  743a                 je 0x82ddbb
// 0082dd81  8b4640               mov eax, dword ptr [esi + 0x40]
// 0082dd84  56                   push esi
// 0082dd85  8bcf                 mov ecx, edi
// 0082dd87  89442424             mov dword ptr [esp + 0x24], eax
// 0082dd8b  e8b0cfffff           call 0x82ad40
// 0082dd90  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082dd94  56                   push esi
// 0082dd95  8bf8                 mov edi, eax
// 0082dd97  e8a4cfffff           call 0x82ad40
// 0082dd9c  85ff                 test edi, edi
// 0082dd9e  7417                 je 0x82ddb7
// 0082dda0  85c0                 test eax, eax
// 0082dda2  7413                 je 0x82ddb7
// 0082dda4  8b17                 mov edx, dword ptr [edi]
// 0082dda6  50                   push eax
// 0082dda7  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0082ddaa  56                   push esi
// 0082ddab  8bcf                 mov ecx, edi
// 0082ddad  ffd0                 call eax
// 0082ddaf  85c0                 test eax, eax
// 0082ddb1  0f85a7000000         jne 0x82de5e
// 0082ddb7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0082ddbb  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0082ddbe  43                   inc ebx
// 0082ddbf  e8ac7acaff           call 0x4d5870
// 0082ddc4  3bd8                 cmp ebx, eax
// 0082ddc6  7ca8                 jl 0x82dd70
// 0082ddc8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0082ddcc  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 0082ddcf  33db                 xor ebx, ebx
// 0082ddd1  e89a7acaff           call 0x4d5870
// 0082ddd6  85c0                 test eax, eax
// 0082ddd8  7e5f                 jle 0x82de39
// 0082ddda  8d9b00000000         lea ebx, [ebx]
// 0082dde0  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 0082dde3  53                   push ebx
// 0082dde4  e8c7f70300           call 0x86d5b0
// 0082dde9  8bf0                 mov esi, eax
// 0082ddeb  8bce                 mov ecx, esi
// 0082dded  e8ae32edff           call 0x7010a0
// 0082ddf2  56                   push esi
// 0082ddf3  8bcf                 mov ecx, edi
// 0082ddf5  89442424             mov dword ptr [esp + 0x24], eax
// 0082ddf9  e842cfffff           call 0x82ad40
// 0082ddfe  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082de02  56                   push esi
// 0082de03  8bf8                 mov edi, eax
// 0082de05  e836cfffff           call 0x82ad40
// 0082de0a  85ff                 test edi, edi
// 0082de0c  7416                 je 0x82de24
// 0082de0e  85c0                 test eax, eax
// 0082de10  7412                 je 0x82de24
// 0082de12  8b17                 mov edx, dword ptr [edi]
// 0082de14  50                   push eax
// 0082de15  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0082de1b  56                   push esi
// 0082de1c  8bcf                 mov ecx, edi
// 0082de1e  ffd0                 call eax
// 0082de20  85c0                 test eax, eax
// 0082de22  753a                 jne 0x82de5e
// 0082de24  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 0082de27  43                   inc ebx
// 0082de28  e8437acaff           call 0x4d5870
// 0082de2d  3bd8                 cmp ebx, eax
// 0082de2f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0082de33  7cab                 jl 0x82dde0
// 0082de35  8b742410             mov esi, dword ptr [esp + 0x10]
// 0082de39  8bce                 mov ecx, esi
// 0082de3b  e8b006ffff           call 0x81e4f0
// 0082de40  8bcf                 mov ecx, edi
// 0082de42  8bf0                 mov esi, eax
// 0082de44  e8a706ffff           call 0x81e4f0
// 0082de49  33d2                 xor edx, edx
// 0082de4b  3bc6                 cmp eax, esi
// 0082de4d  0f9fc2               setg dl
// 0082de50  5f                   pop edi
// 0082de51  5e                   pop esi
// 0082de52  5d                   pop ebp
// 0082de53  5b                   pop ebx
// 0082de54  8d5412ff             lea edx, [edx + edx - 1]
// 0082de58  8bc2                 mov eax, edx
// 0082de5a  83c408               add esp, 8
// 0082de5d  c3                   ret 
// 0082de5e  33c9                 xor ecx, ecx
// 0082de60  394c2420             cmp dword ptr [esp + 0x20], ecx
// 0082de64  5f                   pop edi
// 0082de65  0f95c1               setne cl
// 0082de68  5e                   pop esi
// 0082de69  5d                   pop ebp
// 0082de6a  5b                   pop ebx
// 0082de6b  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 0082de6f  0fafc1               imul eax, ecx
// 0082de72  83c408               add esp, 8
// 0082de75  c3                   ret 
// copied from an identical function in another client (function ?CompareRows@CXTPReportRows@@SAHPAPBVCXTPReportRow@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp