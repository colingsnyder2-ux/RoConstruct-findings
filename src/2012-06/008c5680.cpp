// roc 2012-06 008c5680  unit: RBX::VCustomEventReceiver::?$EventDesc  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c5680
//
// 008c5680  51                   push ecx
// 008c5681  6a18                 push 0x18
// 008c5683  c744240400000000     mov dword ptr [esp + 4], 0
// 008c568b  e88aca0b00           call 0x98211a
// 008c5690  83c404               add esp, 4
// 008c5693  85c0                 test eax, eax
// 008c5695  7424                 je 0x8c56bb
// 008c5697  c7001464be00         mov dword ptr [eax], 0xbe6414
// 008c569d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c56a1  894808               mov dword ptr [eax + 8], ecx
// 008c56a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c56a8  89500c               mov dword ptr [eax + 0xc], edx
// 008c56ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c56af  894810               mov dword ptr [eax + 0x10], ecx
// 008c56b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c56b6  895014               mov dword ptr [eax + 0x14], edx
// 008c56b9  eb02                 jmp 0x8c56bd
// 008c56bb  33c0                 xor eax, eax
// 008c56bd  56                   push esi
// 008c56be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c56c2  6a00                 push 0
// 008c56c4  8906                 mov dword ptr [esi], eax
// 008c56c6  e849ca0b00           call 0x982114
// 008c56cb  83c404               add esp, 4
// 008c56ce  8bc6                 mov eax, esi
// 008c56d0  5e                   pop esi
// 008c56d1  59                   pop ecx
// 008c56d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
