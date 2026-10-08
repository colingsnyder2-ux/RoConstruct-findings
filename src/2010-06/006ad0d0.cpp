// roc 2010-06 006ad0d0  unit: RBX::VNetworkSettings::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ad0d0
//
// 006ad0d0  51                   push ecx
// 006ad0d1  6a18                 push 0x18
// 006ad0d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006ad0db  e8c0a80f00           call 0x7a79a0
// 006ad0e0  83c404               add esp, 4
// 006ad0e3  85c0                 test eax, eax
// 006ad0e5  7424                 je 0x6ad10b
// 006ad0e7  c7009c12a400         mov dword ptr [eax], 0xa4129c
// 006ad0ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ad0f1  894808               mov dword ptr [eax + 8], ecx
// 006ad0f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ad0f8  89500c               mov dword ptr [eax + 0xc], edx
// 006ad0fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ad0ff  894810               mov dword ptr [eax + 0x10], ecx
// 006ad102  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ad106  895014               mov dword ptr [eax + 0x14], edx
// 006ad109  eb02                 jmp 0x6ad10d
// 006ad10b  33c0                 xor eax, eax
// 006ad10d  56                   push esi
// 006ad10e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ad112  6a00                 push 0
// 006ad114  8906                 mov dword ptr [esi], eax
// 006ad116  e87fa80f00           call 0x7a799a
// 006ad11b  83c404               add esp, 4
// 006ad11e  8bc6                 mov eax, esi
// 006ad120  5e                   pop esi
// 006ad121  59                   pop ecx
// 006ad122  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
