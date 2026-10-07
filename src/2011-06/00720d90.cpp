// roc 2011-06 00720d90  unit: RBX::VInstance::?$NonFactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00720d90
//
// 00720d90  51                   push ecx
// 00720d91  6a18                 push 0x18
// 00720d93  c744240400000000     mov dword ptr [esp + 4], 0
// 00720d9b  e8be920e00           call 0x80a05e
// 00720da0  83c404               add esp, 4
// 00720da3  85c0                 test eax, eax
// 00720da5  742c                 je 0x720dd3
// 00720da7  c7009c23ab00         mov dword ptr [eax], 0xab239c
// 00720dad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00720db1  894808               mov dword ptr [eax + 8], ecx
// 00720db4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00720db8  89500c               mov dword ptr [eax + 0xc], edx
// 00720dbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00720dbf  894810               mov dword ptr [eax + 0x10], ecx
// 00720dc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00720dc6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00720dca  895014               mov dword ptr [eax + 0x14], edx
// 00720dcd  8901                 mov dword ptr [ecx], eax
// 00720dcf  8bc1                 mov eax, ecx
// 00720dd1  59                   pop ecx
// 00720dd2  c3                   ret 
// 00720dd3  8b442408             mov eax, dword ptr [esp + 8]
// 00720dd7  33c9                 xor ecx, ecx
// 00720dd9  8908                 mov dword ptr [eax], ecx
// 00720ddb  59                   pop ecx
// 00720ddc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
