// roc 2009-12 008882f0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 797 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008882f0
//
// 008882f0  837c242400           cmp dword ptr [esp + 0x24], 0
// 008882f5  56                   push esi
// 008882f6  57                   push edi
// 008882f7  8bf1                 mov esi, ecx
// 008882f9  0f85b5000000         jne 0x8883b4
// 008882ff  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 00888306  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0088830a  7542                 jne 0x88834e
// 0088830c  8bcf                 mov ecx, edi
// 0088830e  e81d0ef8ff           call 0x809130
// 00888313  85c0                 test eax, eax
// 00888315  7537                 jne 0x88834e
// 00888317  6a28                 push 0x28
// 00888319  8bce                 mov ecx, esi
// 0088831b  e82053f7ff           call 0x7fd640
// 00888320  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00888324  50                   push eax
// 00888325  8b442420             mov eax, dword ptr [esp + 0x20]
// 00888329  50                   push eax
// 0088832a  51                   push ecx
// 0088832b  8bcf                 mov ecx, edi
// 0088832d  e80e0ef8ff           call 0x809140
// 00888332  8b542420             mov edx, dword ptr [esp + 0x20]
// 00888336  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088833a  50                   push eax
// 0088833b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088833f  52                   push edx
// 00888340  50                   push eax
// 00888341  51                   push ecx
// 00888342  8bcf                 mov ecx, edi
// 00888344  e8d78bf8ff           call 0x810f20
// 00888349  5f                   pop edi
// 0088834a  5e                   pop esi
// 0088834b  c23000               ret 0x30
// 0088834e  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 00888355  742e                 je 0x888385
// 00888357  8bcf                 mov ecx, edi
// 00888359  e85228f8ff           call 0x80abb0
// 0088835e  85c0                 test eax, eax
// 00888360  7523                 jne 0x888385
// 00888362  8b4640               mov eax, dword ptr [esi + 0x40]
// 00888365  83f8ff               cmp eax, -1
// 00888368  7505                 jne 0x88836f
// 0088836a  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0088836d  eb02                 jmp 0x888371
// 0088836f  8bc8                 mov ecx, eax
// 00888371  8b4634               mov eax, dword ptr [esi + 0x34]
// 00888374  83f8ff               cmp eax, -1
// 00888377  7503                 jne 0x88837c
// 00888379  8b4630               mov eax, dword ptr [esi + 0x30]
// 0088837c  51                   push ecx
// 0088837d  50                   push eax
// 0088837e  8bcf                 mov ecx, edi
// 00888380  e8fb61f8ff           call 0x80e580
// 00888385  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00888389  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088838d  52                   push edx
// 0088838e  50                   push eax
// 0088838f  6a01                 push 1
// 00888391  8bcf                 mov ecx, edi
// 00888393  e8087ef8ff           call 0x8101a0
// 00888398  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088839c  8b542418             mov edx, dword ptr [esp + 0x18]
// 008883a0  50                   push eax
// 008883a1  8b442418             mov eax, dword ptr [esp + 0x18]
// 008883a5  51                   push ecx
// 008883a6  52                   push edx
// 008883a7  50                   push eax
// 008883a8  8bcf                 mov ecx, edi
// 008883aa  e8018bf8ff           call 0x810eb0
// 008883af  5f                   pop edi
// 008883b0  5e                   pop esi
// 008883b1  c23000               ret 0x30
// 008883b4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008883b8  8b442428             mov eax, dword ptr [esp + 0x28]
// 008883bc  83f902               cmp ecx, 2
// 008883bf  0f85b4000000         jne 0x888479
// 008883c5  85c0                 test eax, eax
// 008883c7  0f85ac000000         jne 0x888479
// 008883cd  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008883d1  8bcf                 mov ecx, edi
// 008883d3  e8580df8ff           call 0x809130
// 008883d8  85c0                 test eax, eax
// 008883da  7537                 jne 0x888413
// 008883dc  6a28                 push 0x28
// 008883de  8bce                 mov ecx, esi
// 008883e0  e85b52f7ff           call 0x7fd640
// 008883e5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008883e9  8b542418             mov edx, dword ptr [esp + 0x18]
// 008883ed  50                   push eax
// 008883ee  51                   push ecx
// 008883ef  52                   push edx
// 008883f0  8bcf                 mov ecx, edi
// 008883f2  e8490df8ff           call 0x809140
// 008883f7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008883fb  8b542418             mov edx, dword ptr [esp + 0x18]
// 008883ff  50                   push eax
// 00888400  8b442424             mov eax, dword ptr [esp + 0x24]
// 00888404  50                   push eax
// 00888405  51                   push ecx
// 00888406  52                   push edx
// 00888407  8bcf                 mov ecx, edi
// 00888409  e8128bf8ff           call 0x810f20
// 0088840e  5f                   pop edi
// 0088840f  5e                   pop esi
// 00888410  c23000               ret 0x30
// 00888413  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 0088841a  742e                 je 0x88844a
// 0088841c  8bcf                 mov ecx, edi
// 0088841e  e88d27f8ff           call 0x80abb0
// 00888423  85c0                 test eax, eax
// 00888425  7523                 jne 0x88844a
// 00888427  8b4640               mov eax, dword ptr [esi + 0x40]
// 0088842a  83f8ff               cmp eax, -1
// 0088842d  7505                 jne 0x888434
// 0088842f  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00888432  eb02                 jmp 0x888436
// 00888434  8bc8                 mov ecx, eax
// 00888436  8b4634               mov eax, dword ptr [esi + 0x34]
// 00888439  83f8ff               cmp eax, -1
// 0088843c  7503                 jne 0x888441
// 0088843e  8b4630               mov eax, dword ptr [esi + 0x30]
// 00888441  51                   push ecx
// 00888442  50                   push eax
// 00888443  8bcf                 mov ecx, edi
// 00888445  e83661f8ff           call 0x80e580
// 0088844a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088844e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00888452  50                   push eax
// 00888453  51                   push ecx
// 00888454  6a01                 push 1
// 00888456  8bcf                 mov ecx, edi
// 00888458  e8437df8ff           call 0x8101a0
// 0088845d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00888461  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00888465  50                   push eax
// 00888466  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088846a  52                   push edx
// 0088846b  50                   push eax
// 0088846c  51                   push ecx
// 0088846d  8bcf                 mov ecx, edi
// 0088846f  e83c8af8ff           call 0x810eb0
// 00888474  5f                   pop edi
// 00888475  5e                   pop esi
// 00888476  c23000               ret 0x30
// 00888479  837c243400           cmp dword ptr [esp + 0x34], 0
// 0088847e  0f8547010000         jne 0x8885cb
// 00888484  85c9                 test ecx, ecx
// 00888486  0f8543010000         jne 0x8885cf
// 0088848c  394c2424             cmp dword ptr [esp + 0x24], ecx
// 00888490  7544                 jne 0x8884d6
// 00888492  85c0                 test eax, eax
// 00888494  7549                 jne 0x8884df
// 00888496  398648010000         cmp dword ptr [esi + 0x148], eax
// 0088849c  8b742420             mov esi, dword ptr [esp + 0x20]
// 008884a0  8bce                 mov ecx, esi
// 008884a2  7407                 je 0x8884ab
// 008884a4  e8a77cf8ff           call 0x810150
// 008884a9  eb05                 jmp 0x8884b0
// 008884ab  e8900cf8ff           call 0x809140
// 008884b0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008884b4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008884b8  52                   push edx
// 008884b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 008884bd  51                   push ecx
// 008884be  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008884c2  50                   push eax
// 008884c3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008884c7  52                   push edx
// 008884c8  50                   push eax
// 008884c9  51                   push ecx
// 008884ca  8bce                 mov ecx, esi
// 008884cc  e8df89f8ff           call 0x810eb0
// 008884d1  5f                   pop edi
// 008884d2  5e                   pop esi
// 008884d3  c23000               ret 0x30
// 008884d6  85c0                 test eax, eax
// 008884d8  740e                 je 0x8884e8
// 008884da  e9bb000000           jmp 0x88859a
// 008884df  83f801               cmp eax, 1
// 008884e2  0f85a5000000         jne 0x88858d
// 008884e8  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008884ef  8b742420             mov esi, dword ptr [esp + 0x20]
// 008884f3  746b                 je 0x888560
// 008884f5  8bce                 mov ecx, esi
// 008884f7  e8847cf8ff           call 0x810180
// 008884fc  8bc8                 mov ecx, eax
// 008884fe  e89d23f8ff           call 0x80a8a0
// 00888503  85c0                 test eax, eax
// 00888505  7559                 jne 0x888560
// 00888507  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088850b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088850f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00888513  53                   push ebx
// 00888514  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00888518  55                   push ebp
// 00888519  52                   push edx
// 0088851a  50                   push eax
// 0088851b  8bce                 mov ecx, esi
// 0088851d  47                   inc edi
// 0088851e  43                   inc ebx
// 0088851f  e85c7cf8ff           call 0x810180
// 00888524  50                   push eax
// 00888525  53                   push ebx
// 00888526  57                   push edi
// 00888527  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0088852b  57                   push edi
// 0088852c  8bce                 mov ecx, esi
// 0088852e  e87d89f8ff           call 0x810eb0
// 00888533  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00888537  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088853b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0088853f  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00888543  51                   push ecx
// 00888544  52                   push edx
// 00888545  8bce                 mov ecx, esi
// 00888547  4b                   dec ebx
// 00888548  4d                   dec ebp
// 00888549  e80226f8ff           call 0x80ab50
// 0088854e  50                   push eax
// 0088854f  55                   push ebp
// 00888550  53                   push ebx
// 00888551  57                   push edi
// 00888552  8bce                 mov ecx, esi
// 00888554  e85789f8ff           call 0x810eb0
// 00888559  5d                   pop ebp
// 0088855a  5b                   pop ebx
// 0088855b  5f                   pop edi
// 0088855c  5e                   pop esi
// 0088855d  c23000               ret 0x30
// 00888560  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00888564  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00888568  50                   push eax
// 00888569  51                   push ecx
// 0088856a  8bce                 mov ecx, esi
// 0088856c  e8df25f8ff           call 0x80ab50
// 00888571  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00888575  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00888579  50                   push eax
// 0088857a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088857e  52                   push edx
// 0088857f  50                   push eax
// 00888580  51                   push ecx
// 00888581  8bce                 mov ecx, esi
// 00888583  e82889f8ff           call 0x810eb0
// 00888588  5f                   pop edi
// 00888589  5e                   pop esi
// 0088858a  c23000               ret 0x30
// 0088858d  50                   push eax
// 0088858e  e89dd4f6ff           call 0x7f5a30
// 00888593  83c404               add esp, 4
// 00888596  85c0                 test eax, eax
// 00888598  746e                 je 0x888608
// 0088859a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088859e  8b442418             mov eax, dword ptr [esp + 0x18]
// 008885a2  8b742420             mov esi, dword ptr [esp + 0x20]
// 008885a6  52                   push edx
// 008885a7  50                   push eax
// 008885a8  8bce                 mov ecx, esi
// 008885aa  e8e125f8ff           call 0x80ab90
// 008885af  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008885b3  8b542418             mov edx, dword ptr [esp + 0x18]
// 008885b7  50                   push eax
// 008885b8  8b442418             mov eax, dword ptr [esp + 0x18]
// 008885bc  51                   push ecx
// 008885bd  52                   push edx
// 008885be  50                   push eax
// 008885bf  8bce                 mov ecx, esi
// 008885c1  e8ea88f8ff           call 0x810eb0
// 008885c6  5f                   pop edi
// 008885c7  5e                   pop esi
// 008885c8  c23000               ret 0x30
// 008885cb  85c9                 test ecx, ecx
// 008885cd  740d                 je 0x8885dc
// 008885cf  8b742420             mov esi, dword ptr [esp + 0x20]
// 008885d3  8bce                 mov ecx, esi
// 008885d5  e89625f8ff           call 0x80ab70
// 008885da  eb0b                 jmp 0x8885e7
// 008885dc  8b742420             mov esi, dword ptr [esp + 0x20]
// 008885e0  8bce                 mov ecx, esi
// 008885e2  e8590bf8ff           call 0x809140
// 008885e7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008885eb  8b542418             mov edx, dword ptr [esp + 0x18]
// 008885ef  51                   push ecx
// 008885f0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008885f4  52                   push edx
// 008885f5  8b542414             mov edx, dword ptr [esp + 0x14]
// 008885f9  50                   push eax
// 008885fa  8b442420             mov eax, dword ptr [esp + 0x20]
// 008885fe  50                   push eax
// 008885ff  51                   push ecx
// 00888600  52                   push edx
// 00888601  8bce                 mov ecx, esi
// 00888603  e8a888f8ff           call 0x810eb0
// 00888608  5f                   pop edi
// 00888609  5e                   pop esi
// 0088860a  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawImage@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@VCPoint@@VCSize@@PAVCXTPImageManagerIcon@@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
