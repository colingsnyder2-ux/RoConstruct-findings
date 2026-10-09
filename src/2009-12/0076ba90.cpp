// roc 2009-12 0076ba90  unit: RBX::P8PlayerMouse::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076ba90
//
// 0076ba90  51                   push ecx
// 0076ba91  6a10                 push 0x10
// 0076ba93  c744240400000000     mov dword ptr [esp + 4], 0
// 0076ba9b  e8c07d0800           call 0x7f3860
// 0076baa0  83c404               add esp, 4
// 0076baa3  85c0                 test eax, eax
// 0076baa5  7416                 je 0x76babd
// 0076baa7  c700547f9e00         mov dword ptr [eax], 0x9e7f54
// 0076baad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076bab1  894808               mov dword ptr [eax + 8], ecx
// 0076bab4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076bab8  89500c               mov dword ptr [eax + 0xc], edx
// 0076babb  eb02                 jmp 0x76babf
// 0076babd  33c0                 xor eax, eax
// 0076babf  56                   push esi
// 0076bac0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076bac4  6a00                 push 0
// 0076bac6  8906                 mov dword ptr [esi], eax
// 0076bac8  e88d7d0800           call 0x7f385a
// 0076bacd  83c404               add esp, 4
// 0076bad0  8bc6                 mov eax, esi
// 0076bad2  5e                   pop esi
// 0076bad3  59                   pop ecx
// 0076bad4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
