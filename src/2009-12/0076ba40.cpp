// roc 2009-12 0076ba40  unit: RBX::P8PlayerMouse::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076ba40
//
// 0076ba40  51                   push ecx
// 0076ba41  6a10                 push 0x10
// 0076ba43  c744240400000000     mov dword ptr [esp + 4], 0
// 0076ba4b  e8107e0800           call 0x7f3860
// 0076ba50  83c404               add esp, 4
// 0076ba53  85c0                 test eax, eax
// 0076ba55  7416                 je 0x76ba6d
// 0076ba57  c7003c7f9e00         mov dword ptr [eax], 0x9e7f3c
// 0076ba5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076ba61  894808               mov dword ptr [eax + 8], ecx
// 0076ba64  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076ba68  89500c               mov dword ptr [eax + 0xc], edx
// 0076ba6b  eb02                 jmp 0x76ba6f
// 0076ba6d  33c0                 xor eax, eax
// 0076ba6f  56                   push esi
// 0076ba70  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076ba74  6a00                 push 0
// 0076ba76  8906                 mov dword ptr [esi], eax
// 0076ba78  e8dd7d0800           call 0x7f385a
// 0076ba7d  83c404               add esp, 4
// 0076ba80  8bc6                 mov eax, esi
// 0076ba82  5e                   pop esi
// 0076ba83  59                   pop ecx
// 0076ba84  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
