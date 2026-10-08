// roc 2009-06 006754b0  unit: RBX::VTimerService::?$FactoryProduct  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006754b0
//
// 006754b0  6a30                 push 0x30
// 006754b2  e881350a00           call 0x718a38
// 006754b7  83c404               add esp, 4
// 006754ba  85c0                 test eax, eax
// 006754bc  7402                 je 0x6754c0
// 006754be  8900                 mov dword ptr [eax], eax
// 006754c0  8d4804               lea ecx, [eax + 4]
// 006754c3  85c9                 test ecx, ecx
// 006754c5  7402                 je 0x6754c9
// 006754c7  8901                 mov dword ptr [ecx], eax
// 006754c9  c3                   ret 
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
