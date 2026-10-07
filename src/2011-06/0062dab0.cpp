// roc 2011-06 0062dab0  unit: RBX::VTextureId::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062dab0
//
// 0062dab0  51                   push ecx
// 0062dab1  6a18                 push 0x18
// 0062dab3  c744240400000000     mov dword ptr [esp + 4], 0
// 0062dabb  e89ec51d00           call 0x80a05e
// 0062dac0  83c404               add esp, 4
// 0062dac3  85c0                 test eax, eax
// 0062dac5  742c                 je 0x62daf3
// 0062dac7  c7003c5ba900         mov dword ptr [eax], 0xa95b3c
// 0062dacd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062dad1  894808               mov dword ptr [eax + 8], ecx
// 0062dad4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062dad8  89500c               mov dword ptr [eax + 0xc], edx
// 0062dadb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062dadf  894810               mov dword ptr [eax + 0x10], ecx
// 0062dae2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062dae6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062daea  895014               mov dword ptr [eax + 0x14], edx
// 0062daed  8901                 mov dword ptr [ecx], eax
// 0062daef  8bc1                 mov eax, ecx
// 0062daf1  59                   pop ecx
// 0062daf2  c3                   ret 
// 0062daf3  8b442408             mov eax, dword ptr [esp + 8]
// 0062daf7  33c9                 xor ecx, ecx
// 0062daf9  8908                 mov dword ptr [eax], ecx
// 0062dafb  59                   pop ecx
// 0062dafc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
