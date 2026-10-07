// roc 2011-06 0050c850  unit: RBX::Network::ServerReplicator  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050c850
//
// 0050c850  56                   push esi
// 0050c851  8bf1                 mov esi, ecx
// 0050c853  8b4608               mov eax, dword ptr [esi + 8]
// 0050c856  57                   push edi
// 0050c857  394604               cmp dword ptr [esi + 4], eax
// 0050c85a  7570                 jne 0x50c8cc
// 0050c85c  85c0                 test eax, eax
// 0050c85e  7509                 jne 0x50c869
// 0050c860  c7460810000000       mov dword ptr [esi + 8], 0x10
// 0050c867  eb05                 jmp 0x50c86e
// 0050c869  03c0                 add eax, eax
// 0050c86b  894608               mov dword ptr [esi + 8], eax
// 0050c86e  8b4608               mov eax, dword ptr [esi + 8]
// 0050c871  85c0                 test eax, eax
// 0050c873  7504                 jne 0x50c879
// 0050c875  33ff                 xor edi, edi
// 0050c877  eb1b                 jmp 0x50c894
// 0050c879  33c9                 xor ecx, ecx
// 0050c87b  ba08000000           mov edx, 8
// 0050c880  f7e2                 mul edx
// 0050c882  0f90c1               seto cl
// 0050c885  f7d9                 neg ecx
// 0050c887  0bc8                 or ecx, eax
// 0050c889  51                   push ecx
// 0050c88a  e8b1da2f00           call 0x80a340
// 0050c88f  83c404               add esp, 4
// 0050c892  8bf8                 mov edi, eax
// 0050c894  33d2                 xor edx, edx
// 0050c896  395604               cmp dword ptr [esi + 4], edx
// 0050c899  7624                 jbe 0x50c8bf
// 0050c89b  53                   push ebx
// 0050c89c  8d642400             lea esp, [esp]
// 0050c8a0  8b06                 mov eax, dword ptr [esi]
// 0050c8a2  8d0cd500000000       lea ecx, [edx*8]
// 0050c8a9  8b1c08               mov ebx, dword ptr [eax + ecx]
// 0050c8ac  03c1                 add eax, ecx
// 0050c8ae  891c39               mov dword ptr [ecx + edi], ebx
// 0050c8b1  8b4004               mov eax, dword ptr [eax + 4]
// 0050c8b4  42                   inc edx
// 0050c8b5  89443904             mov dword ptr [ecx + edi + 4], eax
// 0050c8b9  3b5604               cmp edx, dword ptr [esi + 4]
// 0050c8bc  72e2                 jb 0x50c8a0
// 0050c8be  5b                   pop ebx
// 0050c8bf  8b0e                 mov ecx, dword ptr [esi]
// 0050c8c1  51                   push ecx
// 0050c8c2  e83dda2f00           call 0x80a304
// 0050c8c7  83c404               add esp, 4
// 0050c8ca  893e                 mov dword ptr [esi], edi
// 0050c8cc  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050c8cf  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050c8d3  3bca                 cmp ecx, edx
// 0050c8d5  7416                 je 0x50c8ed
// 0050c8d7  8b06                 mov eax, dword ptr [esi]
// 0050c8d9  8b7cc8f8             mov edi, dword ptr [eax + ecx*8 - 8]
// 0050c8dd  8d04c8               lea eax, [eax + ecx*8]
// 0050c8e0  8938                 mov dword ptr [eax], edi
// 0050c8e2  8b78fc               mov edi, dword ptr [eax - 4]
// 0050c8e5  49                   dec ecx
// 0050c8e6  897804               mov dword ptr [eax + 4], edi
// 0050c8e9  3bca                 cmp ecx, edx
// 0050c8eb  75ea                 jne 0x50c8d7
// 0050c8ed  8b0e                 mov ecx, dword ptr [esi]
// 0050c8ef  8d04d1               lea eax, [ecx + edx*8]
// 0050c8f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050c8f6  8b11                 mov edx, dword ptr [ecx]
// 0050c8f8  8910                 mov dword ptr [eax], edx
// 0050c8fa  8b4904               mov ecx, dword ptr [ecx + 4]
// 0050c8fd  894804               mov dword ptr [eax + 4], ecx
// 0050c900  ff4604               inc dword ptr [esi + 4]
// 0050c903  5f                   pop edi
// 0050c904  5e                   pop esi
// 0050c905  c21000               ret 0x10
// library rbx2016-raknet/FileListTransfer.cpp (function ?Insert@?$List@UMapNode@?$Map@IUFLR_MemoryBlock@RakNet@@$1??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z@DataStructures@@@DataStructures@@QAEXABUMapNode@?$Map@IUFLR_MemoryBlock@RakNet@@$1??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z@2@IPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
