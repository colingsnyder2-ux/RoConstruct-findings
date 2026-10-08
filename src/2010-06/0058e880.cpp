// roc 2010-06 0058e880  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058e880
//
// 0058e880  51                   push ecx
// 0058e881  6a10                 push 0x10
// 0058e883  c744240400000000     mov dword ptr [esp + 4], 0
// 0058e88b  e810912100           call 0x7a79a0
// 0058e890  83c404               add esp, 4
// 0058e893  85c0                 test eax, eax
// 0058e895  7416                 je 0x58e8ad
// 0058e897  c700c48ba200         mov dword ptr [eax], 0xa28bc4
// 0058e89d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058e8a1  894808               mov dword ptr [eax + 8], ecx
// 0058e8a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058e8a8  89500c               mov dword ptr [eax + 0xc], edx
// 0058e8ab  eb02                 jmp 0x58e8af
// 0058e8ad  33c0                 xor eax, eax
// 0058e8af  56                   push esi
// 0058e8b0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058e8b4  6a00                 push 0
// 0058e8b6  8906                 mov dword ptr [esi], eax
// 0058e8b8  e8dd902100           call 0x7a799a
// 0058e8bd  83c404               add esp, 4
// 0058e8c0  8bc6                 mov eax, esi
// 0058e8c2  5e                   pop esi
// 0058e8c3  59                   pop ecx
// 0058e8c4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
