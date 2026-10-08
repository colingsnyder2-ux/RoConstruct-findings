// roc 2009-06 006971f0  unit: RBX::VDebrisService::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006971f0
//
// 006971f0  51                   push ecx
// 006971f1  6a18                 push 0x18
// 006971f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006971fb  e838180800           call 0x718a38
// 00697200  83c404               add esp, 4
// 00697203  85c0                 test eax, eax
// 00697205  7424                 je 0x69722b
// 00697207  c700347e8e00         mov dword ptr [eax], 0x8e7e34
// 0069720d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00697211  894808               mov dword ptr [eax + 8], ecx
// 00697214  8b542410             mov edx, dword ptr [esp + 0x10]
// 00697218  89500c               mov dword ptr [eax + 0xc], edx
// 0069721b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069721f  894810               mov dword ptr [eax + 0x10], ecx
// 00697222  8b542418             mov edx, dword ptr [esp + 0x18]
// 00697226  895014               mov dword ptr [eax + 0x14], edx
// 00697229  eb02                 jmp 0x69722d
// 0069722b  33c0                 xor eax, eax
// 0069722d  56                   push esi
// 0069722e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00697232  6a00                 push 0
// 00697234  8906                 mov dword ptr [esi], eax
// 00697236  e8f7170800           call 0x718a32
// 0069723b  83c404               add esp, 4
// 0069723e  8bc6                 mov eax, esi
// 00697240  5e                   pop esi
// 00697241  59                   pop ecx
// 00697242  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
