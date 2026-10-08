// roc 2010-06 006400b0  unit: RBX::VVisit::?$BoundFuncDesc  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006400b0
//
// 006400b0  6a30                 push 0x30
// 006400b2  e8e9781600           call 0x7a79a0
// 006400b7  83c404               add esp, 4
// 006400ba  85c0                 test eax, eax
// 006400bc  7402                 je 0x6400c0
// 006400be  8900                 mov dword ptr [eax], eax
// 006400c0  8d4804               lea ecx, [eax + 4]
// 006400c3  85c9                 test ecx, ecx
// 006400c5  7402                 je 0x6400c9
// 006400c7  8901                 mov dword ptr [ecx], eax
// 006400c9  c3                   ret 
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
