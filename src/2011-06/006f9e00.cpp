// roc 2011-06 006f9e00  unit: RBX::VHole::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f9e00
//
// 006f9e00  51                   push ecx
// 006f9e01  6a18                 push 0x18
// 006f9e03  c744240400000000     mov dword ptr [esp + 4], 0
// 006f9e0b  e84e021100           call 0x80a05e
// 006f9e10  83c404               add esp, 4
// 006f9e13  85c0                 test eax, eax
// 006f9e15  742c                 je 0x6f9e43
// 006f9e17  c700b8a9aa00         mov dword ptr [eax], 0xaaa9b8
// 006f9e1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f9e21  894808               mov dword ptr [eax + 8], ecx
// 006f9e24  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f9e28  89500c               mov dword ptr [eax + 0xc], edx
// 006f9e2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f9e2f  894810               mov dword ptr [eax + 0x10], ecx
// 006f9e32  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f9e36  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f9e3a  895014               mov dword ptr [eax + 0x14], edx
// 006f9e3d  8901                 mov dword ptr [ecx], eax
// 006f9e3f  8bc1                 mov eax, ecx
// 006f9e41  59                   pop ecx
// 006f9e42  c3                   ret 
// 006f9e43  8b442408             mov eax, dword ptr [esp + 8]
// 006f9e47  33c9                 xor ecx, ecx
// 006f9e49  8908                 mov dword ptr [eax], ecx
// 006f9e4b  59                   pop ecx
// 006f9e4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
