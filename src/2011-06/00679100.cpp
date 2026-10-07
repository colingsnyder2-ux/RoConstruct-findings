// roc 2011-06 00679100  unit: RBX::FileMesh  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00679100
//
// 00679100  51                   push ecx
// 00679101  6a18                 push 0x18
// 00679103  c744240400000000     mov dword ptr [esp + 4], 0
// 0067910b  e84e0f1900           call 0x80a05e
// 00679110  83c404               add esp, 4
// 00679113  85c0                 test eax, eax
// 00679115  742c                 je 0x679143
// 00679117  c700b4d8a900         mov dword ptr [eax], 0xa9d8b4
// 0067911d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679121  894808               mov dword ptr [eax + 8], ecx
// 00679124  8b542410             mov edx, dword ptr [esp + 0x10]
// 00679128  89500c               mov dword ptr [eax + 0xc], edx
// 0067912b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067912f  894810               mov dword ptr [eax + 0x10], ecx
// 00679132  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00679136  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067913a  895014               mov dword ptr [eax + 0x14], edx
// 0067913d  8901                 mov dword ptr [ecx], eax
// 0067913f  8bc1                 mov eax, ecx
// 00679141  59                   pop ecx
// 00679142  c3                   ret 
// 00679143  8b442408             mov eax, dword ptr [esp + 8]
// 00679147  33c9                 xor ecx, ecx
// 00679149  8908                 mov dword ptr [eax], ecx
// 0067914b  59                   pop ecx
// 0067914c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
