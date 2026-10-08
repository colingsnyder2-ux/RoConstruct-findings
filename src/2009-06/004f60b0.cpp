// roc 2009-06 004f60b0  unit: RBX::Network::ClientReplicator  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f60b0
//
// 004f60b0  56                   push esi
// 004f60b1  8bf1                 mov esi, ecx
// 004f60b3  8b4608               mov eax, dword ptr [esi + 8]
// 004f60b6  57                   push edi
// 004f60b7  394604               cmp dword ptr [esi + 4], eax
// 004f60ba  7552                 jne 0x4f610e
// 004f60bc  85c0                 test eax, eax
// 004f60be  7509                 jne 0x4f60c9
// 004f60c0  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004f60c7  eb05                 jmp 0x4f60ce
// 004f60c9  03c0                 add eax, eax
// 004f60cb  894608               mov dword ptr [esi + 8], eax
// 004f60ce  8b4608               mov eax, dword ptr [esi + 8]
// 004f60d1  33c9                 xor ecx, ecx
// 004f60d3  ba04000000           mov edx, 4
// 004f60d8  f7e2                 mul edx
// 004f60da  0f90c1               seto cl
// 004f60dd  f7d9                 neg ecx
// 004f60df  0bc8                 or ecx, eax
// 004f60e1  51                   push ecx
// 004f60e2  e8332c2200           call 0x718d1a
// 004f60e7  8bf8                 mov edi, eax
// 004f60e9  33c0                 xor eax, eax
// 004f60eb  83c404               add esp, 4
// 004f60ee  394604               cmp dword ptr [esi + 4], eax
// 004f60f1  760e                 jbe 0x4f6101
// 004f60f3  8b0e                 mov ecx, dword ptr [esi]
// 004f60f5  8b1481               mov edx, dword ptr [ecx + eax*4]
// 004f60f8  891487               mov dword ptr [edi + eax*4], edx
// 004f60fb  40                   inc eax
// 004f60fc  3b4604               cmp eax, dword ptr [esi + 4]
// 004f60ff  72f2                 jb 0x4f60f3
// 004f6101  8b06                 mov eax, dword ptr [esi]
// 004f6103  50                   push eax
// 004f6104  e8d52b2200           call 0x718cde
// 004f6109  83c404               add esp, 4
// 004f610c  893e                 mov dword ptr [esi], edi
// 004f610e  8b4604               mov eax, dword ptr [esi + 4]
// 004f6111  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f6115  3bc2                 cmp eax, edx
// 004f6117  7417                 je 0x4f6130
// 004f6119  8da42400000000       lea esp, [esp]
// 004f6120  8b0e                 mov ecx, dword ptr [esi]
// 004f6122  8b7c81fc             mov edi, dword ptr [ecx + eax*4 - 4]
// 004f6126  8d0c81               lea ecx, [ecx + eax*4]
// 004f6129  48                   dec eax
// 004f612a  8939                 mov dword ptr [ecx], edi
// 004f612c  3bc2                 cmp eax, edx
// 004f612e  75f0                 jne 0x4f6120
// 004f6130  8b06                 mov eax, dword ptr [esi]
// 004f6132  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f6136  890c90               mov dword ptr [eax + edx*4], ecx
// 004f6139  ff4604               inc dword ptr [esi + 4]
// 004f613c  5f                   pop edi
// 004f613d  5e                   pop esi
// 004f613e  c20800               ret 8
// library rbxgs-raknet/DS_Table.cpp (function ?Insert@?$List@PAURow@Table@DataStructures@@@DataStructures@@QAEXQAURow@Table@2@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_Table.cpp
