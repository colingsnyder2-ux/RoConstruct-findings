// roc 2011-06 00593a60  unit: RBX::Instance::AncestryChangedSignalData  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00593a60
//
// 00593a60  51                   push ecx
// 00593a61  6a18                 push 0x18
// 00593a63  c744240400000000     mov dword ptr [esp + 4], 0
// 00593a6b  e8ee652700           call 0x80a05e
// 00593a70  83c404               add esp, 4
// 00593a73  85c0                 test eax, eax
// 00593a75  742c                 je 0x593aa3
// 00593a77  c700dc9ca800         mov dword ptr [eax], 0xa89cdc
// 00593a7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00593a81  894808               mov dword ptr [eax + 8], ecx
// 00593a84  8b542410             mov edx, dword ptr [esp + 0x10]
// 00593a88  89500c               mov dword ptr [eax + 0xc], edx
// 00593a8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00593a8f  894810               mov dword ptr [eax + 0x10], ecx
// 00593a92  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00593a96  8b542418             mov edx, dword ptr [esp + 0x18]
// 00593a9a  895014               mov dword ptr [eax + 0x14], edx
// 00593a9d  8901                 mov dword ptr [ecx], eax
// 00593a9f  8bc1                 mov eax, ecx
// 00593aa1  59                   pop ecx
// 00593aa2  c3                   ret 
// 00593aa3  8b442408             mov eax, dword ptr [esp + 8]
// 00593aa7  33c9                 xor ecx, ecx
// 00593aa9  8908                 mov dword ptr [eax], ecx
// 00593aab  59                   pop ecx
// 00593aac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
