// roc 2007-03 004b89b0  unit: seg_004b0000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b89b0
//
// 004b89b0  56                   push esi
// 004b89b1  8bf1                 mov esi, ecx
// 004b89b3  8b06                 mov eax, dword ptr [esi]
// 004b89b5  85c0                 test eax, eax
// 004b89b7  6a0c                 push 0xc
// 004b89b9  752f                 jne 0x4b89ea
// 004b89bb  e848571600           call 0x61e108
// 004b89c0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b89c4  894604               mov dword ptr [esi + 4], eax
// 004b89c7  8b11                 mov edx, dword ptr [ecx]
// 004b89c9  8910                 mov dword ptr [eax], edx
// 004b89cb  8b4604               mov eax, dword ptr [esi + 4]
// 004b89ce  894008               mov dword ptr [eax + 8], eax
// 004b89d1  8b4604               mov eax, dword ptr [esi + 4]
// 004b89d4  894004               mov dword ptr [eax + 4], eax
// 004b89d7  8b4604               mov eax, dword ptr [esi + 4]
// 004b89da  83c404               add esp, 4
// 004b89dd  c70601000000         mov dword ptr [esi], 1
// 004b89e3  894608               mov dword ptr [esi + 8], eax
// 004b89e6  5e                   pop esi
// 004b89e7  c20400               ret 4
// 004b89ea  83f801               cmp eax, 1
// 004b89ed  7547                 jne 0x4b8a36
// 004b89ef  e814571600           call 0x61e108
// 004b89f4  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b89f7  894608               mov dword ptr [esi + 8], eax
// 004b89fa  894108               mov dword ptr [ecx + 8], eax
// 004b89fd  8b5604               mov edx, dword ptr [esi + 4]
// 004b8a00  8b4608               mov eax, dword ptr [esi + 8]
// 004b8a03  894204               mov dword ptr [edx + 4], eax
// 004b8a06  8b5604               mov edx, dword ptr [esi + 4]
// 004b8a09  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b8a0c  895104               mov dword ptr [ecx + 4], edx
// 004b8a0f  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b8a12  8b4608               mov eax, dword ptr [esi + 8]
// 004b8a15  894808               mov dword ptr [eax + 8], ecx
// 004b8a18  8b5608               mov edx, dword ptr [esi + 8]
// 004b8a1b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b8a1f  8b08                 mov ecx, dword ptr [eax]
// 004b8a21  890a                 mov dword ptr [edx], ecx
// 004b8a23  8b5608               mov edx, dword ptr [esi + 8]
// 004b8a26  83c404               add esp, 4
// 004b8a29  895604               mov dword ptr [esi + 4], edx
// 004b8a2c  c70602000000         mov dword ptr [esi], 2
// 004b8a32  5e                   pop esi
// 004b8a33  c20400               ret 4
// 004b8a36  e8cd561600           call 0x61e108
// 004b8a3b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b8a3f  8b11                 mov edx, dword ptr [ecx]
// 004b8a41  8910                 mov dword ptr [eax], edx
// 004b8a43  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b8a46  8b5104               mov edx, dword ptr [ecx + 4]
// 004b8a49  894208               mov dword ptr [edx + 8], eax
// 004b8a4c  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b8a4f  8b5104               mov edx, dword ptr [ecx + 4]
// 004b8a52  895004               mov dword ptr [eax + 4], edx
// 004b8a55  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b8a58  894104               mov dword ptr [ecx + 4], eax
// 004b8a5b  8b5608               mov edx, dword ptr [esi + 8]
// 004b8a5e  895008               mov dword ptr [eax + 8], edx
// 004b8a61  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b8a64  83c404               add esp, 4
// 004b8a67  3b4e04               cmp ecx, dword ptr [esi + 4]
// 004b8a6a  7506                 jne 0x4b8a72
// 004b8a6c  894604               mov dword ptr [esi + 4], eax
// 004b8a6f  894608               mov dword ptr [esi + 8], eax
// 004b8a72  830601               add dword ptr [esi], 1
// 004b8a75  5e                   pop esi
// 004b8a76  c20400               ret 4
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?Insert@?$CircularLinkedList@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXABQAUHuffmanEncodingTreeNode@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
