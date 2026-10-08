// roc 2010-06 006c28d0  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c28d0
//
// 006c28d0  51                   push ecx
// 006c28d1  6a18                 push 0x18
// 006c28d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006c28db  e8c0500e00           call 0x7a79a0
// 006c28e0  83c404               add esp, 4
// 006c28e3  85c0                 test eax, eax
// 006c28e5  7424                 je 0x6c290b
// 006c28e7  c700543ca400         mov dword ptr [eax], 0xa43c54
// 006c28ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c28f1  894808               mov dword ptr [eax + 8], ecx
// 006c28f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c28f8  89500c               mov dword ptr [eax + 0xc], edx
// 006c28fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c28ff  894810               mov dword ptr [eax + 0x10], ecx
// 006c2902  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c2906  895014               mov dword ptr [eax + 0x14], edx
// 006c2909  eb02                 jmp 0x6c290d
// 006c290b  33c0                 xor eax, eax
// 006c290d  56                   push esi
// 006c290e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c2912  6a00                 push 0
// 006c2914  8906                 mov dword ptr [esi], eax
// 006c2916  e87f500e00           call 0x7a799a
// 006c291b  83c404               add esp, 4
// 006c291e  8bc6                 mov eax, esi
// 006c2920  5e                   pop esi
// 006c2921  59                   pop ecx
// 006c2922  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
