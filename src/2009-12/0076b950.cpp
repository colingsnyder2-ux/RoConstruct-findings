// roc 2009-12 0076b950  unit: RBX::P8PlayerMouse::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076b950
//
// 0076b950  51                   push ecx
// 0076b951  6a10                 push 0x10
// 0076b953  c744240400000000     mov dword ptr [esp + 4], 0
// 0076b95b  e8007f0800           call 0x7f3860
// 0076b960  83c404               add esp, 4
// 0076b963  85c0                 test eax, eax
// 0076b965  7416                 je 0x76b97d
// 0076b967  c700f47e9e00         mov dword ptr [eax], 0x9e7ef4
// 0076b96d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076b971  894808               mov dword ptr [eax + 8], ecx
// 0076b974  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076b978  89500c               mov dword ptr [eax + 0xc], edx
// 0076b97b  eb02                 jmp 0x76b97f
// 0076b97d  33c0                 xor eax, eax
// 0076b97f  56                   push esi
// 0076b980  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076b984  6a00                 push 0
// 0076b986  8906                 mov dword ptr [esi], eax
// 0076b988  e8cd7e0800           call 0x7f385a
// 0076b98d  83c404               add esp, 4
// 0076b990  8bc6                 mov eax, esi
// 0076b992  5e                   pop esi
// 0076b993  59                   pop ecx
// 0076b994  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
