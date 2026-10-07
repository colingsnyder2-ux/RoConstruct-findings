// roc 2011-06 00696700  unit: G3D::VCoordinateFrame::V?$Value::?$BoundPropGetSet  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00696700
//
// 00696700  51                   push ecx
// 00696701  6a18                 push 0x18
// 00696703  c744240400000000     mov dword ptr [esp + 4], 0
// 0069670b  e84e391700           call 0x80a05e
// 00696710  83c404               add esp, 4
// 00696713  85c0                 test eax, eax
// 00696715  742c                 je 0x696743
// 00696717  c700b824aa00         mov dword ptr [eax], 0xaa24b8
// 0069671d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00696721  894808               mov dword ptr [eax + 8], ecx
// 00696724  8b542410             mov edx, dword ptr [esp + 0x10]
// 00696728  89500c               mov dword ptr [eax + 0xc], edx
// 0069672b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069672f  894810               mov dword ptr [eax + 0x10], ecx
// 00696732  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00696736  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069673a  895014               mov dword ptr [eax + 0x14], edx
// 0069673d  8901                 mov dword ptr [ecx], eax
// 0069673f  8bc1                 mov eax, ecx
// 00696741  59                   pop ecx
// 00696742  c3                   ret 
// 00696743  8b442408             mov eax, dword ptr [esp + 8]
// 00696747  33c9                 xor ecx, ecx
// 00696749  8908                 mov dword ptr [eax], ecx
// 0069674b  59                   pop ecx
// 0069674c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
