// roc 2012-06 005bee20  unit: RakNet::RakPeer  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bee20
//
// 005bee20  53                   push ebx
// 005bee21  56                   push esi
// 005bee22  8bf1                 mov esi, ecx
// 005bee24  8b4604               mov eax, dword ptr [esi + 4]
// 005bee27  33db                 xor ebx, ebx
// 005bee29  3bc3                 cmp eax, ebx
// 005bee2b  742d                 je 0x5bee5a
// 005bee2d  8300ff               add dword ptr [eax], -1
// 005bee30  7528                 jne 0x5bee5a
// 005bee32  57                   push edi
// 005bee33  8b3e                 mov edi, dword ptr [esi]
// 005bee35  3bfb                 cmp edi, ebx
// 005bee37  7410                 je 0x5bee49
// 005bee39  8bcf                 mov ecx, edi
// 005bee3b  e8a0a50000           call 0x5c93e0
// 005bee40  57                   push edi
// 005bee41  e8ce323c00           call 0x982114
// 005bee46  83c404               add esp, 4
// 005bee49  8b4604               mov eax, dword ptr [esi + 4]
// 005bee4c  5f                   pop edi
// 005bee4d  3bc3                 cmp eax, ebx
// 005bee4f  7409                 je 0x5bee5a
// 005bee51  50                   push eax
// 005bee52  e8bd323c00           call 0x982114
// 005bee57  83c404               add esp, 4
// 005bee5a  895e04               mov dword ptr [esi + 4], ebx
// 005bee5d  891e                 mov dword ptr [esi], ebx
// 005bee5f  5e                   pop esi
// 005bee60  5b                   pop ebx
// 005bee61  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?SetNull@?$RakNetSmartPtr@URakNetSocket@RakNet@@@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
