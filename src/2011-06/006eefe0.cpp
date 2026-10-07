// roc 2011-06 006eefe0  unit: RBX::P8GuiObject::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006eefe0
//
// 006eefe0  51                   push ecx
// 006eefe1  6a18                 push 0x18
// 006eefe3  c744240400000000     mov dword ptr [esp + 4], 0
// 006eefeb  e86eb01100           call 0x80a05e
// 006eeff0  83c404               add esp, 4
// 006eeff3  85c0                 test eax, eax
// 006eeff5  742c                 je 0x6ef023
// 006eeff7  c700e88baa00         mov dword ptr [eax], 0xaa8be8
// 006eeffd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ef001  894808               mov dword ptr [eax + 8], ecx
// 006ef004  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ef008  89500c               mov dword ptr [eax + 0xc], edx
// 006ef00b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ef00f  894810               mov dword ptr [eax + 0x10], ecx
// 006ef012  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ef016  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ef01a  895014               mov dword ptr [eax + 0x14], edx
// 006ef01d  8901                 mov dword ptr [ecx], eax
// 006ef01f  8bc1                 mov eax, ecx
// 006ef021  59                   pop ecx
// 006ef022  c3                   ret 
// 006ef023  8b442408             mov eax, dword ptr [esp + 8]
// 006ef027  33c9                 xor ecx, ecx
// 006ef029  8908                 mov dword ptr [eax], ecx
// 006ef02b  59                   pop ecx
// 006ef02c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
