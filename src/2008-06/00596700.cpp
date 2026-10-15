// roc 2008-06 00596700  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00596700
//
// 00596700  6aff                 push -1
// 00596702  6848227d00           push 0x7d2248
// 00596707  64a100000000         mov eax, dword ptr fs:[0]
// 0059670d  50                   push eax
// 0059670e  64892500000000       mov dword ptr fs:[0], esp
// 00596715  83ec08               sub esp, 8
// 00596718  56                   push esi
// 00596719  8bf1                 mov esi, ecx
// 0059671b  8b442458             mov eax, dword ptr [esp + 0x58]
// 0059671f  50                   push eax
// 00596720  83ec1c               sub esp, 0x1c
// 00596723  8d54245c             lea edx, [esp + 0x5c]
// 00596727  89642424             mov dword ptr [esp + 0x24], esp
// 0059672b  8bcc                 mov ecx, esp
// 0059672d  52                   push edx
// 0059672e  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00596736  ff155c248000         call dword ptr [0x80245c]
// 0059673c  83ec20               sub esp, 0x20
// 0059673f  8bc4                 mov eax, esp
// 00596741  c70000000000         mov dword ptr [eax], 0
// 00596747  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0059674b  c644245402           mov byte ptr [esp + 0x54], 2
// 00596750  89642448             mov dword ptr [esp + 0x48], esp
// 00596754  85c9                 test ecx, ecx
// 00596756  7418                 je 0x596770
// 00596758  8908                 mov dword ptr [eax], ecx
// 0059675a  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0059675e  8b11                 mov edx, dword ptr [ecx]
// 00596760  83c008               add eax, 8
// 00596763  6a00                 push 0
// 00596765  50                   push eax
// 00596766  8d44246c             lea eax, [esp + 0x6c]
// 0059676a  50                   push eax
// 0059676b  ffd2                 call edx
// 0059676d  83c40c               add esp, 0xc
// 00596770  8bce                 mov ecx, esi
// 00596772  c644245401           mov byte ptr [esp + 0x54], 1
// 00596777  e874fdffff           call 0x5964f0
// 0059677c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00596780  c644241400           mov byte ptr [esp + 0x14], 0
// 00596785  85c0                 test eax, eax
// 00596787  741d                 je 0x5967a6
// 00596789  8b00                 mov eax, dword ptr [eax]
// 0059678b  85c0                 test eax, eax
// 0059678d  740f                 je 0x59679e
// 0059678f  8d4c2424             lea ecx, [esp + 0x24]
// 00596793  6a01                 push 1
// 00596795  51                   push ecx
// 00596796  8bd1                 mov edx, ecx
// 00596798  52                   push edx
// 00596799  ffd0                 call eax
// 0059679b  83c40c               add esp, 0xc
// 0059679e  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005967a6  8d4c243c             lea ecx, [esp + 0x3c]
// 005967aa  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005967b2  ff1568248000         call dword ptr [0x802468]
// 005967b8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005967bc  8bc6                 mov eax, esi
// 005967be  64890d00000000       mov dword ptr fs:[0], ecx
// 005967c5  5e                   pop esi
// 005967c6  83c414               add esp, 0x14
// 005967c9  c24000               ret 0x40
// library rbxgs/roc_http_priority_default_0_e42c37ffc0bf2a22.cpp (function ??0?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@V?$value@H@23@@_bi@boost@@QAE@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@12@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@V?$value@H@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_http_priority_default_0_e42c37ffc0bf2a22.cpp
