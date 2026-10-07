// roc 2011-06 006ef030  unit: RBX::P8GuiObject::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ef030
//
// 006ef030  51                   push ecx
// 006ef031  6a18                 push 0x18
// 006ef033  c744240400000000     mov dword ptr [esp + 4], 0
// 006ef03b  e81eb01100           call 0x80a05e
// 006ef040  83c404               add esp, 4
// 006ef043  85c0                 test eax, eax
// 006ef045  742c                 je 0x6ef073
// 006ef047  c700fc8baa00         mov dword ptr [eax], 0xaa8bfc
// 006ef04d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ef051  894808               mov dword ptr [eax + 8], ecx
// 006ef054  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ef058  89500c               mov dword ptr [eax + 0xc], edx
// 006ef05b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ef05f  894810               mov dword ptr [eax + 0x10], ecx
// 006ef062  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ef066  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ef06a  895014               mov dword ptr [eax + 0x14], edx
// 006ef06d  8901                 mov dword ptr [ecx], eax
// 006ef06f  8bc1                 mov eax, ecx
// 006ef071  59                   pop ecx
// 006ef072  c3                   ret 
// 006ef073  8b442408             mov eax, dword ptr [esp + 8]
// 006ef077  33c9                 xor ecx, ecx
// 006ef079  8908                 mov dword ptr [eax], ecx
// 006ef07b  59                   pop ecx
// 006ef07c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
