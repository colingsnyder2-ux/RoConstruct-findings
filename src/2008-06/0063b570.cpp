// roc 2008-06 0063b570  unit: RBX::VDebrisService::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b570
//
// 0063b570  51                   push ecx
// 0063b571  6a18                 push 0x18
// 0063b573  c744240400000000     mov dword ptr [esp + 4], 0
// 0063b57b  e8a0530600           call 0x6a0920
// 0063b580  83c404               add esp, 4
// 0063b583  85c0                 test eax, eax
// 0063b585  742c                 je 0x63b5b3
// 0063b587  c70060998400         mov dword ptr [eax], 0x849960
// 0063b58d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063b591  894808               mov dword ptr [eax + 8], ecx
// 0063b594  8b542410             mov edx, dword ptr [esp + 0x10]
// 0063b598  89500c               mov dword ptr [eax + 0xc], edx
// 0063b59b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063b59f  894810               mov dword ptr [eax + 0x10], ecx
// 0063b5a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063b5a6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0063b5aa  895014               mov dword ptr [eax + 0x14], edx
// 0063b5ad  8901                 mov dword ptr [ecx], eax
// 0063b5af  8bc1                 mov eax, ecx
// 0063b5b1  59                   pop ecx
// 0063b5b2  c3                   ret 
// 0063b5b3  8b442408             mov eax, dword ptr [esp + 8]
// 0063b5b7  33c9                 xor ecx, ecx
// 0063b5b9  8908                 mov dword ptr [eax], ecx
// 0063b5bb  59                   pop ecx
// 0063b5bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
