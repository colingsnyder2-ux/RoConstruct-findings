// roc 2009-12 006811b0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006811b0
//
// 006811b0  51                   push ecx
// 006811b1  6a18                 push 0x18
// 006811b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006811bb  e8a0261700           call 0x7f3860
// 006811c0  83c404               add esp, 4
// 006811c3  85c0                 test eax, eax
// 006811c5  7424                 je 0x6811eb
// 006811c7  c700c0039d00         mov dword ptr [eax], 0x9d03c0
// 006811cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006811d1  894808               mov dword ptr [eax + 8], ecx
// 006811d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006811d8  89500c               mov dword ptr [eax + 0xc], edx
// 006811db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006811df  894810               mov dword ptr [eax + 0x10], ecx
// 006811e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006811e6  895014               mov dword ptr [eax + 0x14], edx
// 006811e9  eb02                 jmp 0x6811ed
// 006811eb  33c0                 xor eax, eax
// 006811ed  56                   push esi
// 006811ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006811f2  6a00                 push 0
// 006811f4  8906                 mov dword ptr [esi], eax
// 006811f6  e85f261700           call 0x7f385a
// 006811fb  83c404               add esp, 4
// 006811fe  8bc6                 mov eax, esi
// 00681200  5e                   pop esi
// 00681201  59                   pop ecx
// 00681202  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
