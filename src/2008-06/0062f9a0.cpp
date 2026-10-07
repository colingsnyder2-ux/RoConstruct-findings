// roc 2008-06 0062f9a0  unit: RBX::VExplosion::?$BoundPropGetSet  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f9a0
//
// 0062f9a0  51                   push ecx
// 0062f9a1  6a18                 push 0x18
// 0062f9a3  c744240400000000     mov dword ptr [esp + 4], 0
// 0062f9ab  e8700f0700           call 0x6a0920
// 0062f9b0  83c404               add esp, 4
// 0062f9b3  85c0                 test eax, eax
// 0062f9b5  742c                 je 0x62f9e3
// 0062f9b7  c700c8738400         mov dword ptr [eax], 0x8473c8
// 0062f9bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062f9c1  894808               mov dword ptr [eax + 8], ecx
// 0062f9c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062f9c8  89500c               mov dword ptr [eax + 0xc], edx
// 0062f9cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062f9cf  894810               mov dword ptr [eax + 0x10], ecx
// 0062f9d2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062f9d6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062f9da  895014               mov dword ptr [eax + 0x14], edx
// 0062f9dd  8901                 mov dword ptr [ecx], eax
// 0062f9df  8bc1                 mov eax, ecx
// 0062f9e1  59                   pop ecx
// 0062f9e2  c3                   ret 
// 0062f9e3  8b442408             mov eax, dword ptr [esp + 8]
// 0062f9e7  33c9                 xor ecx, ecx
// 0062f9e9  8908                 mov dword ptr [eax], ecx
// 0062f9eb  59                   pop ecx
// 0062f9ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
