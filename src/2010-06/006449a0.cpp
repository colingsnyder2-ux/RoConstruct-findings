// roc 2010-06 006449a0  unit: RBX::VMeshId::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006449a0
//
// 006449a0  51                   push ecx
// 006449a1  6a18                 push 0x18
// 006449a3  c744240400000000     mov dword ptr [esp + 4], 0
// 006449ab  e8f02f1600           call 0x7a79a0
// 006449b0  83c404               add esp, 4
// 006449b3  85c0                 test eax, eax
// 006449b5  7424                 je 0x6449db
// 006449b7  c7009472a300         mov dword ptr [eax], 0xa37294
// 006449bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006449c1  894808               mov dword ptr [eax + 8], ecx
// 006449c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006449c8  89500c               mov dword ptr [eax + 0xc], edx
// 006449cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006449cf  894810               mov dword ptr [eax + 0x10], ecx
// 006449d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006449d6  895014               mov dword ptr [eax + 0x14], edx
// 006449d9  eb02                 jmp 0x6449dd
// 006449db  33c0                 xor eax, eax
// 006449dd  56                   push esi
// 006449de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006449e2  6a00                 push 0
// 006449e4  8906                 mov dword ptr [esi], eax
// 006449e6  e8af2f1600           call 0x7a799a
// 006449eb  83c404               add esp, 4
// 006449ee  8bc6                 mov eax, esi
// 006449f0  5e                   pop esi
// 006449f1  59                   pop ecx
// 006449f2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
