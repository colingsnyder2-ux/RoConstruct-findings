// roc 2009-06 006778c0  unit: RBX::Hint  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006778c0
//
// 006778c0  51                   push ecx
// 006778c1  6a18                 push 0x18
// 006778c3  c744240400000000     mov dword ptr [esp + 4], 0
// 006778cb  e868110a00           call 0x718a38
// 006778d0  83c404               add esp, 4
// 006778d3  85c0                 test eax, eax
// 006778d5  7424                 je 0x6778fb
// 006778d7  c700d4468e00         mov dword ptr [eax], 0x8e46d4
// 006778dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006778e1  894808               mov dword ptr [eax + 8], ecx
// 006778e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006778e8  89500c               mov dword ptr [eax + 0xc], edx
// 006778eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006778ef  894810               mov dword ptr [eax + 0x10], ecx
// 006778f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006778f6  895014               mov dword ptr [eax + 0x14], edx
// 006778f9  eb02                 jmp 0x6778fd
// 006778fb  33c0                 xor eax, eax
// 006778fd  56                   push esi
// 006778fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00677902  6a00                 push 0
// 00677904  8906                 mov dword ptr [esi], eax
// 00677906  e827110a00           call 0x718a32
// 0067790b  83c404               add esp, 4
// 0067790e  8bc6                 mov eax, esi
// 00677910  5e                   pop esi
// 00677911  59                   pop ecx
// 00677912  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
