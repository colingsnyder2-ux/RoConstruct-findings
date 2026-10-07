// roc 2011-06 00677fa0  unit: RBX::VAnimationId::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00677fa0
//
// 00677fa0  51                   push ecx
// 00677fa1  6a18                 push 0x18
// 00677fa3  c744240400000000     mov dword ptr [esp + 4], 0
// 00677fab  e8ae201900           call 0x80a05e
// 00677fb0  83c404               add esp, 4
// 00677fb3  85c0                 test eax, eax
// 00677fb5  742c                 je 0x677fe3
// 00677fb7  c70094d5a900         mov dword ptr [eax], 0xa9d594
// 00677fbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00677fc1  894808               mov dword ptr [eax + 8], ecx
// 00677fc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00677fc8  89500c               mov dword ptr [eax + 0xc], edx
// 00677fcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00677fcf  894810               mov dword ptr [eax + 0x10], ecx
// 00677fd2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00677fd6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00677fda  895014               mov dword ptr [eax + 0x14], edx
// 00677fdd  8901                 mov dword ptr [ecx], eax
// 00677fdf  8bc1                 mov eax, ecx
// 00677fe1  59                   pop ecx
// 00677fe2  c3                   ret 
// 00677fe3  8b442408             mov eax, dword ptr [esp + 8]
// 00677fe7  33c9                 xor ecx, ecx
// 00677fe9  8908                 mov dword ptr [eax], ecx
// 00677feb  59                   pop ecx
// 00677fec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
