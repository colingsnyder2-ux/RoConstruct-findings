// roc 2010-06 006503f0  unit: RBX::VPlayerCamera::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006503f0
//
// 006503f0  51                   push ecx
// 006503f1  6a18                 push 0x18
// 006503f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006503fb  e8a0751500           call 0x7a79a0
// 00650400  83c404               add esp, 4
// 00650403  85c0                 test eax, eax
// 00650405  7424                 je 0x65042b
// 00650407  c7004c92a300         mov dword ptr [eax], 0xa3924c
// 0065040d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00650411  894808               mov dword ptr [eax + 8], ecx
// 00650414  8b542410             mov edx, dword ptr [esp + 0x10]
// 00650418  89500c               mov dword ptr [eax + 0xc], edx
// 0065041b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065041f  894810               mov dword ptr [eax + 0x10], ecx
// 00650422  8b542418             mov edx, dword ptr [esp + 0x18]
// 00650426  895014               mov dword ptr [eax + 0x14], edx
// 00650429  eb02                 jmp 0x65042d
// 0065042b  33c0                 xor eax, eax
// 0065042d  56                   push esi
// 0065042e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00650432  6a00                 push 0
// 00650434  8906                 mov dword ptr [esi], eax
// 00650436  e85f751500           call 0x7a799a
// 0065043b  83c404               add esp, 4
// 0065043e  8bc6                 mov eax, esi
// 00650440  5e                   pop esi
// 00650441  59                   pop ecx
// 00650442  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
