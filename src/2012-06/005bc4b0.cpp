// roc 2012-06 005bc4b0  unit: RakNet::RakPeer  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bc4b0
//
// 005bc4b0  56                   push esi
// 005bc4b1  8bf1                 mov esi, ecx
// 005bc4b3  8b4608               mov eax, dword ptr [esi + 8]
// 005bc4b6  394604               cmp dword ptr [esi + 4], eax
// 005bc4b9  7561                 jne 0x5bc51c
// 005bc4bb  85c0                 test eax, eax
// 005bc4bd  7509                 jne 0x5bc4c8
// 005bc4bf  c7460810000000       mov dword ptr [esi + 8], 0x10
// 005bc4c6  eb05                 jmp 0x5bc4cd
// 005bc4c8  03c0                 add eax, eax
// 005bc4ca  894608               mov dword ptr [esi + 8], eax
// 005bc4cd  8b4608               mov eax, dword ptr [esi + 8]
// 005bc4d0  57                   push edi
// 005bc4d1  85c0                 test eax, eax
// 005bc4d3  7504                 jne 0x5bc4d9
// 005bc4d5  33ff                 xor edi, edi
// 005bc4d7  eb1b                 jmp 0x5bc4f4
// 005bc4d9  33c9                 xor ecx, ecx
// 005bc4db  ba04000000           mov edx, 4
// 005bc4e0  f7e2                 mul edx
// 005bc4e2  0f90c1               seto cl
// 005bc4e5  f7d9                 neg ecx
// 005bc4e7  0bc8                 or ecx, eax
// 005bc4e9  51                   push ecx
// 005bc4ea  e8015f3c00           call 0x9823f0
// 005bc4ef  83c404               add esp, 4
// 005bc4f2  8bf8                 mov edi, eax
// 005bc4f4  833e00               cmp dword ptr [esi], 0
// 005bc4f7  7420                 je 0x5bc519
// 005bc4f9  33c0                 xor eax, eax
// 005bc4fb  394604               cmp dword ptr [esi + 4], eax
// 005bc4fe  760e                 jbe 0x5bc50e
// 005bc500  8b0e                 mov ecx, dword ptr [esi]
// 005bc502  8b1481               mov edx, dword ptr [ecx + eax*4]
// 005bc505  891487               mov dword ptr [edi + eax*4], edx
// 005bc508  40                   inc eax
// 005bc509  3b4604               cmp eax, dword ptr [esi + 4]
// 005bc50c  72f2                 jb 0x5bc500
// 005bc50e  8b06                 mov eax, dword ptr [esi]
// 005bc510  50                   push eax
// 005bc511  e8a45e3c00           call 0x9823ba
// 005bc516  83c404               add esp, 4
// 005bc519  893e                 mov dword ptr [esi], edi
// 005bc51b  5f                   pop edi
// 005bc51c  8b4e04               mov ecx, dword ptr [esi + 4]
// 005bc51f  8b442408             mov eax, dword ptr [esp + 8]
// 005bc523  8b16                 mov edx, dword ptr [esi]
// 005bc525  8b00                 mov eax, dword ptr [eax]
// 005bc527  89048a               mov dword ptr [edx + ecx*4], eax
// 005bc52a  ff4604               inc dword ptr [esi + 4]
// 005bc52d  5e                   pop esi
// 005bc52e  c20c00               ret 0xc
// library rbx2016-raknet/CloudCommon.cpp (function ?Insert@?$List@PAUCloudQueryRow@RakNet@@@DataStructures@@QAEXABQAUCloudQueryRow@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
