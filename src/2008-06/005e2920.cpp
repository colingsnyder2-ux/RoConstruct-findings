// roc 2008-06 005e2920  unit: RBX::RotatePJoint  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2920
//
// 005e2920  51                   push ecx
// 005e2921  6a18                 push 0x18
// 005e2923  c744240400000000     mov dword ptr [esp + 4], 0
// 005e292b  e8f0df0b00           call 0x6a0920
// 005e2930  83c404               add esp, 4
// 005e2933  85c0                 test eax, eax
// 005e2935  742c                 je 0x5e2963
// 005e2937  c70080e28300         mov dword ptr [eax], 0x83e280
// 005e293d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e2941  894808               mov dword ptr [eax + 8], ecx
// 005e2944  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e2948  89500c               mov dword ptr [eax + 0xc], edx
// 005e294b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e294f  894810               mov dword ptr [eax + 0x10], ecx
// 005e2952  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e2956  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e295a  895014               mov dword ptr [eax + 0x14], edx
// 005e295d  8901                 mov dword ptr [ecx], eax
// 005e295f  8bc1                 mov eax, ecx
// 005e2961  59                   pop ecx
// 005e2962  c3                   ret 
// 005e2963  8b442408             mov eax, dword ptr [esp + 8]
// 005e2967  33c9                 xor ecx, ecx
// 005e2969  8908                 mov dword ptr [eax], ecx
// 005e296b  59                   pop ecx
// 005e296c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
