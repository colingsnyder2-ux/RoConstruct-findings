// roc 2009-06 004f8600  unit: RBX::Network::ClientReplicator  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f8600
//
// 004f8600  83ec0c               sub esp, 0xc
// 004f8603  53                   push ebx
// 004f8604  56                   push esi
// 004f8605  8bf1                 mov esi, ecx
// 004f8607  837e0400             cmp dword ptr [esi + 4], 0
// 004f860b  57                   push edi
// 004f860c  68e0534f00           push 0x4f53e0
// 004f8611  754c                 jne 0x4f865f
// 004f8613  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f8617  8bf8                 mov edi, eax
// 004f8619  8bd8                 mov ebx, eax
// 004f861b  8d442413             lea eax, [esp + 0x13]
// 004f861f  50                   push eax
// 004f8620  8d4c2424             lea ecx, [esp + 0x24]
// 004f8624  51                   push ecx
// 004f8625  8bce                 mov ecx, esi
// 004f8627  e824dbffff           call 0x4f6150
// 004f862c  807c240f00           cmp byte ptr [esp + 0xf], 0
// 004f8631  0f850a010000         jne 0x4f8741
// 004f8637  8bce                 mov ecx, esi
// 004f8639  3b4604               cmp eax, dword ptr [esi + 4]
// 004f863c  7210                 jb 0x4f864e
// 004f863e  53                   push ebx
// 004f863f  57                   push edi
// 004f8640  e8abefffff           call 0x4f75f0
// 004f8645  5f                   pop edi
// 004f8646  5e                   pop esi
// 004f8647  5b                   pop ebx
// 004f8648  83c40c               add esp, 0xc
// 004f864b  c20400               ret 4
// 004f864e  50                   push eax
// 004f864f  53                   push ebx
// 004f8650  57                   push edi
// 004f8651  e83af0ffff           call 0x4f7690
// 004f8656  5f                   pop edi
// 004f8657  5e                   pop esi
// 004f8658  5b                   pop ebx
// 004f8659  83c40c               add esp, 0xc
// 004f865c  c20400               ret 4
// 004f865f  8d542413             lea edx, [esp + 0x13]
// 004f8663  52                   push edx
// 004f8664  8d442424             lea eax, [esp + 0x24]
// 004f8668  50                   push eax
// 004f8669  e8e2daffff           call 0x4f6150
// 004f866e  8b0e                 mov ecx, dword ptr [esi]
// 004f8670  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004f8674  3b4604               cmp eax, dword ptr [esi + 4]
// 004f8677  7545                 jne 0x4f86be
// 004f8679  8d44c1fc             lea eax, [ecx + eax*8 - 4]
// 004f867d  8b08                 mov ecx, dword ptr [eax]
// 004f867f  41                   inc ecx
// 004f8680  3bd1                 cmp edx, ecx
// 004f8682  750b                 jne 0x4f868f
// 004f8684  ff00                 inc dword ptr [eax]
// 004f8686  5f                   pop edi
// 004f8687  5e                   pop esi
// 004f8688  5b                   pop ebx
// 004f8689  83c40c               add esp, 0xc
// 004f868c  c20400               ret 4
// 004f868f  0f86ac000000         jbe 0x4f8741
// 004f8695  68e0534f00           push 0x4f53e0
// 004f869a  89542414             mov dword ptr [esp + 0x14], edx
// 004f869e  89542418             mov dword ptr [esp + 0x18], edx
// 004f86a2  6a01                 push 1
// 004f86a4  8d542418             lea edx, [esp + 0x18]
// 004f86a8  52                   push edx
// 004f86a9  8d442428             lea eax, [esp + 0x28]
// 004f86ad  50                   push eax
// 004f86ae  8bce                 mov ecx, esi
// 004f86b0  e85bf6ffff           call 0x4f7d10
// 004f86b5  5f                   pop edi
// 004f86b6  5e                   pop esi
// 004f86b7  5b                   pop ebx
// 004f86b8  83c40c               add esp, 0xc
// 004f86bb  c20400               ret 4
// 004f86be  8b1cc1               mov ebx, dword ptr [ecx + eax*8]
// 004f86c1  8d0cc1               lea ecx, [ecx + eax*8]
// 004f86c4  8d7bff               lea edi, [ebx - 1]
// 004f86c7  3bd7                 cmp edx, edi
// 004f86c9  7313                 jae 0x4f86de
// 004f86cb  50                   push eax
// 004f86cc  52                   push edx
// 004f86cd  52                   push edx
// 004f86ce  8bce                 mov ecx, esi
// 004f86d0  e8bbefffff           call 0x4f7690
// 004f86d5  5f                   pop edi
// 004f86d6  5e                   pop esi
// 004f86d7  5b                   pop ebx
// 004f86d8  83c40c               add esp, 0xc
// 004f86db  c20400               ret 4
// 004f86de  752a                 jne 0x4f870a
// 004f86e0  ff09                 dec dword ptr [ecx]
// 004f86e2  85c0                 test eax, eax
// 004f86e4  765b                 jbe 0x4f8741
// 004f86e6  8b16                 mov edx, dword ptr [esi]
// 004f86e8  8d0cc2               lea ecx, [edx + eax*8]
// 004f86eb  8b51fc               mov edx, dword ptr [ecx - 4]
// 004f86ee  42                   inc edx
// 004f86ef  3b11                 cmp edx, dword ptr [ecx]
// 004f86f1  754e                 jne 0x4f8741
// 004f86f3  8b5104               mov edx, dword ptr [ecx + 4]
// 004f86f6  8951fc               mov dword ptr [ecx - 4], edx
// 004f86f9  50                   push eax
// 004f86fa  8bce                 mov ecx, esi
// 004f86fc  e86fe9ffff           call 0x4f7070
// 004f8701  5f                   pop edi
// 004f8702  5e                   pop esi
// 004f8703  5b                   pop ebx
// 004f8704  83c40c               add esp, 0xc
// 004f8707  c20400               ret 4
// 004f870a  3bd3                 cmp edx, ebx
// 004f870c  7205                 jb 0x4f8713
// 004f870e  3b5104               cmp edx, dword ptr [ecx + 4]
// 004f8711  762e                 jbe 0x4f8741
// 004f8713  8b7904               mov edi, dword ptr [ecx + 4]
// 004f8716  47                   inc edi
// 004f8717  3bd7                 cmp edx, edi
// 004f8719  7526                 jne 0x4f8741
// 004f871b  ff4104               inc dword ptr [ecx + 4]
// 004f871e  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f8721  49                   dec ecx
// 004f8722  3bc1                 cmp eax, ecx
// 004f8724  731b                 jae 0x4f8741
// 004f8726  8b16                 mov edx, dword ptr [esi]
// 004f8728  8d0cc2               lea ecx, [edx + eax*8]
// 004f872b  8b5104               mov edx, dword ptr [ecx + 4]
// 004f872e  42                   inc edx
// 004f872f  395108               cmp dword ptr [ecx + 8], edx
// 004f8732  750d                 jne 0x4f8741
// 004f8734  8b11                 mov edx, dword ptr [ecx]
// 004f8736  895108               mov dword ptr [ecx + 8], edx
// 004f8739  50                   push eax
// 004f873a  8bce                 mov ecx, esi
// 004f873c  e82fe9ffff           call 0x4f7070
// 004f8741  5f                   pop edi
// 004f8742  5e                   pop esi
// 004f8743  5b                   pop ebx
// 004f8744  83c40c               add esp, 0xc
// 004f8747  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Insert@?$RangeList@I@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
