// roc 2007-03 005a05f0  unit: seg_005a0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a05f0
//
// 005a05f0  6a0c                 push 0xc
// 005a05f2  e811db0700           call 0x61e108
// 005a05f7  83c404               add esp, 4
// 005a05fa  85c0                 test eax, eax
// 005a05fc  7406                 je 0x5a0604
// 005a05fe  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a0602  8908                 mov dword ptr [eax], ecx
// 005a0604  8d4804               lea ecx, [eax + 4]
// 005a0607  85c9                 test ecx, ecx
// 005a0609  7406                 je 0x5a0611
// 005a060b  8b542408             mov edx, dword ptr [esp + 8]
// 005a060f  8911                 mov dword ptr [ecx], edx
// 005a0611  8d4808               lea ecx, [eax + 8]
// 005a0614  85c9                 test ecx, ecx
// 005a0616  7408                 je 0x5a0620
// 005a0618  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a061c  8b12                 mov edx, dword ptr [edx]
// 005a061e  8911                 mov dword ptr [ecx], edx
// 005a0620  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?_Buynode@?$list@PAVFlagStand@RBX@@V?$allocator@PAVFlagStand@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@PAVFlagStand@RBX@@V?$allocator@PAVFlagStand@RBX@@@std@@@2@PAU342@0ABQAVFlagStand@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
