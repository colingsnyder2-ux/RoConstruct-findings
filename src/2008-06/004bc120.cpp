// roc 2008-06 004bc120  unit: ProfiledRakPeer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bc120
//
// 004bc120  56                   push esi
// 004bc121  8bf1                 mov esi, ecx
// 004bc123  8b4608               mov eax, dword ptr [esi + 8]
// 004bc126  394604               cmp dword ptr [esi + 4], eax
// 004bc129  7559                 jne 0x4bc184
// 004bc12b  85c0                 test eax, eax
// 004bc12d  7509                 jne 0x4bc138
// 004bc12f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004bc136  eb05                 jmp 0x4bc13d
// 004bc138  03c0                 add eax, eax
// 004bc13a  894608               mov dword ptr [esi + 8], eax
// 004bc13d  8b4608               mov eax, dword ptr [esi + 8]
// 004bc140  33c9                 xor ecx, ecx
// 004bc142  ba04000000           mov edx, 4
// 004bc147  f7e2                 mul edx
// 004bc149  0f90c1               seto cl
// 004bc14c  57                   push edi
// 004bc14d  f7d9                 neg ecx
// 004bc14f  0bc8                 or ecx, eax
// 004bc151  51                   push ecx
// 004bc152  e8c9471e00           call 0x6a0920
// 004bc157  83c404               add esp, 4
// 004bc15a  833e00               cmp dword ptr [esi], 0
// 004bc15d  8bf8                 mov edi, eax
// 004bc15f  7420                 je 0x4bc181
// 004bc161  33c0                 xor eax, eax
// 004bc163  394604               cmp dword ptr [esi + 4], eax
// 004bc166  760e                 jbe 0x4bc176
// 004bc168  8b0e                 mov ecx, dword ptr [esi]
// 004bc16a  8b1481               mov edx, dword ptr [ecx + eax*4]
// 004bc16d  891487               mov dword ptr [edi + eax*4], edx
// 004bc170  40                   inc eax
// 004bc171  3b4604               cmp eax, dword ptr [esi + 4]
// 004bc174  72f2                 jb 0x4bc168
// 004bc176  8b06                 mov eax, dword ptr [esi]
// 004bc178  50                   push eax
// 004bc179  e8fc441e00           call 0x6a067a
// 004bc17e  83c404               add esp, 4
// 004bc181  893e                 mov dword ptr [esi], edi
// 004bc183  5f                   pop edi
// 004bc184  8b4e04               mov ecx, dword ptr [esi + 4]
// 004bc187  8b16                 mov edx, dword ptr [esi]
// 004bc189  8b442408             mov eax, dword ptr [esp + 8]
// 004bc18d  89048a               mov dword ptr [edx + ecx*4], eax
// 004bc190  ff4604               inc dword ptr [esi + 4]
// 004bc193  5e                   pop esi
// 004bc194  c20400               ret 4
// library rbxgs-raknet/ConsoleServer.cpp (function ?Insert@?$List@PAVCommandParserInterface@@@DataStructures@@QAEXQAVCommandParserInterface@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConsoleServer.cpp
