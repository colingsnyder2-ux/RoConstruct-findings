// roc 2009-12 00700850  unit: RBX::VTimerService::?$FactoryProduct  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00700850
//
// 00700850  6a30                 push 0x30
// 00700852  e809300f00           call 0x7f3860
// 00700857  83c404               add esp, 4
// 0070085a  85c0                 test eax, eax
// 0070085c  7402                 je 0x700860
// 0070085e  8900                 mov dword ptr [eax], eax
// 00700860  8d4804               lea ecx, [eax + 4]
// 00700863  85c9                 test ecx, ecx
// 00700865  7402                 je 0x700869
// 00700867  8901                 mov dword ptr [ecx], eax
// 00700869  c3                   ret 
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
