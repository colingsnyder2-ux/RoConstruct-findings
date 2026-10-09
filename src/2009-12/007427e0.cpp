// roc 2009-12 007427e0  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007427e0
//
// 007427e0  51                   push ecx
// 007427e1  6a18                 push 0x18
// 007427e3  c744240400000000     mov dword ptr [esp + 4], 0
// 007427eb  e870100b00           call 0x7f3860
// 007427f0  83c404               add esp, 4
// 007427f3  85c0                 test eax, eax
// 007427f5  7424                 je 0x74281b
// 007427f7  c700142b9e00         mov dword ptr [eax], 0x9e2b14
// 007427fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00742801  894808               mov dword ptr [eax + 8], ecx
// 00742804  8b542410             mov edx, dword ptr [esp + 0x10]
// 00742808  89500c               mov dword ptr [eax + 0xc], edx
// 0074280b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074280f  894810               mov dword ptr [eax + 0x10], ecx
// 00742812  8b542418             mov edx, dword ptr [esp + 0x18]
// 00742816  895014               mov dword ptr [eax + 0x14], edx
// 00742819  eb02                 jmp 0x74281d
// 0074281b  33c0                 xor eax, eax
// 0074281d  56                   push esi
// 0074281e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00742822  6a00                 push 0
// 00742824  8906                 mov dword ptr [esi], eax
// 00742826  e82f100b00           call 0x7f385a
// 0074282b  83c404               add esp, 4
// 0074282e  8bc6                 mov eax, esi
// 00742830  5e                   pop esi
// 00742831  59                   pop ecx
// 00742832  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
