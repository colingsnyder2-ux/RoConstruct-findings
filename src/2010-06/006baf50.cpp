// roc 2010-06 006baf50  unit: RBX::P8BillboardGui::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006baf50
//
// 006baf50  51                   push ecx
// 006baf51  6a18                 push 0x18
// 006baf53  c744240400000000     mov dword ptr [esp + 4], 0
// 006baf5b  e840ca0e00           call 0x7a79a0
// 006baf60  83c404               add esp, 4
// 006baf63  85c0                 test eax, eax
// 006baf65  7424                 je 0x6baf8b
// 006baf67  c700ac2ba400         mov dword ptr [eax], 0xa42bac
// 006baf6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006baf71  894808               mov dword ptr [eax + 8], ecx
// 006baf74  8b542410             mov edx, dword ptr [esp + 0x10]
// 006baf78  89500c               mov dword ptr [eax + 0xc], edx
// 006baf7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006baf7f  894810               mov dword ptr [eax + 0x10], ecx
// 006baf82  8b542418             mov edx, dword ptr [esp + 0x18]
// 006baf86  895014               mov dword ptr [eax + 0x14], edx
// 006baf89  eb02                 jmp 0x6baf8d
// 006baf8b  33c0                 xor eax, eax
// 006baf8d  56                   push esi
// 006baf8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006baf92  6a00                 push 0
// 006baf94  8906                 mov dword ptr [esi], eax
// 006baf96  e8ffc90e00           call 0x7a799a
// 006baf9b  83c404               add esp, 4
// 006baf9e  8bc6                 mov eax, esi
// 006bafa0  5e                   pop esi
// 006bafa1  59                   pop ecx
// 006bafa2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
