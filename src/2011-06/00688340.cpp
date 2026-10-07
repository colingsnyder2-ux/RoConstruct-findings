// roc 2011-06 00688340  unit: RBX::VPose::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00688340
//
// 00688340  51                   push ecx
// 00688341  6a18                 push 0x18
// 00688343  c744240400000000     mov dword ptr [esp + 4], 0
// 0068834b  e80e1d1800           call 0x80a05e
// 00688350  83c404               add esp, 4
// 00688353  85c0                 test eax, eax
// 00688355  742c                 je 0x688383
// 00688357  c70010f1a900         mov dword ptr [eax], 0xa9f110
// 0068835d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00688361  894808               mov dword ptr [eax + 8], ecx
// 00688364  8b542410             mov edx, dword ptr [esp + 0x10]
// 00688368  89500c               mov dword ptr [eax + 0xc], edx
// 0068836b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068836f  894810               mov dword ptr [eax + 0x10], ecx
// 00688372  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00688376  8b542418             mov edx, dword ptr [esp + 0x18]
// 0068837a  895014               mov dword ptr [eax + 0x14], edx
// 0068837d  8901                 mov dword ptr [ecx], eax
// 0068837f  8bc1                 mov eax, ecx
// 00688381  59                   pop ecx
// 00688382  c3                   ret 
// 00688383  8b442408             mov eax, dword ptr [esp + 8]
// 00688387  33c9                 xor ecx, ecx
// 00688389  8908                 mov dword ptr [eax], ecx
// 0068838b  59                   pop ecx
// 0068838c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
