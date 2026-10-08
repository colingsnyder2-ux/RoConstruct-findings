// roc 2009-06 006808a0  unit: RBX::Mechanism  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006808a0
//
// 006808a0  51                   push ecx
// 006808a1  6a18                 push 0x18
// 006808a3  c744240400000000     mov dword ptr [esp + 4], 0
// 006808ab  e888810900           call 0x718a38
// 006808b0  83c404               add esp, 4
// 006808b3  85c0                 test eax, eax
// 006808b5  7424                 je 0x6808db
// 006808b7  c700dc588e00         mov dword ptr [eax], 0x8e58dc
// 006808bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006808c1  894808               mov dword ptr [eax + 8], ecx
// 006808c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006808c8  89500c               mov dword ptr [eax + 0xc], edx
// 006808cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006808cf  894810               mov dword ptr [eax + 0x10], ecx
// 006808d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006808d6  895014               mov dword ptr [eax + 0x14], edx
// 006808d9  eb02                 jmp 0x6808dd
// 006808db  33c0                 xor eax, eax
// 006808dd  56                   push esi
// 006808de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006808e2  6a00                 push 0
// 006808e4  8906                 mov dword ptr [esi], eax
// 006808e6  e847810900           call 0x718a32
// 006808eb  83c404               add esp, 4
// 006808ee  8bc6                 mov eax, esi
// 006808f0  5e                   pop esi
// 006808f1  59                   pop ecx
// 006808f2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
