// roc 2010-06 006bb070  unit: RBX::P8BillboardGui::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bb070
//
// 006bb070  51                   push ecx
// 006bb071  6a18                 push 0x18
// 006bb073  c744240400000000     mov dword ptr [esp + 4], 0
// 006bb07b  e820c90e00           call 0x7a79a0
// 006bb080  83c404               add esp, 4
// 006bb083  85c0                 test eax, eax
// 006bb085  7424                 je 0x6bb0ab
// 006bb087  c700f42ba400         mov dword ptr [eax], 0xa42bf4
// 006bb08d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006bb091  894808               mov dword ptr [eax + 8], ecx
// 006bb094  8b542410             mov edx, dword ptr [esp + 0x10]
// 006bb098  89500c               mov dword ptr [eax + 0xc], edx
// 006bb09b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006bb09f  894810               mov dword ptr [eax + 0x10], ecx
// 006bb0a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006bb0a6  895014               mov dword ptr [eax + 0x14], edx
// 006bb0a9  eb02                 jmp 0x6bb0ad
// 006bb0ab  33c0                 xor eax, eax
// 006bb0ad  56                   push esi
// 006bb0ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bb0b2  6a00                 push 0
// 006bb0b4  8906                 mov dword ptr [esi], eax
// 006bb0b6  e8dfc80e00           call 0x7a799a
// 006bb0bb  83c404               add esp, 4
// 006bb0be  8bc6                 mov eax, esi
// 006bb0c0  5e                   pop esi
// 006bb0c1  59                   pop ecx
// 006bb0c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
