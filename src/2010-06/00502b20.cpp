// roc 2010-06 00502b20  unit: RBX::Network::ClientReplicator  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00502b20
//
// 00502b20  56                   push esi
// 00502b21  8bf1                 mov esi, ecx
// 00502b23  8b4608               mov eax, dword ptr [esi + 8]
// 00502b26  57                   push edi
// 00502b27  394604               cmp dword ptr [esi + 4], eax
// 00502b2a  7552                 jne 0x502b7e
// 00502b2c  85c0                 test eax, eax
// 00502b2e  7509                 jne 0x502b39
// 00502b30  c7460810000000       mov dword ptr [esi + 8], 0x10
// 00502b37  eb05                 jmp 0x502b3e
// 00502b39  03c0                 add eax, eax
// 00502b3b  894608               mov dword ptr [esi + 8], eax
// 00502b3e  8b4608               mov eax, dword ptr [esi + 8]
// 00502b41  33c9                 xor ecx, ecx
// 00502b43  ba04000000           mov edx, 4
// 00502b48  f7e2                 mul edx
// 00502b4a  0f90c1               seto cl
// 00502b4d  f7d9                 neg ecx
// 00502b4f  0bc8                 or ecx, eax
// 00502b51  51                   push ecx
// 00502b52  e82b512a00           call 0x7a7c82
// 00502b57  8bf8                 mov edi, eax
// 00502b59  33c0                 xor eax, eax
// 00502b5b  83c404               add esp, 4
// 00502b5e  394604               cmp dword ptr [esi + 4], eax
// 00502b61  760e                 jbe 0x502b71
// 00502b63  8b0e                 mov ecx, dword ptr [esi]
// 00502b65  8b1481               mov edx, dword ptr [ecx + eax*4]
// 00502b68  891487               mov dword ptr [edi + eax*4], edx
// 00502b6b  40                   inc eax
// 00502b6c  3b4604               cmp eax, dword ptr [esi + 4]
// 00502b6f  72f2                 jb 0x502b63
// 00502b71  8b06                 mov eax, dword ptr [esi]
// 00502b73  50                   push eax
// 00502b74  e8cd502a00           call 0x7a7c46
// 00502b79  83c404               add esp, 4
// 00502b7c  893e                 mov dword ptr [esi], edi
// 00502b7e  8b4604               mov eax, dword ptr [esi + 4]
// 00502b81  8b542410             mov edx, dword ptr [esp + 0x10]
// 00502b85  3bc2                 cmp eax, edx
// 00502b87  7417                 je 0x502ba0
// 00502b89  8da42400000000       lea esp, [esp]
// 00502b90  8b0e                 mov ecx, dword ptr [esi]
// 00502b92  8b7c81fc             mov edi, dword ptr [ecx + eax*4 - 4]
// 00502b96  8d0c81               lea ecx, [ecx + eax*4]
// 00502b99  48                   dec eax
// 00502b9a  8939                 mov dword ptr [ecx], edi
// 00502b9c  3bc2                 cmp eax, edx
// 00502b9e  75f0                 jne 0x502b90
// 00502ba0  8b06                 mov eax, dword ptr [esi]
// 00502ba2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00502ba6  890c90               mov dword ptr [eax + edx*4], ecx
// 00502ba9  ff4604               inc dword ptr [esi + 4]
// 00502bac  5f                   pop edi
// 00502bad  5e                   pop esi
// 00502bae  c20800               ret 8
// library rbxgs-raknet/DS_Table.cpp (function ?Insert@?$List@PAURow@Table@DataStructures@@@DataStructures@@QAEXQAURow@Table@2@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_Table.cpp
