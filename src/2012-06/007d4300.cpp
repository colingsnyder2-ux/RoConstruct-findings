// roc 2012-06 007d4300  unit: RBX::VTimerService::?$FactoryProduct  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d4300
//
// 007d4300  6a30                 push 0x30
// 007d4302  e813de1a00           call 0x98211a
// 007d4307  83c404               add esp, 4
// 007d430a  85c0                 test eax, eax
// 007d430c  7402                 je 0x7d4310
// 007d430e  8900                 mov dword ptr [eax], eax
// 007d4310  8d4804               lea ecx, [eax + 4]
// 007d4313  85c9                 test ecx, ecx
// 007d4315  7402                 je 0x7d4319
// 007d4317  8901                 mov dword ptr [ecx], eax
// 007d4319  c3                   ret 
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
