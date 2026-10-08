// roc 2009-06 00643b80  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00643b80
//
// 00643b80  51                   push ecx
// 00643b81  6a10                 push 0x10
// 00643b83  c744240400000000     mov dword ptr [esp + 4], 0
// 00643b8b  e8a84e0d00           call 0x718a38
// 00643b90  83c404               add esp, 4
// 00643b93  85c0                 test eax, eax
// 00643b95  7416                 je 0x643bad
// 00643b97  c700dce38d00         mov dword ptr [eax], 0x8de3dc
// 00643b9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00643ba1  894808               mov dword ptr [eax + 8], ecx
// 00643ba4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00643ba8  89500c               mov dword ptr [eax + 0xc], edx
// 00643bab  eb02                 jmp 0x643baf
// 00643bad  33c0                 xor eax, eax
// 00643baf  56                   push esi
// 00643bb0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00643bb4  6a00                 push 0
// 00643bb6  8906                 mov dword ptr [esi], eax
// 00643bb8  e8754e0d00           call 0x718a32
// 00643bbd  83c404               add esp, 4
// 00643bc0  8bc6                 mov eax, esi
// 00643bc2  5e                   pop esi
// 00643bc3  59                   pop ecx
// 00643bc4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
