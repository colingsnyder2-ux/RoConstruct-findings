// roc 2010-06 006440e0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006440e0
//
// 006440e0  51                   push ecx
// 006440e1  6a18                 push 0x18
// 006440e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006440eb  e8b0381600           call 0x7a79a0
// 006440f0  83c404               add esp, 4
// 006440f3  85c0                 test eax, eax
// 006440f5  7424                 je 0x64411b
// 006440f7  c7006c71a300         mov dword ptr [eax], 0xa3716c
// 006440fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00644101  894808               mov dword ptr [eax + 8], ecx
// 00644104  8b542410             mov edx, dword ptr [esp + 0x10]
// 00644108  89500c               mov dword ptr [eax + 0xc], edx
// 0064410b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064410f  894810               mov dword ptr [eax + 0x10], ecx
// 00644112  8b542418             mov edx, dword ptr [esp + 0x18]
// 00644116  895014               mov dword ptr [eax + 0x14], edx
// 00644119  eb02                 jmp 0x64411d
// 0064411b  33c0                 xor eax, eax
// 0064411d  56                   push esi
// 0064411e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00644122  6a00                 push 0
// 00644124  8906                 mov dword ptr [esi], eax
// 00644126  e86f381600           call 0x7a799a
// 0064412b  83c404               add esp, 4
// 0064412e  8bc6                 mov eax, esi
// 00644130  5e                   pop esi
// 00644131  59                   pop ecx
// 00644132  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
