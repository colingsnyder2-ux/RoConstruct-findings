// roc 2010-06 0083b870  unit: XTPPaintThemes::CXTPOfficeTheme  size: 797 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083b870
//
// 0083b870  837c242400           cmp dword ptr [esp + 0x24], 0
// 0083b875  56                   push esi
// 0083b876  57                   push edi
// 0083b877  8bf1                 mov esi, ecx
// 0083b879  0f85b5000000         jne 0x83b934
// 0083b87f  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 0083b886  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0083b88a  7542                 jne 0x83b8ce
// 0083b88c  8bcf                 mov ecx, edi
// 0083b88e  e83d1af8ff           call 0x7bd2d0
// 0083b893  85c0                 test eax, eax
// 0083b895  7537                 jne 0x83b8ce
// 0083b897  6a28                 push 0x28
// 0083b899  8bce                 mov ecx, esi
// 0083b89b  e87018f7ff           call 0x7ad110
// 0083b8a0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083b8a4  50                   push eax
// 0083b8a5  8b442420             mov eax, dword ptr [esp + 0x20]
// 0083b8a9  50                   push eax
// 0083b8aa  51                   push ecx
// 0083b8ab  8bcf                 mov ecx, edi
// 0083b8ad  e82e1af8ff           call 0x7bd2e0
// 0083b8b2  8b542420             mov edx, dword ptr [esp + 0x20]
// 0083b8b6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083b8ba  50                   push eax
// 0083b8bb  8b442420             mov eax, dword ptr [esp + 0x20]
// 0083b8bf  52                   push edx
// 0083b8c0  50                   push eax
// 0083b8c1  51                   push ecx
// 0083b8c2  8bcf                 mov ecx, edi
// 0083b8c4  e8f796f8ff           call 0x7c4fc0
// 0083b8c9  5f                   pop edi
// 0083b8ca  5e                   pop esi
// 0083b8cb  c23000               ret 0x30
// 0083b8ce  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 0083b8d5  742e                 je 0x83b905
// 0083b8d7  8bcf                 mov ecx, edi
// 0083b8d9  e82234f8ff           call 0x7bed00
// 0083b8de  85c0                 test eax, eax
// 0083b8e0  7523                 jne 0x83b905
// 0083b8e2  8b4640               mov eax, dword ptr [esi + 0x40]
// 0083b8e5  83f8ff               cmp eax, -1
// 0083b8e8  7505                 jne 0x83b8ef
// 0083b8ea  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0083b8ed  eb02                 jmp 0x83b8f1
// 0083b8ef  8bc8                 mov ecx, eax
// 0083b8f1  8b4634               mov eax, dword ptr [esi + 0x34]
// 0083b8f4  83f8ff               cmp eax, -1
// 0083b8f7  7503                 jne 0x83b8fc
// 0083b8f9  8b4630               mov eax, dword ptr [esi + 0x30]
// 0083b8fc  51                   push ecx
// 0083b8fd  50                   push eax
// 0083b8fe  8bcf                 mov ecx, edi
// 0083b900  e81b6df8ff           call 0x7c2620
// 0083b905  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0083b909  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083b90d  52                   push edx
// 0083b90e  50                   push eax
// 0083b90f  6a01                 push 1
// 0083b911  8bcf                 mov ecx, edi
// 0083b913  e82889f8ff           call 0x7c4240
// 0083b918  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0083b91c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0083b920  50                   push eax
// 0083b921  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083b925  51                   push ecx
// 0083b926  52                   push edx
// 0083b927  50                   push eax
// 0083b928  8bcf                 mov ecx, edi
// 0083b92a  e82196f8ff           call 0x7c4f50
// 0083b92f  5f                   pop edi
// 0083b930  5e                   pop esi
// 0083b931  c23000               ret 0x30
// 0083b934  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0083b938  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083b93c  83f902               cmp ecx, 2
// 0083b93f  0f85b4000000         jne 0x83b9f9
// 0083b945  85c0                 test eax, eax
// 0083b947  0f85ac000000         jne 0x83b9f9
// 0083b94d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0083b951  8bcf                 mov ecx, edi
// 0083b953  e87819f8ff           call 0x7bd2d0
// 0083b958  85c0                 test eax, eax
// 0083b95a  7537                 jne 0x83b993
// 0083b95c  6a28                 push 0x28
// 0083b95e  8bce                 mov ecx, esi
// 0083b960  e8ab17f7ff           call 0x7ad110
// 0083b965  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0083b969  8b542418             mov edx, dword ptr [esp + 0x18]
// 0083b96d  50                   push eax
// 0083b96e  51                   push ecx
// 0083b96f  52                   push edx
// 0083b970  8bcf                 mov ecx, edi
// 0083b972  e86919f8ff           call 0x7bd2e0
// 0083b977  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0083b97b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0083b97f  50                   push eax
// 0083b980  8b442424             mov eax, dword ptr [esp + 0x24]
// 0083b984  50                   push eax
// 0083b985  51                   push ecx
// 0083b986  52                   push edx
// 0083b987  8bcf                 mov ecx, edi
// 0083b989  e83296f8ff           call 0x7c4fc0
// 0083b98e  5f                   pop edi
// 0083b98f  5e                   pop esi
// 0083b990  c23000               ret 0x30
// 0083b993  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 0083b99a  742e                 je 0x83b9ca
// 0083b99c  8bcf                 mov ecx, edi
// 0083b99e  e85d33f8ff           call 0x7bed00
// 0083b9a3  85c0                 test eax, eax
// 0083b9a5  7523                 jne 0x83b9ca
// 0083b9a7  8b4640               mov eax, dword ptr [esi + 0x40]
// 0083b9aa  83f8ff               cmp eax, -1
// 0083b9ad  7505                 jne 0x83b9b4
// 0083b9af  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0083b9b2  eb02                 jmp 0x83b9b6
// 0083b9b4  8bc8                 mov ecx, eax
// 0083b9b6  8b4634               mov eax, dword ptr [esi + 0x34]
// 0083b9b9  83f8ff               cmp eax, -1
// 0083b9bc  7503                 jne 0x83b9c1
// 0083b9be  8b4630               mov eax, dword ptr [esi + 0x30]
// 0083b9c1  51                   push ecx
// 0083b9c2  50                   push eax
// 0083b9c3  8bcf                 mov ecx, edi
// 0083b9c5  e8566cf8ff           call 0x7c2620
// 0083b9ca  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083b9ce  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083b9d2  50                   push eax
// 0083b9d3  51                   push ecx
// 0083b9d4  6a01                 push 1
// 0083b9d6  8bcf                 mov ecx, edi
// 0083b9d8  e86388f8ff           call 0x7c4240
// 0083b9dd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0083b9e1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083b9e5  50                   push eax
// 0083b9e6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083b9ea  52                   push edx
// 0083b9eb  50                   push eax
// 0083b9ec  51                   push ecx
// 0083b9ed  8bcf                 mov ecx, edi
// 0083b9ef  e85c95f8ff           call 0x7c4f50
// 0083b9f4  5f                   pop edi
// 0083b9f5  5e                   pop esi
// 0083b9f6  c23000               ret 0x30
// 0083b9f9  837c243400           cmp dword ptr [esp + 0x34], 0
// 0083b9fe  0f8547010000         jne 0x83bb4b
// 0083ba04  85c9                 test ecx, ecx
// 0083ba06  0f8543010000         jne 0x83bb4f
// 0083ba0c  394c2424             cmp dword ptr [esp + 0x24], ecx
// 0083ba10  7544                 jne 0x83ba56
// 0083ba12  85c0                 test eax, eax
// 0083ba14  7549                 jne 0x83ba5f
// 0083ba16  398648010000         cmp dword ptr [esi + 0x148], eax
// 0083ba1c  8b742420             mov esi, dword ptr [esp + 0x20]
// 0083ba20  8bce                 mov ecx, esi
// 0083ba22  7407                 je 0x83ba2b
// 0083ba24  e8c787f8ff           call 0x7c41f0
// 0083ba29  eb05                 jmp 0x83ba30
// 0083ba2b  e8b018f8ff           call 0x7bd2e0
// 0083ba30  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0083ba34  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083ba38  52                   push edx
// 0083ba39  8b542418             mov edx, dword ptr [esp + 0x18]
// 0083ba3d  51                   push ecx
// 0083ba3e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083ba42  50                   push eax
// 0083ba43  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083ba47  52                   push edx
// 0083ba48  50                   push eax
// 0083ba49  51                   push ecx
// 0083ba4a  8bce                 mov ecx, esi
// 0083ba4c  e8ff94f8ff           call 0x7c4f50
// 0083ba51  5f                   pop edi
// 0083ba52  5e                   pop esi
// 0083ba53  c23000               ret 0x30
// 0083ba56  85c0                 test eax, eax
// 0083ba58  740e                 je 0x83ba68
// 0083ba5a  e9bb000000           jmp 0x83bb1a
// 0083ba5f  83f801               cmp eax, 1
// 0083ba62  0f85a5000000         jne 0x83bb0d
// 0083ba68  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0083ba6f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0083ba73  746b                 je 0x83bae0
// 0083ba75  8bce                 mov ecx, esi
// 0083ba77  e8a487f8ff           call 0x7c4220
// 0083ba7c  8bc8                 mov ecx, eax
// 0083ba7e  e86d2ff8ff           call 0x7be9f0
// 0083ba83  85c0                 test eax, eax
// 0083ba85  7559                 jne 0x83bae0
// 0083ba87  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0083ba8b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083ba8f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0083ba93  53                   push ebx
// 0083ba94  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0083ba98  55                   push ebp
// 0083ba99  52                   push edx
// 0083ba9a  50                   push eax
// 0083ba9b  8bce                 mov ecx, esi
// 0083ba9d  47                   inc edi
// 0083ba9e  43                   inc ebx
// 0083ba9f  e87c87f8ff           call 0x7c4220
// 0083baa4  50                   push eax
// 0083baa5  53                   push ebx
// 0083baa6  57                   push edi
// 0083baa7  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0083baab  57                   push edi
// 0083baac  8bce                 mov ecx, esi
// 0083baae  e89d94f8ff           call 0x7c4f50
// 0083bab3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0083bab7  8b542420             mov edx, dword ptr [esp + 0x20]
// 0083babb  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0083babf  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0083bac3  51                   push ecx
// 0083bac4  52                   push edx
// 0083bac5  8bce                 mov ecx, esi
// 0083bac7  4b                   dec ebx
// 0083bac8  4d                   dec ebp
// 0083bac9  e8d231f8ff           call 0x7beca0
// 0083bace  50                   push eax
// 0083bacf  55                   push ebp
// 0083bad0  53                   push ebx
// 0083bad1  57                   push edi
// 0083bad2  8bce                 mov ecx, esi
// 0083bad4  e87794f8ff           call 0x7c4f50
// 0083bad9  5d                   pop ebp
// 0083bada  5b                   pop ebx
// 0083badb  5f                   pop edi
// 0083badc  5e                   pop esi
// 0083badd  c23000               ret 0x30
// 0083bae0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083bae4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083bae8  50                   push eax
// 0083bae9  51                   push ecx
// 0083baea  8bce                 mov ecx, esi
// 0083baec  e8af31f8ff           call 0x7beca0
// 0083baf1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0083baf5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083baf9  50                   push eax
// 0083bafa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083bafe  52                   push edx
// 0083baff  50                   push eax
// 0083bb00  51                   push ecx
// 0083bb01  8bce                 mov ecx, esi
// 0083bb03  e84894f8ff           call 0x7c4f50
// 0083bb08  5f                   pop edi
// 0083bb09  5e                   pop esi
// 0083bb0a  c23000               ret 0x30
// 0083bb0d  50                   push eax
// 0083bb0e  e85de0f6ff           call 0x7a9b70
// 0083bb13  83c404               add esp, 4
// 0083bb16  85c0                 test eax, eax
// 0083bb18  746e                 je 0x83bb88
// 0083bb1a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0083bb1e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083bb22  8b742420             mov esi, dword ptr [esp + 0x20]
// 0083bb26  52                   push edx
// 0083bb27  50                   push eax
// 0083bb28  8bce                 mov ecx, esi
// 0083bb2a  e8b131f8ff           call 0x7bece0
// 0083bb2f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0083bb33  8b542418             mov edx, dword ptr [esp + 0x18]
// 0083bb37  50                   push eax
// 0083bb38  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083bb3c  51                   push ecx
// 0083bb3d  52                   push edx
// 0083bb3e  50                   push eax
// 0083bb3f  8bce                 mov ecx, esi
// 0083bb41  e80a94f8ff           call 0x7c4f50
// 0083bb46  5f                   pop edi
// 0083bb47  5e                   pop esi
// 0083bb48  c23000               ret 0x30
// 0083bb4b  85c9                 test ecx, ecx
// 0083bb4d  740d                 je 0x83bb5c
// 0083bb4f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0083bb53  8bce                 mov ecx, esi
// 0083bb55  e86631f8ff           call 0x7becc0
// 0083bb5a  eb0b                 jmp 0x83bb67
// 0083bb5c  8b742420             mov esi, dword ptr [esp + 0x20]
// 0083bb60  8bce                 mov ecx, esi
// 0083bb62  e87917f8ff           call 0x7bd2e0
// 0083bb67  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0083bb6b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0083bb6f  51                   push ecx
// 0083bb70  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083bb74  52                   push edx
// 0083bb75  8b542414             mov edx, dword ptr [esp + 0x14]
// 0083bb79  50                   push eax
// 0083bb7a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0083bb7e  50                   push eax
// 0083bb7f  51                   push ecx
// 0083bb80  52                   push edx
// 0083bb81  8bce                 mov ecx, esi
// 0083bb83  e8c893f8ff           call 0x7c4f50
// 0083bb88  5f                   pop edi
// 0083bb89  5e                   pop esi
// 0083bb8a  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawImage@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@VCPoint@@VCSize@@PAVCXTPImageManagerIcon@@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
