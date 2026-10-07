// roc 2008-06 00445900  unit: G3D::VVector2int16::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445900
//
// 00445900  51                   push ecx
// 00445901  6a18                 push 0x18
// 00445903  c744240400000000     mov dword ptr [esp + 4], 0
// 0044590b  e810b02500           call 0x6a0920
// 00445910  83c404               add esp, 4
// 00445913  85c0                 test eax, eax
// 00445915  742c                 je 0x445943
// 00445917  c700b85c8100         mov dword ptr [eax], 0x815cb8
// 0044591d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00445921  894808               mov dword ptr [eax + 8], ecx
// 00445924  8b542410             mov edx, dword ptr [esp + 0x10]
// 00445928  89500c               mov dword ptr [eax + 0xc], edx
// 0044592b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044592f  894810               mov dword ptr [eax + 0x10], ecx
// 00445932  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00445936  8b542418             mov edx, dword ptr [esp + 0x18]
// 0044593a  895014               mov dword ptr [eax + 0x14], edx
// 0044593d  8901                 mov dword ptr [ecx], eax
// 0044593f  8bc1                 mov eax, ecx
// 00445941  59                   pop ecx
// 00445942  c3                   ret 
// 00445943  8b442408             mov eax, dword ptr [esp + 8]
// 00445947  33c9                 xor ecx, ecx
// 00445949  8908                 mov dword ptr [eax], ecx
// 0044594b  59                   pop ecx
// 0044594c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
