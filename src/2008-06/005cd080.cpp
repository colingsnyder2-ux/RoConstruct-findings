// roc 2008-06 005cd080  unit: RBX::P8Camera::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd080
//
// 005cd080  51                   push ecx
// 005cd081  6a18                 push 0x18
// 005cd083  c744240400000000     mov dword ptr [esp + 4], 0
// 005cd08b  e890380d00           call 0x6a0920
// 005cd090  83c404               add esp, 4
// 005cd093  85c0                 test eax, eax
// 005cd095  742c                 je 0x5cd0c3
// 005cd097  c70034a48300         mov dword ptr [eax], 0x83a434
// 005cd09d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cd0a1  894808               mov dword ptr [eax + 8], ecx
// 005cd0a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005cd0a8  89500c               mov dword ptr [eax + 0xc], edx
// 005cd0ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005cd0af  894810               mov dword ptr [eax + 0x10], ecx
// 005cd0b2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cd0b6  8b542418             mov edx, dword ptr [esp + 0x18]
// 005cd0ba  895014               mov dword ptr [eax + 0x14], edx
// 005cd0bd  8901                 mov dword ptr [ecx], eax
// 005cd0bf  8bc1                 mov eax, ecx
// 005cd0c1  59                   pop ecx
// 005cd0c2  c3                   ret 
// 005cd0c3  8b442408             mov eax, dword ptr [esp + 8]
// 005cd0c7  33c9                 xor ecx, ecx
// 005cd0c9  8908                 mov dword ptr [eax], ecx
// 005cd0cb  59                   pop ecx
// 005cd0cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
