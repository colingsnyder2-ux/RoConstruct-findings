// roc 2011-06 006f0ac0  unit: RBX::VClickDetector::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f0ac0
//
// 006f0ac0  51                   push ecx
// 006f0ac1  6a18                 push 0x18
// 006f0ac3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f0acb  e88e951100           call 0x80a05e
// 006f0ad0  83c404               add esp, 4
// 006f0ad3  85c0                 test eax, eax
// 006f0ad5  742c                 je 0x6f0b03
// 006f0ad7  c7009091aa00         mov dword ptr [eax], 0xaa9190
// 006f0add  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f0ae1  894808               mov dword ptr [eax + 8], ecx
// 006f0ae4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f0ae8  89500c               mov dword ptr [eax + 0xc], edx
// 006f0aeb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f0aef  894810               mov dword ptr [eax + 0x10], ecx
// 006f0af2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f0af6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f0afa  895014               mov dword ptr [eax + 0x14], edx
// 006f0afd  8901                 mov dword ptr [ecx], eax
// 006f0aff  8bc1                 mov eax, ecx
// 006f0b01  59                   pop ecx
// 006f0b02  c3                   ret 
// 006f0b03  8b442408             mov eax, dword ptr [esp + 8]
// 006f0b07  33c9                 xor ecx, ecx
// 006f0b09  8908                 mov dword ptr [eax], ecx
// 006f0b0b  59                   pop ecx
// 006f0b0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
