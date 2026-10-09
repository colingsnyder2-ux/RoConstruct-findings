// roc 2009-12 0062cec0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062cec0
//
// 0062cec0  51                   push ecx
// 0062cec1  6a18                 push 0x18
// 0062cec3  c744240400000000     mov dword ptr [esp + 4], 0
// 0062cecb  e890691c00           call 0x7f3860
// 0062ced0  83c404               add esp, 4
// 0062ced3  85c0                 test eax, eax
// 0062ced5  7424                 je 0x62cefb
// 0062ced7  c7002caf9c00         mov dword ptr [eax], 0x9caf2c
// 0062cedd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062cee1  894808               mov dword ptr [eax + 8], ecx
// 0062cee4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062cee8  89500c               mov dword ptr [eax + 0xc], edx
// 0062ceeb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062ceef  894810               mov dword ptr [eax + 0x10], ecx
// 0062cef2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062cef6  895014               mov dword ptr [eax + 0x14], edx
// 0062cef9  eb02                 jmp 0x62cefd
// 0062cefb  33c0                 xor eax, eax
// 0062cefd  56                   push esi
// 0062cefe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062cf02  6a00                 push 0
// 0062cf04  8906                 mov dword ptr [esi], eax
// 0062cf06  e84f691c00           call 0x7f385a
// 0062cf0b  83c404               add esp, 4
// 0062cf0e  8bc6                 mov eax, esi
// 0062cf10  5e                   pop esi
// 0062cf11  59                   pop ecx
// 0062cf12  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
