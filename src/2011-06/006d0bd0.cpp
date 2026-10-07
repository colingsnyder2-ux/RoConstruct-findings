// roc 2011-06 006d0bd0  unit: G3D::VColor3::V?$Value::?$BoundPropGetSet  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d0bd0
//
// 006d0bd0  51                   push ecx
// 006d0bd1  6a18                 push 0x18
// 006d0bd3  c744240400000000     mov dword ptr [esp + 4], 0
// 006d0bdb  e87e941300           call 0x80a05e
// 006d0be0  83c404               add esp, 4
// 006d0be3  85c0                 test eax, eax
// 006d0be5  742c                 je 0x6d0c13
// 006d0be7  c7008c58aa00         mov dword ptr [eax], 0xaa588c
// 006d0bed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d0bf1  894808               mov dword ptr [eax + 8], ecx
// 006d0bf4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d0bf8  89500c               mov dword ptr [eax + 0xc], edx
// 006d0bfb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d0bff  894810               mov dword ptr [eax + 0x10], ecx
// 006d0c02  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d0c06  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d0c0a  895014               mov dword ptr [eax + 0x14], edx
// 006d0c0d  8901                 mov dword ptr [ecx], eax
// 006d0c0f  8bc1                 mov eax, ecx
// 006d0c11  59                   pop ecx
// 006d0c12  c3                   ret 
// 006d0c13  8b442408             mov eax, dword ptr [esp + 8]
// 006d0c17  33c9                 xor ecx, ecx
// 006d0c19  8908                 mov dword ptr [eax], ecx
// 006d0c1b  59                   pop ecx
// 006d0c1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
