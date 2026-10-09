// roc 2009-12 0063d370  unit: RBX::Network::P8Player::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063d370
//
// 0063d370  51                   push ecx
// 0063d371  6a18                 push 0x18
// 0063d373  c744240400000000     mov dword ptr [esp + 4], 0
// 0063d37b  e8e0641b00           call 0x7f3860
// 0063d380  83c404               add esp, 4
// 0063d383  85c0                 test eax, eax
// 0063d385  7424                 je 0x63d3ab
// 0063d387  c70084c49c00         mov dword ptr [eax], 0x9cc484
// 0063d38d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063d391  894808               mov dword ptr [eax + 8], ecx
// 0063d394  8b542410             mov edx, dword ptr [esp + 0x10]
// 0063d398  89500c               mov dword ptr [eax + 0xc], edx
// 0063d39b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063d39f  894810               mov dword ptr [eax + 0x10], ecx
// 0063d3a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0063d3a6  895014               mov dword ptr [eax + 0x14], edx
// 0063d3a9  eb02                 jmp 0x63d3ad
// 0063d3ab  33c0                 xor eax, eax
// 0063d3ad  56                   push esi
// 0063d3ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063d3b2  6a00                 push 0
// 0063d3b4  8906                 mov dword ptr [esi], eax
// 0063d3b6  e89f641b00           call 0x7f385a
// 0063d3bb  83c404               add esp, 4
// 0063d3be  8bc6                 mov eax, esi
// 0063d3c0  5e                   pop esi
// 0063d3c1  59                   pop ecx
// 0063d3c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
