// roc 2008-06 005968d0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005968d0
//
// 005968d0  6aff                 push -1
// 005968d2  68da227d00           push 0x7d22da
// 005968d7  64a100000000         mov eax, dword ptr fs:[0]
// 005968dd  50                   push eax
// 005968de  64892500000000       mov dword ptr fs:[0], esp
// 005968e5  83ec50               sub esp, 0x50
// 005968e8  55                   push ebp
// 005968e9  56                   push esi
// 005968ea  57                   push edi
// 005968eb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005968f3  51                   push ecx
// 005968f4  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 005968fb  8bc4                 mov eax, esp
// 005968fd  89642414             mov dword ptr [esp + 0x14], esp
// 00596901  83ec1c               sub esp, 0x1c
// 00596904  8908                 mov dword ptr [eax], ecx
// 00596906  8d9424b4000000       lea edx, [esp + 0xb4]
// 0059690d  89a424d0000000       mov dword ptr [esp + 0xd0], esp
// 00596914  8bcc                 mov ecx, esp
// 00596916  52                   push edx
// 00596917  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 00596922  ff155c248000         call dword ptr [0x80245c]
// 00596928  83ec20               sub esp, 0x20
// 0059692b  8bc4                 mov eax, esp
// 0059692d  c70000000000         mov dword ptr [eax], 0
// 00596933  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0059693a  c68424a400000003     mov byte ptr [esp + 0xa4], 3
// 00596942  89642450             mov dword ptr [esp + 0x50], esp
// 00596946  85c9                 test ecx, ecx
// 00596948  741e                 je 0x596968
// 0059694a  8908                 mov dword ptr [eax], ecx
// 0059694c  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00596953  8b11                 mov edx, dword ptr [ecx]
// 00596955  83c008               add eax, 8
// 00596958  6a00                 push 0
// 0059695a  50                   push eax
// 0059695b  8d8424c4000000       lea eax, [esp + 0xc4]
// 00596962  50                   push eax
// 00596963  ffd2                 call edx
// 00596965  83c40c               add esp, 0xc
// 00596968  8d4c2454             lea ecx, [esp + 0x54]
// 0059696c  c68424a400000002     mov byte ptr [esp + 0xa4], 2
// 00596974  e887fdffff           call 0x596700
// 00596979  8bf0                 mov esi, eax
// 0059697b  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 0059697f  8b442470             mov eax, dword ptr [esp + 0x70]
// 00596983  8d7d08               lea edi, [ebp + 8]
// 00596986  56                   push esi
// 00596987  8bcf                 mov ecx, edi
// 00596989  c644246804           mov byte ptr [esp + 0x68], 4
// 0059698e  894500               mov dword ptr [ebp], eax
// 00596991  e83af9ffff           call 0x5962d0
// 00596996  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00596999  894f40               mov dword ptr [edi + 0x40], ecx
// 0059699c  8d4c2414             lea ecx, [esp + 0x14]
// 005969a0  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005969a8  c644246402           mov byte ptr [esp + 0x64], 2
// 005969ad  e8befaffff           call 0x596470
// 005969b2  8b442474             mov eax, dword ptr [esp + 0x74]
// 005969b6  c644246401           mov byte ptr [esp + 0x64], 1
// 005969bb  85c0                 test eax, eax
// 005969bd  741d                 je 0x5969dc
// 005969bf  8b00                 mov eax, dword ptr [eax]
// 005969c1  85c0                 test eax, eax
// 005969c3  740f                 je 0x5969d4
// 005969c5  8d54247c             lea edx, [esp + 0x7c]
// 005969c9  6a01                 push 1
// 005969cb  52                   push edx
// 005969cc  8bca                 mov ecx, edx
// 005969ce  51                   push ecx
// 005969cf  ffd0                 call eax
// 005969d1  83c40c               add esp, 0xc
// 005969d4  c744247400000000     mov dword ptr [esp + 0x74], 0
// 005969dc  8d8c2494000000       lea ecx, [esp + 0x94]
// 005969e3  c644246400           mov byte ptr [esp + 0x64], 0
// 005969e8  ff1568248000         call dword ptr [0x802468]
// 005969ee  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005969f2  5f                   pop edi
// 005969f3  5e                   pop esi
// 005969f4  8bc5                 mov eax, ebp
// 005969f6  64890d00000000       mov dword ptr fs:[0], ecx
// 005969fd  5d                   pop ebp
// 005969fe  83c45c               add esp, 0x5c
// 00596a01  c3                   ret 
// library rbxgs/roc_http_priority_default_0_e42c37ffc0bf2a22.cpp (function ??$bind@XABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV12@V34@H@boost@@YA?AV?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@V?$value@H@23@@_bi@2@@_bi@0@P6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@0@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@ZV30@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_http_priority_default_0_e42c37ffc0bf2a22.cpp
