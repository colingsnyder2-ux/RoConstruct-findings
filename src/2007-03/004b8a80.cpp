// roc 2007-03 004b8a80  unit: seg_004b0000  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b8a80
//
// 004b8a80  56                   push esi
// 004b8a81  8bf1                 mov esi, ecx
// 004b8a83  8b06                 mov eax, dword ptr [esi]
// 004b8a85  85c0                 test eax, eax
// 004b8a87  6a0c                 push 0xc
// 004b8a89  752f                 jne 0x4b8aba
// 004b8a8b  e878561600           call 0x61e108
// 004b8a90  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b8a94  894604               mov dword ptr [esi + 4], eax
// 004b8a97  8b11                 mov edx, dword ptr [ecx]
// 004b8a99  8910                 mov dword ptr [eax], edx
// 004b8a9b  8b4604               mov eax, dword ptr [esi + 4]
// 004b8a9e  894008               mov dword ptr [eax + 8], eax
// 004b8aa1  8b4604               mov eax, dword ptr [esi + 4]
// 004b8aa4  894004               mov dword ptr [eax + 4], eax
// 004b8aa7  8b4604               mov eax, dword ptr [esi + 4]
// 004b8aaa  83c404               add esp, 4
// 004b8aad  c70601000000         mov dword ptr [esi], 1
// 004b8ab3  894608               mov dword ptr [esi + 8], eax
// 004b8ab6  5e                   pop esi
// 004b8ab7  c20400               ret 4
// 004b8aba  83f801               cmp eax, 1
// 004b8abd  7547                 jne 0x4b8b06
// 004b8abf  e844561600           call 0x61e108
// 004b8ac4  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b8ac7  894608               mov dword ptr [esi + 8], eax
// 004b8aca  894108               mov dword ptr [ecx + 8], eax
// 004b8acd  8b4608               mov eax, dword ptr [esi + 8]
// 004b8ad0  8b5604               mov edx, dword ptr [esi + 4]
// 004b8ad3  894204               mov dword ptr [edx + 4], eax
// 004b8ad6  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b8ad9  8b5604               mov edx, dword ptr [esi + 4]
// 004b8adc  895104               mov dword ptr [ecx + 4], edx
// 004b8adf  8b4608               mov eax, dword ptr [esi + 8]
// 004b8ae2  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b8ae5  894808               mov dword ptr [eax + 8], ecx
// 004b8ae8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b8aec  8b08                 mov ecx, dword ptr [eax]
// 004b8aee  8b5608               mov edx, dword ptr [esi + 8]
// 004b8af1  890a                 mov dword ptr [edx], ecx
// 004b8af3  8b4604               mov eax, dword ptr [esi + 4]
// 004b8af6  83c404               add esp, 4
// 004b8af9  c70602000000         mov dword ptr [esi], 2
// 004b8aff  894608               mov dword ptr [esi + 8], eax
// 004b8b02  5e                   pop esi
// 004b8b03  c20400               ret 4
// 004b8b06  e8fd551600           call 0x61e108
// 004b8b0b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004b8b0f  8b0a                 mov ecx, dword ptr [edx]
// 004b8b11  8908                 mov dword ptr [eax], ecx
// 004b8b13  8b5608               mov edx, dword ptr [esi + 8]
// 004b8b16  895004               mov dword ptr [eax + 4], edx
// 004b8b19  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b8b1c  8b5108               mov edx, dword ptr [ecx + 8]
// 004b8b1f  895008               mov dword ptr [eax + 8], edx
// 004b8b22  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b8b25  8b5108               mov edx, dword ptr [ecx + 8]
// 004b8b28  894204               mov dword ptr [edx + 4], eax
// 004b8b2b  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b8b2e  83c404               add esp, 4
// 004b8b31  894108               mov dword ptr [ecx + 8], eax
// 004b8b34  830601               add dword ptr [esi], 1
// 004b8b37  5e                   pop esi
// 004b8b38  c20400               ret 4
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?Add@?$CircularLinkedList@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEAAPAUHuffmanEncodingTreeNode@@ABQAU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
