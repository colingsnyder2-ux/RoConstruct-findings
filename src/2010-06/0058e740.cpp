// roc 2010-06 0058e740  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058e740
//
// 0058e740  51                   push ecx
// 0058e741  6a10                 push 0x10
// 0058e743  c744240400000000     mov dword ptr [esp + 4], 0
// 0058e74b  e850922100           call 0x7a79a0
// 0058e750  83c404               add esp, 4
// 0058e753  85c0                 test eax, eax
// 0058e755  7416                 je 0x58e76d
// 0058e757  c700648ba200         mov dword ptr [eax], 0xa28b64
// 0058e75d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058e761  894808               mov dword ptr [eax + 8], ecx
// 0058e764  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058e768  89500c               mov dword ptr [eax + 0xc], edx
// 0058e76b  eb02                 jmp 0x58e76f
// 0058e76d  33c0                 xor eax, eax
// 0058e76f  56                   push esi
// 0058e770  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058e774  6a00                 push 0
// 0058e776  8906                 mov dword ptr [esi], eax
// 0058e778  e81d922100           call 0x7a799a
// 0058e77d  83c404               add esp, 4
// 0058e780  8bc6                 mov eax, esi
// 0058e782  5e                   pop esi
// 0058e783  59                   pop ecx
// 0058e784  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
