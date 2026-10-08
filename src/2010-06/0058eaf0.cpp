// roc 2010-06 0058eaf0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058eaf0
//
// 0058eaf0  51                   push ecx
// 0058eaf1  6a18                 push 0x18
// 0058eaf3  c744240400000000     mov dword ptr [esp + 4], 0
// 0058eafb  e8a08e2100           call 0x7a79a0
// 0058eb00  83c404               add esp, 4
// 0058eb03  85c0                 test eax, eax
// 0058eb05  7424                 je 0x58eb2b
// 0058eb07  c7006c8ca200         mov dword ptr [eax], 0xa28c6c
// 0058eb0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058eb11  894808               mov dword ptr [eax + 8], ecx
// 0058eb14  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058eb18  89500c               mov dword ptr [eax + 0xc], edx
// 0058eb1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058eb1f  894810               mov dword ptr [eax + 0x10], ecx
// 0058eb22  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058eb26  895014               mov dword ptr [eax + 0x14], edx
// 0058eb29  eb02                 jmp 0x58eb2d
// 0058eb2b  33c0                 xor eax, eax
// 0058eb2d  56                   push esi
// 0058eb2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058eb32  6a00                 push 0
// 0058eb34  8906                 mov dword ptr [esi], eax
// 0058eb36  e85f8e2100           call 0x7a799a
// 0058eb3b  83c404               add esp, 4
// 0058eb3e  8bc6                 mov eax, esi
// 0058eb40  5e                   pop esi
// 0058eb41  59                   pop ecx
// 0058eb42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
