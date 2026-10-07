// roc 2011-06 00649920  unit: RBX::VGameSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00649920
//
// 00649920  51                   push ecx
// 00649921  6a18                 push 0x18
// 00649923  c744240400000000     mov dword ptr [esp + 4], 0
// 0064992b  e82e071c00           call 0x80a05e
// 00649930  83c404               add esp, 4
// 00649933  85c0                 test eax, eax
// 00649935  742c                 je 0x649963
// 00649937  c7009090a900         mov dword ptr [eax], 0xa99090
// 0064993d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00649941  894808               mov dword ptr [eax + 8], ecx
// 00649944  8b542410             mov edx, dword ptr [esp + 0x10]
// 00649948  89500c               mov dword ptr [eax + 0xc], edx
// 0064994b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064994f  894810               mov dword ptr [eax + 0x10], ecx
// 00649952  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00649956  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064995a  895014               mov dword ptr [eax + 0x14], edx
// 0064995d  8901                 mov dword ptr [ecx], eax
// 0064995f  8bc1                 mov eax, ecx
// 00649961  59                   pop ecx
// 00649962  c3                   ret 
// 00649963  8b442408             mov eax, dword ptr [esp + 8]
// 00649967  33c9                 xor ecx, ecx
// 00649969  8908                 mov dword ptr [eax], ecx
// 0064996b  59                   pop ecx
// 0064996c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
