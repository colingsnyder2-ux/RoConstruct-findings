// roc 2007-03 004cda80  unit: seg_004c0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cda80
//
// 004cda80  6a38                 push 0x38
// 004cda82  e881061500           call 0x61e108
// 004cda87  83c404               add esp, 4
// 004cda8a  85c0                 test eax, eax
// 004cda8c  7406                 je 0x4cda94
// 004cda8e  c70000000000         mov dword ptr [eax], 0
// 004cda94  8d4804               lea ecx, [eax + 4]
// 004cda97  85c9                 test ecx, ecx
// 004cda99  7406                 je 0x4cdaa1
// 004cda9b  c70100000000         mov dword ptr [ecx], 0
// 004cdaa1  8d4808               lea ecx, [eax + 8]
// 004cdaa4  85c9                 test ecx, ecx
// 004cdaa6  7406                 je 0x4cdaae
// 004cdaa8  c70100000000         mov dword ptr [ecx], 0
// 004cdaae  c6403401             mov byte ptr [eax + 0x34], 1
// 004cdab2  c6403500             mov byte ptr [eax + 0x35], 0
// 004cdab6  c3                   ret 
// library rbxgs-view/BrickMesh.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
