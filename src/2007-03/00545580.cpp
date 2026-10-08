// roc 2007-03 00545580  unit: seg_00540000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00545580
//
// 00545580  6a30                 push 0x30
// 00545582  e8818b0d00           call 0x61e108
// 00545587  83c404               add esp, 4
// 0054558a  85c0                 test eax, eax
// 0054558c  7402                 je 0x545590
// 0054558e  8900                 mov dword ptr [eax], eax
// 00545590  8d4804               lea ecx, [eax + 4]
// 00545593  85c9                 test ecx, ecx
// 00545595  7402                 je 0x545599
// 00545597  8901                 mov dword ptr [ecx], eax
// 00545599  c3                   ret 
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
