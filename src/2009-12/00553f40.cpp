// roc 2009-12 00553f40  unit: RBX::Network::ClientReplicator  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00553f40
//
// 00553f40  56                   push esi
// 00553f41  8bf1                 mov esi, ecx
// 00553f43  8b4608               mov eax, dword ptr [esi + 8]
// 00553f46  57                   push edi
// 00553f47  394604               cmp dword ptr [esi + 4], eax
// 00553f4a  7552                 jne 0x553f9e
// 00553f4c  85c0                 test eax, eax
// 00553f4e  7509                 jne 0x553f59
// 00553f50  c7460810000000       mov dword ptr [esi + 8], 0x10
// 00553f57  eb05                 jmp 0x553f5e
// 00553f59  03c0                 add eax, eax
// 00553f5b  894608               mov dword ptr [esi + 8], eax
// 00553f5e  8b4608               mov eax, dword ptr [esi + 8]
// 00553f61  33c9                 xor ecx, ecx
// 00553f63  ba04000000           mov edx, 4
// 00553f68  f7e2                 mul edx
// 00553f6a  0f90c1               seto cl
// 00553f6d  f7d9                 neg ecx
// 00553f6f  0bc8                 or ecx, eax
// 00553f71  51                   push ecx
// 00553f72  e8cbfb2900           call 0x7f3b42
// 00553f77  8bf8                 mov edi, eax
// 00553f79  33c0                 xor eax, eax
// 00553f7b  83c404               add esp, 4
// 00553f7e  394604               cmp dword ptr [esi + 4], eax
// 00553f81  760e                 jbe 0x553f91
// 00553f83  8b0e                 mov ecx, dword ptr [esi]
// 00553f85  8b1481               mov edx, dword ptr [ecx + eax*4]
// 00553f88  891487               mov dword ptr [edi + eax*4], edx
// 00553f8b  40                   inc eax
// 00553f8c  3b4604               cmp eax, dword ptr [esi + 4]
// 00553f8f  72f2                 jb 0x553f83
// 00553f91  8b06                 mov eax, dword ptr [esi]
// 00553f93  50                   push eax
// 00553f94  e86dfb2900           call 0x7f3b06
// 00553f99  83c404               add esp, 4
// 00553f9c  893e                 mov dword ptr [esi], edi
// 00553f9e  8b4604               mov eax, dword ptr [esi + 4]
// 00553fa1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00553fa5  3bc2                 cmp eax, edx
// 00553fa7  7417                 je 0x553fc0
// 00553fa9  8da42400000000       lea esp, [esp]
// 00553fb0  8b0e                 mov ecx, dword ptr [esi]
// 00553fb2  8b7c81fc             mov edi, dword ptr [ecx + eax*4 - 4]
// 00553fb6  8d0c81               lea ecx, [ecx + eax*4]
// 00553fb9  48                   dec eax
// 00553fba  8939                 mov dword ptr [ecx], edi
// 00553fbc  3bc2                 cmp eax, edx
// 00553fbe  75f0                 jne 0x553fb0
// 00553fc0  8b06                 mov eax, dword ptr [esi]
// 00553fc2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00553fc6  890c90               mov dword ptr [eax + edx*4], ecx
// 00553fc9  ff4604               inc dword ptr [esi + 4]
// 00553fcc  5f                   pop edi
// 00553fcd  5e                   pop esi
// 00553fce  c20800               ret 8
// library rbxgs-raknet/DS_Table.cpp (function ?Insert@?$List@PAURow@Table@DataStructures@@@DataStructures@@QAEXQAURow@Table@2@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_Table.cpp
