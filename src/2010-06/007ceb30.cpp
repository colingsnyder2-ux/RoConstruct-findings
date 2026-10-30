// roc 2010-06 007ceb30  unit: CInstanceRecord::CNameItem  size: 1045 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ceb30
//
// 007ceb30  6aff                 push -1
// 007ceb32  682b089b00           push 0x9b082b
// 007ceb37  64a100000000         mov eax, dword ptr fs:[0]
// 007ceb3d  50                   push eax
// 007ceb3e  83ec34               sub esp, 0x34
// 007ceb41  53                   push ebx
// 007ceb42  55                   push ebp
// 007ceb43  56                   push esi
// 007ceb44  57                   push edi
// 007ceb45  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007ceb4a  33c4                 xor eax, esp
// 007ceb4c  50                   push eax
// 007ceb4d  8d442448             lea eax, [esp + 0x48]
// 007ceb51  64a300000000         mov dword ptr fs:[0], eax
// 007ceb57  894c2414             mov dword ptr [esp + 0x14], ecx
// 007ceb5b  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 007ceb5f  8b4704               mov eax, dword ptr [edi + 4]
// 007ceb62  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007ceb68  8b6f24               mov ebp, dword ptr [edi + 0x24]
// 007ceb6b  33c0                 xor eax, eax
// 007ceb6d  8d7714               lea esi, [edi + 0x14]
// 007ceb70  894c2458             mov dword ptr [esp + 0x58], ecx
// 007ceb74  89442434             mov dword ptr [esp + 0x34], eax
// 007ceb78  c7442430e06da500     mov dword ptr [esp + 0x30], 0xa56de0
// 007ceb80  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007ceb83  8b5608               mov edx, dword ptr [esi + 8]
// 007ceb86  8b1e                 mov ebx, dword ptr [esi]
// 007ceb88  89442450             mov dword ptr [esp + 0x50], eax
// 007ceb8c  8b4604               mov eax, dword ptr [esi + 4]
// 007ceb8f  51                   push ecx
// 007ceb90  52                   push edx
// 007ceb91  48                   dec eax
// 007ceb92  50                   push eax
// 007ceb93  53                   push ebx
// 007ceb94  ff1554a19e00         call dword ptr [0x9ea154]
// 007ceb9a  50                   push eax
// 007ceb9b  8d4c2434             lea ecx, [esp + 0x34]
// 007ceb9f  e8c693fdff           call 0x7a7f6a
// 007ceba4  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 007ceba8  750c                 jne 0x7cebb6
// 007cebaa  8d542430             lea edx, [esp + 0x30]
// 007cebae  52                   push edx
// 007cebaf  8bcd                 mov ecx, ebp
// 007cebb1  e8eae31a00           call 0x97cfa0
// 007cebb6  6a40                 push 0x40
// 007cebb8  e8e38dfdff           call 0x7a79a0
// 007cebbd  8bd8                 mov ebx, eax
// 007cebbf  83c404               add esp, 4
// 007cebc2  895c2424             mov dword ptr [esp + 0x24], ebx
// 007cebc6  c644245001           mov byte ptr [esp + 0x50], 1
// 007cebcb  85db                 test ebx, ebx
// 007cebcd  7436                 je 0x7cec05
// 007cebcf  8bcb                 mov ecx, ebx
// 007cebd1  e8a8e11a00           call 0x97cd7e
// 007cebd6  8d4b2c               lea ecx, [ebx + 0x2c]
// 007cebd9  c703348ca500         mov dword ptr [ebx], 0xa58c34
// 007cebdf  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 007cebe5  33c9                 xor ecx, ecx
// 007cebe7  83c8ff               or eax, 0xffffffff
// 007cebea  894b20               mov dword ptr [ebx + 0x20], ecx
// 007cebed  894324               mov dword ptr [ebx + 0x24], eax
// 007cebf0  894328               mov dword ptr [ebx + 0x28], eax
// 007cebf3  894330               mov dword ptr [ebx + 0x30], eax
// 007cebf6  c7433408020000       mov dword ptr [ebx + 0x34], 0x208
// 007cebfd  894b38               mov dword ptr [ebx + 0x38], ecx
// 007cec00  89433c               mov dword ptr [ebx + 0x3c], eax
// 007cec03  eb02                 jmp 0x7cec07
// 007cec05  33db                 xor ebx, ebx
// 007cec07  8b570c               mov edx, dword ptr [edi + 0xc]
// 007cec0a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007cec0e  8b01                 mov eax, dword ptr [ecx]
// 007cec10  8b406c               mov eax, dword ptr [eax + 0x6c]
// 007cec13  52                   push edx
// 007cec14  8d54241c             lea edx, [esp + 0x1c]
// 007cec18  52                   push edx
// 007cec19  c644245800           mov byte ptr [esp + 0x58], 0
// 007cec1e  ffd0                 call eax
// 007cec20  8d4b2c               lea ecx, [ebx + 0x2c]
// 007cec23  50                   push eax
// 007cec24  c644245402           mov byte ptr [esp + 0x54], 2
// 007cec29  ff1580c59e00         call dword ptr [0x9ec580]
// 007cec2f  8d4c2418             lea ecx, [esp + 0x18]
// 007cec33  c644245000           mov byte ptr [esp + 0x50], 0
// 007cec38  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cec3e  8b4f08               mov ecx, dword ptr [edi + 8]
// 007cec41  8b11                 mov edx, dword ptr [ecx]
// 007cec43  8b82d8000000         mov eax, dword ptr [edx + 0xd8]
// 007cec49  53                   push ebx
// 007cec4a  57                   push edi
// 007cec4b  ffd0                 call eax
// 007cec4d  8b4328               mov eax, dword ptr [ebx + 0x28]
// 007cec50  83f8ff               cmp eax, -1
// 007cec53  7409                 je 0x7cec5e
// 007cec55  50                   push eax
// 007cec56  56                   push esi
// 007cec57  8bcd                 mov ecx, ebp
// 007cec59  e8e09afdff           call 0x7a873e
// 007cec5e  8b0e                 mov ecx, dword ptr [esi]
// 007cec60  894c2424             mov dword ptr [esp + 0x24], ecx
// 007cec64  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 007cec67  85c9                 test ecx, ecx
// 007cec69  0f84a3010000         je 0x7cee12
// 007cec6f  e81ccf0000           call 0x7dbb90
// 007cec74  85c0                 test eax, eax
// 007cec76  0f8496010000         je 0x7cee12
// 007cec7c  8b5708               mov edx, dword ptr [edi + 8]
// 007cec7f  8bca                 mov ecx, edx
// 007cec81  8b01                 mov eax, dword ptr [ecx]
// 007cec83  89542418             mov dword ptr [esp + 0x18], edx
// 007cec87  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 007cec8d  ffd2                 call edx
// 007cec8f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007cec93  8944241c             mov dword ptr [esp + 0x1c], eax
// 007cec97  8b01                 mov eax, dword ptr [ecx]
// 007cec99  8b90dc000000         mov edx, dword ptr [eax + 0xdc]
// 007cec9f  ffd2                 call edx
// 007ceca1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ceca5  2bc8                 sub ecx, eax
// 007ceca7  85c9                 test ecx, ecx
// 007ceca9  7e01                 jle 0x7cecac
// 007cecab  41                   inc ecx
// 007cecac  51                   push ecx
// 007cecad  8b4f04               mov ecx, dword ptr [edi + 4]
// 007cecb0  e88b180000           call 0x7d0540
// 007cecb5  0106                 add dword ptr [esi], eax
// 007cecb7  8b4f08               mov ecx, dword ptr [edi + 8]
// 007cecba  8b01                 mov eax, dword ptr [ecx]
// 007cecbc  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 007cecc2  ffd2                 call edx
// 007cecc4  8b4e04               mov ecx, dword ptr [esi + 4]
// 007cecc7  8b5608               mov edx, dword ptr [esi + 8]
// 007cecca  89442418             mov dword ptr [esp + 0x18], eax
// 007cecce  8b06                 mov eax, dword ptr [esi]
// 007cecd0  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007cecd4  8d4c2438             lea ecx, [esp + 0x38]
// 007cecd8  51                   push ecx
// 007cecd9  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007cecdd  8944243c             mov dword ptr [esp + 0x3c], eax
// 007cece1  8b460c               mov eax, dword ptr [esi + 0xc]
// 007cece4  89542444             mov dword ptr [esp + 0x44], edx
// 007cece8  8b5708               mov edx, dword ptr [edi + 8]
// 007ceceb  52                   push edx
// 007cecec  8944244c             mov dword ptr [esp + 0x4c], eax
// 007cecf0  6a00                 push 0
// 007cecf2  8d442434             lea eax, [esp + 0x34]
// 007cecf6  50                   push eax
// 007cecf7  e844080800           call 0x84f540
// 007cecfc  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007ced00  8b11                 mov edx, dword ptr [ecx]
// 007ced02  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007ced06  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007ced0a  8b92b8000000         mov edx, dword ptr [edx + 0xb8]
// 007ced10  50                   push eax
// 007ced11  51                   push ecx
// 007ced12  8b0e                 mov ecx, dword ptr [esi]
// 007ced14  83ec10               sub esp, 0x10
// 007ced17  8bc4                 mov eax, esp
// 007ced19  8908                 mov dword ptr [eax], ecx
// 007ced1b  8b4e04               mov ecx, dword ptr [esi + 4]
// 007ced1e  894804               mov dword ptr [eax + 4], ecx
// 007ced21  8b4e08               mov ecx, dword ptr [esi + 8]
// 007ced24  894808               mov dword ptr [eax + 8], ecx
// 007ced27  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007ced2a  53                   push ebx
// 007ced2b  89480c               mov dword ptr [eax + 0xc], ecx
// 007ced2e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007ced32  57                   push edi
// 007ced33  ffd2                 call edx
// 007ced35  8b4728               mov eax, dword ptr [edi + 0x28]
// 007ced38  250000f00f           and eax, 0xff00000
// 007ced3d  3d00001000           cmp eax, 0x100000
// 007ced42  7418                 je 0x7ced5c
// 007ced44  3d00004000           cmp eax, 0x400000
// 007ced49  7523                 jne 0x7ced6e
// 007ced4b  8b442440             mov eax, dword ptr [esp + 0x40]
// 007ced4f  2b442428             sub eax, dword ptr [esp + 0x28]
// 007ced53  83e802               sub eax, 2
// 007ced56  89442438             mov dword ptr [esp + 0x38], eax
// 007ced5a  eb41                 jmp 0x7ced9d
// 007ced5c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007ced60  8b542438             mov edx, dword ptr [esp + 0x38]
// 007ced64  8d440a02             lea eax, [edx + ecx + 2]
// 007ced68  89442440             mov dword ptr [esp + 0x40], eax
// 007ced6c  eb2f                 jmp 0x7ced9d
// 007ced6e  3d00000001           cmp eax, 0x1000000
// 007ced73  7418                 je 0x7ced8d
// 007ced75  3d00000004           cmp eax, 0x4000000
// 007ced7a  7521                 jne 0x7ced9d
// 007ced7c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007ced80  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 007ced84  83e902               sub ecx, 2
// 007ced87  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007ced8b  eb10                 jmp 0x7ced9d
// 007ced8d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007ced91  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007ced95  8d4c1002             lea ecx, [eax + edx + 2]
// 007ced99  894c2444             mov dword ptr [esp + 0x44], ecx
// 007ced9d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ceda1  8b4708               mov eax, dword ptr [edi + 8]
// 007ceda4  f7d9                 neg ecx
// 007ceda6  8d542438             lea edx, [esp + 0x38]
// 007cedaa  52                   push edx
// 007cedab  1bc9                 sbb ecx, ecx
// 007cedad  50                   push eax
// 007cedae  23cd                 and ecx, ebp
// 007cedb0  51                   push ecx
// 007cedb1  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007cedb5  8d542428             lea edx, [esp + 0x28]
// 007cedb9  52                   push edx
// 007cedba  e881070800           call 0x84f540
// 007cedbf  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 007cedc3  8b08                 mov ecx, dword ptr [eax]
// 007cedc5  894c2428             mov dword ptr [esp + 0x28], ecx
// 007cedc9  8b5004               mov edx, dword ptr [eax + 4]
// 007cedcc  8954242c             mov dword ptr [esp + 0x2c], edx
// 007cedd0  7537                 jne 0x7cee09
// 007cedd2  837c241800           cmp dword ptr [esp + 0x18], 0
// 007cedd7  7430                 je 0x7cee09
// 007cedd9  8b4708               mov eax, dword ptr [edi + 8]
// 007ceddc  8b10                 mov edx, dword ptr [eax]
// 007cedde  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007cede2  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 007cede8  83ec10               sub esp, 0x10
// 007cedeb  8bc4                 mov eax, esp
// 007ceded  8908                 mov dword ptr [eax], ecx
// 007cedef  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007cedf3  894804               mov dword ptr [eax + 4], ecx
// 007cedf6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007cedfa  894808               mov dword ptr [eax + 8], ecx
// 007cedfd  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007cee01  89480c               mov dword ptr [eax + 0xc], ecx
// 007cee04  8b4f08               mov ecx, dword ptr [edi + 8]
// 007cee07  ffd2                 call edx
// 007cee09  8b442428             mov eax, dword ptr [esp + 0x28]
// 007cee0d  83c002               add eax, 2
// 007cee10  0106                 add dword ptr [esi], eax
// 007cee12  8b5500               mov edx, dword ptr [ebp]
// 007cee15  8b4324               mov eax, dword ptr [ebx + 0x24]
// 007cee18  8b5238               mov edx, dword ptr [edx + 0x38]
// 007cee1b  50                   push eax
// 007cee1c  8bcd                 mov ecx, ebp
// 007cee1e  ffd2                 call edx
// 007cee20  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007cee23  8b4500               mov eax, dword ptr [ebp]
// 007cee26  8b5030               mov edx, dword ptr [eax + 0x30]
// 007cee29  51                   push ecx
// 007cee2a  8bcd                 mov ecx, ebp
// 007cee2c  ffd2                 call edx
// 007cee2e  8944241c             mov dword ptr [esp + 0x1c], eax
// 007cee32  8b4328               mov eax, dword ptr [ebx + 0x28]
// 007cee35  83f8ff               cmp eax, -1
// 007cee38  7515                 jne 0x7cee4f
// 007cee3a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007cee3e  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 007cee44  83f8ff               cmp eax, -1
// 007cee47  7506                 jne 0x7cee4f
// 007cee49  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 007cee4f  8b5500               mov edx, dword ptr [ebp]
// 007cee52  50                   push eax
// 007cee53  8b4234               mov eax, dword ptr [edx + 0x34]
// 007cee56  8bcd                 mov ecx, ebp
// 007cee58  ffd0                 call eax
// 007cee5a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007cee5e  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 007cee62  7410                 je 0x7cee74
// 007cee64  8b11                 mov edx, dword ptr [ecx]
// 007cee66  8b8210010000         mov eax, dword ptr [edx + 0x110]
// 007cee6c  56                   push esi
// 007cee6d  57                   push edi
// 007cee6e  ffd0                 call eax
// 007cee70  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007cee74  837b3cff             cmp dword ptr [ebx + 0x3c], -1
// 007cee78  7513                 jne 0x7cee8d
// 007cee7a  8b11                 mov edx, dword ptr [ecx]
// 007cee7c  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 007cee82  ffd0                 call eax
// 007cee84  83f8ff               cmp eax, -1
// 007cee87  7427                 je 0x7ceeb0
// 007cee89  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007cee8d  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 007cee90  83f8ff               cmp eax, -1
// 007cee93  750a                 jne 0x7cee9f
// 007cee95  8b11                 mov edx, dword ptr [ecx]
// 007cee97  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 007cee9d  ffd0                 call eax
// 007cee9f  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007ceea3  8b11                 mov edx, dword ptr [ecx]
// 007ceea5  50                   push eax
// 007ceea6  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 007ceeac  56                   push esi
// 007ceead  57                   push edi
// 007ceeae  ffd0                 call eax
// 007ceeb0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ceeb4  8b11                 mov edx, dword ptr [ecx]
// 007ceeb6  8b36                 mov esi, dword ptr [esi]
// 007ceeb8  8b425c               mov eax, dword ptr [edx + 0x5c]
// 007ceebb  2b742424             sub esi, dword ptr [esp + 0x24]
// 007ceebf  53                   push ebx
// 007ceec0  57                   push edi
// 007ceec1  ffd0                 call eax
// 007ceec3  8d4c2428             lea ecx, [esp + 0x28]
// 007ceec7  51                   push ecx
// 007ceec8  8d7b2c               lea edi, [ebx + 0x2c]
// 007ceecb  8bcf                 mov ecx, edi
// 007ceecd  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007ceed3  50                   push eax
// 007ceed4  8bcf                 mov ecx, edi
// 007ceed6  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007ceedc  8b5508               mov edx, dword ptr [ebp + 8]
// 007ceedf  50                   push eax
// 007ceee0  52                   push edx
// 007ceee1  ff1594a19e00         call dword ptr [0x9ea194]
// 007ceee7  8b442428             mov eax, dword ptr [esp + 0x28]
// 007ceeeb  8b5500               mov edx, dword ptr [ebp]
// 007ceeee  8b5230               mov edx, dword ptr [edx + 0x30]
// 007ceef1  8d743004             lea esi, [eax + esi + 4]
// 007ceef5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ceef9  50                   push eax
// 007ceefa  8bcd                 mov ecx, ebp
// 007ceefc  ffd2                 call edx
// 007ceefe  8bcb                 mov ecx, ebx
// 007cef00  e81790fdff           call 0x7a7f1c
// 007cef05  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 007cef09  7509                 jne 0x7cef14
// 007cef0b  6a00                 push 0
// 007cef0d  8bcd                 mov ecx, ebp
// 007cef0f  e88ce01a00           call 0x97cfa0
// 007cef14  8d4c2430             lea ecx, [esp + 0x30]
// 007cef18  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 007cef20  c7442430e06da500     mov dword ptr [esp + 0x30], 0xa56de0
// 007cef28  e83307c4ff           call 0x40f660
// 007cef2d  8bc6                 mov eax, esi
// 007cef2f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007cef33  64890d00000000       mov dword ptr fs:[0], ecx
// 007cef3a  59                   pop ecx
// 007cef3b  5f                   pop edi
// 007cef3c  5e                   pop esi
// 007cef3d  5d                   pop ebp
// 007cef3e  5b                   pop ebx
// 007cef3f  83c440               add esp, 0x40
// 007cef42  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPReportRecordItem@@UAEHPAUXTP_REPORTRECORDITEM_DRAWARGS@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportRecordItem.cpp