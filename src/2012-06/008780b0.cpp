// roc 2012-06 008780b0  unit: DummyJob  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008780b0
//
// 008780b0  51                   push ecx
// 008780b1  6a10                 push 0x10
// 008780b3  c744240400000000     mov dword ptr [esp + 4], 0
// 008780bb  e85aa01000           call 0x98211a
// 008780c0  83c404               add esp, 4
// 008780c3  85c0                 test eax, eax
// 008780c5  7416                 je 0x8780dd
// 008780c7  c700147dbd00         mov dword ptr [eax], 0xbd7d14
// 008780cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008780d1  894808               mov dword ptr [eax + 8], ecx
// 008780d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008780d8  89500c               mov dword ptr [eax + 0xc], edx
// 008780db  eb02                 jmp 0x8780df
// 008780dd  33c0                 xor eax, eax
// 008780df  56                   push esi
// 008780e0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008780e4  6a00                 push 0
// 008780e6  8906                 mov dword ptr [esi], eax
// 008780e8  e827a01000           call 0x982114
// 008780ed  83c404               add esp, 4
// 008780f0  8bc6                 mov eax, esi
// 008780f2  5e                   pop esi
// 008780f3  59                   pop ecx
// 008780f4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
