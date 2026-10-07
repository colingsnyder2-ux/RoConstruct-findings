// roc 2011-06 006965d0  unit: G3D::VCoordinateFrame::V?$Value::?$BoundPropGetSet  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006965d0
//
// 006965d0  51                   push ecx
// 006965d1  6a18                 push 0x18
// 006965d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006965db  e87e3a1700           call 0x80a05e
// 006965e0  83c404               add esp, 4
// 006965e3  85c0                 test eax, eax
// 006965e5  742c                 je 0x696613
// 006965e7  c700b423aa00         mov dword ptr [eax], 0xaa23b4
// 006965ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006965f1  894808               mov dword ptr [eax + 8], ecx
// 006965f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006965f8  89500c               mov dword ptr [eax + 0xc], edx
// 006965fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006965ff  894810               mov dword ptr [eax + 0x10], ecx
// 00696602  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00696606  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069660a  895014               mov dword ptr [eax + 0x14], edx
// 0069660d  8901                 mov dword ptr [ecx], eax
// 0069660f  8bc1                 mov eax, ecx
// 00696611  59                   pop ecx
// 00696612  c3                   ret 
// 00696613  8b442408             mov eax, dword ptr [esp + 8]
// 00696617  33c9                 xor ecx, ecx
// 00696619  8908                 mov dword ptr [eax], ecx
// 0069661b  59                   pop ecx
// 0069661c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
