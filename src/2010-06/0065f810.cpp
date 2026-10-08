// roc 2010-06 0065f810  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065f810
//
// 0065f810  51                   push ecx
// 0065f811  6a18                 push 0x18
// 0065f813  c744240400000000     mov dword ptr [esp + 4], 0
// 0065f81b  e880811400           call 0x7a79a0
// 0065f820  83c404               add esp, 4
// 0065f823  85c0                 test eax, eax
// 0065f825  7424                 je 0x65f84b
// 0065f827  c700c4a6a300         mov dword ptr [eax], 0xa3a6c4
// 0065f82d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065f831  894808               mov dword ptr [eax + 8], ecx
// 0065f834  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065f838  89500c               mov dword ptr [eax + 0xc], edx
// 0065f83b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065f83f  894810               mov dword ptr [eax + 0x10], ecx
// 0065f842  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065f846  895014               mov dword ptr [eax + 0x14], edx
// 0065f849  eb02                 jmp 0x65f84d
// 0065f84b  33c0                 xor eax, eax
// 0065f84d  56                   push esi
// 0065f84e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065f852  6a00                 push 0
// 0065f854  8906                 mov dword ptr [esi], eax
// 0065f856  e83f811400           call 0x7a799a
// 0065f85b  83c404               add esp, 4
// 0065f85e  8bc6                 mov eax, esi
// 0065f860  5e                   pop esi
// 0065f861  59                   pop ecx
// 0065f862  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
