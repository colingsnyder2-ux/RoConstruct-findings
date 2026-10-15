// roc 2008-06 005cfaf0  unit: ChatEnter  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cfaf0
//
// 005cfaf0  51                   push ecx
// 005cfaf1  6a10                 push 0x10
// 005cfaf3  c744240400000000     mov dword ptr [esp + 4], 0
// 005cfafb  e8200e0d00           call 0x6a0920
// 005cfb00  83c404               add esp, 4
// 005cfb03  85c0                 test eax, eax
// 005cfb05  741e                 je 0x5cfb25
// 005cfb07  c70074aa8300         mov dword ptr [eax], 0x83aa74
// 005cfb0d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005cfb11  894808               mov dword ptr [eax + 8], ecx
// 005cfb14  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cfb18  8b542414             mov edx, dword ptr [esp + 0x14]
// 005cfb1c  89500c               mov dword ptr [eax + 0xc], edx
// 005cfb1f  8901                 mov dword ptr [ecx], eax
// 005cfb21  8bc1                 mov eax, ecx
// 005cfb23  59                   pop ecx
// 005cfb24  c3                   ret 
// 005cfb25  8b442408             mov eax, dword ptr [esp + 8]
// 005cfb29  33c9                 xor ecx, ecx
// 005cfb2b  8908                 mov dword ptr [eax], ecx
// 005cfb2d  59                   pop ecx
// 005cfb2e  c3                   ret 
// library rbxgs/roc_unit_22a40a9b8ba2a9ec.cpp (function ??$getset@P8HopperBin@RBX@@AEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@?$PropDescriptor@VHopperBin@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@HP8HopperBin@2@AEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_22a40a9b8ba2a9ec.cpp
