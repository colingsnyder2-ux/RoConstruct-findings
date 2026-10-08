// roc 2012-06 008c4710  unit: RBX::VClickDetector::?$EventDesc  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c4710
//
// 008c4710  51                   push ecx
// 008c4711  6a18                 push 0x18
// 008c4713  c744240400000000     mov dword ptr [esp + 4], 0
// 008c471b  e8fad90b00           call 0x98211a
// 008c4720  83c404               add esp, 4
// 008c4723  85c0                 test eax, eax
// 008c4725  7424                 je 0x8c474b
// 008c4727  c7000063be00         mov dword ptr [eax], 0xbe6300
// 008c472d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c4731  894808               mov dword ptr [eax + 8], ecx
// 008c4734  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c4738  89500c               mov dword ptr [eax + 0xc], edx
// 008c473b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c473f  894810               mov dword ptr [eax + 0x10], ecx
// 008c4742  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c4746  895014               mov dword ptr [eax + 0x14], edx
// 008c4749  eb02                 jmp 0x8c474d
// 008c474b  33c0                 xor eax, eax
// 008c474d  56                   push esi
// 008c474e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c4752  6a00                 push 0
// 008c4754  8906                 mov dword ptr [esi], eax
// 008c4756  e8b9d90b00           call 0x982114
// 008c475b  83c404               add esp, 4
// 008c475e  8bc6                 mov eax, esi
// 008c4760  5e                   pop esi
// 008c4761  59                   pop ecx
// 008c4762  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
