// roc 2012-06 007e89d0  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e89d0
//
// 007e89d0  51                   push ecx
// 007e89d1  6a18                 push 0x18
// 007e89d3  c744240400000000     mov dword ptr [esp + 4], 0
// 007e89db  e83a971900           call 0x98211a
// 007e89e0  83c404               add esp, 4
// 007e89e3  85c0                 test eax, eax
// 007e89e5  7424                 je 0x7e8a0b
// 007e89e7  c7000027bc00         mov dword ptr [eax], 0xbc2700
// 007e89ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e89f1  894808               mov dword ptr [eax + 8], ecx
// 007e89f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e89f8  89500c               mov dword ptr [eax + 0xc], edx
// 007e89fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e89ff  894810               mov dword ptr [eax + 0x10], ecx
// 007e8a02  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e8a06  895014               mov dword ptr [eax + 0x14], edx
// 007e8a09  eb02                 jmp 0x7e8a0d
// 007e8a0b  33c0                 xor eax, eax
// 007e8a0d  56                   push esi
// 007e8a0e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e8a12  6a00                 push 0
// 007e8a14  8906                 mov dword ptr [esi], eax
// 007e8a16  e8f9961900           call 0x982114
// 007e8a1b  83c404               add esp, 4
// 007e8a1e  8bc6                 mov eax, esi
// 007e8a20  5e                   pop esi
// 007e8a21  59                   pop ecx
// 007e8a22  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
