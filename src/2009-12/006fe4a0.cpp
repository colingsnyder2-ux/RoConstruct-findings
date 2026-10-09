// roc 2009-12 006fe4a0  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fe4a0
//
// 006fe4a0  51                   push ecx
// 006fe4a1  6a18                 push 0x18
// 006fe4a3  c744240400000000     mov dword ptr [esp + 4], 0
// 006fe4ab  e8b0530f00           call 0x7f3860
// 006fe4b0  83c404               add esp, 4
// 006fe4b3  85c0                 test eax, eax
// 006fe4b5  7424                 je 0x6fe4db
// 006fe4b7  c70070d79d00         mov dword ptr [eax], 0x9dd770
// 006fe4bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fe4c1  894808               mov dword ptr [eax + 8], ecx
// 006fe4c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fe4c8  89500c               mov dword ptr [eax + 0xc], edx
// 006fe4cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fe4cf  894810               mov dword ptr [eax + 0x10], ecx
// 006fe4d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006fe4d6  895014               mov dword ptr [eax + 0x14], edx
// 006fe4d9  eb02                 jmp 0x6fe4dd
// 006fe4db  33c0                 xor eax, eax
// 006fe4dd  56                   push esi
// 006fe4de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fe4e2  6a00                 push 0
// 006fe4e4  8906                 mov dword ptr [esi], eax
// 006fe4e6  e86f530f00           call 0x7f385a
// 006fe4eb  83c404               add esp, 4
// 006fe4ee  8bc6                 mov eax, esi
// 006fe4f0  5e                   pop esi
// 006fe4f1  59                   pop ecx
// 006fe4f2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
