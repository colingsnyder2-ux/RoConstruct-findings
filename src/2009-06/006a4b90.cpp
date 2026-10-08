// roc 2009-06 006a4b90  unit: RBX::P8BackpackItem::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a4b90
//
// 006a4b90  51                   push ecx
// 006a4b91  6a10                 push 0x10
// 006a4b93  c744240400000000     mov dword ptr [esp + 4], 0
// 006a4b9b  e8983e0700           call 0x718a38
// 006a4ba0  83c404               add esp, 4
// 006a4ba3  85c0                 test eax, eax
// 006a4ba5  7416                 je 0x6a4bbd
// 006a4ba7  c700749c8e00         mov dword ptr [eax], 0x8e9c74
// 006a4bad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a4bb1  894808               mov dword ptr [eax + 8], ecx
// 006a4bb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a4bb8  89500c               mov dword ptr [eax + 0xc], edx
// 006a4bbb  eb02                 jmp 0x6a4bbf
// 006a4bbd  33c0                 xor eax, eax
// 006a4bbf  56                   push esi
// 006a4bc0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a4bc4  6a00                 push 0
// 006a4bc6  8906                 mov dword ptr [esi], eax
// 006a4bc8  e8653e0700           call 0x718a32
// 006a4bcd  83c404               add esp, 4
// 006a4bd0  8bc6                 mov eax, esi
// 006a4bd2  5e                   pop esi
// 006a4bd3  59                   pop ecx
// 006a4bd4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
