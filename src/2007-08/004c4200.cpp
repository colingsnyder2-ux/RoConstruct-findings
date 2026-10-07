// roc 2007-08 004c4200  unit: RakPeer  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4200
//
// 004c4200  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c4204  57                   push edi
// 004c4205  8b39                 mov edi, dword ptr [ecx]
// 004c4207  85ff                 test edi, edi
// 004c4209  750e                 jne 0x4c4219
// 004c420b  8d442408             lea eax, [esp + 8]
// 004c420f  50                   push eax
// 004c4210  e80bfdffff           call 0x4c3f20
// 004c4215  5f                   pop edi
// 004c4216  c20800               ret 8
// 004c4219  56                   push esi
// 004c421a  8b7104               mov esi, dword ptr [ecx + 4]
// 004c421d  85f6                 test esi, esi
// 004c421f  7403                 je 0x4c4224
// 004c4221  897108               mov dword ptr [ecx + 8], esi
// 004c4224  8b4108               mov eax, dword ptr [ecx + 8]
// 004c4227  8b00                 mov eax, dword ptr [eax]
// 004c4229  8b4004               mov eax, dword ptr [eax + 4]
// 004c422c  53                   push ebx
// 004c422d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004c4231  33d2                 xor edx, edx
// 004c4233  3b4304               cmp eax, dword ptr [ebx + 4]
// 004c4236  7321                 jae 0x4c4259
// 004c4238  8b4108               mov eax, dword ptr [ecx + 8]
// 004c423b  8b4008               mov eax, dword ptr [eax + 8]
// 004c423e  3bc6                 cmp eax, esi
// 004c4240  7403                 je 0x4c4245
// 004c4242  894108               mov dword ptr [ecx + 8], eax
// 004c4245  83c201               add edx, 1
// 004c4248  3bd7                 cmp edx, edi
// 004c424a  741d                 je 0x4c4269
// 004c424c  8b4108               mov eax, dword ptr [ecx + 8]
// 004c424f  8b00                 mov eax, dword ptr [eax]
// 004c4251  8b4004               mov eax, dword ptr [eax + 4]
// 004c4254  3b4304               cmp eax, dword ptr [ebx + 4]
// 004c4257  72df                 jb 0x4c4238
// 004c4259  8d542410             lea edx, [esp + 0x10]
// 004c425d  52                   push edx
// 004c425e  e8bdfcffff           call 0x4c3f20
// 004c4263  5b                   pop ebx
// 004c4264  5e                   pop esi
// 004c4265  5f                   pop edi
// 004c4266  c20800               ret 8
// 004c4269  85f6                 test esi, esi
// 004c426b  7406                 je 0x4c4273
// 004c426d  8b5604               mov edx, dword ptr [esi + 4]
// 004c4270  895108               mov dword ptr [ecx + 8], edx
// 004c4273  8d442410             lea eax, [esp + 0x10]
// 004c4277  50                   push eax
// 004c4278  e8a30d0000           call 0x4c5020
// 004c427d  5b                   pop ebx
// 004c427e  5e                   pop esi
// 004c427f  5f                   pop edi
// 004c4280  c20800               ret 8
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?InsertNodeIntoSortedList@HuffmanEncodingTree@RakNet@@ABEXPAUHuffmanEncodingTreeNode@@PAV?$LinkedList@PAUHuffmanEncodingTreeNode@@@DataStructures@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
