// roc 2011-06 00593b30  unit: RBX::Instance::AncestryChangedSignalData  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00593b30
//
// 00593b30  51                   push ecx
// 00593b31  6a18                 push 0x18
// 00593b33  c744240400000000     mov dword ptr [esp + 4], 0
// 00593b3b  e81e652700           call 0x80a05e
// 00593b40  83c404               add esp, 4
// 00593b43  85c0                 test eax, eax
// 00593b45  742c                 je 0x593b73
// 00593b47  c700189da800         mov dword ptr [eax], 0xa89d18
// 00593b4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00593b51  894808               mov dword ptr [eax + 8], ecx
// 00593b54  8b542410             mov edx, dword ptr [esp + 0x10]
// 00593b58  89500c               mov dword ptr [eax + 0xc], edx
// 00593b5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00593b5f  894810               mov dword ptr [eax + 0x10], ecx
// 00593b62  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00593b66  8b542418             mov edx, dword ptr [esp + 0x18]
// 00593b6a  895014               mov dword ptr [eax + 0x14], edx
// 00593b6d  8901                 mov dword ptr [ecx], eax
// 00593b6f  8bc1                 mov eax, ecx
// 00593b71  59                   pop ecx
// 00593b72  c3                   ret 
// 00593b73  8b442408             mov eax, dword ptr [esp + 8]
// 00593b77  33c9                 xor ecx, ecx
// 00593b79  8908                 mov dword ptr [eax], ecx
// 00593b7b  59                   pop ecx
// 00593b7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
