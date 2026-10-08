// roc 2010-06 0058e830  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058e830
//
// 0058e830  51                   push ecx
// 0058e831  6a10                 push 0x10
// 0058e833  c744240400000000     mov dword ptr [esp + 4], 0
// 0058e83b  e860912100           call 0x7a79a0
// 0058e840  83c404               add esp, 4
// 0058e843  85c0                 test eax, eax
// 0058e845  7416                 je 0x58e85d
// 0058e847  c700ac8ba200         mov dword ptr [eax], 0xa28bac
// 0058e84d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058e851  894808               mov dword ptr [eax + 8], ecx
// 0058e854  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058e858  89500c               mov dword ptr [eax + 0xc], edx
// 0058e85b  eb02                 jmp 0x58e85f
// 0058e85d  33c0                 xor eax, eax
// 0058e85f  56                   push esi
// 0058e860  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058e864  6a00                 push 0
// 0058e866  8906                 mov dword ptr [esi], eax
// 0058e868  e82d912100           call 0x7a799a
// 0058e86d  83c404               add esp, 4
// 0058e870  8bc6                 mov eax, esi
// 0058e872  5e                   pop esi
// 0058e873  59                   pop ecx
// 0058e874  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
