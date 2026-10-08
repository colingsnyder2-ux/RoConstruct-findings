// roc 2010-06 004fe120  unit: RBX::Network::IdSerializer  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fe120
//
// 004fe120  56                   push esi
// 004fe121  8bf1                 mov esi, ecx
// 004fe123  8b4608               mov eax, dword ptr [esi + 8]
// 004fe126  57                   push edi
// 004fe127  394604               cmp dword ptr [esi + 4], eax
// 004fe12a  7564                 jne 0x4fe190
// 004fe12c  85c0                 test eax, eax
// 004fe12e  7509                 jne 0x4fe139
// 004fe130  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004fe137  eb05                 jmp 0x4fe13e
// 004fe139  03c0                 add eax, eax
// 004fe13b  894608               mov dword ptr [esi + 8], eax
// 004fe13e  8b4608               mov eax, dword ptr [esi + 8]
// 004fe141  33c9                 xor ecx, ecx
// 004fe143  ba08000000           mov edx, 8
// 004fe148  f7e2                 mul edx
// 004fe14a  0f90c1               seto cl
// 004fe14d  f7d9                 neg ecx
// 004fe14f  0bc8                 or ecx, eax
// 004fe151  51                   push ecx
// 004fe152  e82b9b2a00           call 0x7a7c82
// 004fe157  33d2                 xor edx, edx
// 004fe159  83c404               add esp, 4
// 004fe15c  8bf8                 mov edi, eax
// 004fe15e  395604               cmp dword ptr [esi + 4], edx
// 004fe161  7620                 jbe 0x4fe183
// 004fe163  53                   push ebx
// 004fe164  8b06                 mov eax, dword ptr [esi]
// 004fe166  8d0cd500000000       lea ecx, [edx*8]
// 004fe16d  8b1c08               mov ebx, dword ptr [eax + ecx]
// 004fe170  03c1                 add eax, ecx
// 004fe172  891c39               mov dword ptr [ecx + edi], ebx
// 004fe175  8b4004               mov eax, dword ptr [eax + 4]
// 004fe178  42                   inc edx
// 004fe179  89443904             mov dword ptr [ecx + edi + 4], eax
// 004fe17d  3b5604               cmp edx, dword ptr [esi + 4]
// 004fe180  72e2                 jb 0x4fe164
// 004fe182  5b                   pop ebx
// 004fe183  8b0e                 mov ecx, dword ptr [esi]
// 004fe185  51                   push ecx
// 004fe186  e8bb9a2a00           call 0x7a7c46
// 004fe18b  83c404               add esp, 4
// 004fe18e  893e                 mov dword ptr [esi], edi
// 004fe190  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fe193  8b542414             mov edx, dword ptr [esp + 0x14]
// 004fe197  3bca                 cmp ecx, edx
// 004fe199  741b                 je 0x4fe1b6
// 004fe19b  eb03                 jmp 0x4fe1a0
// 004fe19d  8d4900               lea ecx, [ecx]
// 004fe1a0  8b06                 mov eax, dword ptr [esi]
// 004fe1a2  8b7cc8f8             mov edi, dword ptr [eax + ecx*8 - 8]
// 004fe1a6  8d04c8               lea eax, [eax + ecx*8]
// 004fe1a9  8938                 mov dword ptr [eax], edi
// 004fe1ab  8b78fc               mov edi, dword ptr [eax - 4]
// 004fe1ae  49                   dec ecx
// 004fe1af  897804               mov dword ptr [eax + 4], edi
// 004fe1b2  3bca                 cmp ecx, edx
// 004fe1b4  75ea                 jne 0x4fe1a0
// 004fe1b6  8b0e                 mov ecx, dword ptr [esi]
// 004fe1b8  8d04d1               lea eax, [ecx + edx*8]
// 004fe1bb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004fe1bf  8910                 mov dword ptr [eax], edx
// 004fe1c1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004fe1c5  894804               mov dword ptr [eax + 4], ecx
// 004fe1c8  ff4604               inc dword ptr [esi + 4]
// 004fe1cb  5f                   pop edi
// 004fe1cc  5e                   pop esi
// 004fe1cd  c20c00               ret 0xc
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$List@UMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@@DataStructures@@QAEXUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp
