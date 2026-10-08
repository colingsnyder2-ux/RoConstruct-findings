// roc 2012-06 0070fbd0  unit: RBX::Tool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070fbd0
//
// 0070fbd0  51                   push ecx
// 0070fbd1  6a18                 push 0x18
// 0070fbd3  c744240400000000     mov dword ptr [esp + 4], 0
// 0070fbdb  e83a252700           call 0x98211a
// 0070fbe0  83c404               add esp, 4
// 0070fbe3  85c0                 test eax, eax
// 0070fbe5  7424                 je 0x70fc0b
// 0070fbe7  c700c00dba00         mov dword ptr [eax], 0xba0dc0
// 0070fbed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070fbf1  894808               mov dword ptr [eax + 8], ecx
// 0070fbf4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070fbf8  89500c               mov dword ptr [eax + 0xc], edx
// 0070fbfb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070fbff  894810               mov dword ptr [eax + 0x10], ecx
// 0070fc02  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070fc06  895014               mov dword ptr [eax + 0x14], edx
// 0070fc09  eb02                 jmp 0x70fc0d
// 0070fc0b  33c0                 xor eax, eax
// 0070fc0d  56                   push esi
// 0070fc0e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0070fc12  6a00                 push 0
// 0070fc14  8906                 mov dword ptr [esi], eax
// 0070fc16  e8f9242700           call 0x982114
// 0070fc1b  83c404               add esp, 4
// 0070fc1e  8bc6                 mov eax, esi
// 0070fc20  5e                   pop esi
// 0070fc21  59                   pop ecx
// 0070fc22  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
