// roc 2009-12 0062ca90  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062ca90
//
// 0062ca90  51                   push ecx
// 0062ca91  6a10                 push 0x10
// 0062ca93  c744240400000000     mov dword ptr [esp + 4], 0
// 0062ca9b  e8c06d1c00           call 0x7f3860
// 0062caa0  83c404               add esp, 4
// 0062caa3  85c0                 test eax, eax
// 0062caa5  7416                 je 0x62cabd
// 0062caa7  c7000cae9c00         mov dword ptr [eax], 0x9cae0c
// 0062caad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062cab1  894808               mov dword ptr [eax + 8], ecx
// 0062cab4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062cab8  89500c               mov dword ptr [eax + 0xc], edx
// 0062cabb  eb02                 jmp 0x62cabf
// 0062cabd  33c0                 xor eax, eax
// 0062cabf  56                   push esi
// 0062cac0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062cac4  6a00                 push 0
// 0062cac6  8906                 mov dword ptr [esi], eax
// 0062cac8  e88d6d1c00           call 0x7f385a
// 0062cacd  83c404               add esp, 4
// 0062cad0  8bc6                 mov eax, esi
// 0062cad2  5e                   pop esi
// 0062cad3  59                   pop ecx
// 0062cad4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
