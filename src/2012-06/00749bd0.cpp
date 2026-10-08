// roc 2012-06 00749bd0  unit: boost::Vthread::?$sp_counted_impl_p  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00749bd0
//
// 00749bd0  51                   push ecx
// 00749bd1  6a10                 push 0x10
// 00749bd3  c744240400000000     mov dword ptr [esp + 4], 0
// 00749bdb  e83a852300           call 0x98211a
// 00749be0  83c404               add esp, 4
// 00749be3  85c0                 test eax, eax
// 00749be5  7416                 je 0x749bfd
// 00749be7  c7003cb3ba00         mov dword ptr [eax], 0xbab33c
// 00749bed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00749bf1  894808               mov dword ptr [eax + 8], ecx
// 00749bf4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00749bf8  89500c               mov dword ptr [eax + 0xc], edx
// 00749bfb  eb02                 jmp 0x749bff
// 00749bfd  33c0                 xor eax, eax
// 00749bff  56                   push esi
// 00749c00  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00749c04  6a00                 push 0
// 00749c06  8906                 mov dword ptr [esi], eax
// 00749c08  e807852300           call 0x982114
// 00749c0d  83c404               add esp, 4
// 00749c10  8bc6                 mov eax, esi
// 00749c12  5e                   pop esi
// 00749c13  59                   pop ecx
// 00749c14  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
