// roc 2011-06 00526570  unit: RBX::Network::ProfiledRakPeer  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00526570
//
// 00526570  53                   push ebx
// 00526571  55                   push ebp
// 00526572  56                   push esi
// 00526573  8bf1                 mov esi, ecx
// 00526575  8b4608               mov eax, dword ptr [esi + 8]
// 00526578  57                   push edi
// 00526579  394604               cmp dword ptr [esi + 4], eax
// 0052657c  7575                 jne 0x5265f3
// 0052657e  85c0                 test eax, eax
// 00526580  7509                 jne 0x52658b
// 00526582  c7460810000000       mov dword ptr [esi + 8], 0x10
// 00526589  eb05                 jmp 0x526590
// 0052658b  03c0                 add eax, eax
// 0052658d  894608               mov dword ptr [esi + 8], eax
// 00526590  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00526594  8b542418             mov edx, dword ptr [esp + 0x18]
// 00526598  8b4608               mov eax, dword ptr [esi + 8]
// 0052659b  51                   push ecx
// 0052659c  52                   push edx
// 0052659d  50                   push eax
// 0052659e  e8cdd2ffff           call 0x523870
// 005265a3  83c40c               add esp, 0xc
// 005265a6  833e00               cmp dword ptr [esi], 0
// 005265a9  8bd8                 mov ebx, eax
// 005265ab  7444                 je 0x5265f1
// 005265ad  33ff                 xor edi, edi
// 005265af  397e04               cmp dword ptr [esi + 4], edi
// 005265b2  761a                 jbe 0x5265ce
// 005265b4  8b0e                 mov ecx, dword ptr [esi]
// 005265b6  8d04fd00000000       lea eax, [edi*8]
// 005265bd  03c8                 add ecx, eax
// 005265bf  51                   push ecx
// 005265c0  8d0c18               lea ecx, [eax + ebx]
// 005265c3  e8f8cdffff           call 0x5233c0
// 005265c8  47                   inc edi
// 005265c9  3b7e04               cmp edi, dword ptr [esi + 4]
// 005265cc  72e6                 jb 0x5265b4
// 005265ce  8b06                 mov eax, dword ptr [esi]
// 005265d0  85c0                 test eax, eax
// 005265d2  741d                 je 0x5265f1
// 005265d4  8b50fc               mov edx, dword ptr [eax - 4]
// 005265d7  8d78fc               lea edi, [eax - 4]
// 005265da  6800f45000           push 0x50f400
// 005265df  52                   push edx
// 005265e0  6a08                 push 8
// 005265e2  50                   push eax
// 005265e3  e8f04b2e00           call 0x80b1d8
// 005265e8  57                   push edi
// 005265e9  e8163d2e00           call 0x80a304
// 005265ee  83c404               add esp, 4
// 005265f1  891e                 mov dword ptr [esi], ebx
// 005265f3  8b4604               mov eax, dword ptr [esi + 4]
// 005265f6  8b0e                 mov ecx, dword ptr [esi]
// 005265f8  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005265fc  8d3cc1               lea edi, [ecx + eax*8]
// 005265ff  3bfd                 cmp edi, ebp
// 00526601  7443                 je 0x526646
// 00526603  8b4704               mov eax, dword ptr [edi + 4]
// 00526606  85c0                 test eax, eax
// 00526608  742b                 je 0x526635
// 0052660a  8300ff               add dword ptr [eax], -1
// 0052660d  7526                 jne 0x526635
// 0052660f  8b1f                 mov ebx, dword ptr [edi]
// 00526611  85db                 test ebx, ebx
// 00526613  7410                 je 0x526625
// 00526615  8bcb                 mov ecx, ebx
// 00526617  e8c4710000           call 0x52d7e0
// 0052661c  53                   push ebx
// 0052661d  e8363a2e00           call 0x80a058
// 00526622  83c404               add esp, 4
// 00526625  8b4704               mov eax, dword ptr [edi + 4]
// 00526628  85c0                 test eax, eax
// 0052662a  7409                 je 0x526635
// 0052662c  50                   push eax
// 0052662d  e8263a2e00           call 0x80a058
// 00526632  83c404               add esp, 4
// 00526635  8b5500               mov edx, dword ptr [ebp]
// 00526638  8917                 mov dword ptr [edi], edx
// 0052663a  8b4504               mov eax, dword ptr [ebp + 4]
// 0052663d  894704               mov dword ptr [edi + 4], eax
// 00526640  85c0                 test eax, eax
// 00526642  7402                 je 0x526646
// 00526644  ff00                 inc dword ptr [eax]
// 00526646  ff4604               inc dword ptr [esi + 4]
// 00526649  5f                   pop edi
// 0052664a  5e                   pop esi
// 0052664b  5d                   pop ebp
// 0052664c  5b                   pop ebx
// 0052664d  c20c00               ret 0xc
// library rbx2016-raknet/RakPeer.cpp (function ?Insert@?$List@V?$RakNetSmartPtr@URakNetSocket@RakNet@@@RakNet@@@DataStructures@@QAEXABV?$RakNetSmartPtr@URakNetSocket@RakNet@@@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
