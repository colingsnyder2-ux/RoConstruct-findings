// roc 2012-06 007e8910  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e8910
//
// 007e8910  51                   push ecx
// 007e8911  6a18                 push 0x18
// 007e8913  c744240400000000     mov dword ptr [esp + 4], 0
// 007e891b  e8fa971900           call 0x98211a
// 007e8920  83c404               add esp, 4
// 007e8923  85c0                 test eax, eax
// 007e8925  7424                 je 0x7e894b
// 007e8927  c700d826bc00         mov dword ptr [eax], 0xbc26d8
// 007e892d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e8931  894808               mov dword ptr [eax + 8], ecx
// 007e8934  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e8938  89500c               mov dword ptr [eax + 0xc], edx
// 007e893b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e893f  894810               mov dword ptr [eax + 0x10], ecx
// 007e8942  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e8946  895014               mov dword ptr [eax + 0x14], edx
// 007e8949  eb02                 jmp 0x7e894d
// 007e894b  33c0                 xor eax, eax
// 007e894d  56                   push esi
// 007e894e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e8952  6a00                 push 0
// 007e8954  8906                 mov dword ptr [esi], eax
// 007e8956  e8b9971900           call 0x982114
// 007e895b  83c404               add esp, 4
// 007e895e  8bc6                 mov eax, esi
// 007e8960  5e                   pop esi
// 007e8961  59                   pop ecx
// 007e8962  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
