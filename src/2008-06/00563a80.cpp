// roc 2008-06 00563a80  unit: RBX::ContentProvider  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563a80
//
// 00563a80  51                   push ecx
// 00563a81  6a18                 push 0x18
// 00563a83  c744240400000000     mov dword ptr [esp + 4], 0
// 00563a8b  e890ce1300           call 0x6a0920
// 00563a90  83c404               add esp, 4
// 00563a93  85c0                 test eax, eax
// 00563a95  742c                 je 0x563ac3
// 00563a97  c70070e08200         mov dword ptr [eax], 0x82e070
// 00563a9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00563aa1  894808               mov dword ptr [eax + 8], ecx
// 00563aa4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00563aa8  89500c               mov dword ptr [eax + 0xc], edx
// 00563aab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00563aaf  894810               mov dword ptr [eax + 0x10], ecx
// 00563ab2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00563ab6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00563aba  895014               mov dword ptr [eax + 0x14], edx
// 00563abd  8901                 mov dword ptr [ecx], eax
// 00563abf  8bc1                 mov eax, ecx
// 00563ac1  59                   pop ecx
// 00563ac2  c3                   ret 
// 00563ac3  8b442408             mov eax, dword ptr [esp + 8]
// 00563ac7  33c9                 xor ecx, ecx
// 00563ac9  8908                 mov dword ptr [eax], ecx
// 00563acb  59                   pop ecx
// 00563acc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
