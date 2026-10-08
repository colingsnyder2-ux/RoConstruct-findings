// roc 2012-06 00730390  unit: RBX::VGameBasicSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00730390
//
// 00730390  51                   push ecx
// 00730391  6a18                 push 0x18
// 00730393  c744240400000000     mov dword ptr [esp + 4], 0
// 0073039b  e87a1d2500           call 0x98211a
// 007303a0  83c404               add esp, 4
// 007303a3  85c0                 test eax, eax
// 007303a5  7424                 je 0x7303cb
// 007303a7  c7000c71ba00         mov dword ptr [eax], 0xba710c
// 007303ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007303b1  894808               mov dword ptr [eax + 8], ecx
// 007303b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007303b8  89500c               mov dword ptr [eax + 0xc], edx
// 007303bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007303bf  894810               mov dword ptr [eax + 0x10], ecx
// 007303c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007303c6  895014               mov dword ptr [eax + 0x14], edx
// 007303c9  eb02                 jmp 0x7303cd
// 007303cb  33c0                 xor eax, eax
// 007303cd  56                   push esi
// 007303ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007303d2  6a00                 push 0
// 007303d4  8906                 mov dword ptr [esi], eax
// 007303d6  e8391d2500           call 0x982114
// 007303db  83c404               add esp, 4
// 007303de  8bc6                 mov eax, esi
// 007303e0  5e                   pop esi
// 007303e1  59                   pop ecx
// 007303e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
