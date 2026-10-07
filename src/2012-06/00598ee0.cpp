// roc 2012-06 00598ee0  unit: RBX::Network::ServerReplicator  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00598ee0
//
// 00598ee0  56                   push esi
// 00598ee1  8bf1                 mov esi, ecx
// 00598ee3  8b4608               mov eax, dword ptr [esi + 8]
// 00598ee6  57                   push edi
// 00598ee7  394604               cmp dword ptr [esi + 4], eax
// 00598eea  7570                 jne 0x598f5c
// 00598eec  85c0                 test eax, eax
// 00598eee  7509                 jne 0x598ef9
// 00598ef0  c7460810000000       mov dword ptr [esi + 8], 0x10
// 00598ef7  eb05                 jmp 0x598efe
// 00598ef9  03c0                 add eax, eax
// 00598efb  894608               mov dword ptr [esi + 8], eax
// 00598efe  8b4608               mov eax, dword ptr [esi + 8]
// 00598f01  85c0                 test eax, eax
// 00598f03  7504                 jne 0x598f09
// 00598f05  33ff                 xor edi, edi
// 00598f07  eb1b                 jmp 0x598f24
// 00598f09  33c9                 xor ecx, ecx
// 00598f0b  ba08000000           mov edx, 8
// 00598f10  f7e2                 mul edx
// 00598f12  0f90c1               seto cl
// 00598f15  f7d9                 neg ecx
// 00598f17  0bc8                 or ecx, eax
// 00598f19  51                   push ecx
// 00598f1a  e8d1943e00           call 0x9823f0
// 00598f1f  83c404               add esp, 4
// 00598f22  8bf8                 mov edi, eax
// 00598f24  33d2                 xor edx, edx
// 00598f26  395604               cmp dword ptr [esi + 4], edx
// 00598f29  7624                 jbe 0x598f4f
// 00598f2b  53                   push ebx
// 00598f2c  8d642400             lea esp, [esp]
// 00598f30  8b06                 mov eax, dword ptr [esi]
// 00598f32  8d0cd500000000       lea ecx, [edx*8]
// 00598f39  8b1c08               mov ebx, dword ptr [eax + ecx]
// 00598f3c  03c1                 add eax, ecx
// 00598f3e  891c39               mov dword ptr [ecx + edi], ebx
// 00598f41  8b4004               mov eax, dword ptr [eax + 4]
// 00598f44  42                   inc edx
// 00598f45  89443904             mov dword ptr [ecx + edi + 4], eax
// 00598f49  3b5604               cmp edx, dword ptr [esi + 4]
// 00598f4c  72e2                 jb 0x598f30
// 00598f4e  5b                   pop ebx
// 00598f4f  8b0e                 mov ecx, dword ptr [esi]
// 00598f51  51                   push ecx
// 00598f52  e863943e00           call 0x9823ba
// 00598f57  83c404               add esp, 4
// 00598f5a  893e                 mov dword ptr [esi], edi
// 00598f5c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00598f5f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00598f63  3bca                 cmp ecx, edx
// 00598f65  7416                 je 0x598f7d
// 00598f67  8b06                 mov eax, dword ptr [esi]
// 00598f69  8b7cc8f8             mov edi, dword ptr [eax + ecx*8 - 8]
// 00598f6d  8d04c8               lea eax, [eax + ecx*8]
// 00598f70  8938                 mov dword ptr [eax], edi
// 00598f72  8b78fc               mov edi, dword ptr [eax - 4]
// 00598f75  49                   dec ecx
// 00598f76  897804               mov dword ptr [eax + 4], edi
// 00598f79  3bca                 cmp ecx, edx
// 00598f7b  75ea                 jne 0x598f67
// 00598f7d  8b0e                 mov ecx, dword ptr [esi]
// 00598f7f  8d04d1               lea eax, [ecx + edx*8]
// 00598f82  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00598f86  8b11                 mov edx, dword ptr [ecx]
// 00598f88  8910                 mov dword ptr [eax], edx
// 00598f8a  8b4904               mov ecx, dword ptr [ecx + 4]
// 00598f8d  894804               mov dword ptr [eax + 4], ecx
// 00598f90  ff4604               inc dword ptr [esi + 4]
// 00598f93  5f                   pop edi
// 00598f94  5e                   pop esi
// 00598f95  c21000               ret 0x10
// library rbx2016-raknet/FileListTransfer.cpp (function ?Insert@?$List@UMapNode@?$Map@IUFLR_MemoryBlock@RakNet@@$1??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z@DataStructures@@@DataStructures@@QAEXABUMapNode@?$Map@IUFLR_MemoryBlock@RakNet@@$1??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z@2@IPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
