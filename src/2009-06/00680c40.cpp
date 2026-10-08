// roc 2009-06 00680c40  unit: RBX::VInstance::?$NonFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00680c40
//
// 00680c40  51                   push ecx
// 00680c41  6a18                 push 0x18
// 00680c43  c744240400000000     mov dword ptr [esp + 4], 0
// 00680c4b  e8e87d0900           call 0x718a38
// 00680c50  83c404               add esp, 4
// 00680c53  85c0                 test eax, eax
// 00680c55  7424                 je 0x680c7b
// 00680c57  c7008c5a8e00         mov dword ptr [eax], 0x8e5a8c
// 00680c5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00680c61  894808               mov dword ptr [eax + 8], ecx
// 00680c64  8b542410             mov edx, dword ptr [esp + 0x10]
// 00680c68  89500c               mov dword ptr [eax + 0xc], edx
// 00680c6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00680c6f  894810               mov dword ptr [eax + 0x10], ecx
// 00680c72  8b542418             mov edx, dword ptr [esp + 0x18]
// 00680c76  895014               mov dword ptr [eax + 0x14], edx
// 00680c79  eb02                 jmp 0x680c7d
// 00680c7b  33c0                 xor eax, eax
// 00680c7d  56                   push esi
// 00680c7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00680c82  6a00                 push 0
// 00680c84  8906                 mov dword ptr [esi], eax
// 00680c86  e8a77d0900           call 0x718a32
// 00680c8b  83c404               add esp, 4
// 00680c8e  8bc6                 mov eax, esi
// 00680c90  5e                   pop esi
// 00680c91  59                   pop ecx
// 00680c92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
