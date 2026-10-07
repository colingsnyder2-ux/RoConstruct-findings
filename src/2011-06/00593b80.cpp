// roc 2011-06 00593b80  unit: RBX::Instance::AncestryChangedSignalData  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00593b80
//
// 00593b80  51                   push ecx
// 00593b81  6a18                 push 0x18
// 00593b83  c744240400000000     mov dword ptr [esp + 4], 0
// 00593b8b  e8ce642700           call 0x80a05e
// 00593b90  83c404               add esp, 4
// 00593b93  85c0                 test eax, eax
// 00593b95  742c                 je 0x593bc3
// 00593b97  c7002c9da800         mov dword ptr [eax], 0xa89d2c
// 00593b9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00593ba1  894808               mov dword ptr [eax + 8], ecx
// 00593ba4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00593ba8  89500c               mov dword ptr [eax + 0xc], edx
// 00593bab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00593baf  894810               mov dword ptr [eax + 0x10], ecx
// 00593bb2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00593bb6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00593bba  895014               mov dword ptr [eax + 0x14], edx
// 00593bbd  8901                 mov dword ptr [ecx], eax
// 00593bbf  8bc1                 mov eax, ecx
// 00593bc1  59                   pop ecx
// 00593bc2  c3                   ret 
// 00593bc3  8b442408             mov eax, dword ptr [esp + 8]
// 00593bc7  33c9                 xor ecx, ecx
// 00593bc9  8908                 mov dword ptr [eax], ecx
// 00593bcb  59                   pop ecx
// 00593bcc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
