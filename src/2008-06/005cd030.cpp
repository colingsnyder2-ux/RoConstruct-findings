// roc 2008-06 005cd030  unit: RBX::P8Camera::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd030
//
// 005cd030  51                   push ecx
// 005cd031  6a18                 push 0x18
// 005cd033  c744240400000000     mov dword ptr [esp + 4], 0
// 005cd03b  e8e0380d00           call 0x6a0920
// 005cd040  83c404               add esp, 4
// 005cd043  85c0                 test eax, eax
// 005cd045  742c                 je 0x5cd073
// 005cd047  c70020a48300         mov dword ptr [eax], 0x83a420
// 005cd04d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cd051  894808               mov dword ptr [eax + 8], ecx
// 005cd054  8b542410             mov edx, dword ptr [esp + 0x10]
// 005cd058  89500c               mov dword ptr [eax + 0xc], edx
// 005cd05b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005cd05f  894810               mov dword ptr [eax + 0x10], ecx
// 005cd062  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cd066  8b542418             mov edx, dword ptr [esp + 0x18]
// 005cd06a  895014               mov dword ptr [eax + 0x14], edx
// 005cd06d  8901                 mov dword ptr [ecx], eax
// 005cd06f  8bc1                 mov eax, ecx
// 005cd071  59                   pop ecx
// 005cd072  c3                   ret 
// 005cd073  8b442408             mov eax, dword ptr [esp + 8]
// 005cd077  33c9                 xor ecx, ecx
// 005cd079  8908                 mov dword ptr [eax], ecx
// 005cd07b  59                   pop ecx
// 005cd07c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
