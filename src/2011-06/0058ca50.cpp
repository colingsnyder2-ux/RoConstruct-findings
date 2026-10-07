// roc 2011-06 0058ca50  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058ca50
//
// 0058ca50  51                   push ecx
// 0058ca51  6a18                 push 0x18
// 0058ca53  c744240400000000     mov dword ptr [esp + 4], 0
// 0058ca5b  e8fed52700           call 0x80a05e
// 0058ca60  83c404               add esp, 4
// 0058ca63  85c0                 test eax, eax
// 0058ca65  742c                 je 0x58ca93
// 0058ca67  c700788ba800         mov dword ptr [eax], 0xa88b78
// 0058ca6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058ca71  894808               mov dword ptr [eax + 8], ecx
// 0058ca74  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058ca78  89500c               mov dword ptr [eax + 0xc], edx
// 0058ca7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058ca7f  894810               mov dword ptr [eax + 0x10], ecx
// 0058ca82  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058ca86  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058ca8a  895014               mov dword ptr [eax + 0x14], edx
// 0058ca8d  8901                 mov dword ptr [ecx], eax
// 0058ca8f  8bc1                 mov eax, ecx
// 0058ca91  59                   pop ecx
// 0058ca92  c3                   ret 
// 0058ca93  8b442408             mov eax, dword ptr [esp + 8]
// 0058ca97  33c9                 xor ecx, ecx
// 0058ca99  8908                 mov dword ptr [eax], ecx
// 0058ca9b  59                   pop ecx
// 0058ca9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
