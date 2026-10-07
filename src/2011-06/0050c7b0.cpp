// roc 2011-06 0050c7b0  unit: RBX::Network::ServerReplicator  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050c7b0
//
// 0050c7b0  56                   push esi
// 0050c7b1  8bf1                 mov esi, ecx
// 0050c7b3  8b4608               mov eax, dword ptr [esi + 8]
// 0050c7b6  394604               cmp dword ptr [esi + 4], eax
// 0050c7b9  7573                 jne 0x50c82e
// 0050c7bb  85c0                 test eax, eax
// 0050c7bd  7509                 jne 0x50c7c8
// 0050c7bf  c7460810000000       mov dword ptr [esi + 8], 0x10
// 0050c7c6  eb05                 jmp 0x50c7cd
// 0050c7c8  03c0                 add eax, eax
// 0050c7ca  894608               mov dword ptr [esi + 8], eax
// 0050c7cd  8b4608               mov eax, dword ptr [esi + 8]
// 0050c7d0  57                   push edi
// 0050c7d1  85c0                 test eax, eax
// 0050c7d3  7504                 jne 0x50c7d9
// 0050c7d5  33ff                 xor edi, edi
// 0050c7d7  eb1b                 jmp 0x50c7f4
// 0050c7d9  33c9                 xor ecx, ecx
// 0050c7db  ba08000000           mov edx, 8
// 0050c7e0  f7e2                 mul edx
// 0050c7e2  0f90c1               seto cl
// 0050c7e5  f7d9                 neg ecx
// 0050c7e7  0bc8                 or ecx, eax
// 0050c7e9  51                   push ecx
// 0050c7ea  e851db2f00           call 0x80a340
// 0050c7ef  83c404               add esp, 4
// 0050c7f2  8bf8                 mov edi, eax
// 0050c7f4  833e00               cmp dword ptr [esi], 0
// 0050c7f7  7432                 je 0x50c82b
// 0050c7f9  33d2                 xor edx, edx
// 0050c7fb  395604               cmp dword ptr [esi + 4], edx
// 0050c7fe  7620                 jbe 0x50c820
// 0050c800  53                   push ebx
// 0050c801  8b06                 mov eax, dword ptr [esi]
// 0050c803  8d0cd500000000       lea ecx, [edx*8]
// 0050c80a  8b1c08               mov ebx, dword ptr [eax + ecx]
// 0050c80d  03c1                 add eax, ecx
// 0050c80f  891c39               mov dword ptr [ecx + edi], ebx
// 0050c812  8b4004               mov eax, dword ptr [eax + 4]
// 0050c815  42                   inc edx
// 0050c816  89443904             mov dword ptr [ecx + edi + 4], eax
// 0050c81a  3b5604               cmp edx, dword ptr [esi + 4]
// 0050c81d  72e2                 jb 0x50c801
// 0050c81f  5b                   pop ebx
// 0050c820  8b0e                 mov ecx, dword ptr [esi]
// 0050c822  51                   push ecx
// 0050c823  e8dcda2f00           call 0x80a304
// 0050c828  83c404               add esp, 4
// 0050c82b  893e                 mov dword ptr [esi], edi
// 0050c82d  5f                   pop edi
// 0050c82e  8b5604               mov edx, dword ptr [esi + 4]
// 0050c831  8b06                 mov eax, dword ptr [esi]
// 0050c833  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0050c837  8d04d0               lea eax, [eax + edx*8]
// 0050c83a  8b11                 mov edx, dword ptr [ecx]
// 0050c83c  8910                 mov dword ptr [eax], edx
// 0050c83e  8b4904               mov ecx, dword ptr [ecx + 4]
// 0050c841  894804               mov dword ptr [eax + 4], ecx
// 0050c844  ff4604               inc dword ptr [esi + 4]
// 0050c847  5e                   pop esi
// 0050c848  c20c00               ret 0xc
// library rbx2016-raknet/FileListTransfer.cpp (function ?Insert@?$List@UMapNode@?$Map@IUFLR_MemoryBlock@RakNet@@$1??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z@DataStructures@@@DataStructures@@QAEXABUMapNode@?$Map@IUFLR_MemoryBlock@RakNet@@$1??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z@2@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
