// roc 2009-12 006dab70  unit: RBX::P8PlayerCamera::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006dab70
//
// 006dab70  51                   push ecx
// 006dab71  6a18                 push 0x18
// 006dab73  c744240400000000     mov dword ptr [esp + 4], 0
// 006dab7b  e8e08c1100           call 0x7f3860
// 006dab80  83c404               add esp, 4
// 006dab83  85c0                 test eax, eax
// 006dab85  7424                 je 0x6dabab
// 006dab87  c700c4999d00         mov dword ptr [eax], 0x9d99c4
// 006dab8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dab91  894808               mov dword ptr [eax + 8], ecx
// 006dab94  8b542410             mov edx, dword ptr [esp + 0x10]
// 006dab98  89500c               mov dword ptr [eax + 0xc], edx
// 006dab9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006dab9f  894810               mov dword ptr [eax + 0x10], ecx
// 006daba2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006daba6  895014               mov dword ptr [eax + 0x14], edx
// 006daba9  eb02                 jmp 0x6dabad
// 006dabab  33c0                 xor eax, eax
// 006dabad  56                   push esi
// 006dabae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006dabb2  6a00                 push 0
// 006dabb4  8906                 mov dword ptr [esi], eax
// 006dabb6  e89f8c1100           call 0x7f385a
// 006dabbb  83c404               add esp, 4
// 006dabbe  8bc6                 mov eax, esi
// 006dabc0  5e                   pop esi
// 006dabc1  59                   pop ecx
// 006dabc2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
