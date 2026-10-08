// roc 2010-06 005ce020  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ce020
//
// 005ce020  51                   push ecx
// 005ce021  6a10                 push 0x10
// 005ce023  c744240400000000     mov dword ptr [esp + 4], 0
// 005ce02b  e870991d00           call 0x7a79a0
// 005ce030  83c404               add esp, 4
// 005ce033  85c0                 test eax, eax
// 005ce035  7416                 je 0x5ce04d
// 005ce037  c70058cfa200         mov dword ptr [eax], 0xa2cf58
// 005ce03d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ce041  894808               mov dword ptr [eax + 8], ecx
// 005ce044  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ce048  89500c               mov dword ptr [eax + 0xc], edx
// 005ce04b  eb02                 jmp 0x5ce04f
// 005ce04d  33c0                 xor eax, eax
// 005ce04f  56                   push esi
// 005ce050  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ce054  6a00                 push 0
// 005ce056  8906                 mov dword ptr [esi], eax
// 005ce058  e83d991d00           call 0x7a799a
// 005ce05d  83c404               add esp, 4
// 005ce060  8bc6                 mov eax, esi
// 005ce062  5e                   pop esi
// 005ce063  59                   pop ecx
// 005ce064  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
