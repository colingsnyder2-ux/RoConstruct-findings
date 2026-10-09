// roc 2009-12 0076b9f0  unit: RBX::P8PlayerMouse::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076b9f0
//
// 0076b9f0  51                   push ecx
// 0076b9f1  6a10                 push 0x10
// 0076b9f3  c744240400000000     mov dword ptr [esp + 4], 0
// 0076b9fb  e8607e0800           call 0x7f3860
// 0076ba00  83c404               add esp, 4
// 0076ba03  85c0                 test eax, eax
// 0076ba05  7416                 je 0x76ba1d
// 0076ba07  c700247f9e00         mov dword ptr [eax], 0x9e7f24
// 0076ba0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076ba11  894808               mov dword ptr [eax + 8], ecx
// 0076ba14  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076ba18  89500c               mov dword ptr [eax + 0xc], edx
// 0076ba1b  eb02                 jmp 0x76ba1f
// 0076ba1d  33c0                 xor eax, eax
// 0076ba1f  56                   push esi
// 0076ba20  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076ba24  6a00                 push 0
// 0076ba26  8906                 mov dword ptr [esi], eax
// 0076ba28  e82d7e0800           call 0x7f385a
// 0076ba2d  83c404               add esp, 4
// 0076ba30  8bc6                 mov eax, esi
// 0076ba32  5e                   pop esi
// 0076ba33  59                   pop ecx
// 0076ba34  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
