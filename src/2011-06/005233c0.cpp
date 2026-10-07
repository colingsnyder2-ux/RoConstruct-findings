// roc 2011-06 005233c0  unit: RBX::Network::ProfiledRakPeer  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005233c0
//
// 005233c0  53                   push ebx
// 005233c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005233c5  56                   push esi
// 005233c6  8bf1                 mov esi, ecx
// 005233c8  3bf3                 cmp esi, ebx
// 005233ca  7444                 je 0x523410
// 005233cc  8b4604               mov eax, dword ptr [esi + 4]
// 005233cf  85c0                 test eax, eax
// 005233d1  742d                 je 0x523400
// 005233d3  8300ff               add dword ptr [eax], -1
// 005233d6  7528                 jne 0x523400
// 005233d8  57                   push edi
// 005233d9  8b3e                 mov edi, dword ptr [esi]
// 005233db  85ff                 test edi, edi
// 005233dd  7410                 je 0x5233ef
// 005233df  8bcf                 mov ecx, edi
// 005233e1  e8faa30000           call 0x52d7e0
// 005233e6  57                   push edi
// 005233e7  e86c6c2e00           call 0x80a058
// 005233ec  83c404               add esp, 4
// 005233ef  8b4604               mov eax, dword ptr [esi + 4]
// 005233f2  5f                   pop edi
// 005233f3  85c0                 test eax, eax
// 005233f5  7409                 je 0x523400
// 005233f7  50                   push eax
// 005233f8  e85b6c2e00           call 0x80a058
// 005233fd  83c404               add esp, 4
// 00523400  8b03                 mov eax, dword ptr [ebx]
// 00523402  8906                 mov dword ptr [esi], eax
// 00523404  8b4304               mov eax, dword ptr [ebx + 4]
// 00523407  894604               mov dword ptr [esi + 4], eax
// 0052340a  85c0                 test eax, eax
// 0052340c  7402                 je 0x523410
// 0052340e  ff00                 inc dword ptr [eax]
// 00523410  8bc6                 mov eax, esi
// 00523412  5e                   pop esi
// 00523413  5b                   pop ebx
// 00523414  c20400               ret 4
// library rbx2016-raknet/RakPeer.cpp (function ??4?$RakNetSmartPtr@URakNetSocket@RakNet@@@RakNet@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
