// roc 2010-06 00594e60  unit: RBX::Object  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00594e60
//
// 00594e60  51                   push ecx
// 00594e61  6a18                 push 0x18
// 00594e63  c744240400000000     mov dword ptr [esp + 4], 0
// 00594e6b  e8302b2100           call 0x7a79a0
// 00594e70  83c404               add esp, 4
// 00594e73  85c0                 test eax, eax
// 00594e75  7424                 je 0x594e9b
// 00594e77  c700689ba200         mov dword ptr [eax], 0xa29b68
// 00594e7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00594e81  894808               mov dword ptr [eax + 8], ecx
// 00594e84  8b542410             mov edx, dword ptr [esp + 0x10]
// 00594e88  89500c               mov dword ptr [eax + 0xc], edx
// 00594e8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00594e8f  894810               mov dword ptr [eax + 0x10], ecx
// 00594e92  8b542418             mov edx, dword ptr [esp + 0x18]
// 00594e96  895014               mov dword ptr [eax + 0x14], edx
// 00594e99  eb02                 jmp 0x594e9d
// 00594e9b  33c0                 xor eax, eax
// 00594e9d  56                   push esi
// 00594e9e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00594ea2  6a00                 push 0
// 00594ea4  8906                 mov dword ptr [esi], eax
// 00594ea6  e8ef2a2100           call 0x7a799a
// 00594eab  83c404               add esp, 4
// 00594eae  8bc6                 mov eax, esi
// 00594eb0  5e                   pop esi
// 00594eb1  59                   pop ecx
// 00594eb2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
