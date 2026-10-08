// roc 2012-06 007d0f80  unit: RBX::VSky::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d0f80
//
// 007d0f80  51                   push ecx
// 007d0f81  6a18                 push 0x18
// 007d0f83  c744240400000000     mov dword ptr [esp + 4], 0
// 007d0f8b  e88a111b00           call 0x98211a
// 007d0f90  83c404               add esp, 4
// 007d0f93  85c0                 test eax, eax
// 007d0f95  7424                 je 0x7d0fbb
// 007d0f97  c70058fabb00         mov dword ptr [eax], 0xbbfa58
// 007d0f9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007d0fa1  894808               mov dword ptr [eax + 8], ecx
// 007d0fa4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d0fa8  89500c               mov dword ptr [eax + 0xc], edx
// 007d0fab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d0faf  894810               mov dword ptr [eax + 0x10], ecx
// 007d0fb2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007d0fb6  895014               mov dword ptr [eax + 0x14], edx
// 007d0fb9  eb02                 jmp 0x7d0fbd
// 007d0fbb  33c0                 xor eax, eax
// 007d0fbd  56                   push esi
// 007d0fbe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007d0fc2  6a00                 push 0
// 007d0fc4  8906                 mov dword ptr [esi], eax
// 007d0fc6  e849111b00           call 0x982114
// 007d0fcb  83c404               add esp, 4
// 007d0fce  8bc6                 mov eax, esi
// 007d0fd0  5e                   pop esi
// 007d0fd1  59                   pop ecx
// 007d0fd2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
