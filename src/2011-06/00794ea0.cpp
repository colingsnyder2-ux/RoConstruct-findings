// roc 2011-06 00794ea0  unit: seg_00790000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00794ea0
//
// 00794ea0  6a30                 push 0x30
// 00794ea2  e8b7510700           call 0x80a05e
// 00794ea7  83c404               add esp, 4
// 00794eaa  85c0                 test eax, eax
// 00794eac  7402                 je 0x794eb0
// 00794eae  8900                 mov dword ptr [eax], eax
// 00794eb0  8d4804               lea ecx, [eax + 4]
// 00794eb3  85c9                 test ecx, ecx
// 00794eb5  7402                 je 0x794eb9
// 00794eb7  8901                 mov dword ptr [ecx], eax
// 00794eb9  c3                   ret 
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
