// roc 2012-06 007e8850  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e8850
//
// 007e8850  51                   push ecx
// 007e8851  6a18                 push 0x18
// 007e8853  c744240400000000     mov dword ptr [esp + 4], 0
// 007e885b  e8ba981900           call 0x98211a
// 007e8860  83c404               add esp, 4
// 007e8863  85c0                 test eax, eax
// 007e8865  7424                 je 0x7e888b
// 007e8867  c700b026bc00         mov dword ptr [eax], 0xbc26b0
// 007e886d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e8871  894808               mov dword ptr [eax + 8], ecx
// 007e8874  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e8878  89500c               mov dword ptr [eax + 0xc], edx
// 007e887b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e887f  894810               mov dword ptr [eax + 0x10], ecx
// 007e8882  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e8886  895014               mov dword ptr [eax + 0x14], edx
// 007e8889  eb02                 jmp 0x7e888d
// 007e888b  33c0                 xor eax, eax
// 007e888d  56                   push esi
// 007e888e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e8892  6a00                 push 0
// 007e8894  8906                 mov dword ptr [esi], eax
// 007e8896  e879981900           call 0x982114
// 007e889b  83c404               add esp, 4
// 007e889e  8bc6                 mov eax, esi
// 007e88a0  5e                   pop esi
// 007e88a1  59                   pop ecx
// 007e88a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
