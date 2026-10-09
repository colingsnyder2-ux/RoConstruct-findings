// roc 2009-12 007429c0  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007429c0
//
// 007429c0  51                   push ecx
// 007429c1  6a18                 push 0x18
// 007429c3  c744240400000000     mov dword ptr [esp + 4], 0
// 007429cb  e8900e0b00           call 0x7f3860
// 007429d0  83c404               add esp, 4
// 007429d3  85c0                 test eax, eax
// 007429d5  7424                 je 0x7429fb
// 007429d7  c7008c2b9e00         mov dword ptr [eax], 0x9e2b8c
// 007429dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007429e1  894808               mov dword ptr [eax + 8], ecx
// 007429e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007429e8  89500c               mov dword ptr [eax + 0xc], edx
// 007429eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007429ef  894810               mov dword ptr [eax + 0x10], ecx
// 007429f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007429f6  895014               mov dword ptr [eax + 0x14], edx
// 007429f9  eb02                 jmp 0x7429fd
// 007429fb  33c0                 xor eax, eax
// 007429fd  56                   push esi
// 007429fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00742a02  6a00                 push 0
// 00742a04  8906                 mov dword ptr [esi], eax
// 00742a06  e84f0e0b00           call 0x7f385a
// 00742a0b  83c404               add esp, 4
// 00742a0e  8bc6                 mov eax, esi
// 00742a10  5e                   pop esi
// 00742a11  59                   pop ecx
// 00742a12  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
