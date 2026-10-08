// roc 2010-06 0058e7e0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058e7e0
//
// 0058e7e0  51                   push ecx
// 0058e7e1  6a10                 push 0x10
// 0058e7e3  c744240400000000     mov dword ptr [esp + 4], 0
// 0058e7eb  e8b0912100           call 0x7a79a0
// 0058e7f0  83c404               add esp, 4
// 0058e7f3  85c0                 test eax, eax
// 0058e7f5  7416                 je 0x58e80d
// 0058e7f7  c700948ba200         mov dword ptr [eax], 0xa28b94
// 0058e7fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058e801  894808               mov dword ptr [eax + 8], ecx
// 0058e804  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058e808  89500c               mov dword ptr [eax + 0xc], edx
// 0058e80b  eb02                 jmp 0x58e80f
// 0058e80d  33c0                 xor eax, eax
// 0058e80f  56                   push esi
// 0058e810  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058e814  6a00                 push 0
// 0058e816  8906                 mov dword ptr [esi], eax
// 0058e818  e87d912100           call 0x7a799a
// 0058e81d  83c404               add esp, 4
// 0058e820  8bc6                 mov eax, esi
// 0058e822  5e                   pop esi
// 0058e823  59                   pop ecx
// 0058e824  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
