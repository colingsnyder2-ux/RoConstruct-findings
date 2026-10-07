// roc 2011-06 00523370  unit: RBX::Network::ProfiledRakPeer  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00523370
//
// 00523370  53                   push ebx
// 00523371  56                   push esi
// 00523372  8bf1                 mov esi, ecx
// 00523374  8b4604               mov eax, dword ptr [esi + 4]
// 00523377  33db                 xor ebx, ebx
// 00523379  3bc3                 cmp eax, ebx
// 0052337b  742d                 je 0x5233aa
// 0052337d  8300ff               add dword ptr [eax], -1
// 00523380  7528                 jne 0x5233aa
// 00523382  57                   push edi
// 00523383  8b3e                 mov edi, dword ptr [esi]
// 00523385  3bfb                 cmp edi, ebx
// 00523387  7410                 je 0x523399
// 00523389  8bcf                 mov ecx, edi
// 0052338b  e850a40000           call 0x52d7e0
// 00523390  57                   push edi
// 00523391  e8c26c2e00           call 0x80a058
// 00523396  83c404               add esp, 4
// 00523399  8b4604               mov eax, dword ptr [esi + 4]
// 0052339c  5f                   pop edi
// 0052339d  3bc3                 cmp eax, ebx
// 0052339f  7409                 je 0x5233aa
// 005233a1  50                   push eax
// 005233a2  e8b16c2e00           call 0x80a058
// 005233a7  83c404               add esp, 4
// 005233aa  895e04               mov dword ptr [esi + 4], ebx
// 005233ad  891e                 mov dword ptr [esi], ebx
// 005233af  5e                   pop esi
// 005233b0  5b                   pop ebx
// 005233b1  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?SetNull@?$RakNetSmartPtr@URakNetSocket@RakNet@@@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
