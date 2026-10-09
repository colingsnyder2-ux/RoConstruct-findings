// roc 2009-12 0076b9a0  unit: RBX::P8PlayerMouse::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076b9a0
//
// 0076b9a0  51                   push ecx
// 0076b9a1  6a10                 push 0x10
// 0076b9a3  c744240400000000     mov dword ptr [esp + 4], 0
// 0076b9ab  e8b07e0800           call 0x7f3860
// 0076b9b0  83c404               add esp, 4
// 0076b9b3  85c0                 test eax, eax
// 0076b9b5  7416                 je 0x76b9cd
// 0076b9b7  c7000c7f9e00         mov dword ptr [eax], 0x9e7f0c
// 0076b9bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076b9c1  894808               mov dword ptr [eax + 8], ecx
// 0076b9c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076b9c8  89500c               mov dword ptr [eax + 0xc], edx
// 0076b9cb  eb02                 jmp 0x76b9cf
// 0076b9cd  33c0                 xor eax, eax
// 0076b9cf  56                   push esi
// 0076b9d0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076b9d4  6a00                 push 0
// 0076b9d6  8906                 mov dword ptr [esi], eax
// 0076b9d8  e87d7e0800           call 0x7f385a
// 0076b9dd  83c404               add esp, 4
// 0076b9e0  8bc6                 mov eax, esi
// 0076b9e2  5e                   pop esi
// 0076b9e3  59                   pop ecx
// 0076b9e4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
