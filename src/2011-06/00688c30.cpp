// roc 2011-06 00688c30  unit: RBX::VKeyframe::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00688c30
//
// 00688c30  51                   push ecx
// 00688c31  6a18                 push 0x18
// 00688c33  c744240400000000     mov dword ptr [esp + 4], 0
// 00688c3b  e81e141800           call 0x80a05e
// 00688c40  83c404               add esp, 4
// 00688c43  85c0                 test eax, eax
// 00688c45  742c                 je 0x688c73
// 00688c47  c7002cf3a900         mov dword ptr [eax], 0xa9f32c
// 00688c4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00688c51  894808               mov dword ptr [eax + 8], ecx
// 00688c54  8b542410             mov edx, dword ptr [esp + 0x10]
// 00688c58  89500c               mov dword ptr [eax + 0xc], edx
// 00688c5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00688c5f  894810               mov dword ptr [eax + 0x10], ecx
// 00688c62  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00688c66  8b542418             mov edx, dword ptr [esp + 0x18]
// 00688c6a  895014               mov dword ptr [eax + 0x14], edx
// 00688c6d  8901                 mov dword ptr [ecx], eax
// 00688c6f  8bc1                 mov eax, ecx
// 00688c71  59                   pop ecx
// 00688c72  c3                   ret 
// 00688c73  8b442408             mov eax, dword ptr [esp + 8]
// 00688c77  33c9                 xor ecx, ecx
// 00688c79  8908                 mov dword ptr [eax], ecx
// 00688c7b  59                   pop ecx
// 00688c7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
