// roc 2012-06 005bee70  unit: RakNet::RakPeer  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bee70
//
// 005bee70  53                   push ebx
// 005bee71  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005bee75  56                   push esi
// 005bee76  8bf1                 mov esi, ecx
// 005bee78  3bf3                 cmp esi, ebx
// 005bee7a  7444                 je 0x5beec0
// 005bee7c  8b4604               mov eax, dword ptr [esi + 4]
// 005bee7f  85c0                 test eax, eax
// 005bee81  742d                 je 0x5beeb0
// 005bee83  8300ff               add dword ptr [eax], -1
// 005bee86  7528                 jne 0x5beeb0
// 005bee88  57                   push edi
// 005bee89  8b3e                 mov edi, dword ptr [esi]
// 005bee8b  85ff                 test edi, edi
// 005bee8d  7410                 je 0x5bee9f
// 005bee8f  8bcf                 mov ecx, edi
// 005bee91  e84aa50000           call 0x5c93e0
// 005bee96  57                   push edi
// 005bee97  e878323c00           call 0x982114
// 005bee9c  83c404               add esp, 4
// 005bee9f  8b4604               mov eax, dword ptr [esi + 4]
// 005beea2  5f                   pop edi
// 005beea3  85c0                 test eax, eax
// 005beea5  7409                 je 0x5beeb0
// 005beea7  50                   push eax
// 005beea8  e867323c00           call 0x982114
// 005beead  83c404               add esp, 4
// 005beeb0  8b03                 mov eax, dword ptr [ebx]
// 005beeb2  8906                 mov dword ptr [esi], eax
// 005beeb4  8b4304               mov eax, dword ptr [ebx + 4]
// 005beeb7  894604               mov dword ptr [esi + 4], eax
// 005beeba  85c0                 test eax, eax
// 005beebc  7402                 je 0x5beec0
// 005beebe  ff00                 inc dword ptr [eax]
// 005beec0  8bc6                 mov eax, esi
// 005beec2  5e                   pop esi
// 005beec3  5b                   pop ebx
// 005beec4  c20400               ret 4
// library rbx2016-raknet/RakPeer.cpp (function ??4?$RakNetSmartPtr@URakNetSocket@RakNet@@@RakNet@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
