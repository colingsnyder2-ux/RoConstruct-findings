// roc 2009-12 0052c1d0  unit: RBX::Network::Server  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052c1d0
//
// 0052c1d0  51                   push ecx
// 0052c1d1  6a10                 push 0x10
// 0052c1d3  c744240400000000     mov dword ptr [esp + 4], 0
// 0052c1db  e880762c00           call 0x7f3860
// 0052c1e0  83c404               add esp, 4
// 0052c1e3  85c0                 test eax, eax
// 0052c1e5  7416                 je 0x52c1fd
// 0052c1e7  c70048c89b00         mov dword ptr [eax], 0x9bc848
// 0052c1ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052c1f1  894808               mov dword ptr [eax + 8], ecx
// 0052c1f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0052c1f8  89500c               mov dword ptr [eax + 0xc], edx
// 0052c1fb  eb02                 jmp 0x52c1ff
// 0052c1fd  33c0                 xor eax, eax
// 0052c1ff  56                   push esi
// 0052c200  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052c204  6a00                 push 0
// 0052c206  8906                 mov dword ptr [esi], eax
// 0052c208  e84d762c00           call 0x7f385a
// 0052c20d  83c404               add esp, 4
// 0052c210  8bc6                 mov eax, esi
// 0052c212  5e                   pop esi
// 0052c213  59                   pop ecx
// 0052c214  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
