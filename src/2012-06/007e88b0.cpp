// roc 2012-06 007e88b0  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e88b0
//
// 007e88b0  51                   push ecx
// 007e88b1  6a18                 push 0x18
// 007e88b3  c744240400000000     mov dword ptr [esp + 4], 0
// 007e88bb  e85a981900           call 0x98211a
// 007e88c0  83c404               add esp, 4
// 007e88c3  85c0                 test eax, eax
// 007e88c5  7424                 je 0x7e88eb
// 007e88c7  c700c426bc00         mov dword ptr [eax], 0xbc26c4
// 007e88cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e88d1  894808               mov dword ptr [eax + 8], ecx
// 007e88d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e88d8  89500c               mov dword ptr [eax + 0xc], edx
// 007e88db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e88df  894810               mov dword ptr [eax + 0x10], ecx
// 007e88e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e88e6  895014               mov dword ptr [eax + 0x14], edx
// 007e88e9  eb02                 jmp 0x7e88ed
// 007e88eb  33c0                 xor eax, eax
// 007e88ed  56                   push esi
// 007e88ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e88f2  6a00                 push 0
// 007e88f4  8906                 mov dword ptr [esi], eax
// 007e88f6  e819981900           call 0x982114
// 007e88fb  83c404               add esp, 4
// 007e88fe  8bc6                 mov eax, esi
// 007e8900  5e                   pop esi
// 007e8901  59                   pop ecx
// 007e8902  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
