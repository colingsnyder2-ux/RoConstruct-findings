// roc 2011-06 006f62b0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f62b0
//
// 006f62b0  51                   push ecx
// 006f62b1  6a18                 push 0x18
// 006f62b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f62bb  e89e3d1100           call 0x80a05e
// 006f62c0  83c404               add esp, 4
// 006f62c3  85c0                 test eax, eax
// 006f62c5  742c                 je 0x6f62f3
// 006f62c7  c700209eaa00         mov dword ptr [eax], 0xaa9e20
// 006f62cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f62d1  894808               mov dword ptr [eax + 8], ecx
// 006f62d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f62d8  89500c               mov dword ptr [eax + 0xc], edx
// 006f62db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f62df  894810               mov dword ptr [eax + 0x10], ecx
// 006f62e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f62e6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f62ea  895014               mov dword ptr [eax + 0x14], edx
// 006f62ed  8901                 mov dword ptr [ecx], eax
// 006f62ef  8bc1                 mov eax, ecx
// 006f62f1  59                   pop ecx
// 006f62f2  c3                   ret 
// 006f62f3  8b442408             mov eax, dword ptr [esp + 8]
// 006f62f7  33c9                 xor ecx, ecx
// 006f62f9  8908                 mov dword ptr [eax], ecx
// 006f62fb  59                   pop ecx
// 006f62fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
