// roc 2012-06 0089ffe0  unit: RBX::P8Mouse::?$GetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0089ffe0
//
// 0089ffe0  51                   push ecx
// 0089ffe1  6a18                 push 0x18
// 0089ffe3  c744240400000000     mov dword ptr [esp + 4], 0
// 0089ffeb  e82a210e00           call 0x98211a
// 0089fff0  83c404               add esp, 4
// 0089fff3  85c0                 test eax, eax
// 0089fff5  7424                 je 0x8a001b
// 0089fff7  c7002cdebd00         mov dword ptr [eax], 0xbdde2c
// 0089fffd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a0001  894808               mov dword ptr [eax + 8], ecx
// 008a0004  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a0008  89500c               mov dword ptr [eax + 0xc], edx
// 008a000b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a000f  894810               mov dword ptr [eax + 0x10], ecx
// 008a0012  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a0016  895014               mov dword ptr [eax + 0x14], edx
// 008a0019  eb02                 jmp 0x8a001d
// 008a001b  33c0                 xor eax, eax
// 008a001d  56                   push esi
// 008a001e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008a0022  6a00                 push 0
// 008a0024  8906                 mov dword ptr [esi], eax
// 008a0026  e8e9200e00           call 0x982114
// 008a002b  83c404               add esp, 4
// 008a002e  8bc6                 mov eax, esi
// 008a0030  5e                   pop esi
// 008a0031  59                   pop ecx
// 008a0032  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
