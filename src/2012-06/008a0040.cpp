// roc 2012-06 008a0040  unit: RBX::P8Mouse::?$GetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a0040
//
// 008a0040  51                   push ecx
// 008a0041  6a10                 push 0x10
// 008a0043  c744240400000000     mov dword ptr [esp + 4], 0
// 008a004b  e8ca200e00           call 0x98211a
// 008a0050  83c404               add esp, 4
// 008a0053  85c0                 test eax, eax
// 008a0055  7416                 je 0x8a006d
// 008a0057  c70040debd00         mov dword ptr [eax], 0xbdde40
// 008a005d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a0061  894808               mov dword ptr [eax + 8], ecx
// 008a0064  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a0068  89500c               mov dword ptr [eax + 0xc], edx
// 008a006b  eb02                 jmp 0x8a006f
// 008a006d  33c0                 xor eax, eax
// 008a006f  56                   push esi
// 008a0070  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008a0074  6a00                 push 0
// 008a0076  8906                 mov dword ptr [esi], eax
// 008a0078  e897200e00           call 0x982114
// 008a007d  83c404               add esp, 4
// 008a0080  8bc6                 mov eax, esi
// 008a0082  5e                   pop esi
// 008a0083  59                   pop ecx
// 008a0084  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
