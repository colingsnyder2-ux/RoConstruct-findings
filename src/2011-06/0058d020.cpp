// roc 2011-06 0058d020  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058d020
//
// 0058d020  51                   push ecx
// 0058d021  6a18                 push 0x18
// 0058d023  c744240400000000     mov dword ptr [esp + 4], 0
// 0058d02b  e82ed02700           call 0x80a05e
// 0058d030  83c404               add esp, 4
// 0058d033  85c0                 test eax, eax
// 0058d035  742c                 je 0x58d063
// 0058d037  c700e08ca800         mov dword ptr [eax], 0xa88ce0
// 0058d03d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058d041  894808               mov dword ptr [eax + 8], ecx
// 0058d044  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058d048  89500c               mov dword ptr [eax + 0xc], edx
// 0058d04b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058d04f  894810               mov dword ptr [eax + 0x10], ecx
// 0058d052  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058d056  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058d05a  895014               mov dword ptr [eax + 0x14], edx
// 0058d05d  8901                 mov dword ptr [ecx], eax
// 0058d05f  8bc1                 mov eax, ecx
// 0058d061  59                   pop ecx
// 0058d062  c3                   ret 
// 0058d063  8b442408             mov eax, dword ptr [esp + 8]
// 0058d067  33c9                 xor ecx, ecx
// 0058d069  8908                 mov dword ptr [eax], ecx
// 0058d06b  59                   pop ecx
// 0058d06c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
