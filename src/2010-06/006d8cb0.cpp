// roc 2010-06 006d8cb0  unit: RBX::Smoke  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d8cb0
//
// 006d8cb0  51                   push ecx
// 006d8cb1  6a18                 push 0x18
// 006d8cb3  c744240400000000     mov dword ptr [esp + 4], 0
// 006d8cbb  e8e0ec0c00           call 0x7a79a0
// 006d8cc0  83c404               add esp, 4
// 006d8cc3  85c0                 test eax, eax
// 006d8cc5  7424                 je 0x6d8ceb
// 006d8cc7  c7003463a400         mov dword ptr [eax], 0xa46334
// 006d8ccd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d8cd1  894808               mov dword ptr [eax + 8], ecx
// 006d8cd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d8cd8  89500c               mov dword ptr [eax + 0xc], edx
// 006d8cdb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d8cdf  894810               mov dword ptr [eax + 0x10], ecx
// 006d8ce2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d8ce6  895014               mov dword ptr [eax + 0x14], edx
// 006d8ce9  eb02                 jmp 0x6d8ced
// 006d8ceb  33c0                 xor eax, eax
// 006d8ced  56                   push esi
// 006d8cee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d8cf2  6a00                 push 0
// 006d8cf4  8906                 mov dword ptr [esi], eax
// 006d8cf6  e89fec0c00           call 0x7a799a
// 006d8cfb  83c404               add esp, 4
// 006d8cfe  8bc6                 mov eax, esi
// 006d8d00  5e                   pop esi
// 006d8d01  59                   pop ecx
// 006d8d02  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
