// roc 2008-06 006c7440  unit: CInstanceRecord::CNameItem  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c7440
//
// 006c7440  83ec20               sub esp, 0x20
// 006c7443  53                   push ebx
// 006c7444  55                   push ebp
// 006c7445  56                   push esi
// 006c7446  8bf1                 mov esi, ecx
// 006c7448  8b06                 mov eax, dword ptr [esi]
// 006c744a  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 006c7450  57                   push edi
// 006c7451  ffd2                 call edx
// 006c7453  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006c7457  85c0                 test eax, eax
// 006c7459  7417                 je 0x6c7472
// 006c745b  8b430c               mov eax, dword ptr [ebx + 0xc]
// 006c745e  85c0                 test eax, eax
// 006c7460  7409                 je 0x6c746b
// 006c7462  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 006c7469  7407                 je 0x6c7472
// 006c746b  bf01000000           mov edi, 1
// 006c7470  eb02                 jmp 0x6c7474
// 006c7472  33ff                 xor edi, edi
// 006c7474  8b4324               mov eax, dword ptr [ebx + 0x24]
// 006c7477  8b16                 mov edx, dword ptr [esi]
// 006c7479  89442410             mov dword ptr [esp + 0x10], eax
// 006c747d  8b82f0000000         mov eax, dword ptr [edx + 0xf0]
// 006c7483  8bce                 mov ecx, esi
// 006c7485  ffd0                 call eax
// 006c7487  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006c748a  8ba900010000         mov ebp, dword ptr [ecx + 0x100]
// 006c7490  8b5b28               mov ebx, dword ptr [ebx + 0x28]
// 006c7493  f7d8                 neg eax
// 006c7495  1bc0                 sbb eax, eax
// 006c7497  f7d8                 neg eax
// 006c7499  f7df                 neg edi
// 006c749b  1bff                 sbb edi, edi
// 006c749d  83e7fe               and edi, 0xfffffffe
// 006c74a0  83c702               add edi, 2
// 006c74a3  03c7                 add eax, edi
// 006c74a5  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006c74a9  8b17                 mov edx, dword ptr [edi]
// 006c74ab  895620               mov dword ptr [esi + 0x20], edx
// 006c74ae  8b4f04               mov ecx, dword ptr [edi + 4]
// 006c74b1  894e24               mov dword ptr [esi + 0x24], ecx
// 006c74b4  8b5708               mov edx, dword ptr [edi + 8]
// 006c74b7  895628               mov dword ptr [esi + 0x28], edx
// 006c74ba  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006c74bd  83c002               add eax, 2
// 006c74c0  50                   push eax
// 006c74c1  894e2c               mov dword ptr [esi + 0x2c], ecx
// 006c74c4  8b0f                 mov ecx, dword ptr [edi]
// 006c74c6  8b5500               mov edx, dword ptr [ebp]
// 006c74c9  8b92b0000000         mov edx, dword ptr [edx + 0xb0]
// 006c74cf  83ec10               sub esp, 0x10
// 006c74d2  89442448             mov dword ptr [esp + 0x48], eax
// 006c74d6  8bc4                 mov eax, esp
// 006c74d8  8908                 mov dword ptr [eax], ecx
// 006c74da  8b4f04               mov ecx, dword ptr [edi + 4]
// 006c74dd  894804               mov dword ptr [eax + 4], ecx
// 006c74e0  8b4f08               mov ecx, dword ptr [edi + 8]
// 006c74e3  894808               mov dword ptr [eax + 8], ecx
// 006c74e6  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006c74e9  89480c               mov dword ptr [eax + 0xc], ecx
// 006c74ec  6a00                 push 0
// 006c74ee  8d442430             lea eax, [esp + 0x30]
// 006c74f2  50                   push eax
// 006c74f3  8bcd                 mov ecx, ebp
// 006c74f5  81e30000f00f         and ebx, 0xff00000
// 006c74fb  ffd2                 call edx
// 006c74fd  8b4624               mov eax, dword ptr [esi + 0x24]
// 006c7500  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006c7503  8b5628               mov edx, dword ptr [esi + 0x28]
// 006c7506  8b762c               mov esi, dword ptr [esi + 0x2c]
// 006c7509  89442424             mov dword ptr [esp + 0x24], eax
// 006c750d  81fb00002000         cmp ebx, 0x200000
// 006c7513  7448                 je 0x6c755d
// 006c7515  81fb00004000         cmp ebx, 0x400000
// 006c751b  7431                 je 0x6c754e
// 006c751d  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c7521  83c202               add edx, 2
// 006c7524  0117                 add dword ptr [edi], edx
// 006c7526  8b07                 mov eax, dword ptr [edi]
// 006c7528  83c102               add ecx, 2
// 006c752b  8d50ff               lea edx, [eax - 1]
// 006c752e  81fb00000001         cmp ebx, 0x1000000
// 006c7534  7446                 je 0x6c757c
// 006c7536  81fb00000004         cmp ebx, 0x4000000
// 006c753c  7549                 jne 0x6c7587
// 006c753e  8b7f0c               mov edi, dword ptr [edi + 0xc]
// 006c7541  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 006c7545  83ef02               sub edi, 2
// 006c7548  897c2424             mov dword ptr [esp + 0x24], edi
// 006c754c  eb39                 jmp 0x6c7587
// 006c754e  8b4f08               mov ecx, dword ptr [edi + 8]
// 006c7551  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 006c7555  83c1fe               add ecx, -2
// 006c7558  894f08               mov dword ptr [edi + 8], ecx
// 006c755b  eb2a                 jmp 0x6c7587
// 006c755d  8b4708               mov eax, dword ptr [edi + 8]
// 006c7560  0307                 add eax, dword ptr [edi]
// 006c7562  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006c7566  99                   cdq 
// 006c7567  2bc2                 sub eax, edx
// 006c7569  8bc8                 mov ecx, eax
// 006c756b  8bc7                 mov eax, edi
// 006c756d  99                   cdq 
// 006c756e  2bc2                 sub eax, edx
// 006c7570  d1f9                 sar ecx, 1
// 006c7572  d1f8                 sar eax, 1
// 006c7574  2bc8                 sub ecx, eax
// 006c7576  49                   dec ecx
// 006c7577  8d1439               lea edx, [ecx + edi]
// 006c757a  eb0b                 jmp 0x6c7587
// 006c757c  8b4704               mov eax, dword ptr [edi + 4]
// 006c757f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006c7583  8d743002             lea esi, [eax + esi + 2]
// 006c7587  8b442434             mov eax, dword ptr [esp + 0x34]
// 006c758b  8b7d00               mov edi, dword ptr [ebp]
// 006c758e  50                   push eax
// 006c758f  83ec10               sub esp, 0x10
// 006c7592  8bc4                 mov eax, esp
// 006c7594  8908                 mov dword ptr [eax], ecx
// 006c7596  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006c759a  894804               mov dword ptr [eax + 4], ecx
// 006c759d  895008               mov dword ptr [eax + 8], edx
// 006c75a0  8b542424             mov edx, dword ptr [esp + 0x24]
// 006c75a4  89700c               mov dword ptr [eax + 0xc], esi
// 006c75a7  52                   push edx
// 006c75a8  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 006c75ae  8d442428             lea eax, [esp + 0x28]
// 006c75b2  50                   push eax
// 006c75b3  8bcd                 mov ecx, ebp
// 006c75b5  ffd2                 call edx
// 006c75b7  5f                   pop edi
// 006c75b8  5e                   pop esi
// 006c75b9  5d                   pop ebp
// 006c75ba  5b                   pop ebx
// 006c75bb  83c420               add esp, 0x20
// 006c75be  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItem.cpp (function ?DrawCheckBox@CXTPReportRecordItem@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp
