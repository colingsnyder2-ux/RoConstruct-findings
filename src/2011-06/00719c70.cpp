// roc 2011-06 00719c70  unit: RBX::VGuiMain::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00719c70
//
// 00719c70  51                   push ecx
// 00719c71  6a18                 push 0x18
// 00719c73  c744240400000000     mov dword ptr [esp + 4], 0
// 00719c7b  e8de030f00           call 0x80a05e
// 00719c80  83c404               add esp, 4
// 00719c83  85c0                 test eax, eax
// 00719c85  742c                 je 0x719cb3
// 00719c87  c7006c09ab00         mov dword ptr [eax], 0xab096c
// 00719c8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00719c91  894808               mov dword ptr [eax + 8], ecx
// 00719c94  8b542410             mov edx, dword ptr [esp + 0x10]
// 00719c98  89500c               mov dword ptr [eax + 0xc], edx
// 00719c9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00719c9f  894810               mov dword ptr [eax + 0x10], ecx
// 00719ca2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00719ca6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00719caa  895014               mov dword ptr [eax + 0x14], edx
// 00719cad  8901                 mov dword ptr [ecx], eax
// 00719caf  8bc1                 mov eax, ecx
// 00719cb1  59                   pop ecx
// 00719cb2  c3                   ret 
// 00719cb3  8b442408             mov eax, dword ptr [esp + 8]
// 00719cb7  33c9                 xor ecx, ecx
// 00719cb9  8908                 mov dword ptr [eax], ecx
// 00719cbb  59                   pop ecx
// 00719cbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
