// roc 2011-06 006f9ef0  unit: RBX::VHole::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f9ef0
//
// 006f9ef0  51                   push ecx
// 006f9ef1  6a18                 push 0x18
// 006f9ef3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f9efb  e85e011100           call 0x80a05e
// 006f9f00  83c404               add esp, 4
// 006f9f03  85c0                 test eax, eax
// 006f9f05  742c                 je 0x6f9f33
// 006f9f07  c700f4a9aa00         mov dword ptr [eax], 0xaaa9f4
// 006f9f0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f9f11  894808               mov dword ptr [eax + 8], ecx
// 006f9f14  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f9f18  89500c               mov dword ptr [eax + 0xc], edx
// 006f9f1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f9f1f  894810               mov dword ptr [eax + 0x10], ecx
// 006f9f22  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f9f26  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f9f2a  895014               mov dword ptr [eax + 0x14], edx
// 006f9f2d  8901                 mov dword ptr [ecx], eax
// 006f9f2f  8bc1                 mov eax, ecx
// 006f9f31  59                   pop ecx
// 006f9f32  c3                   ret 
// 006f9f33  8b442408             mov eax, dword ptr [esp + 8]
// 006f9f37  33c9                 xor ecx, ecx
// 006f9f39  8908                 mov dword ptr [eax], ecx
// 006f9f3b  59                   pop ecx
// 006f9f3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
