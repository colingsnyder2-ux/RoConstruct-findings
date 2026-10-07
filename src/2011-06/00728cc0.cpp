// roc 2011-06 00728cc0  unit: RBX::VDecal::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00728cc0
//
// 00728cc0  51                   push ecx
// 00728cc1  6a18                 push 0x18
// 00728cc3  c744240400000000     mov dword ptr [esp + 4], 0
// 00728ccb  e88e130e00           call 0x80a05e
// 00728cd0  83c404               add esp, 4
// 00728cd3  85c0                 test eax, eax
// 00728cd5  742c                 je 0x728d03
// 00728cd7  c700b02eab00         mov dword ptr [eax], 0xab2eb0
// 00728cdd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00728ce1  894808               mov dword ptr [eax + 8], ecx
// 00728ce4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00728ce8  89500c               mov dword ptr [eax + 0xc], edx
// 00728ceb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00728cef  894810               mov dword ptr [eax + 0x10], ecx
// 00728cf2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00728cf6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00728cfa  895014               mov dword ptr [eax + 0x14], edx
// 00728cfd  8901                 mov dword ptr [ecx], eax
// 00728cff  8bc1                 mov eax, ecx
// 00728d01  59                   pop ecx
// 00728d02  c3                   ret 
// 00728d03  8b442408             mov eax, dword ptr [esp + 8]
// 00728d07  33c9                 xor ecx, ecx
// 00728d09  8908                 mov dword ptr [eax], ecx
// 00728d0b  59                   pop ecx
// 00728d0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
