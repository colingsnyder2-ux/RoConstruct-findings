// roc 2009-12 0087c380  unit: XTPPaintThemes::CXTPDefaultTheme  size: 797 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087c380
//
// 0087c380  837c242400           cmp dword ptr [esp + 0x24], 0
// 0087c385  53                   push ebx
// 0087c386  55                   push ebp
// 0087c387  56                   push esi
// 0087c388  57                   push edi
// 0087c389  8bf1                 mov esi, ecx
// 0087c38b  0f85e9000000         jne 0x87c47a
// 0087c391  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 0087c398  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0087c39c  7574                 jne 0x87c412
// 0087c39e  8bcf                 mov ecx, edi
// 0087c3a0  e88bcdf8ff           call 0x809130
// 0087c3a5  85c0                 test eax, eax
// 0087c3a7  7569                 jne 0x87c412
// 0087c3a9  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0087c3ad  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0087c3b1  6a14                 push 0x14
// 0087c3b3  8bce                 mov ecx, esi
// 0087c3b5  43                   inc ebx
// 0087c3b6  45                   inc ebp
// 0087c3b7  e88412f8ff           call 0x7fd640
// 0087c3bc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087c3c0  50                   push eax
// 0087c3c1  8b442428             mov eax, dword ptr [esp + 0x28]
// 0087c3c5  50                   push eax
// 0087c3c6  51                   push ecx
// 0087c3c7  8bcf                 mov ecx, edi
// 0087c3c9  e872cdf8ff           call 0x809140
// 0087c3ce  50                   push eax
// 0087c3cf  55                   push ebp
// 0087c3d0  53                   push ebx
// 0087c3d1  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0087c3d5  53                   push ebx
// 0087c3d6  8bcf                 mov ecx, edi
// 0087c3d8  e8434bf9ff           call 0x810f20
// 0087c3dd  6a10                 push 0x10
// 0087c3df  8bce                 mov ecx, esi
// 0087c3e1  e85a12f8ff           call 0x7fd640
// 0087c3e6  8b542424             mov edx, dword ptr [esp + 0x24]
// 0087c3ea  50                   push eax
// 0087c3eb  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087c3ef  52                   push edx
// 0087c3f0  50                   push eax
// 0087c3f1  8bcf                 mov ecx, edi
// 0087c3f3  e848cdf8ff           call 0x809140
// 0087c3f8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0087c3fc  8b542424             mov edx, dword ptr [esp + 0x24]
// 0087c400  50                   push eax
// 0087c401  51                   push ecx
// 0087c402  52                   push edx
// 0087c403  53                   push ebx
// 0087c404  8bcf                 mov ecx, edi
// 0087c406  e8154bf9ff           call 0x810f20
// 0087c40b  5f                   pop edi
// 0087c40c  5e                   pop esi
// 0087c40d  5d                   pop ebp
// 0087c40e  5b                   pop ebx
// 0087c40f  c23000               ret 0x30
// 0087c412  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 0087c419  742e                 je 0x87c449
// 0087c41b  8bcf                 mov ecx, edi
// 0087c41d  e88ee7f8ff           call 0x80abb0
// 0087c422  85c0                 test eax, eax
// 0087c424  7523                 jne 0x87c449
// 0087c426  8b4640               mov eax, dword ptr [esi + 0x40]
// 0087c429  83f8ff               cmp eax, -1
// 0087c42c  7505                 jne 0x87c433
// 0087c42e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0087c431  eb02                 jmp 0x87c435
// 0087c433  8bc8                 mov ecx, eax
// 0087c435  8b4634               mov eax, dword ptr [esi + 0x34]
// 0087c438  83f8ff               cmp eax, -1
// 0087c43b  7503                 jne 0x87c440
// 0087c43d  8b4630               mov eax, dword ptr [esi + 0x30]
// 0087c440  51                   push ecx
// 0087c441  50                   push eax
// 0087c442  8bcf                 mov ecx, edi
// 0087c444  e83721f9ff           call 0x80e580
// 0087c449  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087c44d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087c451  50                   push eax
// 0087c452  51                   push ecx
// 0087c453  6a01                 push 1
// 0087c455  8bcf                 mov ecx, edi
// 0087c457  e8443df9ff           call 0x8101a0
// 0087c45c  8b542424             mov edx, dword ptr [esp + 0x24]
// 0087c460  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087c464  50                   push eax
// 0087c465  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087c469  52                   push edx
// 0087c46a  50                   push eax
// 0087c46b  51                   push ecx
// 0087c46c  8bcf                 mov ecx, edi
// 0087c46e  e83d4af9ff           call 0x810eb0
// 0087c473  5f                   pop edi
// 0087c474  5e                   pop esi
// 0087c475  5d                   pop ebp
// 0087c476  5b                   pop ebx
// 0087c477  c23000               ret 0x30
// 0087c47a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0087c47e  8b442430             mov eax, dword ptr [esp + 0x30]
// 0087c482  83f902               cmp ecx, 2
// 0087c485  0f85b8000000         jne 0x87c543
// 0087c48b  85c0                 test eax, eax
// 0087c48d  0f85b0000000         jne 0x87c543
// 0087c493  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0087c497  8bcf                 mov ecx, edi
// 0087c499  e892ccf8ff           call 0x809130
// 0087c49e  85c0                 test eax, eax
// 0087c4a0  7539                 jne 0x87c4db
// 0087c4a2  6a10                 push 0x10
// 0087c4a4  8bce                 mov ecx, esi
// 0087c4a6  e89511f8ff           call 0x7fd640
// 0087c4ab  8b542424             mov edx, dword ptr [esp + 0x24]
// 0087c4af  50                   push eax
// 0087c4b0  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087c4b4  52                   push edx
// 0087c4b5  50                   push eax
// 0087c4b6  8bcf                 mov ecx, edi
// 0087c4b8  e8b3e6f8ff           call 0x80ab70
// 0087c4bd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0087c4c1  8b542424             mov edx, dword ptr [esp + 0x24]
// 0087c4c5  50                   push eax
// 0087c4c6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087c4ca  51                   push ecx
// 0087c4cb  52                   push edx
// 0087c4cc  50                   push eax
// 0087c4cd  8bcf                 mov ecx, edi
// 0087c4cf  e84c4af9ff           call 0x810f20
// 0087c4d4  5f                   pop edi
// 0087c4d5  5e                   pop esi
// 0087c4d6  5d                   pop ebp
// 0087c4d7  5b                   pop ebx
// 0087c4d8  c23000               ret 0x30
// 0087c4db  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 0087c4e2  742e                 je 0x87c512
// 0087c4e4  8bcf                 mov ecx, edi
// 0087c4e6  e8c5e6f8ff           call 0x80abb0
// 0087c4eb  85c0                 test eax, eax
// 0087c4ed  7523                 jne 0x87c512
// 0087c4ef  8b4640               mov eax, dword ptr [esi + 0x40]
// 0087c4f2  83f8ff               cmp eax, -1
// 0087c4f5  7505                 jne 0x87c4fc
// 0087c4f7  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0087c4fa  eb02                 jmp 0x87c4fe
// 0087c4fc  8bc8                 mov ecx, eax
// 0087c4fe  8b4634               mov eax, dword ptr [esi + 0x34]
// 0087c501  83f8ff               cmp eax, -1
// 0087c504  7503                 jne 0x87c509
// 0087c506  8b4630               mov eax, dword ptr [esi + 0x30]
// 0087c509  51                   push ecx
// 0087c50a  50                   push eax
// 0087c50b  8bcf                 mov ecx, edi
// 0087c50d  e86e20f9ff           call 0x80e580
// 0087c512  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087c516  8b542420             mov edx, dword ptr [esp + 0x20]
// 0087c51a  51                   push ecx
// 0087c51b  52                   push edx
// 0087c51c  6a01                 push 1
// 0087c51e  8bcf                 mov ecx, edi
// 0087c520  e87b3cf9ff           call 0x8101a0
// 0087c525  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087c529  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0087c52d  50                   push eax
// 0087c52e  8b442428             mov eax, dword ptr [esp + 0x28]
// 0087c532  50                   push eax
// 0087c533  51                   push ecx
// 0087c534  8bcf                 mov ecx, edi
// 0087c536  52                   push edx
// 0087c537  e87449f9ff           call 0x810eb0
// 0087c53c  5f                   pop edi
// 0087c53d  5e                   pop esi
// 0087c53e  5d                   pop ebp
// 0087c53f  5b                   pop ebx
// 0087c540  c23000               ret 0x30
// 0087c543  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0087c548  0f850b010000         jne 0x87c659
// 0087c54e  85c9                 test ecx, ecx
// 0087c550  0f8507010000         jne 0x87c65d
// 0087c556  394c242c             cmp dword ptr [esp + 0x2c], ecx
// 0087c55a  7520                 jne 0x87c57c
// 0087c55c  85c0                 test eax, eax
// 0087c55e  7525                 jne 0x87c585
// 0087c560  398648010000         cmp dword ptr [esi + 0x148], eax
// 0087c566  8b742428             mov esi, dword ptr [esp + 0x28]
// 0087c56a  8bce                 mov ecx, esi
// 0087c56c  0f84fe000000         je 0x87c670
// 0087c572  e8d93bf9ff           call 0x810150
// 0087c577  e9f9000000           jmp 0x87c675
// 0087c57c  85c0                 test eax, eax
// 0087c57e  740e                 je 0x87c58e
// 0087c580  e99f000000           jmp 0x87c624
// 0087c585  83f801               cmp eax, 1
// 0087c588  0f8589000000         jne 0x87c617
// 0087c58e  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0087c595  8b742428             mov esi, dword ptr [esp + 0x28]
// 0087c599  7469                 je 0x87c604
// 0087c59b  8bce                 mov ecx, esi
// 0087c59d  e8de3bf9ff           call 0x810180
// 0087c5a2  8bc8                 mov ecx, eax
// 0087c5a4  e8f7e2f8ff           call 0x80a8a0
// 0087c5a9  85c0                 test eax, eax
// 0087c5ab  7557                 jne 0x87c604
// 0087c5ad  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087c5b1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087c5b5  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0087c5b9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0087c5bd  50                   push eax
// 0087c5be  51                   push ecx
// 0087c5bf  8bce                 mov ecx, esi
// 0087c5c1  47                   inc edi
// 0087c5c2  43                   inc ebx
// 0087c5c3  e8b83bf9ff           call 0x810180
// 0087c5c8  50                   push eax
// 0087c5c9  53                   push ebx
// 0087c5ca  57                   push edi
// 0087c5cb  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0087c5cf  57                   push edi
// 0087c5d0  8bce                 mov ecx, esi
// 0087c5d2  e8d948f9ff           call 0x810eb0
// 0087c5d7  8b542424             mov edx, dword ptr [esp + 0x24]
// 0087c5db  8b442420             mov eax, dword ptr [esp + 0x20]
// 0087c5df  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0087c5e3  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0087c5e7  52                   push edx
// 0087c5e8  50                   push eax
// 0087c5e9  8bce                 mov ecx, esi
// 0087c5eb  4b                   dec ebx
// 0087c5ec  4d                   dec ebp
// 0087c5ed  e85ee5f8ff           call 0x80ab50
// 0087c5f2  50                   push eax
// 0087c5f3  55                   push ebp
// 0087c5f4  53                   push ebx
// 0087c5f5  57                   push edi
// 0087c5f6  8bce                 mov ecx, esi
// 0087c5f8  e8b348f9ff           call 0x810eb0
// 0087c5fd  5f                   pop edi
// 0087c5fe  5e                   pop esi
// 0087c5ff  5d                   pop ebp
// 0087c600  5b                   pop ebx
// 0087c601  c23000               ret 0x30
// 0087c604  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087c608  8b542420             mov edx, dword ptr [esp + 0x20]
// 0087c60c  51                   push ecx
// 0087c60d  52                   push edx
// 0087c60e  8bce                 mov ecx, esi
// 0087c610  e83be5f8ff           call 0x80ab50
// 0087c615  eb68                 jmp 0x87c67f
// 0087c617  50                   push eax
// 0087c618  e81394f7ff           call 0x7f5a30
// 0087c61d  83c404               add esp, 4
// 0087c620  85c0                 test eax, eax
// 0087c622  7472                 je 0x87c696
// 0087c624  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087c628  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087c62c  8b742418             mov esi, dword ptr [esp + 0x18]
// 0087c630  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0087c634  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0087c638  50                   push eax
// 0087c639  51                   push ecx
// 0087c63a  8bcb                 mov ecx, ebx
// 0087c63c  46                   inc esi
// 0087c63d  47                   inc edi
// 0087c63e  e84de5f8ff           call 0x80ab90
// 0087c643  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0087c647  50                   push eax
// 0087c648  57                   push edi
// 0087c649  56                   push esi
// 0087c64a  8bcb                 mov ecx, ebx
// 0087c64c  52                   push edx
// 0087c64d  e85e48f9ff           call 0x810eb0
// 0087c652  5f                   pop edi
// 0087c653  5e                   pop esi
// 0087c654  5d                   pop ebp
// 0087c655  5b                   pop ebx
// 0087c656  c23000               ret 0x30
// 0087c659  85c9                 test ecx, ecx
// 0087c65b  740d                 je 0x87c66a
// 0087c65d  8b742428             mov esi, dword ptr [esp + 0x28]
// 0087c661  8bce                 mov ecx, esi
// 0087c663  e808e5f8ff           call 0x80ab70
// 0087c668  eb0b                 jmp 0x87c675
// 0087c66a  8b742428             mov esi, dword ptr [esp + 0x28]
// 0087c66e  8bce                 mov ecx, esi
// 0087c670  e8cbcaf8ff           call 0x809140
// 0087c675  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087c679  8b542420             mov edx, dword ptr [esp + 0x20]
// 0087c67d  51                   push ecx
// 0087c67e  52                   push edx
// 0087c67f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087c683  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0087c687  50                   push eax
// 0087c688  8b442428             mov eax, dword ptr [esp + 0x28]
// 0087c68c  50                   push eax
// 0087c68d  51                   push ecx
// 0087c68e  8bce                 mov ecx, esi
// 0087c690  52                   push edx
// 0087c691  e81a48f9ff           call 0x810eb0
// 0087c696  5f                   pop edi
// 0087c697  5e                   pop esi
// 0087c698  5d                   pop ebp
// 0087c699  5b                   pop ebx
// 0087c69a  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawImage@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCPoint@@VCSize@@PAVCXTPImageManagerIcon@@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
