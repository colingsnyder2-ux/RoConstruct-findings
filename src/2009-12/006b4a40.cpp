// roc 2009-12 006b4a40  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b4a40
//
// 006b4a40  51                   push ecx
// 006b4a41  6a18                 push 0x18
// 006b4a43  c744240400000000     mov dword ptr [esp + 4], 0
// 006b4a4b  e810ee1300           call 0x7f3860
// 006b4a50  83c404               add esp, 4
// 006b4a53  85c0                 test eax, eax
// 006b4a55  7424                 je 0x6b4a7b
// 006b4a57  c700305d9d00         mov dword ptr [eax], 0x9d5d30
// 006b4a5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b4a61  894808               mov dword ptr [eax + 8], ecx
// 006b4a64  8b542410             mov edx, dword ptr [esp + 0x10]
// 006b4a68  89500c               mov dword ptr [eax + 0xc], edx
// 006b4a6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b4a6f  894810               mov dword ptr [eax + 0x10], ecx
// 006b4a72  8b542418             mov edx, dword ptr [esp + 0x18]
// 006b4a76  895014               mov dword ptr [eax + 0x14], edx
// 006b4a79  eb02                 jmp 0x6b4a7d
// 006b4a7b  33c0                 xor eax, eax
// 006b4a7d  56                   push esi
// 006b4a7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006b4a82  6a00                 push 0
// 006b4a84  8906                 mov dword ptr [esi], eax
// 006b4a86  e8cfed1300           call 0x7f385a
// 006b4a8b  83c404               add esp, 4
// 006b4a8e  8bc6                 mov eax, esi
// 006b4a90  5e                   pop esi
// 006b4a91  59                   pop ecx
// 006b4a92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
