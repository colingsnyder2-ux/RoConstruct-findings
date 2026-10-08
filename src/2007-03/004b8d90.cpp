// roc 2007-03 004b8d90  unit: seg_004b0000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b8d90
//
// 004b8d90  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b8d94  57                   push edi
// 004b8d95  8b39                 mov edi, dword ptr [ecx]
// 004b8d97  85ff                 test edi, edi
// 004b8d99  750e                 jne 0x4b8da9
// 004b8d9b  8d442408             lea eax, [esp + 8]
// 004b8d9f  50                   push eax
// 004b8da0  e80bfcffff           call 0x4b89b0
// 004b8da5  5f                   pop edi
// 004b8da6  c20800               ret 8
// 004b8da9  56                   push esi
// 004b8daa  8b7104               mov esi, dword ptr [ecx + 4]
// 004b8dad  85f6                 test esi, esi
// 004b8daf  7403                 je 0x4b8db4
// 004b8db1  897108               mov dword ptr [ecx + 8], esi
// 004b8db4  8b4108               mov eax, dword ptr [ecx + 8]
// 004b8db7  8b00                 mov eax, dword ptr [eax]
// 004b8db9  8b4004               mov eax, dword ptr [eax + 4]
// 004b8dbc  53                   push ebx
// 004b8dbd  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004b8dc1  33d2                 xor edx, edx
// 004b8dc3  3b4304               cmp eax, dword ptr [ebx + 4]
// 004b8dc6  7321                 jae 0x4b8de9
// 004b8dc8  8b4108               mov eax, dword ptr [ecx + 8]
// 004b8dcb  8b4008               mov eax, dword ptr [eax + 8]
// 004b8dce  3bc6                 cmp eax, esi
// 004b8dd0  7403                 je 0x4b8dd5
// 004b8dd2  894108               mov dword ptr [ecx + 8], eax
// 004b8dd5  83c201               add edx, 1
// 004b8dd8  3bd7                 cmp edx, edi
// 004b8dda  741d                 je 0x4b8df9
// 004b8ddc  8b4108               mov eax, dword ptr [ecx + 8]
// 004b8ddf  8b00                 mov eax, dword ptr [eax]
// 004b8de1  8b4004               mov eax, dword ptr [eax + 4]
// 004b8de4  3b4304               cmp eax, dword ptr [ebx + 4]
// 004b8de7  72df                 jb 0x4b8dc8
// 004b8de9  8d542410             lea edx, [esp + 0x10]
// 004b8ded  52                   push edx
// 004b8dee  e8bdfbffff           call 0x4b89b0
// 004b8df3  5b                   pop ebx
// 004b8df4  5e                   pop esi
// 004b8df5  5f                   pop edi
// 004b8df6  c20800               ret 8
// 004b8df9  85f6                 test esi, esi
// 004b8dfb  7406                 je 0x4b8e03
// 004b8dfd  8b5604               mov edx, dword ptr [esi + 4]
// 004b8e00  895108               mov dword ptr [ecx + 8], edx
// 004b8e03  8d442410             lea eax, [esp + 0x10]
// 004b8e07  50                   push eax
// 004b8e08  e873fcffff           call 0x4b8a80
// 004b8e0d  5b                   pop ebx
// 004b8e0e  5e                   pop esi
// 004b8e0f  5f                   pop edi
// 004b8e10  c20800               ret 8
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?InsertNodeIntoSortedList@HuffmanEncodingTree@@ABEXPAUHuffmanEncodingTreeNode@@PAV?$LinkedList@PAUHuffmanEncodingTreeNode@@@DataStructures@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
