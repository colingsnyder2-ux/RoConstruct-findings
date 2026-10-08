// roc 2012-06 00573470  unit: AsyncResult  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00573470
//
// 00573470  51                   push ecx
// 00573471  6a10                 push 0x10
// 00573473  c744240400000000     mov dword ptr [esp + 4], 0
// 0057347b  e89aec4000           call 0x98211a
// 00573480  83c404               add esp, 4
// 00573483  85c0                 test eax, eax
// 00573485  7416                 je 0x57349d
// 00573487  c700a05fb700         mov dword ptr [eax], 0xb75fa0
// 0057348d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00573491  894808               mov dword ptr [eax + 8], ecx
// 00573494  8b542410             mov edx, dword ptr [esp + 0x10]
// 00573498  89500c               mov dword ptr [eax + 0xc], edx
// 0057349b  eb02                 jmp 0x57349f
// 0057349d  33c0                 xor eax, eax
// 0057349f  56                   push esi
// 005734a0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005734a4  6a00                 push 0
// 005734a6  8906                 mov dword ptr [esi], eax
// 005734a8  e867ec4000           call 0x982114
// 005734ad  83c404               add esp, 4
// 005734b0  8bc6                 mov eax, esi
// 005734b2  5e                   pop esi
// 005734b3  59                   pop ecx
// 005734b4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
