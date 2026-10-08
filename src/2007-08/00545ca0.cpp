// roc 2007-08 00545ca0  unit: RBX::MD5HasherImpl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545ca0
//
// 00545ca0  6a30                 push 0x30
// 00545ca2  e84fa20e00           call 0x62fef6
// 00545ca7  83c404               add esp, 4
// 00545caa  85c0                 test eax, eax
// 00545cac  7402                 je 0x545cb0
// 00545cae  8900                 mov dword ptr [eax], eax
// 00545cb0  8d4804               lea ecx, [eax + 4]
// 00545cb3  85c9                 test ecx, ecx
// 00545cb5  7402                 je 0x545cb9
// 00545cb7  8901                 mov dword ptr [ecx], eax
// 00545cb9  c3                   ret 
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
