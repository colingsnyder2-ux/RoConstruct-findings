// roc 2011-06 006f5cd0  unit: RBX::VDialogChoice::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f5cd0
//
// 006f5cd0  51                   push ecx
// 006f5cd1  6a18                 push 0x18
// 006f5cd3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f5cdb  e87e431100           call 0x80a05e
// 006f5ce0  83c404               add esp, 4
// 006f5ce3  85c0                 test eax, eax
// 006f5ce5  742c                 je 0x6f5d13
// 006f5ce7  c700149daa00         mov dword ptr [eax], 0xaa9d14
// 006f5ced  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f5cf1  894808               mov dword ptr [eax + 8], ecx
// 006f5cf4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f5cf8  89500c               mov dword ptr [eax + 0xc], edx
// 006f5cfb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f5cff  894810               mov dword ptr [eax + 0x10], ecx
// 006f5d02  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f5d06  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f5d0a  895014               mov dword ptr [eax + 0x14], edx
// 006f5d0d  8901                 mov dword ptr [ecx], eax
// 006f5d0f  8bc1                 mov eax, ecx
// 006f5d11  59                   pop ecx
// 006f5d12  c3                   ret 
// 006f5d13  8b442408             mov eax, dword ptr [esp + 8]
// 006f5d17  33c9                 xor ecx, ecx
// 006f5d19  8908                 mov dword ptr [eax], ecx
// 006f5d1b  59                   pop ecx
// 006f5d1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
