// roc 2008-06 005b7320  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7320
//
// 005b7320  51                   push ecx
// 005b7321  6a18                 push 0x18
// 005b7323  c744240400000000     mov dword ptr [esp + 4], 0
// 005b732b  e8f0950e00           call 0x6a0920
// 005b7330  83c404               add esp, 4
// 005b7333  85c0                 test eax, eax
// 005b7335  742c                 je 0x5b7363
// 005b7337  c70070758300         mov dword ptr [eax], 0x837570
// 005b733d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b7341  894808               mov dword ptr [eax + 8], ecx
// 005b7344  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b7348  89500c               mov dword ptr [eax + 0xc], edx
// 005b734b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b734f  894810               mov dword ptr [eax + 0x10], ecx
// 005b7352  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b7356  8b542418             mov edx, dword ptr [esp + 0x18]
// 005b735a  895014               mov dword ptr [eax + 0x14], edx
// 005b735d  8901                 mov dword ptr [ecx], eax
// 005b735f  8bc1                 mov eax, ecx
// 005b7361  59                   pop ecx
// 005b7362  c3                   ret 
// 005b7363  8b442408             mov eax, dword ptr [esp + 8]
// 005b7367  33c9                 xor ecx, ecx
// 005b7369  8908                 mov dword ptr [eax], ecx
// 005b736b  59                   pop ecx
// 005b736c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
