// roc 2012-06 008c82d0  unit: RBX::P8Tool::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c82d0
//
// 008c82d0  51                   push ecx
// 008c82d1  6a18                 push 0x18
// 008c82d3  c744240400000000     mov dword ptr [esp + 4], 0
// 008c82db  e83a9e0b00           call 0x98211a
// 008c82e0  83c404               add esp, 4
// 008c82e3  85c0                 test eax, eax
// 008c82e5  7424                 je 0x8c830b
// 008c82e7  c7000c69be00         mov dword ptr [eax], 0xbe690c
// 008c82ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c82f1  894808               mov dword ptr [eax + 8], ecx
// 008c82f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c82f8  89500c               mov dword ptr [eax + 0xc], edx
// 008c82fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c82ff  894810               mov dword ptr [eax + 0x10], ecx
// 008c8302  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c8306  895014               mov dword ptr [eax + 0x14], edx
// 008c8309  eb02                 jmp 0x8c830d
// 008c830b  33c0                 xor eax, eax
// 008c830d  56                   push esi
// 008c830e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c8312  6a00                 push 0
// 008c8314  8906                 mov dword ptr [esi], eax
// 008c8316  e8f99d0b00           call 0x982114
// 008c831b  83c404               add esp, 4
// 008c831e  8bc6                 mov eax, esi
// 008c8320  5e                   pop esi
// 008c8321  59                   pop ecx
// 008c8322  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
