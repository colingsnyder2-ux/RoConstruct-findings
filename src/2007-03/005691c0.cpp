// roc 2007-03 005691c0  unit: seg_00560000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005691c0
//
// 005691c0  6a14                 push 0x14
// 005691c2  e8414f0b00           call 0x61e108
// 005691c7  83c404               add esp, 4
// 005691ca  85c0                 test eax, eax
// 005691cc  7402                 je 0x5691d0
// 005691ce  8900                 mov dword ptr [eax], eax
// 005691d0  8d4804               lea ecx, [eax + 4]
// 005691d3  85c9                 test ecx, ecx
// 005691d5  7402                 je 0x5691d9
// 005691d7  8901                 mov dword ptr [ecx], eax
// 005691d9  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?_Buynode@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@IAEPAU_Node@?$_List_nod@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
