// roc 2010-06 0069bb30  unit: RBX::VSky::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069bb30
//
// 0069bb30  51                   push ecx
// 0069bb31  6a18                 push 0x18
// 0069bb33  c744240400000000     mov dword ptr [esp + 4], 0
// 0069bb3b  e860be1000           call 0x7a79a0
// 0069bb40  83c404               add esp, 4
// 0069bb43  85c0                 test eax, eax
// 0069bb45  7424                 je 0x69bb6b
// 0069bb47  c700f4f3a300         mov dword ptr [eax], 0xa3f3f4
// 0069bb4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069bb51  894808               mov dword ptr [eax + 8], ecx
// 0069bb54  8b542410             mov edx, dword ptr [esp + 0x10]
// 0069bb58  89500c               mov dword ptr [eax + 0xc], edx
// 0069bb5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069bb5f  894810               mov dword ptr [eax + 0x10], ecx
// 0069bb62  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069bb66  895014               mov dword ptr [eax + 0x14], edx
// 0069bb69  eb02                 jmp 0x69bb6d
// 0069bb6b  33c0                 xor eax, eax
// 0069bb6d  56                   push esi
// 0069bb6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069bb72  6a00                 push 0
// 0069bb74  8906                 mov dword ptr [esi], eax
// 0069bb76  e81fbe1000           call 0x7a799a
// 0069bb7b  83c404               add esp, 4
// 0069bb7e  8bc6                 mov eax, esi
// 0069bb80  5e                   pop esi
// 0069bb81  59                   pop ecx
// 0069bb82  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
