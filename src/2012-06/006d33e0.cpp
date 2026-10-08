// roc 2012-06 006d33e0  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d33e0
//
// 006d33e0  6aff                 push -1
// 006d33e2  6878aeab00           push 0xabae78
// 006d33e7  64a100000000         mov eax, dword ptr fs:[0]
// 006d33ed  50                   push eax
// 006d33ee  64892500000000       mov dword ptr fs:[0], esp
// 006d33f5  83ec08               sub esp, 8
// 006d33f8  56                   push esi
// 006d33f9  8bf1                 mov esi, ecx
// 006d33fb  83ec1c               sub esp, 0x1c
// 006d33fe  8d442454             lea eax, [esp + 0x54]
// 006d3402  89642420             mov dword ptr [esp + 0x20], esp
// 006d3406  8bcc                 mov ecx, esp
// 006d3408  50                   push eax
// 006d3409  c744243401000000     mov dword ptr [esp + 0x34], 1
// 006d3411  ff154426b200         call dword ptr [0xb22644]
// 006d3417  83ec1c               sub esp, 0x1c
// 006d341a  8d542454             lea edx, [esp + 0x54]
// 006d341e  89642440             mov dword ptr [esp + 0x40], esp
// 006d3422  8bcc                 mov ecx, esp
// 006d3424  52                   push edx
// 006d3425  c644245002           mov byte ptr [esp + 0x50], 2
// 006d342a  ff154426b200         call dword ptr [0xb22644]
// 006d3430  8bce                 mov ecx, esi
// 006d3432  c644244c01           mov byte ptr [esp + 0x4c], 1
// 006d3437  e8a4e7ffff           call 0x6d1be0
// 006d343c  8d4c241c             lea ecx, [esp + 0x1c]
// 006d3440  c644241400           mov byte ptr [esp + 0x14], 0
// 006d3445  ff153c26b200         call dword ptr [0xb2263c]
// 006d344b  8d4c2438             lea ecx, [esp + 0x38]
// 006d344f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006d3457  ff153c26b200         call dword ptr [0xb2263c]
// 006d345d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3461  8bc6                 mov eax, esi
// 006d3463  64890d00000000       mov dword ptr fs:[0], ecx
// 006d346a  5e                   pop esi
// 006d346b  83c414               add esp, 0x14
// 006d346e  c23800               ret 0x38
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
