// roc 2012-06 0059b880  unit: VAuthoringSettings::?$FactoryProduct  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059b880
//
// 0059b880  56                   push esi
// 0059b881  8bf1                 mov esi, ecx
// 0059b883  8b4608               mov eax, dword ptr [esi + 8]
// 0059b886  394604               cmp dword ptr [esi + 4], eax
// 0059b889  757f                 jne 0x59b90a
// 0059b88b  85c0                 test eax, eax
// 0059b88d  7509                 jne 0x59b898
// 0059b88f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 0059b896  eb05                 jmp 0x59b89d
// 0059b898  03c0                 add eax, eax
// 0059b89a  894608               mov dword ptr [esi + 8], eax
// 0059b89d  8b4608               mov eax, dword ptr [esi + 8]
// 0059b8a0  57                   push edi
// 0059b8a1  85c0                 test eax, eax
// 0059b8a3  7504                 jne 0x59b8a9
// 0059b8a5  33ff                 xor edi, edi
// 0059b8a7  eb1b                 jmp 0x59b8c4
// 0059b8a9  33c9                 xor ecx, ecx
// 0059b8ab  ba10000000           mov edx, 0x10
// 0059b8b0  f7e2                 mul edx
// 0059b8b2  0f90c1               seto cl
// 0059b8b5  f7d9                 neg ecx
// 0059b8b7  0bc8                 or ecx, eax
// 0059b8b9  51                   push ecx
// 0059b8ba  e8316b3e00           call 0x9823f0
// 0059b8bf  83c404               add esp, 4
// 0059b8c2  8bf8                 mov edi, eax
// 0059b8c4  833e00               cmp dword ptr [esi], 0
// 0059b8c7  743e                 je 0x59b907
// 0059b8c9  33d2                 xor edx, edx
// 0059b8cb  395604               cmp dword ptr [esi + 4], edx
// 0059b8ce  762c                 jbe 0x59b8fc
// 0059b8d0  33c9                 xor ecx, ecx
// 0059b8d2  53                   push ebx
// 0059b8d3  8b06                 mov eax, dword ptr [esi]
// 0059b8d5  8b1c08               mov ebx, dword ptr [eax + ecx]
// 0059b8d8  03c1                 add eax, ecx
// 0059b8da  891c39               mov dword ptr [ecx + edi], ebx
// 0059b8dd  8b5804               mov ebx, dword ptr [eax + 4]
// 0059b8e0  895c3904             mov dword ptr [ecx + edi + 4], ebx
// 0059b8e4  8b5808               mov ebx, dword ptr [eax + 8]
// 0059b8e7  895c3908             mov dword ptr [ecx + edi + 8], ebx
// 0059b8eb  8b400c               mov eax, dword ptr [eax + 0xc]
// 0059b8ee  8944390c             mov dword ptr [ecx + edi + 0xc], eax
// 0059b8f2  42                   inc edx
// 0059b8f3  83c110               add ecx, 0x10
// 0059b8f6  3b5604               cmp edx, dword ptr [esi + 4]
// 0059b8f9  72d8                 jb 0x59b8d3
// 0059b8fb  5b                   pop ebx
// 0059b8fc  8b0e                 mov ecx, dword ptr [esi]
// 0059b8fe  51                   push ecx
// 0059b8ff  e8b66a3e00           call 0x9823ba
// 0059b904  83c404               add esp, 4
// 0059b907  893e                 mov dword ptr [esi], edi
// 0059b909  5f                   pop edi
// 0059b90a  8b4604               mov eax, dword ptr [esi + 4]
// 0059b90d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059b911  8b11                 mov edx, dword ptr [ecx]
// 0059b913  c1e004               shl eax, 4
// 0059b916  0306                 add eax, dword ptr [esi]
// 0059b918  8910                 mov dword ptr [eax], edx
// 0059b91a  8b5104               mov edx, dword ptr [ecx + 4]
// 0059b91d  895004               mov dword ptr [eax + 4], edx
// 0059b920  8b5108               mov edx, dword ptr [ecx + 8]
// 0059b923  895008               mov dword ptr [eax + 8], edx
// 0059b926  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0059b929  89480c               mov dword ptr [eax + 0xc], ecx
// 0059b92c  ff4604               inc dword ptr [esi + 4]
// 0059b92f  5e                   pop esi
// 0059b930  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Insert@?$List@UHeapNode@?$Heap@_KPAUInternalPacket@RakNet@@$0A@@DataStructures@@@DataStructures@@QAEXABUHeapNode@?$Heap@_KPAUInternalPacket@RakNet@@$0A@@2@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
