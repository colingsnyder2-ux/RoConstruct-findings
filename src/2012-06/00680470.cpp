// roc 2012-06 00680470  unit: RBX::Object  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00680470
//
// 00680470  51                   push ecx
// 00680471  6a10                 push 0x10
// 00680473  c744240400000000     mov dword ptr [esp + 4], 0
// 0068047b  e89a1c3000           call 0x98211a
// 00680480  83c404               add esp, 4
// 00680483  85c0                 test eax, eax
// 00680485  7416                 je 0x68049d
// 00680487  c700b4eeb800         mov dword ptr [eax], 0xb8eeb4
// 0068048d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00680491  894808               mov dword ptr [eax + 8], ecx
// 00680494  8b542410             mov edx, dword ptr [esp + 0x10]
// 00680498  89500c               mov dword ptr [eax + 0xc], edx
// 0068049b  eb02                 jmp 0x68049f
// 0068049d  33c0                 xor eax, eax
// 0068049f  56                   push esi
// 006804a0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006804a4  6a00                 push 0
// 006804a6  8906                 mov dword ptr [esi], eax
// 006804a8  e8671c3000           call 0x982114
// 006804ad  83c404               add esp, 4
// 006804b0  8bc6                 mov eax, esi
// 006804b2  5e                   pop esi
// 006804b3  59                   pop ecx
// 006804b4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
