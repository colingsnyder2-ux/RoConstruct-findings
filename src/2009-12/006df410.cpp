// roc 2009-12 006df410  unit: RBX::VMeshId::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006df410
//
// 006df410  51                   push ecx
// 006df411  6a18                 push 0x18
// 006df413  c744240400000000     mov dword ptr [esp + 4], 0
// 006df41b  e840441100           call 0x7f3860
// 006df420  83c404               add esp, 4
// 006df423  85c0                 test eax, eax
// 006df425  7424                 je 0x6df44b
// 006df427  c70074a29d00         mov dword ptr [eax], 0x9da274
// 006df42d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006df431  894808               mov dword ptr [eax + 8], ecx
// 006df434  8b542410             mov edx, dword ptr [esp + 0x10]
// 006df438  89500c               mov dword ptr [eax + 0xc], edx
// 006df43b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006df43f  894810               mov dword ptr [eax + 0x10], ecx
// 006df442  8b542418             mov edx, dword ptr [esp + 0x18]
// 006df446  895014               mov dword ptr [eax + 0x14], edx
// 006df449  eb02                 jmp 0x6df44d
// 006df44b  33c0                 xor eax, eax
// 006df44d  56                   push esi
// 006df44e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006df452  6a00                 push 0
// 006df454  8906                 mov dword ptr [esi], eax
// 006df456  e8ff431100           call 0x7f385a
// 006df45b  83c404               add esp, 4
// 006df45e  8bc6                 mov eax, esi
// 006df460  5e                   pop esi
// 006df461  59                   pop ecx
// 006df462  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
