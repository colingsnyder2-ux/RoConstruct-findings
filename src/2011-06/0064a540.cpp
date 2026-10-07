// roc 2011-06 0064a540  unit: RBX::VGameBasicSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064a540
//
// 0064a540  51                   push ecx
// 0064a541  6a18                 push 0x18
// 0064a543  c744240400000000     mov dword ptr [esp + 4], 0
// 0064a54b  e80efb1b00           call 0x80a05e
// 0064a550  83c404               add esp, 4
// 0064a553  85c0                 test eax, eax
// 0064a555  742c                 je 0x64a583
// 0064a557  c7009094a900         mov dword ptr [eax], 0xa99490
// 0064a55d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064a561  894808               mov dword ptr [eax + 8], ecx
// 0064a564  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064a568  89500c               mov dword ptr [eax + 0xc], edx
// 0064a56b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064a56f  894810               mov dword ptr [eax + 0x10], ecx
// 0064a572  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064a576  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064a57a  895014               mov dword ptr [eax + 0x14], edx
// 0064a57d  8901                 mov dword ptr [ecx], eax
// 0064a57f  8bc1                 mov eax, ecx
// 0064a581  59                   pop ecx
// 0064a582  c3                   ret 
// 0064a583  8b442408             mov eax, dword ptr [esp + 8]
// 0064a587  33c9                 xor ecx, ecx
// 0064a589  8908                 mov dword ptr [eax], ecx
// 0064a58b  59                   pop ecx
// 0064a58c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
