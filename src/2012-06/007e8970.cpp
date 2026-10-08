// roc 2012-06 007e8970  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e8970
//
// 007e8970  51                   push ecx
// 007e8971  6a18                 push 0x18
// 007e8973  c744240400000000     mov dword ptr [esp + 4], 0
// 007e897b  e89a971900           call 0x98211a
// 007e8980  83c404               add esp, 4
// 007e8983  85c0                 test eax, eax
// 007e8985  7424                 je 0x7e89ab
// 007e8987  c700ec26bc00         mov dword ptr [eax], 0xbc26ec
// 007e898d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e8991  894808               mov dword ptr [eax + 8], ecx
// 007e8994  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e8998  89500c               mov dword ptr [eax + 0xc], edx
// 007e899b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e899f  894810               mov dword ptr [eax + 0x10], ecx
// 007e89a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e89a6  895014               mov dword ptr [eax + 0x14], edx
// 007e89a9  eb02                 jmp 0x7e89ad
// 007e89ab  33c0                 xor eax, eax
// 007e89ad  56                   push esi
// 007e89ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e89b2  6a00                 push 0
// 007e89b4  8906                 mov dword ptr [esi], eax
// 007e89b6  e859971900           call 0x982114
// 007e89bb  83c404               add esp, 4
// 007e89be  8bc6                 mov eax, esi
// 007e89c0  5e                   pop esi
// 007e89c1  59                   pop ecx
// 007e89c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
