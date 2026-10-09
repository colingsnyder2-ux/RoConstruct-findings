// roc 2009-12 006fc180  unit: RBX::VPlayerGui::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fc180
//
// 006fc180  51                   push ecx
// 006fc181  6a18                 push 0x18
// 006fc183  c744240400000000     mov dword ptr [esp + 4], 0
// 006fc18b  e8d0760f00           call 0x7f3860
// 006fc190  83c404               add esp, 4
// 006fc193  85c0                 test eax, eax
// 006fc195  7424                 je 0x6fc1bb
// 006fc197  c700a4ce9d00         mov dword ptr [eax], 0x9dcea4
// 006fc19d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fc1a1  894808               mov dword ptr [eax + 8], ecx
// 006fc1a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fc1a8  89500c               mov dword ptr [eax + 0xc], edx
// 006fc1ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fc1af  894810               mov dword ptr [eax + 0x10], ecx
// 006fc1b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006fc1b6  895014               mov dword ptr [eax + 0x14], edx
// 006fc1b9  eb02                 jmp 0x6fc1bd
// 006fc1bb  33c0                 xor eax, eax
// 006fc1bd  56                   push esi
// 006fc1be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fc1c2  6a00                 push 0
// 006fc1c4  8906                 mov dword ptr [esi], eax
// 006fc1c6  e88f760f00           call 0x7f385a
// 006fc1cb  83c404               add esp, 4
// 006fc1ce  8bc6                 mov eax, esi
// 006fc1d0  5e                   pop esi
// 006fc1d1  59                   pop ecx
// 006fc1d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
