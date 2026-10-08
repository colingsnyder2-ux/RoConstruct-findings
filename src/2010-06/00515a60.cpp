// roc 2010-06 00515a60  unit: RakPeer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00515a60
//
// 00515a60  56                   push esi
// 00515a61  8bf1                 mov esi, ecx
// 00515a63  8b4608               mov eax, dword ptr [esi + 8]
// 00515a66  394604               cmp dword ptr [esi + 4], eax
// 00515a69  7559                 jne 0x515ac4
// 00515a6b  85c0                 test eax, eax
// 00515a6d  7509                 jne 0x515a78
// 00515a6f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 00515a76  eb05                 jmp 0x515a7d
// 00515a78  03c0                 add eax, eax
// 00515a7a  894608               mov dword ptr [esi + 8], eax
// 00515a7d  8b4608               mov eax, dword ptr [esi + 8]
// 00515a80  33c9                 xor ecx, ecx
// 00515a82  ba04000000           mov edx, 4
// 00515a87  f7e2                 mul edx
// 00515a89  0f90c1               seto cl
// 00515a8c  57                   push edi
// 00515a8d  f7d9                 neg ecx
// 00515a8f  0bc8                 or ecx, eax
// 00515a91  51                   push ecx
// 00515a92  e8eb212900           call 0x7a7c82
// 00515a97  83c404               add esp, 4
// 00515a9a  833e00               cmp dword ptr [esi], 0
// 00515a9d  8bf8                 mov edi, eax
// 00515a9f  7420                 je 0x515ac1
// 00515aa1  33c0                 xor eax, eax
// 00515aa3  394604               cmp dword ptr [esi + 4], eax
// 00515aa6  760e                 jbe 0x515ab6
// 00515aa8  8b0e                 mov ecx, dword ptr [esi]
// 00515aaa  8b1481               mov edx, dword ptr [ecx + eax*4]
// 00515aad  891487               mov dword ptr [edi + eax*4], edx
// 00515ab0  40                   inc eax
// 00515ab1  3b4604               cmp eax, dword ptr [esi + 4]
// 00515ab4  72f2                 jb 0x515aa8
// 00515ab6  8b06                 mov eax, dword ptr [esi]
// 00515ab8  50                   push eax
// 00515ab9  e888212900           call 0x7a7c46
// 00515abe  83c404               add esp, 4
// 00515ac1  893e                 mov dword ptr [esi], edi
// 00515ac3  5f                   pop edi
// 00515ac4  8b4e04               mov ecx, dword ptr [esi + 4]
// 00515ac7  8b16                 mov edx, dword ptr [esi]
// 00515ac9  8b442408             mov eax, dword ptr [esp + 8]
// 00515acd  89048a               mov dword ptr [edx + ecx*4], eax
// 00515ad0  ff4604               inc dword ptr [esi + 4]
// 00515ad3  5e                   pop esi
// 00515ad4  c20400               ret 4
// library rbxgs-raknet/ConsoleServer.cpp (function ?Insert@?$List@PAVCommandParserInterface@@@DataStructures@@QAEXQAVCommandParserInterface@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConsoleServer.cpp
