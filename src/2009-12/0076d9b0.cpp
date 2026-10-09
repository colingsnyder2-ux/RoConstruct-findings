// roc 2009-12 0076d9b0  unit: RBX::VFrame::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076d9b0
//
// 0076d9b0  51                   push ecx
// 0076d9b1  6a18                 push 0x18
// 0076d9b3  c744240400000000     mov dword ptr [esp + 4], 0
// 0076d9bb  e8a05e0800           call 0x7f3860
// 0076d9c0  83c404               add esp, 4
// 0076d9c3  85c0                 test eax, eax
// 0076d9c5  7424                 je 0x76d9eb
// 0076d9c7  c700c4819e00         mov dword ptr [eax], 0x9e81c4
// 0076d9cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076d9d1  894808               mov dword ptr [eax + 8], ecx
// 0076d9d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076d9d8  89500c               mov dword ptr [eax + 0xc], edx
// 0076d9db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076d9df  894810               mov dword ptr [eax + 0x10], ecx
// 0076d9e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076d9e6  895014               mov dword ptr [eax + 0x14], edx
// 0076d9e9  eb02                 jmp 0x76d9ed
// 0076d9eb  33c0                 xor eax, eax
// 0076d9ed  56                   push esi
// 0076d9ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076d9f2  6a00                 push 0
// 0076d9f4  8906                 mov dword ptr [esi], eax
// 0076d9f6  e85f5e0800           call 0x7f385a
// 0076d9fb  83c404               add esp, 4
// 0076d9fe  8bc6                 mov eax, esi
// 0076da00  5e                   pop esi
// 0076da01  59                   pop ecx
// 0076da02  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
