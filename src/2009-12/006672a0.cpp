// roc 2009-12 006672a0  unit: VThreadLogManager::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006672a0
//
// 006672a0  51                   push ecx
// 006672a1  6a10                 push 0x10
// 006672a3  c744240400000000     mov dword ptr [esp + 4], 0
// 006672ab  e8b0c51800           call 0x7f3860
// 006672b0  83c404               add esp, 4
// 006672b3  85c0                 test eax, eax
// 006672b5  7416                 je 0x6672cd
// 006672b7  c700f0e99c00         mov dword ptr [eax], 0x9ce9f0
// 006672bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006672c1  894808               mov dword ptr [eax + 8], ecx
// 006672c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006672c8  89500c               mov dword ptr [eax + 0xc], edx
// 006672cb  eb02                 jmp 0x6672cf
// 006672cd  33c0                 xor eax, eax
// 006672cf  56                   push esi
// 006672d0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006672d4  6a00                 push 0
// 006672d6  8906                 mov dword ptr [esi], eax
// 006672d8  e87dc51800           call 0x7f385a
// 006672dd  83c404               add esp, 4
// 006672e0  8bc6                 mov eax, esi
// 006672e2  5e                   pop esi
// 006672e3  59                   pop ecx
// 006672e4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
