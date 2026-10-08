// roc 2010-06 0058e8d0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058e8d0
//
// 0058e8d0  51                   push ecx
// 0058e8d1  6a10                 push 0x10
// 0058e8d3  c744240400000000     mov dword ptr [esp + 4], 0
// 0058e8db  e8c0902100           call 0x7a79a0
// 0058e8e0  83c404               add esp, 4
// 0058e8e3  85c0                 test eax, eax
// 0058e8e5  7416                 je 0x58e8fd
// 0058e8e7  c700dc8ba200         mov dword ptr [eax], 0xa28bdc
// 0058e8ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058e8f1  894808               mov dword ptr [eax + 8], ecx
// 0058e8f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058e8f8  89500c               mov dword ptr [eax + 0xc], edx
// 0058e8fb  eb02                 jmp 0x58e8ff
// 0058e8fd  33c0                 xor eax, eax
// 0058e8ff  56                   push esi
// 0058e900  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058e904  6a00                 push 0
// 0058e906  8906                 mov dword ptr [esi], eax
// 0058e908  e88d902100           call 0x7a799a
// 0058e90d  83c404               add esp, 4
// 0058e910  8bc6                 mov eax, esi
// 0058e912  5e                   pop esi
// 0058e913  59                   pop ecx
// 0058e914  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
