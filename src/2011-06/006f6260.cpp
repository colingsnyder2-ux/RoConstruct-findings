// roc 2011-06 006f6260  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f6260
//
// 006f6260  51                   push ecx
// 006f6261  6a18                 push 0x18
// 006f6263  c744240400000000     mov dword ptr [esp + 4], 0
// 006f626b  e8ee3d1100           call 0x80a05e
// 006f6270  83c404               add esp, 4
// 006f6273  85c0                 test eax, eax
// 006f6275  742c                 je 0x6f62a3
// 006f6277  c7000c9eaa00         mov dword ptr [eax], 0xaa9e0c
// 006f627d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f6281  894808               mov dword ptr [eax + 8], ecx
// 006f6284  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f6288  89500c               mov dword ptr [eax + 0xc], edx
// 006f628b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f628f  894810               mov dword ptr [eax + 0x10], ecx
// 006f6292  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f6296  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f629a  895014               mov dword ptr [eax + 0x14], edx
// 006f629d  8901                 mov dword ptr [ecx], eax
// 006f629f  8bc1                 mov eax, ecx
// 006f62a1  59                   pop ecx
// 006f62a2  c3                   ret 
// 006f62a3  8b442408             mov eax, dword ptr [esp + 8]
// 006f62a7  33c9                 xor ecx, ecx
// 006f62a9  8908                 mov dword ptr [eax], ecx
// 006f62ab  59                   pop ecx
// 006f62ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
