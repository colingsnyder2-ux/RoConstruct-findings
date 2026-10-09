// roc 2009-12 0072dbe0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072dbe0
//
// 0072dbe0  51                   push ecx
// 0072dbe1  6a18                 push 0x18
// 0072dbe3  c744240400000000     mov dword ptr [esp + 4], 0
// 0072dbeb  e8705c0c00           call 0x7f3860
// 0072dbf0  83c404               add esp, 4
// 0072dbf3  85c0                 test eax, eax
// 0072dbf5  7424                 je 0x72dc1b
// 0072dbf7  c70044079e00         mov dword ptr [eax], 0x9e0744
// 0072dbfd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072dc01  894808               mov dword ptr [eax + 8], ecx
// 0072dc04  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072dc08  89500c               mov dword ptr [eax + 0xc], edx
// 0072dc0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072dc0f  894810               mov dword ptr [eax + 0x10], ecx
// 0072dc12  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072dc16  895014               mov dword ptr [eax + 0x14], edx
// 0072dc19  eb02                 jmp 0x72dc1d
// 0072dc1b  33c0                 xor eax, eax
// 0072dc1d  56                   push esi
// 0072dc1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0072dc22  6a00                 push 0
// 0072dc24  8906                 mov dword ptr [esi], eax
// 0072dc26  e82f5c0c00           call 0x7f385a
// 0072dc2b  83c404               add esp, 4
// 0072dc2e  8bc6                 mov eax, esi
// 0072dc30  5e                   pop esi
// 0072dc31  59                   pop ecx
// 0072dc32  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
