// roc 2009-06 005ce2a0  unit: RBX::P8Instance::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ce2a0
//
// 005ce2a0  51                   push ecx
// 005ce2a1  6a10                 push 0x10
// 005ce2a3  c744240400000000     mov dword ptr [esp + 4], 0
// 005ce2ab  e888a71400           call 0x718a38
// 005ce2b0  83c404               add esp, 4
// 005ce2b3  85c0                 test eax, eax
// 005ce2b5  7416                 je 0x5ce2cd
// 005ce2b7  c700844e8d00         mov dword ptr [eax], 0x8d4e84
// 005ce2bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ce2c1  894808               mov dword ptr [eax + 8], ecx
// 005ce2c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ce2c8  89500c               mov dword ptr [eax + 0xc], edx
// 005ce2cb  eb02                 jmp 0x5ce2cf
// 005ce2cd  33c0                 xor eax, eax
// 005ce2cf  56                   push esi
// 005ce2d0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ce2d4  6a00                 push 0
// 005ce2d6  8906                 mov dword ptr [esi], eax
// 005ce2d8  e855a71400           call 0x718a32
// 005ce2dd  83c404               add esp, 4
// 005ce2e0  8bc6                 mov eax, esi
// 005ce2e2  5e                   pop esi
// 005ce2e3  59                   pop ecx
// 005ce2e4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
