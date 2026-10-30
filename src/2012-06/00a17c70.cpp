// from server: 100% by auto
// roc 2012-06 00a17c70  unit: CXTPShortcutManager  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a17c70
//
// 00a17c70  53                   push ebx
// 00a17c71  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00a17c75  56                   push esi
// 00a17c76  57                   push edi
// 00a17c77  33ff                 xor edi, edi
// 00a17c79  3bdf                 cmp ebx, edi
// 00a17c7b  8bf1                 mov esi, ecx
// 00a17c7d  7d05                 jge 0xa17c84
// 00a17c7f  e83ca7f6ff           call 0x9823c0
// 00a17c84  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a17c88  3bc7                 cmp eax, edi
// 00a17c8a  7c03                 jl 0xa17c8f
// 00a17c8c  894610               mov dword ptr [esi + 0x10], eax
// 00a17c8f  3bdf                 cmp ebx, edi
// 00a17c91  751f                 jne 0xa17cb2
// 00a17c93  8b4604               mov eax, dword ptr [esi + 4]
// 00a17c96  3bc7                 cmp eax, edi
// 00a17c98  740c                 je 0xa17ca6
// 00a17c9a  50                   push eax
// 00a17c9b  e81aa7f6ff           call 0x9823ba
// 00a17ca0  83c404               add esp, 4
// 00a17ca3  897e04               mov dword ptr [esi + 4], edi
// 00a17ca6  897e0c               mov dword ptr [esi + 0xc], edi
// 00a17ca9  897e08               mov dword ptr [esi + 8], edi
// 00a17cac  5f                   pop edi
// 00a17cad  5e                   pop esi
// 00a17cae  5b                   pop ebx
// 00a17caf  c20800               ret 8
// 00a17cb2  8b5604               mov edx, dword ptr [esi + 4]
// 00a17cb5  55                   push ebp
// 00a17cb6  3bd7                 cmp edx, edi
// 00a17cb8  7531                 jne 0xa17ceb
// 00a17cba  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00a17cbd  3bdd                 cmp ebx, ebp
// 00a17cbf  7e02                 jle 0xa17cc3
// 00a17cc1  8beb                 mov ebp, ebx
// 00a17cc3  8d7c6d00             lea edi, [ebp + ebp*2]
// 00a17cc7  03ff                 add edi, edi
// 00a17cc9  57                   push edi
// 00a17cca  e821a7f6ff           call 0x9823f0
// 00a17ccf  57                   push edi
// 00a17cd0  6a00                 push 0
// 00a17cd2  50                   push eax
// 00a17cd3  894604               mov dword ptr [esi + 4], eax
// 00a17cd6  e899b6f6ff           call 0x983374
// 00a17cdb  83c410               add esp, 0x10
// 00a17cde  896e0c               mov dword ptr [esi + 0xc], ebp
// 00a17ce1  5d                   pop ebp
// 00a17ce2  5f                   pop edi
// 00a17ce3  895e08               mov dword ptr [esi + 8], ebx
// 00a17ce6  5e                   pop esi
// 00a17ce7  5b                   pop ebx
// 00a17ce8  c20800               ret 8
// 00a17ceb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a17cee  3bd9                 cmp ebx, ecx
// 00a17cf0  7f2f                 jg 0xa17d21
// 00a17cf2  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a17cf5  3bd9                 cmp ebx, ecx
// 00a17cf7  0f8ebe000000         jle 0xa17dbb
// 00a17cfd  8bc3                 mov eax, ebx
// 00a17cff  2bc1                 sub eax, ecx
// 00a17d01  8d0440               lea eax, [eax + eax*2]
// 00a17d04  03c0                 add eax, eax
// 00a17d06  50                   push eax
// 00a17d07  8d0c49               lea ecx, [ecx + ecx*2]
// 00a17d0a  8d144a               lea edx, [edx + ecx*2]
// 00a17d0d  57                   push edi
// 00a17d0e  52                   push edx
// 00a17d0f  e860b6f6ff           call 0x983374
// 00a17d14  83c40c               add esp, 0xc
// 00a17d17  5d                   pop ebp
// 00a17d18  5f                   pop edi
// 00a17d19  895e08               mov dword ptr [esi + 8], ebx
// 00a17d1c  5e                   pop esi
// 00a17d1d  5b                   pop ebx
// 00a17d1e  c20800               ret 8
// 00a17d21  8b4610               mov eax, dword ptr [esi + 0x10]
// 00a17d24  3bc7                 cmp eax, edi
// 00a17d26  7524                 jne 0xa17d4c
// 00a17d28  8b4608               mov eax, dword ptr [esi + 8]
// 00a17d2b  99                   cdq 
// 00a17d2c  83e207               and edx, 7
// 00a17d2f  03c2                 add eax, edx
// 00a17d31  c1f803               sar eax, 3
// 00a17d34  83f804               cmp eax, 4
// 00a17d37  7d07                 jge 0xa17d40
// 00a17d39  b804000000           mov eax, 4
// 00a17d3e  eb0c                 jmp 0xa17d4c
// 00a17d40  3d00040000           cmp eax, 0x400
// 00a17d45  7e05                 jle 0xa17d4c
// 00a17d47  b800040000           mov eax, 0x400
// 00a17d4c  8d3c01               lea edi, [ecx + eax]
// 00a17d4f  3bdf                 cmp ebx, edi
// 00a17d51  7d06                 jge 0xa17d59
// 00a17d53  897c2414             mov dword ptr [esp + 0x14], edi
// 00a17d57  eb06                 jmp 0xa17d5f
// 00a17d59  895c2414             mov dword ptr [esp + 0x14], ebx
// 00a17d5d  8bfb                 mov edi, ebx
// 00a17d5f  3bf9                 cmp edi, ecx
// 00a17d61  7d05                 jge 0xa17d68
// 00a17d63  e858a6f6ff           call 0x9823c0
// 00a17d68  8d3c7f               lea edi, [edi + edi*2]
// 00a17d6b  03ff                 add edi, edi
// 00a17d6d  57                   push edi
// 00a17d6e  e87da6f6ff           call 0x9823f0
// 00a17d73  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a17d76  8be8                 mov ebp, eax
// 00a17d78  8b4608               mov eax, dword ptr [esi + 8]
// 00a17d7b  8d0440               lea eax, [eax + eax*2]
// 00a17d7e  03c0                 add eax, eax
// 00a17d80  50                   push eax
// 00a17d81  51                   push ecx
// 00a17d82  57                   push edi
// 00a17d83  55                   push ebp
// 00a17d84  e847c49eff           call 0x4041d0
// 00a17d89  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a17d8c  8bc3                 mov eax, ebx
// 00a17d8e  2bc1                 sub eax, ecx
// 00a17d90  8d1440               lea edx, [eax + eax*2]
// 00a17d93  03d2                 add edx, edx
// 00a17d95  52                   push edx
// 00a17d96  8d0449               lea eax, [ecx + ecx*2]
// 00a17d99  8d4c4500             lea ecx, [ebp + eax*2]
// 00a17d9d  6a00                 push 0
// 00a17d9f  51                   push ecx
// 00a17da0  e8cfb5f6ff           call 0x983374
// 00a17da5  8b5604               mov edx, dword ptr [esi + 4]
// 00a17da8  52                   push edx
// 00a17da9  e80ca6f6ff           call 0x9823ba
// 00a17dae  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a17db2  83c424               add esp, 0x24
// 00a17db5  896e04               mov dword ptr [esi + 4], ebp
// 00a17db8  89460c               mov dword ptr [esi + 0xc], eax
// 00a17dbb  5d                   pop ebp
// 00a17dbc  5f                   pop edi
// 00a17dbd  895e08               mov dword ptr [esi + 8], ebx
// 00a17dc0  5e                   pop esi
// 00a17dc1  5b                   pop ebx
// 00a17dc2  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPShortcutManager.cpp (function ?SetSize@?$CArray@UtagACCEL@@AAU1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPShortcutManager.cpp
