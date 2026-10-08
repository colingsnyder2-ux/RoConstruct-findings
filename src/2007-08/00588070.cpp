// roc 2007-08 00588070  unit: RBX::SoundChannel  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588070
//
// 00588070  51                   push ecx
// 00588071  6a18                 push 0x18
// 00588073  c744240400000000     mov dword ptr [esp + 4], 0
// 0058807b  e8767e0a00           call 0x62fef6
// 00588080  83c404               add esp, 4
// 00588083  85c0                 test eax, eax
// 00588085  7424                 je 0x5880ab
// 00588087  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058808b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058808f  894808               mov dword ptr [eax + 8], ecx
// 00588092  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00588096  89500c               mov dword ptr [eax + 0xc], edx
// 00588099  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058809d  c700bce97a00         mov dword ptr [eax], 0x7ae9bc
// 005880a3  894810               mov dword ptr [eax + 0x10], ecx
// 005880a6  895014               mov dword ptr [eax + 0x14], edx
// 005880a9  eb02                 jmp 0x5880ad
// 005880ab  33c0                 xor eax, eax
// 005880ad  56                   push esi
// 005880ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005880b2  6a00                 push 0
// 005880b4  c744240800000000     mov dword ptr [esp + 8], 0
// 005880bc  8906                 mov dword ptr [esi], eax
// 005880be  e89f7b0a00           call 0x62fc62
// 005880c3  83c404               add esp, 4
// 005880c6  8bc6                 mov eax, esi
// 005880c8  5e                   pop esi
// 005880c9  59                   pop ecx
// 005880ca  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
