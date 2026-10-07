// roc 2012-06 0059b570  unit: VAuthoringSettings::?$FactoryProduct  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059b570
//
// 0059b570  56                   push esi
// 0059b571  8bf1                 mov esi, ecx
// 0059b573  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0059b577  752d                 jne 0x59b5a6
// 0059b579  6a10                 push 0x10
// 0059b57b  e8706e3e00           call 0x9823f0
// 0059b580  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059b584  8906                 mov dword ptr [esi], eax
// 0059b586  c7460400000000       mov dword ptr [esi + 4], 0
// 0059b58d  c7460801000000       mov dword ptr [esi + 8], 1
// 0059b594  8a11                 mov dl, byte ptr [ecx]
// 0059b596  83c404               add esp, 4
// 0059b599  8810                 mov byte ptr [eax], dl
// 0059b59b  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 0059b5a2  5e                   pop esi
// 0059b5a3  c20c00               ret 0xc
// 0059b5a6  8b4608               mov eax, dword ptr [esi + 8]
// 0059b5a9  8b542408             mov edx, dword ptr [esp + 8]
// 0059b5ad  8b0e                 mov ecx, dword ptr [esi]
// 0059b5af  8a12                 mov dl, byte ptr [edx]
// 0059b5b1  881408               mov byte ptr [eax + ecx], dl
// 0059b5b4  ff4608               inc dword ptr [esi + 8]
// 0059b5b7  8b4e08               mov ecx, dword ptr [esi + 8]
// 0059b5ba  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059b5bd  3bc8                 cmp ecx, eax
// 0059b5bf  7507                 jne 0x59b5c8
// 0059b5c1  c7460800000000       mov dword ptr [esi + 8], 0
// 0059b5c8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0059b5cb  3b4e04               cmp ecx, dword ptr [esi + 4]
// 0059b5ce  7559                 jne 0x59b629
// 0059b5d0  03c0                 add eax, eax
// 0059b5d2  7455                 je 0x59b629
// 0059b5d4  57                   push edi
// 0059b5d5  50                   push eax
// 0059b5d6  e8156e3e00           call 0x9823f0
// 0059b5db  8bf8                 mov edi, eax
// 0059b5dd  83c404               add esp, 4
// 0059b5e0  85ff                 test edi, edi
// 0059b5e2  7444                 je 0x59b628
// 0059b5e4  33c9                 xor ecx, ecx
// 0059b5e6  394e0c               cmp dword ptr [esi + 0xc], ecx
// 0059b5e9  761e                 jbe 0x59b609
// 0059b5eb  eb03                 jmp 0x59b5f0
// 0059b5ed  8d4900               lea ecx, [ecx]
// 0059b5f0  8b4604               mov eax, dword ptr [esi + 4]
// 0059b5f3  03c1                 add eax, ecx
// 0059b5f5  33d2                 xor edx, edx
// 0059b5f7  f7760c               div dword ptr [esi + 0xc]
// 0059b5fa  8b06                 mov eax, dword ptr [esi]
// 0059b5fc  41                   inc ecx
// 0059b5fd  8a1402               mov dl, byte ptr [edx + eax]
// 0059b600  885439ff             mov byte ptr [ecx + edi - 1], dl
// 0059b604  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 0059b607  72e7                 jb 0x59b5f0
// 0059b609  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059b60c  8b0e                 mov ecx, dword ptr [esi]
// 0059b60e  894608               mov dword ptr [esi + 8], eax
// 0059b611  03c0                 add eax, eax
// 0059b613  51                   push ecx
// 0059b614  c7460400000000       mov dword ptr [esi + 4], 0
// 0059b61b  89460c               mov dword ptr [esi + 0xc], eax
// 0059b61e  e8976d3e00           call 0x9823ba
// 0059b623  83c404               add esp, 4
// 0059b626  893e                 mov dword ptr [esi], edi
// 0059b628  5f                   pop edi
// 0059b629  5e                   pop esi
// 0059b62a  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Push@?$Queue@_N@DataStructures@@QAEXAB_NPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
