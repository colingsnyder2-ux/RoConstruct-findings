// roc 2008-06 004ba300  unit: RBX::Network::IdSerializer  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ba300
//
// 004ba300  56                   push esi
// 004ba301  8bf1                 mov esi, ecx
// 004ba303  8b4608               mov eax, dword ptr [esi + 8]
// 004ba306  57                   push edi
// 004ba307  394604               cmp dword ptr [esi + 4], eax
// 004ba30a  7564                 jne 0x4ba370
// 004ba30c  85c0                 test eax, eax
// 004ba30e  7509                 jne 0x4ba319
// 004ba310  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004ba317  eb05                 jmp 0x4ba31e
// 004ba319  03c0                 add eax, eax
// 004ba31b  894608               mov dword ptr [esi + 8], eax
// 004ba31e  8b4608               mov eax, dword ptr [esi + 8]
// 004ba321  33c9                 xor ecx, ecx
// 004ba323  ba08000000           mov edx, 8
// 004ba328  f7e2                 mul edx
// 004ba32a  0f90c1               seto cl
// 004ba32d  f7d9                 neg ecx
// 004ba32f  0bc8                 or ecx, eax
// 004ba331  51                   push ecx
// 004ba332  e8e9651e00           call 0x6a0920
// 004ba337  33d2                 xor edx, edx
// 004ba339  83c404               add esp, 4
// 004ba33c  8bf8                 mov edi, eax
// 004ba33e  395604               cmp dword ptr [esi + 4], edx
// 004ba341  7620                 jbe 0x4ba363
// 004ba343  53                   push ebx
// 004ba344  8b06                 mov eax, dword ptr [esi]
// 004ba346  8d0cd500000000       lea ecx, [edx*8]
// 004ba34d  8b1c08               mov ebx, dword ptr [eax + ecx]
// 004ba350  03c1                 add eax, ecx
// 004ba352  891c39               mov dword ptr [ecx + edi], ebx
// 004ba355  8b4004               mov eax, dword ptr [eax + 4]
// 004ba358  42                   inc edx
// 004ba359  89443904             mov dword ptr [ecx + edi + 4], eax
// 004ba35d  3b5604               cmp edx, dword ptr [esi + 4]
// 004ba360  72e2                 jb 0x4ba344
// 004ba362  5b                   pop ebx
// 004ba363  8b0e                 mov ecx, dword ptr [esi]
// 004ba365  51                   push ecx
// 004ba366  e80f631e00           call 0x6a067a
// 004ba36b  83c404               add esp, 4
// 004ba36e  893e                 mov dword ptr [esi], edi
// 004ba370  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ba373  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ba377  3bca                 cmp ecx, edx
// 004ba379  741b                 je 0x4ba396
// 004ba37b  eb03                 jmp 0x4ba380
// 004ba37d  8d4900               lea ecx, [ecx]
// 004ba380  8b06                 mov eax, dword ptr [esi]
// 004ba382  8b7cc8f8             mov edi, dword ptr [eax + ecx*8 - 8]
// 004ba386  8d04c8               lea eax, [eax + ecx*8]
// 004ba389  8938                 mov dword ptr [eax], edi
// 004ba38b  8b78fc               mov edi, dword ptr [eax - 4]
// 004ba38e  49                   dec ecx
// 004ba38f  897804               mov dword ptr [eax + 4], edi
// 004ba392  3bca                 cmp ecx, edx
// 004ba394  75ea                 jne 0x4ba380
// 004ba396  8b0e                 mov ecx, dword ptr [esi]
// 004ba398  8d04d1               lea eax, [ecx + edx*8]
// 004ba39b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004ba39f  8910                 mov dword ptr [eax], edx
// 004ba3a1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ba3a5  894804               mov dword ptr [eax + 4], ecx
// 004ba3a8  ff4604               inc dword ptr [esi + 4]
// 004ba3ab  5f                   pop edi
// 004ba3ac  5e                   pop esi
// 004ba3ad  c20c00               ret 0xc
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$List@UMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@@DataStructures@@QAEXUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp
