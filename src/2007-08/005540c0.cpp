// roc 2007-08 005540c0  unit: RBX::VTeam::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005540c0
//
// 005540c0  51                   push ecx
// 005540c1  6a18                 push 0x18
// 005540c3  c744240400000000     mov dword ptr [esp + 4], 0
// 005540cb  e826be0d00           call 0x62fef6
// 005540d0  83c404               add esp, 4
// 005540d3  85c0                 test eax, eax
// 005540d5  7424                 je 0x5540fb
// 005540d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005540db  8b542410             mov edx, dword ptr [esp + 0x10]
// 005540df  894808               mov dword ptr [eax + 8], ecx
// 005540e2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005540e6  89500c               mov dword ptr [eax + 0xc], edx
// 005540e9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005540ed  c700fc7f7a00         mov dword ptr [eax], 0x7a7ffc
// 005540f3  894810               mov dword ptr [eax + 0x10], ecx
// 005540f6  895014               mov dword ptr [eax + 0x14], edx
// 005540f9  eb02                 jmp 0x5540fd
// 005540fb  33c0                 xor eax, eax
// 005540fd  56                   push esi
// 005540fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00554102  6a00                 push 0
// 00554104  c744240800000000     mov dword ptr [esp + 8], 0
// 0055410c  8906                 mov dword ptr [esi], eax
// 0055410e  e84fbb0d00           call 0x62fc62
// 00554113  83c404               add esp, 4
// 00554116  8bc6                 mov eax, esi
// 00554118  5e                   pop esi
// 00554119  59                   pop ecx
// 0055411a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
