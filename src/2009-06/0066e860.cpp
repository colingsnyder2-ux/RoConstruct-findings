// roc 2009-06 0066e860  unit: RBX::VMeshId::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066e860
//
// 0066e860  51                   push ecx
// 0066e861  6a18                 push 0x18
// 0066e863  c744240400000000     mov dword ptr [esp + 4], 0
// 0066e86b  e8c8a10a00           call 0x718a38
// 0066e870  83c404               add esp, 4
// 0066e873  85c0                 test eax, eax
// 0066e875  7424                 je 0x66e89b
// 0066e877  c7003c338e00         mov dword ptr [eax], 0x8e333c
// 0066e87d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066e881  894808               mov dword ptr [eax + 8], ecx
// 0066e884  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066e888  89500c               mov dword ptr [eax + 0xc], edx
// 0066e88b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066e88f  894810               mov dword ptr [eax + 0x10], ecx
// 0066e892  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066e896  895014               mov dword ptr [eax + 0x14], edx
// 0066e899  eb02                 jmp 0x66e89d
// 0066e89b  33c0                 xor eax, eax
// 0066e89d  56                   push esi
// 0066e89e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066e8a2  6a00                 push 0
// 0066e8a4  8906                 mov dword ptr [esi], eax
// 0066e8a6  e887a10a00           call 0x718a32
// 0066e8ab  83c404               add esp, 4
// 0066e8ae  8bc6                 mov eax, esi
// 0066e8b0  5e                   pop esi
// 0066e8b1  59                   pop ecx
// 0066e8b2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
