// roc 2008-06 005e0370  unit: RBX::P8Lighting::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e0370
//
// 005e0370  51                   push ecx
// 005e0371  6a18                 push 0x18
// 005e0373  c744240400000000     mov dword ptr [esp + 4], 0
// 005e037b  e8a0050c00           call 0x6a0920
// 005e0380  83c404               add esp, 4
// 005e0383  85c0                 test eax, eax
// 005e0385  742c                 je 0x5e03b3
// 005e0387  c70050dc8300         mov dword ptr [eax], 0x83dc50
// 005e038d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e0391  894808               mov dword ptr [eax + 8], ecx
// 005e0394  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e0398  89500c               mov dword ptr [eax + 0xc], edx
// 005e039b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e039f  894810               mov dword ptr [eax + 0x10], ecx
// 005e03a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e03a6  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e03aa  895014               mov dword ptr [eax + 0x14], edx
// 005e03ad  8901                 mov dword ptr [ecx], eax
// 005e03af  8bc1                 mov eax, ecx
// 005e03b1  59                   pop ecx
// 005e03b2  c3                   ret 
// 005e03b3  8b442408             mov eax, dword ptr [esp + 8]
// 005e03b7  33c9                 xor ecx, ecx
// 005e03b9  8908                 mov dword ptr [eax], ecx
// 005e03bb  59                   pop ecx
// 005e03bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
