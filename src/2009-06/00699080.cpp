// roc 2009-06 00699080  unit: RBX::VMotorFeature::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00699080
//
// 00699080  51                   push ecx
// 00699081  6a18                 push 0x18
// 00699083  c744240400000000     mov dword ptr [esp + 4], 0
// 0069908b  e8a8f90700           call 0x718a38
// 00699090  83c404               add esp, 4
// 00699093  85c0                 test eax, eax
// 00699095  7424                 je 0x6990bb
// 00699097  c700d8808e00         mov dword ptr [eax], 0x8e80d8
// 0069909d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006990a1  894808               mov dword ptr [eax + 8], ecx
// 006990a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006990a8  89500c               mov dword ptr [eax + 0xc], edx
// 006990ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006990af  894810               mov dword ptr [eax + 0x10], ecx
// 006990b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006990b6  895014               mov dword ptr [eax + 0x14], edx
// 006990b9  eb02                 jmp 0x6990bd
// 006990bb  33c0                 xor eax, eax
// 006990bd  56                   push esi
// 006990be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006990c2  6a00                 push 0
// 006990c4  8906                 mov dword ptr [esi], eax
// 006990c6  e867f90700           call 0x718a32
// 006990cb  83c404               add esp, 4
// 006990ce  8bc6                 mov eax, esi
// 006990d0  5e                   pop esi
// 006990d1  59                   pop ecx
// 006990d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
