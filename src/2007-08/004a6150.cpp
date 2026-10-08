// roc 2007-08 004a6150  unit: RBX::VWorld::?$Listener  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a6150
//
// 004a6150  8b442408             mov eax, dword ptr [esp + 8]
// 004a6154  83c0ff               add eax, -1
// 004a6157  83ec08               sub esp, 8
// 004a615a  83f802               cmp eax, 2
// 004a615d  7716                 ja 0x4a6175
// 004a615f  6a01                 push 1
// 004a6161  6a02                 push 2
// 004a6163  8d4c2418             lea ecx, [esp + 0x18]
// 004a6167  51                   push ecx
// 004a6168  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004a616c  e81f9cffff           call 0x49fd90
// 004a6171  83c408               add esp, 8
// 004a6174  c3                   ret 
// 004a6175  56                   push esi
// 004a6176  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a617a  6a01                 push 1
// 004a617c  6a02                 push 2
// 004a617e  8d54240f             lea edx, [esp + 0xf]
// 004a6182  52                   push edx
// 004a6183  8bce                 mov ecx, esi
// 004a6185  c644241300           mov byte ptr [esp + 0x13], 0
// 004a618a  e8019cffff           call 0x49fd90
// 004a618f  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a6193  6a01                 push 1
// 004a6195  6a20                 push 0x20
// 004a6197  8d4c2410             lea ecx, [esp + 0x10]
// 004a619b  51                   push ecx
// 004a619c  8bce                 mov ecx, esi
// 004a619e  89442414             mov dword ptr [esp + 0x14], eax
// 004a61a2  e8e99bffff           call 0x49fd90
// 004a61a7  5e                   pop esi
// 004a61a8  83c408               add esp, 8
// 004a61ab  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ?writeItemType@Item@Replicator@Network@RBX@@SAXAAVBitStream@RakNet@@W4ItemType@1234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
