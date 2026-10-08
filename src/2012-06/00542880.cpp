// roc 2012-06 00542880  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00542880
//
// 00542880  51                   push ecx
// 00542881  6a10                 push 0x10
// 00542883  c744240400000000     mov dword ptr [esp + 4], 0
// 0054288b  e88af84300           call 0x98211a
// 00542890  83c404               add esp, 4
// 00542893  85c0                 test eax, eax
// 00542895  7416                 je 0x5428ad
// 00542897  c7003820b700         mov dword ptr [eax], 0xb72038
// 0054289d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005428a1  894808               mov dword ptr [eax + 8], ecx
// 005428a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005428a8  89500c               mov dword ptr [eax + 0xc], edx
// 005428ab  eb02                 jmp 0x5428af
// 005428ad  33c0                 xor eax, eax
// 005428af  56                   push esi
// 005428b0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005428b4  6a00                 push 0
// 005428b6  8906                 mov dword ptr [esi], eax
// 005428b8  e857f84300           call 0x982114
// 005428bd  83c404               add esp, 4
// 005428c0  8bc6                 mov eax, esi
// 005428c2  5e                   pop esi
// 005428c3  59                   pop ecx
// 005428c4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
