// roc 2008-06 00557f90  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557f90
//
// 00557f90  51                   push ecx
// 00557f91  6a18                 push 0x18
// 00557f93  c744240400000000     mov dword ptr [esp + 4], 0
// 00557f9b  e880891400           call 0x6a0920
// 00557fa0  83c404               add esp, 4
// 00557fa3  85c0                 test eax, eax
// 00557fa5  742c                 je 0x557fd3
// 00557fa7  c700e0d68200         mov dword ptr [eax], 0x82d6e0
// 00557fad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00557fb1  894808               mov dword ptr [eax + 8], ecx
// 00557fb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00557fb8  89500c               mov dword ptr [eax + 0xc], edx
// 00557fbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00557fbf  894810               mov dword ptr [eax + 0x10], ecx
// 00557fc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00557fc6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00557fca  895014               mov dword ptr [eax + 0x14], edx
// 00557fcd  8901                 mov dword ptr [ecx], eax
// 00557fcf  8bc1                 mov eax, ecx
// 00557fd1  59                   pop ecx
// 00557fd2  c3                   ret 
// 00557fd3  8b442408             mov eax, dword ptr [esp + 8]
// 00557fd7  33c9                 xor ecx, ecx
// 00557fd9  8908                 mov dword ptr [eax], ecx
// 00557fdb  59                   pop ecx
// 00557fdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
