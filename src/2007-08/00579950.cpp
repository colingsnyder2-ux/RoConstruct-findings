// roc 2007-08 00579950  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579950
//
// 00579950  51                   push ecx
// 00579951  6a18                 push 0x18
// 00579953  c744240400000000     mov dword ptr [esp + 4], 0
// 0057995b  e896650b00           call 0x62fef6
// 00579960  83c404               add esp, 4
// 00579963  85c0                 test eax, eax
// 00579965  7424                 je 0x57998b
// 00579967  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057996b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057996f  894808               mov dword ptr [eax + 8], ecx
// 00579972  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00579976  89500c               mov dword ptr [eax + 0xc], edx
// 00579979  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057997d  c70094b17a00         mov dword ptr [eax], 0x7ab194
// 00579983  894810               mov dword ptr [eax + 0x10], ecx
// 00579986  895014               mov dword ptr [eax + 0x14], edx
// 00579989  eb02                 jmp 0x57998d
// 0057998b  33c0                 xor eax, eax
// 0057998d  56                   push esi
// 0057998e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00579992  6a00                 push 0
// 00579994  c744240800000000     mov dword ptr [esp + 8], 0
// 0057999c  8906                 mov dword ptr [esi], eax
// 0057999e  e8bf620b00           call 0x62fc62
// 005799a3  83c404               add esp, 4
// 005799a6  8bc6                 mov eax, esi
// 005799a8  5e                   pop esi
// 005799a9  59                   pop ecx
// 005799aa  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
