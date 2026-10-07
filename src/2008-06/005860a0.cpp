// roc 2008-06 005860a0  unit: RBX::VLocalScript::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005860a0
//
// 005860a0  51                   push ecx
// 005860a1  6a18                 push 0x18
// 005860a3  c744240400000000     mov dword ptr [esp + 4], 0
// 005860ab  e870a81100           call 0x6a0920
// 005860b0  83c404               add esp, 4
// 005860b3  85c0                 test eax, eax
// 005860b5  742c                 je 0x5860e3
// 005860b7  c70034118300         mov dword ptr [eax], 0x831134
// 005860bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005860c1  894808               mov dword ptr [eax + 8], ecx
// 005860c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005860c8  89500c               mov dword ptr [eax + 0xc], edx
// 005860cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005860cf  894810               mov dword ptr [eax + 0x10], ecx
// 005860d2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005860d6  8b542418             mov edx, dword ptr [esp + 0x18]
// 005860da  895014               mov dword ptr [eax + 0x14], edx
// 005860dd  8901                 mov dword ptr [ecx], eax
// 005860df  8bc1                 mov eax, ecx
// 005860e1  59                   pop ecx
// 005860e2  c3                   ret 
// 005860e3  8b442408             mov eax, dword ptr [esp + 8]
// 005860e7  33c9                 xor ecx, ecx
// 005860e9  8908                 mov dword ptr [eax], ecx
// 005860eb  59                   pop ecx
// 005860ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
