// roc 2011-06 005a7130  unit: RBX::VTeam::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a7130
//
// 005a7130  51                   push ecx
// 005a7131  6a18                 push 0x18
// 005a7133  c744240400000000     mov dword ptr [esp + 4], 0
// 005a713b  e81e2f2600           call 0x80a05e
// 005a7140  83c404               add esp, 4
// 005a7143  85c0                 test eax, eax
// 005a7145  742c                 je 0x5a7173
// 005a7147  c7000cd5a800         mov dword ptr [eax], 0xa8d50c
// 005a714d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a7151  894808               mov dword ptr [eax + 8], ecx
// 005a7154  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a7158  89500c               mov dword ptr [eax + 0xc], edx
// 005a715b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a715f  894810               mov dword ptr [eax + 0x10], ecx
// 005a7162  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a7166  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a716a  895014               mov dword ptr [eax + 0x14], edx
// 005a716d  8901                 mov dword ptr [ecx], eax
// 005a716f  8bc1                 mov eax, ecx
// 005a7171  59                   pop ecx
// 005a7172  c3                   ret 
// 005a7173  8b442408             mov eax, dword ptr [esp + 8]
// 005a7177  33c9                 xor ecx, ecx
// 005a7179  8908                 mov dword ptr [eax], ecx
// 005a717b  59                   pop ecx
// 005a717c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
