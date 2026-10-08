// roc 2007-03 0049c870  unit: seg_00490000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049c870
//
// 0049c870  8b442408             mov eax, dword ptr [esp + 8]
// 0049c874  83c0ff               add eax, -1
// 0049c877  83ec08               sub esp, 8
// 0049c87a  83f802               cmp eax, 2
// 0049c87d  7716                 ja 0x49c895
// 0049c87f  6a01                 push 1
// 0049c881  6a02                 push 2
// 0049c883  8d4c2418             lea ecx, [esp + 0x18]
// 0049c887  51                   push ecx
// 0049c888  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049c88c  e81fb5ffff           call 0x497db0
// 0049c891  83c408               add esp, 8
// 0049c894  c3                   ret 
// 0049c895  56                   push esi
// 0049c896  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049c89a  6a01                 push 1
// 0049c89c  6a02                 push 2
// 0049c89e  8d54240f             lea edx, [esp + 0xf]
// 0049c8a2  52                   push edx
// 0049c8a3  8bce                 mov ecx, esi
// 0049c8a5  c644241300           mov byte ptr [esp + 0x13], 0
// 0049c8aa  e801b5ffff           call 0x497db0
// 0049c8af  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049c8b3  6a01                 push 1
// 0049c8b5  6a20                 push 0x20
// 0049c8b7  8d4c2410             lea ecx, [esp + 0x10]
// 0049c8bb  51                   push ecx
// 0049c8bc  8bce                 mov ecx, esi
// 0049c8be  89442414             mov dword ptr [esp + 0x14], eax
// 0049c8c2  e8e9b4ffff           call 0x497db0
// 0049c8c7  5e                   pop esi
// 0049c8c8  83c408               add esp, 8
// 0049c8cb  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ?writeItemType@Item@Replicator@Network@RBX@@SAXAAVBitStream@RakNet@@W4ItemType@1234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
