// roc 2010-06 006f2810  unit: RBX::Network::P8Players::?$GetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f2810
//
// 006f2810  51                   push ecx
// 006f2811  6a10                 push 0x10
// 006f2813  c744240400000000     mov dword ptr [esp + 4], 0
// 006f281b  e880510b00           call 0x7a79a0
// 006f2820  83c404               add esp, 4
// 006f2823  85c0                 test eax, eax
// 006f2825  7416                 je 0x6f283d
// 006f2827  c7002ca5a400         mov dword ptr [eax], 0xa4a52c
// 006f282d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f2831  894808               mov dword ptr [eax + 8], ecx
// 006f2834  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f2838  89500c               mov dword ptr [eax + 0xc], edx
// 006f283b  eb02                 jmp 0x6f283f
// 006f283d  33c0                 xor eax, eax
// 006f283f  56                   push esi
// 006f2840  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f2844  6a00                 push 0
// 006f2846  8906                 mov dword ptr [esi], eax
// 006f2848  e84d510b00           call 0x7a799a
// 006f284d  83c404               add esp, 4
// 006f2850  8bc6                 mov eax, esi
// 006f2852  5e                   pop esi
// 006f2853  59                   pop ecx
// 006f2854  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
