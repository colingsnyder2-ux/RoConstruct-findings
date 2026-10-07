// roc 2011-06 0052f510  unit: RBX::Network::ProfiledRakPeer  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052f510
//
// 0052f510  56                   push esi
// 0052f511  8bf1                 mov esi, ecx
// 0052f513  8b4608               mov eax, dword ptr [esi + 8]
// 0052f516  57                   push edi
// 0052f517  394604               cmp dword ptr [esi + 4], eax
// 0052f51a  755f                 jne 0x52f57b
// 0052f51c  85c0                 test eax, eax
// 0052f51e  7509                 jne 0x52f529
// 0052f520  c7460810000000       mov dword ptr [esi + 8], 0x10
// 0052f527  eb05                 jmp 0x52f52e
// 0052f529  03c0                 add eax, eax
// 0052f52b  894608               mov dword ptr [esi + 8], eax
// 0052f52e  8b4608               mov eax, dword ptr [esi + 8]
// 0052f531  85c0                 test eax, eax
// 0052f533  7504                 jne 0x52f539
// 0052f535  33ff                 xor edi, edi
// 0052f537  eb1b                 jmp 0x52f554
// 0052f539  33c9                 xor ecx, ecx
// 0052f53b  ba04000000           mov edx, 4
// 0052f540  f7e2                 mul edx
// 0052f542  0f90c1               seto cl
// 0052f545  f7d9                 neg ecx
// 0052f547  0bc8                 or ecx, eax
// 0052f549  51                   push ecx
// 0052f54a  e8f1ad2d00           call 0x80a340
// 0052f54f  83c404               add esp, 4
// 0052f552  8bf8                 mov edi, eax
// 0052f554  33c0                 xor eax, eax
// 0052f556  394604               cmp dword ptr [esi + 4], eax
// 0052f559  7613                 jbe 0x52f56e
// 0052f55b  eb03                 jmp 0x52f560
// 0052f55d  8d4900               lea ecx, [ecx]
// 0052f560  8b0e                 mov ecx, dword ptr [esi]
// 0052f562  8b1481               mov edx, dword ptr [ecx + eax*4]
// 0052f565  891487               mov dword ptr [edi + eax*4], edx
// 0052f568  40                   inc eax
// 0052f569  3b4604               cmp eax, dword ptr [esi + 4]
// 0052f56c  72f2                 jb 0x52f560
// 0052f56e  8b06                 mov eax, dword ptr [esi]
// 0052f570  50                   push eax
// 0052f571  e88ead2d00           call 0x80a304
// 0052f576  83c404               add esp, 4
// 0052f579  893e                 mov dword ptr [esi], edi
// 0052f57b  8b4604               mov eax, dword ptr [esi + 4]
// 0052f57e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0052f582  3bc2                 cmp eax, edx
// 0052f584  7410                 je 0x52f596
// 0052f586  8b0e                 mov ecx, dword ptr [esi]
// 0052f588  8b7c81fc             mov edi, dword ptr [ecx + eax*4 - 4]
// 0052f58c  8d0c81               lea ecx, [ecx + eax*4]
// 0052f58f  48                   dec eax
// 0052f590  8939                 mov dword ptr [ecx], edi
// 0052f592  3bc2                 cmp eax, edx
// 0052f594  75f0                 jne 0x52f586
// 0052f596  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052f59a  8b06                 mov eax, dword ptr [esi]
// 0052f59c  8b09                 mov ecx, dword ptr [ecx]
// 0052f59e  890c90               mov dword ptr [eax + edx*4], ecx
// 0052f5a1  ff4604               inc dword ptr [esi + 4]
// 0052f5a4  5f                   pop edi
// 0052f5a5  5e                   pop esi
// 0052f5a6  c21000               ret 0x10
// library rbx2016-raknet/CloudServer.cpp (function ?Insert@?$List@PAUCloudData@CloudServer@RakNet@@@DataStructures@@QAEXABQAUCloudData@CloudServer@RakNet@@IPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
