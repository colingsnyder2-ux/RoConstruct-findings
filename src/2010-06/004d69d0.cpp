// roc 2010-06 004d69d0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d69d0
//
// 004d69d0  51                   push ecx
// 004d69d1  6a18                 push 0x18
// 004d69d3  c744240400000000     mov dword ptr [esp + 4], 0
// 004d69db  e8c00f2d00           call 0x7a79a0
// 004d69e0  83c404               add esp, 4
// 004d69e3  85c0                 test eax, eax
// 004d69e5  7424                 je 0x4d6a0b
// 004d69e7  c700949ea100         mov dword ptr [eax], 0xa19e94
// 004d69ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d69f1  894808               mov dword ptr [eax + 8], ecx
// 004d69f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d69f8  89500c               mov dword ptr [eax + 0xc], edx
// 004d69fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d69ff  894810               mov dword ptr [eax + 0x10], ecx
// 004d6a02  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d6a06  895014               mov dword ptr [eax + 0x14], edx
// 004d6a09  eb02                 jmp 0x4d6a0d
// 004d6a0b  33c0                 xor eax, eax
// 004d6a0d  56                   push esi
// 004d6a0e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d6a12  6a00                 push 0
// 004d6a14  8906                 mov dword ptr [esi], eax
// 004d6a16  e87f0f2d00           call 0x7a799a
// 004d6a1b  83c404               add esp, 4
// 004d6a1e  8bc6                 mov eax, esi
// 004d6a20  5e                   pop esi
// 004d6a21  59                   pop ecx
// 004d6a22  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
