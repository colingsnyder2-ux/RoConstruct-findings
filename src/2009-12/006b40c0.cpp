// roc 2009-12 006b40c0  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b40c0
//
// 006b40c0  51                   push ecx
// 006b40c1  6a10                 push 0x10
// 006b40c3  c744240400000000     mov dword ptr [esp + 4], 0
// 006b40cb  e890f71300           call 0x7f3860
// 006b40d0  83c404               add esp, 4
// 006b40d3  85c0                 test eax, eax
// 006b40d5  7416                 je 0x6b40ed
// 006b40d7  c7005c5c9d00         mov dword ptr [eax], 0x9d5c5c
// 006b40dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b40e1  894808               mov dword ptr [eax + 8], ecx
// 006b40e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006b40e8  89500c               mov dword ptr [eax + 0xc], edx
// 006b40eb  eb02                 jmp 0x6b40ef
// 006b40ed  33c0                 xor eax, eax
// 006b40ef  56                   push esi
// 006b40f0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006b40f4  6a00                 push 0
// 006b40f6  8906                 mov dword ptr [esi], eax
// 006b40f8  e85df71300           call 0x7f385a
// 006b40fd  83c404               add esp, 4
// 006b4100  8bc6                 mov eax, esi
// 006b4102  5e                   pop esi
// 006b4103  59                   pop ecx
// 006b4104  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
