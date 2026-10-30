// roc 2009-12 0081a8f0  unit: CInstanceRecord::CNameItem  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a8f0
//
// 0081a8f0  83ec20               sub esp, 0x20
// 0081a8f3  53                   push ebx
// 0081a8f4  55                   push ebp
// 0081a8f5  56                   push esi
// 0081a8f6  8bf1                 mov esi, ecx
// 0081a8f8  8b06                 mov eax, dword ptr [esi]
// 0081a8fa  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 0081a900  57                   push edi
// 0081a901  ffd2                 call edx
// 0081a903  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0081a907  85c0                 test eax, eax
// 0081a909  7417                 je 0x81a922
// 0081a90b  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0081a90e  85c0                 test eax, eax
// 0081a910  7409                 je 0x81a91b
// 0081a912  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 0081a919  7407                 je 0x81a922
// 0081a91b  bf01000000           mov edi, 1
// 0081a920  eb02                 jmp 0x81a924
// 0081a922  33ff                 xor edi, edi
// 0081a924  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0081a927  8b16                 mov edx, dword ptr [esi]
// 0081a929  89442410             mov dword ptr [esp + 0x10], eax
// 0081a92d  8b82f0000000         mov eax, dword ptr [edx + 0xf0]
// 0081a933  8bce                 mov ecx, esi
// 0081a935  ffd0                 call eax
// 0081a937  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0081a93a  8ba900010000         mov ebp, dword ptr [ecx + 0x100]
// 0081a940  8b5b28               mov ebx, dword ptr [ebx + 0x28]
// 0081a943  f7d8                 neg eax
// 0081a945  1bc0                 sbb eax, eax
// 0081a947  f7d8                 neg eax
// 0081a949  f7df                 neg edi
// 0081a94b  1bff                 sbb edi, edi
// 0081a94d  83e7fe               and edi, 0xfffffffe
// 0081a950  83c702               add edi, 2
// 0081a953  03c7                 add eax, edi
// 0081a955  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0081a959  8b17                 mov edx, dword ptr [edi]
// 0081a95b  895620               mov dword ptr [esi + 0x20], edx
// 0081a95e  8b4f04               mov ecx, dword ptr [edi + 4]
// 0081a961  894e24               mov dword ptr [esi + 0x24], ecx
// 0081a964  8b5708               mov edx, dword ptr [edi + 8]
// 0081a967  895628               mov dword ptr [esi + 0x28], edx
// 0081a96a  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0081a96d  83c002               add eax, 2
// 0081a970  50                   push eax
// 0081a971  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0081a974  8b0f                 mov ecx, dword ptr [edi]
// 0081a976  8b5500               mov edx, dword ptr [ebp]
// 0081a979  8b92b0000000         mov edx, dword ptr [edx + 0xb0]
// 0081a97f  83ec10               sub esp, 0x10
// 0081a982  89442448             mov dword ptr [esp + 0x48], eax
// 0081a986  8bc4                 mov eax, esp
// 0081a988  8908                 mov dword ptr [eax], ecx
// 0081a98a  8b4f04               mov ecx, dword ptr [edi + 4]
// 0081a98d  894804               mov dword ptr [eax + 4], ecx
// 0081a990  8b4f08               mov ecx, dword ptr [edi + 8]
// 0081a993  894808               mov dword ptr [eax + 8], ecx
// 0081a996  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0081a999  89480c               mov dword ptr [eax + 0xc], ecx
// 0081a99c  6a00                 push 0
// 0081a99e  8d442430             lea eax, [esp + 0x30]
// 0081a9a2  50                   push eax
// 0081a9a3  8bcd                 mov ecx, ebp
// 0081a9a5  81e30000f00f         and ebx, 0xff00000
// 0081a9ab  ffd2                 call edx
// 0081a9ad  8b4624               mov eax, dword ptr [esi + 0x24]
// 0081a9b0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0081a9b3  8b5628               mov edx, dword ptr [esi + 0x28]
// 0081a9b6  8b762c               mov esi, dword ptr [esi + 0x2c]
// 0081a9b9  89442424             mov dword ptr [esp + 0x24], eax
// 0081a9bd  81fb00002000         cmp ebx, 0x200000
// 0081a9c3  7448                 je 0x81aa0d
// 0081a9c5  81fb00004000         cmp ebx, 0x400000
// 0081a9cb  7431                 je 0x81a9fe
// 0081a9cd  8b542418             mov edx, dword ptr [esp + 0x18]
// 0081a9d1  83c202               add edx, 2
// 0081a9d4  0117                 add dword ptr [edi], edx
// 0081a9d6  8b07                 mov eax, dword ptr [edi]
// 0081a9d8  83c102               add ecx, 2
// 0081a9db  8d50ff               lea edx, [eax - 1]
// 0081a9de  81fb00000001         cmp ebx, 0x1000000
// 0081a9e4  7446                 je 0x81aa2c
// 0081a9e6  81fb00000004         cmp ebx, 0x4000000
// 0081a9ec  7549                 jne 0x81aa37
// 0081a9ee  8b7f0c               mov edi, dword ptr [edi + 0xc]
// 0081a9f1  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 0081a9f5  83ef02               sub edi, 2
// 0081a9f8  897c2424             mov dword ptr [esp + 0x24], edi
// 0081a9fc  eb39                 jmp 0x81aa37
// 0081a9fe  8b4f08               mov ecx, dword ptr [edi + 8]
// 0081aa01  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 0081aa05  83c1fe               add ecx, -2
// 0081aa08  894f08               mov dword ptr [edi + 8], ecx
// 0081aa0b  eb2a                 jmp 0x81aa37
// 0081aa0d  8b4708               mov eax, dword ptr [edi + 8]
// 0081aa10  0307                 add eax, dword ptr [edi]
// 0081aa12  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0081aa16  99                   cdq 
// 0081aa17  2bc2                 sub eax, edx
// 0081aa19  8bc8                 mov ecx, eax
// 0081aa1b  8bc7                 mov eax, edi
// 0081aa1d  99                   cdq 
// 0081aa1e  2bc2                 sub eax, edx
// 0081aa20  d1f9                 sar ecx, 1
// 0081aa22  d1f8                 sar eax, 1
// 0081aa24  2bc8                 sub ecx, eax
// 0081aa26  49                   dec ecx
// 0081aa27  8d1439               lea edx, [ecx + edi]
// 0081aa2a  eb0b                 jmp 0x81aa37
// 0081aa2c  8b4704               mov eax, dword ptr [edi + 4]
// 0081aa2f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0081aa33  8d743002             lea esi, [eax + esi + 2]
// 0081aa37  8b442434             mov eax, dword ptr [esp + 0x34]
// 0081aa3b  8b7d00               mov edi, dword ptr [ebp]
// 0081aa3e  50                   push eax
// 0081aa3f  83ec10               sub esp, 0x10
// 0081aa42  8bc4                 mov eax, esp
// 0081aa44  8908                 mov dword ptr [eax], ecx
// 0081aa46  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0081aa4a  894804               mov dword ptr [eax + 4], ecx
// 0081aa4d  895008               mov dword ptr [eax + 8], edx
// 0081aa50  8b542424             mov edx, dword ptr [esp + 0x24]
// 0081aa54  89700c               mov dword ptr [eax + 0xc], esi
// 0081aa57  52                   push edx
// 0081aa58  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 0081aa5e  8d442428             lea eax, [esp + 0x28]
// 0081aa62  50                   push eax
// 0081aa63  8bcd                 mov ecx, ebp
// 0081aa65  ffd2                 call edx
// 0081aa67  5f                   pop edi
// 0081aa68  5e                   pop esi
// 0081aa69  5d                   pop ebp
// 0081aa6a  5b                   pop ebx
// 0081aa6b  83c420               add esp, 0x20
// 0081aa6e  c20800               ret 8
// copied from an identical function in another client (function ?DrawCheckBox@CXTPReportRecordItem@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp