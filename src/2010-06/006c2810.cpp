// roc 2010-06 006c2810  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c2810
//
// 006c2810  51                   push ecx
// 006c2811  6a18                 push 0x18
// 006c2813  c744240400000000     mov dword ptr [esp + 4], 0
// 006c281b  e880510e00           call 0x7a79a0
// 006c2820  83c404               add esp, 4
// 006c2823  85c0                 test eax, eax
// 006c2825  7424                 je 0x6c284b
// 006c2827  c700243ca400         mov dword ptr [eax], 0xa43c24
// 006c282d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c2831  894808               mov dword ptr [eax + 8], ecx
// 006c2834  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c2838  89500c               mov dword ptr [eax + 0xc], edx
// 006c283b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c283f  894810               mov dword ptr [eax + 0x10], ecx
// 006c2842  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c2846  895014               mov dword ptr [eax + 0x14], edx
// 006c2849  eb02                 jmp 0x6c284d
// 006c284b  33c0                 xor eax, eax
// 006c284d  56                   push esi
// 006c284e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c2852  6a00                 push 0
// 006c2854  8906                 mov dword ptr [esi], eax
// 006c2856  e83f510e00           call 0x7a799a
// 006c285b  83c404               add esp, 4
// 006c285e  8bc6                 mov eax, esi
// 006c2860  5e                   pop esi
// 006c2861  59                   pop ecx
// 006c2862  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
