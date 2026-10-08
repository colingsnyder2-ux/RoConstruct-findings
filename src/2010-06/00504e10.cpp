// roc 2010-06 00504e10  unit: RBX::Network::ClientReplicator  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00504e10
//
// 00504e10  83ec0c               sub esp, 0xc
// 00504e13  53                   push ebx
// 00504e14  56                   push esi
// 00504e15  8bf1                 mov esi, ecx
// 00504e17  837e0400             cmp dword ptr [esi + 4], 0
// 00504e1b  57                   push edi
// 00504e1c  68201c5000           push 0x501c20
// 00504e21  754c                 jne 0x504e6f
// 00504e23  8b442420             mov eax, dword ptr [esp + 0x20]
// 00504e27  8bf8                 mov edi, eax
// 00504e29  8bd8                 mov ebx, eax
// 00504e2b  8d442413             lea eax, [esp + 0x13]
// 00504e2f  50                   push eax
// 00504e30  8d4c2424             lea ecx, [esp + 0x24]
// 00504e34  51                   push ecx
// 00504e35  8bce                 mov ecx, esi
// 00504e37  e8b491ffff           call 0x4fdff0
// 00504e3c  807c240f00           cmp byte ptr [esp + 0xf], 0
// 00504e41  0f850a010000         jne 0x504f51
// 00504e47  8bce                 mov ecx, esi
// 00504e49  3b4604               cmp eax, dword ptr [esi + 4]
// 00504e4c  7210                 jb 0x504e5e
// 00504e4e  53                   push ebx
// 00504e4f  57                   push edi
// 00504e50  e8ebefffff           call 0x503e40
// 00504e55  5f                   pop edi
// 00504e56  5e                   pop esi
// 00504e57  5b                   pop ebx
// 00504e58  83c40c               add esp, 0xc
// 00504e5b  c20400               ret 4
// 00504e5e  50                   push eax
// 00504e5f  53                   push ebx
// 00504e60  57                   push edi
// 00504e61  e87af0ffff           call 0x503ee0
// 00504e66  5f                   pop edi
// 00504e67  5e                   pop esi
// 00504e68  5b                   pop ebx
// 00504e69  83c40c               add esp, 0xc
// 00504e6c  c20400               ret 4
// 00504e6f  8d542413             lea edx, [esp + 0x13]
// 00504e73  52                   push edx
// 00504e74  8d442424             lea eax, [esp + 0x24]
// 00504e78  50                   push eax
// 00504e79  e87291ffff           call 0x4fdff0
// 00504e7e  8b0e                 mov ecx, dword ptr [esi]
// 00504e80  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00504e84  3b4604               cmp eax, dword ptr [esi + 4]
// 00504e87  7545                 jne 0x504ece
// 00504e89  8d44c1fc             lea eax, [ecx + eax*8 - 4]
// 00504e8d  8b08                 mov ecx, dword ptr [eax]
// 00504e8f  41                   inc ecx
// 00504e90  3bd1                 cmp edx, ecx
// 00504e92  750b                 jne 0x504e9f
// 00504e94  ff00                 inc dword ptr [eax]
// 00504e96  5f                   pop edi
// 00504e97  5e                   pop esi
// 00504e98  5b                   pop ebx
// 00504e99  83c40c               add esp, 0xc
// 00504e9c  c20400               ret 4
// 00504e9f  0f86ac000000         jbe 0x504f51
// 00504ea5  68201c5000           push 0x501c20
// 00504eaa  89542414             mov dword ptr [esp + 0x14], edx
// 00504eae  89542418             mov dword ptr [esp + 0x18], edx
// 00504eb2  6a01                 push 1
// 00504eb4  8d542418             lea edx, [esp + 0x18]
// 00504eb8  52                   push edx
// 00504eb9  8d442428             lea eax, [esp + 0x28]
// 00504ebd  50                   push eax
// 00504ebe  8bce                 mov ecx, esi
// 00504ec0  e85bf6ffff           call 0x504520
// 00504ec5  5f                   pop edi
// 00504ec6  5e                   pop esi
// 00504ec7  5b                   pop ebx
// 00504ec8  83c40c               add esp, 0xc
// 00504ecb  c20400               ret 4
// 00504ece  8b1cc1               mov ebx, dword ptr [ecx + eax*8]
// 00504ed1  8d0cc1               lea ecx, [ecx + eax*8]
// 00504ed4  8d7bff               lea edi, [ebx - 1]
// 00504ed7  3bd7                 cmp edx, edi
// 00504ed9  7313                 jae 0x504eee
// 00504edb  50                   push eax
// 00504edc  52                   push edx
// 00504edd  52                   push edx
// 00504ede  8bce                 mov ecx, esi
// 00504ee0  e8fbefffff           call 0x503ee0
// 00504ee5  5f                   pop edi
// 00504ee6  5e                   pop esi
// 00504ee7  5b                   pop ebx
// 00504ee8  83c40c               add esp, 0xc
// 00504eeb  c20400               ret 4
// 00504eee  752a                 jne 0x504f1a
// 00504ef0  ff09                 dec dword ptr [ecx]
// 00504ef2  85c0                 test eax, eax
// 00504ef4  765b                 jbe 0x504f51
// 00504ef6  8b16                 mov edx, dword ptr [esi]
// 00504ef8  8d0cc2               lea ecx, [edx + eax*8]
// 00504efb  8b51fc               mov edx, dword ptr [ecx - 4]
// 00504efe  42                   inc edx
// 00504eff  3b11                 cmp edx, dword ptr [ecx]
// 00504f01  754e                 jne 0x504f51
// 00504f03  8b5104               mov edx, dword ptr [ecx + 4]
// 00504f06  8951fc               mov dword ptr [ecx - 4], edx
// 00504f09  50                   push eax
// 00504f0a  8bce                 mov ecx, esi
// 00504f0c  e8afe9ffff           call 0x5038c0
// 00504f11  5f                   pop edi
// 00504f12  5e                   pop esi
// 00504f13  5b                   pop ebx
// 00504f14  83c40c               add esp, 0xc
// 00504f17  c20400               ret 4
// 00504f1a  3bd3                 cmp edx, ebx
// 00504f1c  7205                 jb 0x504f23
// 00504f1e  3b5104               cmp edx, dword ptr [ecx + 4]
// 00504f21  762e                 jbe 0x504f51
// 00504f23  8b7904               mov edi, dword ptr [ecx + 4]
// 00504f26  47                   inc edi
// 00504f27  3bd7                 cmp edx, edi
// 00504f29  7526                 jne 0x504f51
// 00504f2b  ff4104               inc dword ptr [ecx + 4]
// 00504f2e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00504f31  49                   dec ecx
// 00504f32  3bc1                 cmp eax, ecx
// 00504f34  731b                 jae 0x504f51
// 00504f36  8b16                 mov edx, dword ptr [esi]
// 00504f38  8d0cc2               lea ecx, [edx + eax*8]
// 00504f3b  8b5104               mov edx, dword ptr [ecx + 4]
// 00504f3e  42                   inc edx
// 00504f3f  395108               cmp dword ptr [ecx + 8], edx
// 00504f42  750d                 jne 0x504f51
// 00504f44  8b11                 mov edx, dword ptr [ecx]
// 00504f46  895108               mov dword ptr [ecx + 8], edx
// 00504f49  50                   push eax
// 00504f4a  8bce                 mov ecx, esi
// 00504f4c  e86fe9ffff           call 0x5038c0
// 00504f51  5f                   pop edi
// 00504f52  5e                   pop esi
// 00504f53  5b                   pop ebx
// 00504f54  83c40c               add esp, 0xc
// 00504f57  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Insert@?$RangeList@I@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
