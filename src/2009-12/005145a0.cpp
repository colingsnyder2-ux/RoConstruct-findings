// roc 2009-12 005145a0  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005145a0
//
// 005145a0  51                   push ecx
// 005145a1  6a18                 push 0x18
// 005145a3  c744240400000000     mov dword ptr [esp + 4], 0
// 005145ab  e8b0f22d00           call 0x7f3860
// 005145b0  83c404               add esp, 4
// 005145b3  85c0                 test eax, eax
// 005145b5  7424                 je 0x5145db
// 005145b7  c70034b39b00         mov dword ptr [eax], 0x9bb334
// 005145bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005145c1  894808               mov dword ptr [eax + 8], ecx
// 005145c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005145c8  89500c               mov dword ptr [eax + 0xc], edx
// 005145cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005145cf  894810               mov dword ptr [eax + 0x10], ecx
// 005145d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005145d6  895014               mov dword ptr [eax + 0x14], edx
// 005145d9  eb02                 jmp 0x5145dd
// 005145db  33c0                 xor eax, eax
// 005145dd  56                   push esi
// 005145de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005145e2  6a00                 push 0
// 005145e4  8906                 mov dword ptr [esi], eax
// 005145e6  e86ff22d00           call 0x7f385a
// 005145eb  83c404               add esp, 4
// 005145ee  8bc6                 mov eax, esi
// 005145f0  5e                   pop esi
// 005145f1  59                   pop ecx
// 005145f2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
