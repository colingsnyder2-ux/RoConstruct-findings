// roc 2011-06 00664ef0  unit: RBX::Camera  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00664ef0
//
// 00664ef0  51                   push ecx
// 00664ef1  6a18                 push 0x18
// 00664ef3  c744240400000000     mov dword ptr [esp + 4], 0
// 00664efb  e85e511a00           call 0x80a05e
// 00664f00  83c404               add esp, 4
// 00664f03  85c0                 test eax, eax
// 00664f05  742c                 je 0x664f33
// 00664f07  c700e8bda900         mov dword ptr [eax], 0xa9bde8
// 00664f0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00664f11  894808               mov dword ptr [eax + 8], ecx
// 00664f14  8b542410             mov edx, dword ptr [esp + 0x10]
// 00664f18  89500c               mov dword ptr [eax + 0xc], edx
// 00664f1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00664f1f  894810               mov dword ptr [eax + 0x10], ecx
// 00664f22  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00664f26  8b542418             mov edx, dword ptr [esp + 0x18]
// 00664f2a  895014               mov dword ptr [eax + 0x14], edx
// 00664f2d  8901                 mov dword ptr [ecx], eax
// 00664f2f  8bc1                 mov eax, ecx
// 00664f31  59                   pop ecx
// 00664f32  c3                   ret 
// 00664f33  8b442408             mov eax, dword ptr [esp + 8]
// 00664f37  33c9                 xor ecx, ecx
// 00664f39  8908                 mov dword ptr [eax], ecx
// 00664f3b  59                   pop ecx
// 00664f3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
