// roc 2012-06 006931d0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006931d0
//
// 006931d0  51                   push ecx
// 006931d1  6a10                 push 0x10
// 006931d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006931db  e83aef2e00           call 0x98211a
// 006931e0  83c404               add esp, 4
// 006931e3  85c0                 test eax, eax
// 006931e5  7416                 je 0x6931fd
// 006931e7  c700f829b900         mov dword ptr [eax], 0xb929f8
// 006931ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006931f1  894808               mov dword ptr [eax + 8], ecx
// 006931f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006931f8  89500c               mov dword ptr [eax + 0xc], edx
// 006931fb  eb02                 jmp 0x6931ff
// 006931fd  33c0                 xor eax, eax
// 006931ff  56                   push esi
// 00693200  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00693204  6a00                 push 0
// 00693206  8906                 mov dword ptr [esi], eax
// 00693208  e807ef2e00           call 0x982114
// 0069320d  83c404               add esp, 4
// 00693210  8bc6                 mov eax, esi
// 00693212  5e                   pop esi
// 00693213  59                   pop ecx
// 00693214  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
