// roc 2010-06 00621cb0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00621cb0
//
// 00621cb0  51                   push ecx
// 00621cb1  6a10                 push 0x10
// 00621cb3  c744240400000000     mov dword ptr [esp + 4], 0
// 00621cbb  e8e05c1800           call 0x7a79a0
// 00621cc0  83c404               add esp, 4
// 00621cc3  85c0                 test eax, eax
// 00621cc5  7416                 je 0x621cdd
// 00621cc7  c7003c47a300         mov dword ptr [eax], 0xa3473c
// 00621ccd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00621cd1  894808               mov dword ptr [eax + 8], ecx
// 00621cd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00621cd8  89500c               mov dword ptr [eax + 0xc], edx
// 00621cdb  eb02                 jmp 0x621cdf
// 00621cdd  33c0                 xor eax, eax
// 00621cdf  56                   push esi
// 00621ce0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00621ce4  6a00                 push 0
// 00621ce6  8906                 mov dword ptr [esi], eax
// 00621ce8  e8ad5c1800           call 0x7a799a
// 00621ced  83c404               add esp, 4
// 00621cf0  8bc6                 mov eax, esi
// 00621cf2  5e                   pop esi
// 00621cf3  59                   pop ecx
// 00621cf4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
