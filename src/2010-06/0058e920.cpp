// roc 2010-06 0058e920  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058e920
//
// 0058e920  51                   push ecx
// 0058e921  6a10                 push 0x10
// 0058e923  c744240400000000     mov dword ptr [esp + 4], 0
// 0058e92b  e870902100           call 0x7a79a0
// 0058e930  83c404               add esp, 4
// 0058e933  85c0                 test eax, eax
// 0058e935  7416                 je 0x58e94d
// 0058e937  c700f48ba200         mov dword ptr [eax], 0xa28bf4
// 0058e93d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058e941  894808               mov dword ptr [eax + 8], ecx
// 0058e944  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058e948  89500c               mov dword ptr [eax + 0xc], edx
// 0058e94b  eb02                 jmp 0x58e94f
// 0058e94d  33c0                 xor eax, eax
// 0058e94f  56                   push esi
// 0058e950  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058e954  6a00                 push 0
// 0058e956  8906                 mov dword ptr [esi], eax
// 0058e958  e83d902100           call 0x7a799a
// 0058e95d  83c404               add esp, 4
// 0058e960  8bc6                 mov eax, esi
// 0058e962  5e                   pop esi
// 0058e963  59                   pop ecx
// 0058e964  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
