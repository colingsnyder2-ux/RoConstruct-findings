// roc 2009-12 0062cda0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062cda0
//
// 0062cda0  51                   push ecx
// 0062cda1  6a18                 push 0x18
// 0062cda3  c744240400000000     mov dword ptr [esp + 4], 0
// 0062cdab  e8b06a1c00           call 0x7f3860
// 0062cdb0  83c404               add esp, 4
// 0062cdb3  85c0                 test eax, eax
// 0062cdb5  7424                 je 0x62cddb
// 0062cdb7  c700e4ae9c00         mov dword ptr [eax], 0x9caee4
// 0062cdbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062cdc1  894808               mov dword ptr [eax + 8], ecx
// 0062cdc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062cdc8  89500c               mov dword ptr [eax + 0xc], edx
// 0062cdcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062cdcf  894810               mov dword ptr [eax + 0x10], ecx
// 0062cdd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062cdd6  895014               mov dword ptr [eax + 0x14], edx
// 0062cdd9  eb02                 jmp 0x62cddd
// 0062cddb  33c0                 xor eax, eax
// 0062cddd  56                   push esi
// 0062cdde  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062cde2  6a00                 push 0
// 0062cde4  8906                 mov dword ptr [esi], eax
// 0062cde6  e86f6a1c00           call 0x7f385a
// 0062cdeb  83c404               add esp, 4
// 0062cdee  8bc6                 mov eax, esi
// 0062cdf0  5e                   pop esi
// 0062cdf1  59                   pop ecx
// 0062cdf2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
