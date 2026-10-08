// roc 2009-06 005fc290  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fc290
//
// 005fc290  51                   push ecx
// 005fc291  6a10                 push 0x10
// 005fc293  c744240400000000     mov dword ptr [esp + 4], 0
// 005fc29b  e898c71100           call 0x718a38
// 005fc2a0  83c404               add esp, 4
// 005fc2a3  85c0                 test eax, eax
// 005fc2a5  7416                 je 0x5fc2bd
// 005fc2a7  c700e0738d00         mov dword ptr [eax], 0x8d73e0
// 005fc2ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fc2b1  894808               mov dword ptr [eax + 8], ecx
// 005fc2b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005fc2b8  89500c               mov dword ptr [eax + 0xc], edx
// 005fc2bb  eb02                 jmp 0x5fc2bf
// 005fc2bd  33c0                 xor eax, eax
// 005fc2bf  56                   push esi
// 005fc2c0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fc2c4  6a00                 push 0
// 005fc2c6  8906                 mov dword ptr [esi], eax
// 005fc2c8  e865c71100           call 0x718a32
// 005fc2cd  83c404               add esp, 4
// 005fc2d0  8bc6                 mov eax, esi
// 005fc2d2  5e                   pop esi
// 005fc2d3  59                   pop ecx
// 005fc2d4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
