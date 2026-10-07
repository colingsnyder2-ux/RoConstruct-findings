// roc 2011-06 0070ca10  unit: RBX::VSky::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070ca10
//
// 0070ca10  51                   push ecx
// 0070ca11  6a18                 push 0x18
// 0070ca13  c744240400000000     mov dword ptr [esp + 4], 0
// 0070ca1b  e83ed60f00           call 0x80a05e
// 0070ca20  83c404               add esp, 4
// 0070ca23  85c0                 test eax, eax
// 0070ca25  742c                 je 0x70ca53
// 0070ca27  c70024e3aa00         mov dword ptr [eax], 0xaae324
// 0070ca2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070ca31  894808               mov dword ptr [eax + 8], ecx
// 0070ca34  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070ca38  89500c               mov dword ptr [eax + 0xc], edx
// 0070ca3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070ca3f  894810               mov dword ptr [eax + 0x10], ecx
// 0070ca42  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070ca46  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070ca4a  895014               mov dword ptr [eax + 0x14], edx
// 0070ca4d  8901                 mov dword ptr [ecx], eax
// 0070ca4f  8bc1                 mov eax, ecx
// 0070ca51  59                   pop ecx
// 0070ca52  c3                   ret 
// 0070ca53  8b442408             mov eax, dword ptr [esp + 8]
// 0070ca57  33c9                 xor ecx, ecx
// 0070ca59  8908                 mov dword ptr [eax], ecx
// 0070ca5b  59                   pop ecx
// 0070ca5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
