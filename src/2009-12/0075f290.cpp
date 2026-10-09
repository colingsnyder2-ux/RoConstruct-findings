// roc 2009-12 0075f290  unit: RBX::Network::P8Player::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075f290
//
// 0075f290  51                   push ecx
// 0075f291  6a18                 push 0x18
// 0075f293  c744240400000000     mov dword ptr [esp + 4], 0
// 0075f29b  e8c0450900           call 0x7f3860
// 0075f2a0  83c404               add esp, 4
// 0075f2a3  85c0                 test eax, eax
// 0075f2a5  7424                 je 0x75f2cb
// 0075f2a7  c700dc719e00         mov dword ptr [eax], 0x9e71dc
// 0075f2ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075f2b1  894808               mov dword ptr [eax + 8], ecx
// 0075f2b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0075f2b8  89500c               mov dword ptr [eax + 0xc], edx
// 0075f2bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0075f2bf  894810               mov dword ptr [eax + 0x10], ecx
// 0075f2c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0075f2c6  895014               mov dword ptr [eax + 0x14], edx
// 0075f2c9  eb02                 jmp 0x75f2cd
// 0075f2cb  33c0                 xor eax, eax
// 0075f2cd  56                   push esi
// 0075f2ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0075f2d2  6a00                 push 0
// 0075f2d4  8906                 mov dword ptr [esi], eax
// 0075f2d6  e87f450900           call 0x7f385a
// 0075f2db  83c404               add esp, 4
// 0075f2de  8bc6                 mov eax, esi
// 0075f2e0  5e                   pop esi
// 0075f2e1  59                   pop ecx
// 0075f2e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
