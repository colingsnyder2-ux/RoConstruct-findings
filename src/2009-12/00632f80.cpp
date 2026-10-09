// roc 2009-12 00632f80  unit: RBX::Object  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00632f80
//
// 00632f80  51                   push ecx
// 00632f81  6a10                 push 0x10
// 00632f83  c744240400000000     mov dword ptr [esp + 4], 0
// 00632f8b  e8d0081c00           call 0x7f3860
// 00632f90  83c404               add esp, 4
// 00632f93  85c0                 test eax, eax
// 00632f95  7416                 je 0x632fad
// 00632f97  c700e0bc9c00         mov dword ptr [eax], 0x9cbce0
// 00632f9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00632fa1  894808               mov dword ptr [eax + 8], ecx
// 00632fa4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00632fa8  89500c               mov dword ptr [eax + 0xc], edx
// 00632fab  eb02                 jmp 0x632faf
// 00632fad  33c0                 xor eax, eax
// 00632faf  56                   push esi
// 00632fb0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00632fb4  6a00                 push 0
// 00632fb6  8906                 mov dword ptr [esi], eax
// 00632fb8  e89d081c00           call 0x7f385a
// 00632fbd  83c404               add esp, 4
// 00632fc0  8bc6                 mov eax, esi
// 00632fc2  5e                   pop esi
// 00632fc3  59                   pop ecx
// 00632fc4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
