// roc 2011-06 006d0c70  unit: G3D::VColor3::V?$Value::?$BoundPropGetSet  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d0c70
//
// 006d0c70  51                   push ecx
// 006d0c71  6a18                 push 0x18
// 006d0c73  c744240400000000     mov dword ptr [esp + 4], 0
// 006d0c7b  e8de931300           call 0x80a05e
// 006d0c80  83c404               add esp, 4
// 006d0c83  85c0                 test eax, eax
// 006d0c85  742c                 je 0x6d0cb3
// 006d0c87  c7005058aa00         mov dword ptr [eax], 0xaa5850
// 006d0c8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d0c91  894808               mov dword ptr [eax + 8], ecx
// 006d0c94  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d0c98  89500c               mov dword ptr [eax + 0xc], edx
// 006d0c9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d0c9f  894810               mov dword ptr [eax + 0x10], ecx
// 006d0ca2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d0ca6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d0caa  895014               mov dword ptr [eax + 0x14], edx
// 006d0cad  8901                 mov dword ptr [ecx], eax
// 006d0caf  8bc1                 mov eax, ecx
// 006d0cb1  59                   pop ecx
// 006d0cb2  c3                   ret 
// 006d0cb3  8b442408             mov eax, dword ptr [esp + 8]
// 006d0cb7  33c9                 xor ecx, ecx
// 006d0cb9  8908                 mov dword ptr [eax], ecx
// 006d0cbb  59                   pop ecx
// 006d0cbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
