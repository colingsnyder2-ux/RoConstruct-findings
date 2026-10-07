// roc 2011-06 00732f90  unit: RBX::TextService  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00732f90
//
// 00732f90  51                   push ecx
// 00732f91  6a18                 push 0x18
// 00732f93  c744240400000000     mov dword ptr [esp + 4], 0
// 00732f9b  e8be700d00           call 0x80a05e
// 00732fa0  83c404               add esp, 4
// 00732fa3  85c0                 test eax, eax
// 00732fa5  742c                 je 0x732fd3
// 00732fa7  c7008c3cab00         mov dword ptr [eax], 0xab3c8c
// 00732fad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00732fb1  894808               mov dword ptr [eax + 8], ecx
// 00732fb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00732fb8  89500c               mov dword ptr [eax + 0xc], edx
// 00732fbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00732fbf  894810               mov dword ptr [eax + 0x10], ecx
// 00732fc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00732fc6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00732fca  895014               mov dword ptr [eax + 0x14], edx
// 00732fcd  8901                 mov dword ptr [ecx], eax
// 00732fcf  8bc1                 mov eax, ecx
// 00732fd1  59                   pop ecx
// 00732fd2  c3                   ret 
// 00732fd3  8b442408             mov eax, dword ptr [esp + 8]
// 00732fd7  33c9                 xor ecx, ecx
// 00732fd9  8908                 mov dword ptr [eax], ecx
// 00732fdb  59                   pop ecx
// 00732fdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
