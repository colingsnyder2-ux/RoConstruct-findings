// roc 2011-06 0052f450  unit: RBX::Network::ProfiledRakPeer  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052f450
//
// 0052f450  56                   push esi
// 0052f451  8bf1                 mov esi, ecx
// 0052f453  8b4608               mov eax, dword ptr [esi + 8]
// 0052f456  394604               cmp dword ptr [esi + 4], eax
// 0052f459  757f                 jne 0x52f4da
// 0052f45b  85c0                 test eax, eax
// 0052f45d  7509                 jne 0x52f468
// 0052f45f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 0052f466  eb05                 jmp 0x52f46d
// 0052f468  03c0                 add eax, eax
// 0052f46a  894608               mov dword ptr [esi + 8], eax
// 0052f46d  8b4608               mov eax, dword ptr [esi + 8]
// 0052f470  57                   push edi
// 0052f471  85c0                 test eax, eax
// 0052f473  7504                 jne 0x52f479
// 0052f475  33ff                 xor edi, edi
// 0052f477  eb1b                 jmp 0x52f494
// 0052f479  33c9                 xor ecx, ecx
// 0052f47b  ba10000000           mov edx, 0x10
// 0052f480  f7e2                 mul edx
// 0052f482  0f90c1               seto cl
// 0052f485  f7d9                 neg ecx
// 0052f487  0bc8                 or ecx, eax
// 0052f489  51                   push ecx
// 0052f48a  e8b1ae2d00           call 0x80a340
// 0052f48f  83c404               add esp, 4
// 0052f492  8bf8                 mov edi, eax
// 0052f494  833e00               cmp dword ptr [esi], 0
// 0052f497  743e                 je 0x52f4d7
// 0052f499  33d2                 xor edx, edx
// 0052f49b  395604               cmp dword ptr [esi + 4], edx
// 0052f49e  762c                 jbe 0x52f4cc
// 0052f4a0  33c9                 xor ecx, ecx
// 0052f4a2  53                   push ebx
// 0052f4a3  8b06                 mov eax, dword ptr [esi]
// 0052f4a5  8b1c08               mov ebx, dword ptr [eax + ecx]
// 0052f4a8  03c1                 add eax, ecx
// 0052f4aa  891c39               mov dword ptr [ecx + edi], ebx
// 0052f4ad  8b5804               mov ebx, dword ptr [eax + 4]
// 0052f4b0  895c3904             mov dword ptr [ecx + edi + 4], ebx
// 0052f4b4  8b5808               mov ebx, dword ptr [eax + 8]
// 0052f4b7  895c3908             mov dword ptr [ecx + edi + 8], ebx
// 0052f4bb  8b400c               mov eax, dword ptr [eax + 0xc]
// 0052f4be  8944390c             mov dword ptr [ecx + edi + 0xc], eax
// 0052f4c2  42                   inc edx
// 0052f4c3  83c110               add ecx, 0x10
// 0052f4c6  3b5604               cmp edx, dword ptr [esi + 4]
// 0052f4c9  72d8                 jb 0x52f4a3
// 0052f4cb  5b                   pop ebx
// 0052f4cc  8b0e                 mov ecx, dword ptr [esi]
// 0052f4ce  51                   push ecx
// 0052f4cf  e830ae2d00           call 0x80a304
// 0052f4d4  83c404               add esp, 4
// 0052f4d7  893e                 mov dword ptr [esi], edi
// 0052f4d9  5f                   pop edi
// 0052f4da  8b4604               mov eax, dword ptr [esi + 4]
// 0052f4dd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052f4e1  8b11                 mov edx, dword ptr [ecx]
// 0052f4e3  c1e004               shl eax, 4
// 0052f4e6  0306                 add eax, dword ptr [esi]
// 0052f4e8  8910                 mov dword ptr [eax], edx
// 0052f4ea  8b5104               mov edx, dword ptr [ecx + 4]
// 0052f4ed  895004               mov dword ptr [eax + 4], edx
// 0052f4f0  8b5108               mov edx, dword ptr [ecx + 8]
// 0052f4f3  895008               mov dword ptr [eax + 8], edx
// 0052f4f6  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0052f4f9  89480c               mov dword ptr [eax + 0xc], ecx
// 0052f4fc  ff4604               inc dword ptr [esi + 4]
// 0052f4ff  5e                   pop esi
// 0052f500  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Insert@?$List@UHeapNode@?$Heap@_KPAUInternalPacket@RakNet@@$0A@@DataStructures@@@DataStructures@@QAEXABUHeapNode@?$Heap@_KPAUInternalPacket@RakNet@@$0A@@2@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
