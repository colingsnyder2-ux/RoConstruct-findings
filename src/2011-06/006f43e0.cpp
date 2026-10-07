// roc 2011-06 006f43e0  unit: RBX::VDialogRoot::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f43e0
//
// 006f43e0  51                   push ecx
// 006f43e1  6a18                 push 0x18
// 006f43e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f43eb  e86e5c1100           call 0x80a05e
// 006f43f0  83c404               add esp, 4
// 006f43f3  85c0                 test eax, eax
// 006f43f5  742c                 je 0x6f4423
// 006f43f7  c700d098aa00         mov dword ptr [eax], 0xaa98d0
// 006f43fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f4401  894808               mov dword ptr [eax + 8], ecx
// 006f4404  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f4408  89500c               mov dword ptr [eax + 0xc], edx
// 006f440b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f440f  894810               mov dword ptr [eax + 0x10], ecx
// 006f4412  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f4416  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f441a  895014               mov dword ptr [eax + 0x14], edx
// 006f441d  8901                 mov dword ptr [ecx], eax
// 006f441f  8bc1                 mov eax, ecx
// 006f4421  59                   pop ecx
// 006f4422  c3                   ret 
// 006f4423  8b442408             mov eax, dword ptr [esp + 8]
// 006f4427  33c9                 xor ecx, ecx
// 006f4429  8908                 mov dword ptr [eax], ecx
// 006f442b  59                   pop ecx
// 006f442c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
