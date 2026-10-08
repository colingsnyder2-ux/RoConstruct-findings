// roc 2012-06 007cd230  unit: RBX::MegaClusterInstance  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007cd230
//
// 007cd230  51                   push ecx
// 007cd231  6a18                 push 0x18
// 007cd233  c744240400000000     mov dword ptr [esp + 4], 0
// 007cd23b  e8da4e1b00           call 0x98211a
// 007cd240  83c404               add esp, 4
// 007cd243  85c0                 test eax, eax
// 007cd245  7424                 je 0x7cd26b
// 007cd247  c700b4e8bb00         mov dword ptr [eax], 0xbbe8b4
// 007cd24d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007cd251  894808               mov dword ptr [eax + 8], ecx
// 007cd254  8b542410             mov edx, dword ptr [esp + 0x10]
// 007cd258  89500c               mov dword ptr [eax + 0xc], edx
// 007cd25b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007cd25f  894810               mov dword ptr [eax + 0x10], ecx
// 007cd262  8b542418             mov edx, dword ptr [esp + 0x18]
// 007cd266  895014               mov dword ptr [eax + 0x14], edx
// 007cd269  eb02                 jmp 0x7cd26d
// 007cd26b  33c0                 xor eax, eax
// 007cd26d  56                   push esi
// 007cd26e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007cd272  6a00                 push 0
// 007cd274  8906                 mov dword ptr [esi], eax
// 007cd276  e8994e1b00           call 0x982114
// 007cd27b  83c404               add esp, 4
// 007cd27e  8bc6                 mov eax, esi
// 007cd280  5e                   pop esi
// 007cd281  59                   pop ecx
// 007cd282  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
