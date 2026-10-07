// roc 2007-08 004c5020  unit: RakPeer  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5020
//
// 004c5020  56                   push esi
// 004c5021  8bf1                 mov esi, ecx
// 004c5023  8b06                 mov eax, dword ptr [esi]
// 004c5025  85c0                 test eax, eax
// 004c5027  6a0c                 push 0xc
// 004c5029  752f                 jne 0x4c505a
// 004c502b  e8c6ae1600           call 0x62fef6
// 004c5030  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c5034  894604               mov dword ptr [esi + 4], eax
// 004c5037  8b11                 mov edx, dword ptr [ecx]
// 004c5039  8910                 mov dword ptr [eax], edx
// 004c503b  8b4604               mov eax, dword ptr [esi + 4]
// 004c503e  894008               mov dword ptr [eax + 8], eax
// 004c5041  8b4604               mov eax, dword ptr [esi + 4]
// 004c5044  894004               mov dword ptr [eax + 4], eax
// 004c5047  8b4604               mov eax, dword ptr [esi + 4]
// 004c504a  83c404               add esp, 4
// 004c504d  c70601000000         mov dword ptr [esi], 1
// 004c5053  894608               mov dword ptr [esi + 8], eax
// 004c5056  5e                   pop esi
// 004c5057  c20400               ret 4
// 004c505a  83f801               cmp eax, 1
// 004c505d  7547                 jne 0x4c50a6
// 004c505f  e892ae1600           call 0x62fef6
// 004c5064  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c5067  894608               mov dword ptr [esi + 8], eax
// 004c506a  894108               mov dword ptr [ecx + 8], eax
// 004c506d  8b4608               mov eax, dword ptr [esi + 8]
// 004c5070  8b5604               mov edx, dword ptr [esi + 4]
// 004c5073  894204               mov dword ptr [edx + 4], eax
// 004c5076  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c5079  8b5604               mov edx, dword ptr [esi + 4]
// 004c507c  895104               mov dword ptr [ecx + 4], edx
// 004c507f  8b4608               mov eax, dword ptr [esi + 8]
// 004c5082  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c5085  894808               mov dword ptr [eax + 8], ecx
// 004c5088  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c508c  8b08                 mov ecx, dword ptr [eax]
// 004c508e  8b5608               mov edx, dword ptr [esi + 8]
// 004c5091  890a                 mov dword ptr [edx], ecx
// 004c5093  8b4604               mov eax, dword ptr [esi + 4]
// 004c5096  83c404               add esp, 4
// 004c5099  c70602000000         mov dword ptr [esi], 2
// 004c509f  894608               mov dword ptr [esi + 8], eax
// 004c50a2  5e                   pop esi
// 004c50a3  c20400               ret 4
// 004c50a6  e84bae1600           call 0x62fef6
// 004c50ab  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004c50af  8b0a                 mov ecx, dword ptr [edx]
// 004c50b1  8908                 mov dword ptr [eax], ecx
// 004c50b3  8b5608               mov edx, dword ptr [esi + 8]
// 004c50b6  895004               mov dword ptr [eax + 4], edx
// 004c50b9  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c50bc  8b5108               mov edx, dword ptr [ecx + 8]
// 004c50bf  895008               mov dword ptr [eax + 8], edx
// 004c50c2  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c50c5  8b5108               mov edx, dword ptr [ecx + 8]
// 004c50c8  894204               mov dword ptr [edx + 4], eax
// 004c50cb  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c50ce  83c404               add esp, 4
// 004c50d1  894108               mov dword ptr [ecx + 8], eax
// 004c50d4  830601               add dword ptr [esi], 1
// 004c50d7  5e                   pop esi
// 004c50d8  c20400               ret 4
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Add@?$CircularLinkedList@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEAAPAUHuffmanEncodingTreeNode@@ABQAU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
