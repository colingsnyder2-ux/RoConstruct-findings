// roc 2010-06 006cb650  unit: RBX::ArcHandles  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006cb650
//
// 006cb650  51                   push ecx
// 006cb651  6a18                 push 0x18
// 006cb653  c744240400000000     mov dword ptr [esp + 4], 0
// 006cb65b  e840c30d00           call 0x7a79a0
// 006cb660  83c404               add esp, 4
// 006cb663  85c0                 test eax, eax
// 006cb665  7424                 je 0x6cb68b
// 006cb667  c7001c51a400         mov dword ptr [eax], 0xa4511c
// 006cb66d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006cb671  894808               mov dword ptr [eax + 8], ecx
// 006cb674  8b542410             mov edx, dword ptr [esp + 0x10]
// 006cb678  89500c               mov dword ptr [eax + 0xc], edx
// 006cb67b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006cb67f  894810               mov dword ptr [eax + 0x10], ecx
// 006cb682  8b542418             mov edx, dword ptr [esp + 0x18]
// 006cb686  895014               mov dword ptr [eax + 0x14], edx
// 006cb689  eb02                 jmp 0x6cb68d
// 006cb68b  33c0                 xor eax, eax
// 006cb68d  56                   push esi
// 006cb68e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006cb692  6a00                 push 0
// 006cb694  8906                 mov dword ptr [esi], eax
// 006cb696  e8ffc20d00           call 0x7a799a
// 006cb69b  83c404               add esp, 4
// 006cb69e  8bc6                 mov eax, esi
// 006cb6a0  5e                   pop esi
// 006cb6a1  59                   pop ecx
// 006cb6a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
