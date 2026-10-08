// roc 2009-06 004ff980  unit: RakPeer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ff980
//
// 004ff980  56                   push esi
// 004ff981  8bf1                 mov esi, ecx
// 004ff983  8b4608               mov eax, dword ptr [esi + 8]
// 004ff986  394604               cmp dword ptr [esi + 4], eax
// 004ff989  7559                 jne 0x4ff9e4
// 004ff98b  85c0                 test eax, eax
// 004ff98d  7509                 jne 0x4ff998
// 004ff98f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004ff996  eb05                 jmp 0x4ff99d
// 004ff998  03c0                 add eax, eax
// 004ff99a  894608               mov dword ptr [esi + 8], eax
// 004ff99d  8b4608               mov eax, dword ptr [esi + 8]
// 004ff9a0  33c9                 xor ecx, ecx
// 004ff9a2  ba04000000           mov edx, 4
// 004ff9a7  f7e2                 mul edx
// 004ff9a9  0f90c1               seto cl
// 004ff9ac  57                   push edi
// 004ff9ad  f7d9                 neg ecx
// 004ff9af  0bc8                 or ecx, eax
// 004ff9b1  51                   push ecx
// 004ff9b2  e863932100           call 0x718d1a
// 004ff9b7  83c404               add esp, 4
// 004ff9ba  833e00               cmp dword ptr [esi], 0
// 004ff9bd  8bf8                 mov edi, eax
// 004ff9bf  7420                 je 0x4ff9e1
// 004ff9c1  33c0                 xor eax, eax
// 004ff9c3  394604               cmp dword ptr [esi + 4], eax
// 004ff9c6  760e                 jbe 0x4ff9d6
// 004ff9c8  8b0e                 mov ecx, dword ptr [esi]
// 004ff9ca  8b1481               mov edx, dword ptr [ecx + eax*4]
// 004ff9cd  891487               mov dword ptr [edi + eax*4], edx
// 004ff9d0  40                   inc eax
// 004ff9d1  3b4604               cmp eax, dword ptr [esi + 4]
// 004ff9d4  72f2                 jb 0x4ff9c8
// 004ff9d6  8b06                 mov eax, dword ptr [esi]
// 004ff9d8  50                   push eax
// 004ff9d9  e800932100           call 0x718cde
// 004ff9de  83c404               add esp, 4
// 004ff9e1  893e                 mov dword ptr [esi], edi
// 004ff9e3  5f                   pop edi
// 004ff9e4  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ff9e7  8b16                 mov edx, dword ptr [esi]
// 004ff9e9  8b442408             mov eax, dword ptr [esp + 8]
// 004ff9ed  89048a               mov dword ptr [edx + ecx*4], eax
// 004ff9f0  ff4604               inc dword ptr [esi + 4]
// 004ff9f3  5e                   pop esi
// 004ff9f4  c20400               ret 4
// library rbxgs-raknet/ConsoleServer.cpp (function ?Insert@?$List@PAVCommandParserInterface@@@DataStructures@@QAEXQAVCommandParserInterface@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConsoleServer.cpp
