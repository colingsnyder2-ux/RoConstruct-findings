// roc 2007-08 004b92e0  unit: RakPeer  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b92e0
//
// 004b92e0  56                   push esi
// 004b92e1  8bf1                 mov esi, ecx
// 004b92e3  8b4608               mov eax, dword ptr [esi + 8]
// 004b92e6  394604               cmp dword ptr [esi + 4], eax
// 004b92e9  755b                 jne 0x4b9346
// 004b92eb  85c0                 test eax, eax
// 004b92ed  7509                 jne 0x4b92f8
// 004b92ef  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004b92f6  eb05                 jmp 0x4b92fd
// 004b92f8  03c0                 add eax, eax
// 004b92fa  894608               mov dword ptr [esi + 8], eax
// 004b92fd  8b4608               mov eax, dword ptr [esi + 8]
// 004b9300  33c9                 xor ecx, ecx
// 004b9302  ba04000000           mov edx, 4
// 004b9307  f7e2                 mul edx
// 004b9309  0f90c1               seto cl
// 004b930c  57                   push edi
// 004b930d  f7d9                 neg ecx
// 004b930f  0bc8                 or ecx, eax
// 004b9311  51                   push ecx
// 004b9312  e8df6b1700           call 0x62fef6
// 004b9317  83c404               add esp, 4
// 004b931a  833e00               cmp dword ptr [esi], 0
// 004b931d  8bf8                 mov edi, eax
// 004b931f  7422                 je 0x4b9343
// 004b9321  33c0                 xor eax, eax
// 004b9323  394604               cmp dword ptr [esi + 4], eax
// 004b9326  7610                 jbe 0x4b9338
// 004b9328  8b0e                 mov ecx, dword ptr [esi]
// 004b932a  8b1481               mov edx, dword ptr [ecx + eax*4]
// 004b932d  891487               mov dword ptr [edi + eax*4], edx
// 004b9330  83c001               add eax, 1
// 004b9333  3b4604               cmp eax, dword ptr [esi + 4]
// 004b9336  72f0                 jb 0x4b9328
// 004b9338  8b06                 mov eax, dword ptr [esi]
// 004b933a  50                   push eax
// 004b933b  e822691700           call 0x62fc62
// 004b9340  83c404               add esp, 4
// 004b9343  893e                 mov dword ptr [esi], edi
// 004b9345  5f                   pop edi
// 004b9346  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b9349  8b16                 mov edx, dword ptr [esi]
// 004b934b  8b442408             mov eax, dword ptr [esp + 8]
// 004b934f  89048a               mov dword ptr [edx + ecx*4], eax
// 004b9352  83460401             add dword ptr [esi + 4], 1
// 004b9356  5e                   pop esi
// 004b9357  c20400               ret 4
// library rbxgs-raknet/ConsoleServer.cpp (function ?Insert@?$List@PAVCommandParserInterface@@@DataStructures@@QAEXQAVCommandParserInterface@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConsoleServer.cpp
