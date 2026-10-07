// roc 2011-06 00664f40  unit: RBX::Camera  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00664f40
//
// 00664f40  51                   push ecx
// 00664f41  6a18                 push 0x18
// 00664f43  c744240400000000     mov dword ptr [esp + 4], 0
// 00664f4b  e80e511a00           call 0x80a05e
// 00664f50  83c404               add esp, 4
// 00664f53  85c0                 test eax, eax
// 00664f55  742c                 je 0x664f83
// 00664f57  c700fcbda900         mov dword ptr [eax], 0xa9bdfc
// 00664f5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00664f61  894808               mov dword ptr [eax + 8], ecx
// 00664f64  8b542410             mov edx, dword ptr [esp + 0x10]
// 00664f68  89500c               mov dword ptr [eax + 0xc], edx
// 00664f6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00664f6f  894810               mov dword ptr [eax + 0x10], ecx
// 00664f72  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00664f76  8b542418             mov edx, dword ptr [esp + 0x18]
// 00664f7a  895014               mov dword ptr [eax + 0x14], edx
// 00664f7d  8901                 mov dword ptr [ecx], eax
// 00664f7f  8bc1                 mov eax, ecx
// 00664f81  59                   pop ecx
// 00664f82  c3                   ret 
// 00664f83  8b442408             mov eax, dword ptr [esp + 8]
// 00664f87  33c9                 xor ecx, ecx
// 00664f89  8908                 mov dword ptr [eax], ecx
// 00664f8b  59                   pop ecx
// 00664f8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
