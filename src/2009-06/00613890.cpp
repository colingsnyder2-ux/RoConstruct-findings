// roc 2009-06 00613890  unit: boost::iostreams::Uoutput::V?$chain::?$chain_client  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00613890
//
// 00613890  51                   push ecx
// 00613891  6a18                 push 0x18
// 00613893  c744240400000000     mov dword ptr [esp + 4], 0
// 0061389b  e898511000           call 0x718a38
// 006138a0  83c404               add esp, 4
// 006138a3  85c0                 test eax, eax
// 006138a5  7424                 je 0x6138cb
// 006138a7  c700cc8b8d00         mov dword ptr [eax], 0x8d8bcc
// 006138ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006138b1  894808               mov dword ptr [eax + 8], ecx
// 006138b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006138b8  89500c               mov dword ptr [eax + 0xc], edx
// 006138bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006138bf  894810               mov dword ptr [eax + 0x10], ecx
// 006138c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006138c6  895014               mov dword ptr [eax + 0x14], edx
// 006138c9  eb02                 jmp 0x6138cd
// 006138cb  33c0                 xor eax, eax
// 006138cd  56                   push esi
// 006138ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006138d2  6a00                 push 0
// 006138d4  8906                 mov dword ptr [esi], eax
// 006138d6  e857511000           call 0x718a32
// 006138db  83c404               add esp, 4
// 006138de  8bc6                 mov eax, esi
// 006138e0  5e                   pop esi
// 006138e1  59                   pop ecx
// 006138e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
