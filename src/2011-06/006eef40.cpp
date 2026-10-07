// roc 2011-06 006eef40  unit: RBX::P8GuiObject::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006eef40
//
// 006eef40  51                   push ecx
// 006eef41  6a18                 push 0x18
// 006eef43  c744240400000000     mov dword ptr [esp + 4], 0
// 006eef4b  e80eb11100           call 0x80a05e
// 006eef50  83c404               add esp, 4
// 006eef53  85c0                 test eax, eax
// 006eef55  742c                 je 0x6eef83
// 006eef57  c700c08baa00         mov dword ptr [eax], 0xaa8bc0
// 006eef5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006eef61  894808               mov dword ptr [eax + 8], ecx
// 006eef64  8b542410             mov edx, dword ptr [esp + 0x10]
// 006eef68  89500c               mov dword ptr [eax + 0xc], edx
// 006eef6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006eef6f  894810               mov dword ptr [eax + 0x10], ecx
// 006eef72  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006eef76  8b542418             mov edx, dword ptr [esp + 0x18]
// 006eef7a  895014               mov dword ptr [eax + 0x14], edx
// 006eef7d  8901                 mov dword ptr [ecx], eax
// 006eef7f  8bc1                 mov eax, ecx
// 006eef81  59                   pop ecx
// 006eef82  c3                   ret 
// 006eef83  8b442408             mov eax, dword ptr [esp + 8]
// 006eef87  33c9                 xor ecx, ecx
// 006eef89  8908                 mov dword ptr [eax], ecx
// 006eef8b  59                   pop ecx
// 006eef8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
