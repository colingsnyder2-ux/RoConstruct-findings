// roc 2012-06 00598e40  unit: RBX::Network::ServerReplicator  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00598e40
//
// 00598e40  56                   push esi
// 00598e41  8bf1                 mov esi, ecx
// 00598e43  8b4608               mov eax, dword ptr [esi + 8]
// 00598e46  394604               cmp dword ptr [esi + 4], eax
// 00598e49  7573                 jne 0x598ebe
// 00598e4b  85c0                 test eax, eax
// 00598e4d  7509                 jne 0x598e58
// 00598e4f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 00598e56  eb05                 jmp 0x598e5d
// 00598e58  03c0                 add eax, eax
// 00598e5a  894608               mov dword ptr [esi + 8], eax
// 00598e5d  8b4608               mov eax, dword ptr [esi + 8]
// 00598e60  57                   push edi
// 00598e61  85c0                 test eax, eax
// 00598e63  7504                 jne 0x598e69
// 00598e65  33ff                 xor edi, edi
// 00598e67  eb1b                 jmp 0x598e84
// 00598e69  33c9                 xor ecx, ecx
// 00598e6b  ba08000000           mov edx, 8
// 00598e70  f7e2                 mul edx
// 00598e72  0f90c1               seto cl
// 00598e75  f7d9                 neg ecx
// 00598e77  0bc8                 or ecx, eax
// 00598e79  51                   push ecx
// 00598e7a  e871953e00           call 0x9823f0
// 00598e7f  83c404               add esp, 4
// 00598e82  8bf8                 mov edi, eax
// 00598e84  833e00               cmp dword ptr [esi], 0
// 00598e87  7432                 je 0x598ebb
// 00598e89  33d2                 xor edx, edx
// 00598e8b  395604               cmp dword ptr [esi + 4], edx
// 00598e8e  7620                 jbe 0x598eb0
// 00598e90  53                   push ebx
// 00598e91  8b06                 mov eax, dword ptr [esi]
// 00598e93  8d0cd500000000       lea ecx, [edx*8]
// 00598e9a  8b1c08               mov ebx, dword ptr [eax + ecx]
// 00598e9d  03c1                 add eax, ecx
// 00598e9f  891c39               mov dword ptr [ecx + edi], ebx
// 00598ea2  8b4004               mov eax, dword ptr [eax + 4]
// 00598ea5  42                   inc edx
// 00598ea6  89443904             mov dword ptr [ecx + edi + 4], eax
// 00598eaa  3b5604               cmp edx, dword ptr [esi + 4]
// 00598ead  72e2                 jb 0x598e91
// 00598eaf  5b                   pop ebx
// 00598eb0  8b0e                 mov ecx, dword ptr [esi]
// 00598eb2  51                   push ecx
// 00598eb3  e802953e00           call 0x9823ba
// 00598eb8  83c404               add esp, 4
// 00598ebb  893e                 mov dword ptr [esi], edi
// 00598ebd  5f                   pop edi
// 00598ebe  8b5604               mov edx, dword ptr [esi + 4]
// 00598ec1  8b06                 mov eax, dword ptr [esi]
// 00598ec3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00598ec7  8d04d0               lea eax, [eax + edx*8]
// 00598eca  8b11                 mov edx, dword ptr [ecx]
// 00598ecc  8910                 mov dword ptr [eax], edx
// 00598ece  8b4904               mov ecx, dword ptr [ecx + 4]
// 00598ed1  894804               mov dword ptr [eax + 4], ecx
// 00598ed4  ff4604               inc dword ptr [esi + 4]
// 00598ed7  5e                   pop esi
// 00598ed8  c20c00               ret 0xc
// library rbx2016-raknet/FileListTransfer.cpp (function ?Insert@?$List@UMapNode@?$Map@IUFLR_MemoryBlock@RakNet@@$1??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z@DataStructures@@@DataStructures@@QAEXABUMapNode@?$Map@IUFLR_MemoryBlock@RakNet@@$1??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z@2@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
