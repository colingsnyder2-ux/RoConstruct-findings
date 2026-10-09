// roc 2009-12 0073c890  unit: RBX::AdornBillboarder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073c890
//
// 0073c890  51                   push ecx
// 0073c891  6a18                 push 0x18
// 0073c893  c744240400000000     mov dword ptr [esp + 4], 0
// 0073c89b  e8c06f0b00           call 0x7f3860
// 0073c8a0  83c404               add esp, 4
// 0073c8a3  85c0                 test eax, eax
// 0073c8a5  7424                 je 0x73c8cb
// 0073c8a7  c700601e9e00         mov dword ptr [eax], 0x9e1e60
// 0073c8ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073c8b1  894808               mov dword ptr [eax + 8], ecx
// 0073c8b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073c8b8  89500c               mov dword ptr [eax + 0xc], edx
// 0073c8bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073c8bf  894810               mov dword ptr [eax + 0x10], ecx
// 0073c8c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073c8c6  895014               mov dword ptr [eax + 0x14], edx
// 0073c8c9  eb02                 jmp 0x73c8cd
// 0073c8cb  33c0                 xor eax, eax
// 0073c8cd  56                   push esi
// 0073c8ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0073c8d2  6a00                 push 0
// 0073c8d4  8906                 mov dword ptr [esi], eax
// 0073c8d6  e87f6f0b00           call 0x7f385a
// 0073c8db  83c404               add esp, 4
// 0073c8de  8bc6                 mov eax, esi
// 0073c8e0  5e                   pop esi
// 0073c8e1  59                   pop ecx
// 0073c8e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
