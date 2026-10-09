// roc 2009-12 005563b0  unit: RBX::Network::ClientReplicator  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005563b0
//
// 005563b0  83ec0c               sub esp, 0xc
// 005563b3  53                   push ebx
// 005563b4  56                   push esi
// 005563b5  8bf1                 mov esi, ecx
// 005563b7  837e0400             cmp dword ptr [esi + 4], 0
// 005563bb  57                   push edi
// 005563bc  6820335500           push 0x553320
// 005563c1  754c                 jne 0x55640f
// 005563c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 005563c7  8bf8                 mov edi, eax
// 005563c9  8bd8                 mov ebx, eax
// 005563cb  8d442413             lea eax, [esp + 0x13]
// 005563cf  50                   push eax
// 005563d0  8d4c2424             lea ecx, [esp + 0x24]
// 005563d4  51                   push ecx
// 005563d5  8bce                 mov ecx, esi
// 005563d7  e82493ffff           call 0x54f700
// 005563dc  807c240f00           cmp byte ptr [esp + 0xf], 0
// 005563e1  0f850a010000         jne 0x5564f1
// 005563e7  8bce                 mov ecx, esi
// 005563e9  3b4604               cmp eax, dword ptr [esi + 4]
// 005563ec  7210                 jb 0x5563fe
// 005563ee  53                   push ebx
// 005563ef  57                   push edi
// 005563f0  e8ebefffff           call 0x5553e0
// 005563f5  5f                   pop edi
// 005563f6  5e                   pop esi
// 005563f7  5b                   pop ebx
// 005563f8  83c40c               add esp, 0xc
// 005563fb  c20400               ret 4
// 005563fe  50                   push eax
// 005563ff  53                   push ebx
// 00556400  57                   push edi
// 00556401  e87af0ffff           call 0x555480
// 00556406  5f                   pop edi
// 00556407  5e                   pop esi
// 00556408  5b                   pop ebx
// 00556409  83c40c               add esp, 0xc
// 0055640c  c20400               ret 4
// 0055640f  8d542413             lea edx, [esp + 0x13]
// 00556413  52                   push edx
// 00556414  8d442424             lea eax, [esp + 0x24]
// 00556418  50                   push eax
// 00556419  e8e292ffff           call 0x54f700
// 0055641e  8b0e                 mov ecx, dword ptr [esi]
// 00556420  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00556424  3b4604               cmp eax, dword ptr [esi + 4]
// 00556427  7545                 jne 0x55646e
// 00556429  8d44c1fc             lea eax, [ecx + eax*8 - 4]
// 0055642d  8b08                 mov ecx, dword ptr [eax]
// 0055642f  41                   inc ecx
// 00556430  3bd1                 cmp edx, ecx
// 00556432  750b                 jne 0x55643f
// 00556434  ff00                 inc dword ptr [eax]
// 00556436  5f                   pop edi
// 00556437  5e                   pop esi
// 00556438  5b                   pop ebx
// 00556439  83c40c               add esp, 0xc
// 0055643c  c20400               ret 4
// 0055643f  0f86ac000000         jbe 0x5564f1
// 00556445  6820335500           push 0x553320
// 0055644a  89542414             mov dword ptr [esp + 0x14], edx
// 0055644e  89542418             mov dword ptr [esp + 0x18], edx
// 00556452  6a01                 push 1
// 00556454  8d542418             lea edx, [esp + 0x18]
// 00556458  52                   push edx
// 00556459  8d442428             lea eax, [esp + 0x28]
// 0055645d  50                   push eax
// 0055645e  8bce                 mov ecx, esi
// 00556460  e85bf6ffff           call 0x555ac0
// 00556465  5f                   pop edi
// 00556466  5e                   pop esi
// 00556467  5b                   pop ebx
// 00556468  83c40c               add esp, 0xc
// 0055646b  c20400               ret 4
// 0055646e  8b1cc1               mov ebx, dword ptr [ecx + eax*8]
// 00556471  8d0cc1               lea ecx, [ecx + eax*8]
// 00556474  8d7bff               lea edi, [ebx - 1]
// 00556477  3bd7                 cmp edx, edi
// 00556479  7313                 jae 0x55648e
// 0055647b  50                   push eax
// 0055647c  52                   push edx
// 0055647d  52                   push edx
// 0055647e  8bce                 mov ecx, esi
// 00556480  e8fbefffff           call 0x555480
// 00556485  5f                   pop edi
// 00556486  5e                   pop esi
// 00556487  5b                   pop ebx
// 00556488  83c40c               add esp, 0xc
// 0055648b  c20400               ret 4
// 0055648e  752a                 jne 0x5564ba
// 00556490  ff09                 dec dword ptr [ecx]
// 00556492  85c0                 test eax, eax
// 00556494  765b                 jbe 0x5564f1
// 00556496  8b16                 mov edx, dword ptr [esi]
// 00556498  8d0cc2               lea ecx, [edx + eax*8]
// 0055649b  8b51fc               mov edx, dword ptr [ecx - 4]
// 0055649e  42                   inc edx
// 0055649f  3b11                 cmp edx, dword ptr [ecx]
// 005564a1  754e                 jne 0x5564f1
// 005564a3  8b5104               mov edx, dword ptr [ecx + 4]
// 005564a6  8951fc               mov dword ptr [ecx - 4], edx
// 005564a9  50                   push eax
// 005564aa  8bce                 mov ecx, esi
// 005564ac  e8afe9ffff           call 0x554e60
// 005564b1  5f                   pop edi
// 005564b2  5e                   pop esi
// 005564b3  5b                   pop ebx
// 005564b4  83c40c               add esp, 0xc
// 005564b7  c20400               ret 4
// 005564ba  3bd3                 cmp edx, ebx
// 005564bc  7205                 jb 0x5564c3
// 005564be  3b5104               cmp edx, dword ptr [ecx + 4]
// 005564c1  762e                 jbe 0x5564f1
// 005564c3  8b7904               mov edi, dword ptr [ecx + 4]
// 005564c6  47                   inc edi
// 005564c7  3bd7                 cmp edx, edi
// 005564c9  7526                 jne 0x5564f1
// 005564cb  ff4104               inc dword ptr [ecx + 4]
// 005564ce  8b4e04               mov ecx, dword ptr [esi + 4]
// 005564d1  49                   dec ecx
// 005564d2  3bc1                 cmp eax, ecx
// 005564d4  731b                 jae 0x5564f1
// 005564d6  8b16                 mov edx, dword ptr [esi]
// 005564d8  8d0cc2               lea ecx, [edx + eax*8]
// 005564db  8b5104               mov edx, dword ptr [ecx + 4]
// 005564de  42                   inc edx
// 005564df  395108               cmp dword ptr [ecx + 8], edx
// 005564e2  750d                 jne 0x5564f1
// 005564e4  8b11                 mov edx, dword ptr [ecx]
// 005564e6  895108               mov dword ptr [ecx + 8], edx
// 005564e9  50                   push eax
// 005564ea  8bce                 mov ecx, esi
// 005564ec  e86fe9ffff           call 0x554e60
// 005564f1  5f                   pop edi
// 005564f2  5e                   pop esi
// 005564f3  5b                   pop ebx
// 005564f4  83c40c               add esp, 0xc
// 005564f7  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Insert@?$RangeList@I@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
