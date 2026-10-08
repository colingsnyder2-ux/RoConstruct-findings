// roc 2010-06 0065f9f0  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065f9f0
//
// 0065f9f0  51                   push ecx
// 0065f9f1  6a18                 push 0x18
// 0065f9f3  c744240400000000     mov dword ptr [esp + 4], 0
// 0065f9fb  e8a07f1400           call 0x7a79a0
// 0065fa00  83c404               add esp, 4
// 0065fa03  85c0                 test eax, eax
// 0065fa05  7424                 je 0x65fa2b
// 0065fa07  c7003ca7a300         mov dword ptr [eax], 0xa3a73c
// 0065fa0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065fa11  894808               mov dword ptr [eax + 8], ecx
// 0065fa14  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065fa18  89500c               mov dword ptr [eax + 0xc], edx
// 0065fa1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065fa1f  894810               mov dword ptr [eax + 0x10], ecx
// 0065fa22  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065fa26  895014               mov dword ptr [eax + 0x14], edx
// 0065fa29  eb02                 jmp 0x65fa2d
// 0065fa2b  33c0                 xor eax, eax
// 0065fa2d  56                   push esi
// 0065fa2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065fa32  6a00                 push 0
// 0065fa34  8906                 mov dword ptr [esi], eax
// 0065fa36  e85f7f1400           call 0x7a799a
// 0065fa3b  83c404               add esp, 4
// 0065fa3e  8bc6                 mov eax, esi
// 0065fa40  5e                   pop esi
// 0065fa41  59                   pop ecx
// 0065fa42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
