// roc 2011-06 0058cdf0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058cdf0
//
// 0058cdf0  51                   push ecx
// 0058cdf1  6a18                 push 0x18
// 0058cdf3  c744240400000000     mov dword ptr [esp + 4], 0
// 0058cdfb  e85ed22700           call 0x80a05e
// 0058ce00  83c404               add esp, 4
// 0058ce03  85c0                 test eax, eax
// 0058ce05  742c                 je 0x58ce33
// 0058ce07  c700548ca800         mov dword ptr [eax], 0xa88c54
// 0058ce0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058ce11  894808               mov dword ptr [eax + 8], ecx
// 0058ce14  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058ce18  89500c               mov dword ptr [eax + 0xc], edx
// 0058ce1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058ce1f  894810               mov dword ptr [eax + 0x10], ecx
// 0058ce22  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058ce26  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058ce2a  895014               mov dword ptr [eax + 0x14], edx
// 0058ce2d  8901                 mov dword ptr [ecx], eax
// 0058ce2f  8bc1                 mov eax, ecx
// 0058ce31  59                   pop ecx
// 0058ce32  c3                   ret 
// 0058ce33  8b442408             mov eax, dword ptr [esp + 8]
// 0058ce37  33c9                 xor ecx, ecx
// 0058ce39  8908                 mov dword ptr [eax], ecx
// 0058ce3b  59                   pop ecx
// 0058ce3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
