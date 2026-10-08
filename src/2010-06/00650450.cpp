// roc 2010-06 00650450  unit: RBX::VPlayerCamera::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00650450
//
// 00650450  51                   push ecx
// 00650451  6a18                 push 0x18
// 00650453  c744240400000000     mov dword ptr [esp + 4], 0
// 0065045b  e840751500           call 0x7a79a0
// 00650460  83c404               add esp, 4
// 00650463  85c0                 test eax, eax
// 00650465  7424                 je 0x65048b
// 00650467  c7006492a300         mov dword ptr [eax], 0xa39264
// 0065046d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00650471  894808               mov dword ptr [eax + 8], ecx
// 00650474  8b542410             mov edx, dword ptr [esp + 0x10]
// 00650478  89500c               mov dword ptr [eax + 0xc], edx
// 0065047b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065047f  894810               mov dword ptr [eax + 0x10], ecx
// 00650482  8b542418             mov edx, dword ptr [esp + 0x18]
// 00650486  895014               mov dword ptr [eax + 0x14], edx
// 00650489  eb02                 jmp 0x65048d
// 0065048b  33c0                 xor eax, eax
// 0065048d  56                   push esi
// 0065048e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00650492  6a00                 push 0
// 00650494  8906                 mov dword ptr [esi], eax
// 00650496  e8ff741500           call 0x7a799a
// 0065049b  83c404               add esp, 4
// 0065049e  8bc6                 mov eax, esi
// 006504a0  5e                   pop esi
// 006504a1  59                   pop ecx
// 006504a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
