// roc 2010-06 0058e790  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058e790
//
// 0058e790  51                   push ecx
// 0058e791  6a10                 push 0x10
// 0058e793  c744240400000000     mov dword ptr [esp + 4], 0
// 0058e79b  e800922100           call 0x7a79a0
// 0058e7a0  83c404               add esp, 4
// 0058e7a3  85c0                 test eax, eax
// 0058e7a5  7416                 je 0x58e7bd
// 0058e7a7  c7007c8ba200         mov dword ptr [eax], 0xa28b7c
// 0058e7ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058e7b1  894808               mov dword ptr [eax + 8], ecx
// 0058e7b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058e7b8  89500c               mov dword ptr [eax + 0xc], edx
// 0058e7bb  eb02                 jmp 0x58e7bf
// 0058e7bd  33c0                 xor eax, eax
// 0058e7bf  56                   push esi
// 0058e7c0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058e7c4  6a00                 push 0
// 0058e7c6  8906                 mov dword ptr [esi], eax
// 0058e7c8  e8cd912100           call 0x7a799a
// 0058e7cd  83c404               add esp, 4
// 0058e7d0  8bc6                 mov eax, esi
// 0058e7d2  5e                   pop esi
// 0058e7d3  59                   pop ecx
// 0058e7d4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
