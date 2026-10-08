// roc 2008-06 005d6aa0  unit: RBX::VTimerService::?$FactoryProduct  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d6aa0
//
// 005d6aa0  6a30                 push 0x30
// 005d6aa2  e8799e0c00           call 0x6a0920
// 005d6aa7  83c404               add esp, 4
// 005d6aaa  85c0                 test eax, eax
// 005d6aac  7402                 je 0x5d6ab0
// 005d6aae  8900                 mov dword ptr [eax], eax
// 005d6ab0  8d4804               lea ecx, [eax + 4]
// 005d6ab3  85c9                 test ecx, ecx
// 005d6ab5  7402                 je 0x5d6ab9
// 005d6ab7  8901                 mov dword ptr [ecx], eax
// 005d6ab9  c3                   ret 
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
