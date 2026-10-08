// roc 2008-06 005965d0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005965d0
//
// 005965d0  6aff                 push -1
// 005965d2  6891227d00           push 0x7d2291
// 005965d7  64a100000000         mov eax, dword ptr fs:[0]
// 005965dd  50                   push eax
// 005965de  64892500000000       mov dword ptr fs:[0], esp
// 005965e5  83ec30               sub esp, 0x30
// 005965e8  56                   push esi
// 005965e9  57                   push edi
// 005965ea  c744240800000000     mov dword ptr [esp + 8], 0
// 005965f2  83ec20               sub esp, 0x20
// 005965f5  8bc4                 mov eax, esp
// 005965f7  c70000000000         mov dword ptr [eax], 0
// 005965fd  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00596601  c744246002000000     mov dword ptr [esp + 0x60], 2
// 00596609  8964242c             mov dword ptr [esp + 0x2c], esp
// 0059660d  85c9                 test ecx, ecx
// 0059660f  741b                 je 0x59662c
// 00596611  8908                 mov dword ptr [eax], ecx
// 00596613  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00596617  8b11                 mov edx, dword ptr [ecx]
// 00596619  83c008               add eax, 8
// 0059661c  6a00                 push 0
// 0059661e  50                   push eax
// 0059661f  8d842488000000       lea eax, [esp + 0x88]
// 00596626  50                   push eax
// 00596627  ffd2                 call edx
// 00596629  83c40c               add esp, 0xc
// 0059662c  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00596630  83ec08               sub esp, 8
// 00596633  8bc4                 mov eax, esp
// 00596635  8908                 mov dword ptr [eax], ecx
// 00596637  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0059663b  895004               mov dword ptr [eax + 4], edx
// 0059663e  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00596642  89642434             mov dword ptr [esp + 0x34], esp
// 00596646  85c0                 test eax, eax
// 00596648  740c                 je 0x596656
// 0059664a  83c004               add eax, 4
// 0059664d  b901000000           mov ecx, 1
// 00596652  f00fc108             lock xadd dword ptr [eax], ecx
// 00596656  8d4c2438             lea ecx, [esp + 0x38]
// 0059665a  e871fbffff           call 0x5961d0
// 0059665f  8b742448             mov esi, dword ptr [esp + 0x48]
// 00596663  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00596667  8d4e08               lea ecx, [esi + 8]
// 0059666a  50                   push eax
// 0059666b  c644244403           mov byte ptr [esp + 0x44], 3
// 00596670  8916                 mov dword ptr [esi], edx
// 00596672  e819f9ffff           call 0x595f90
// 00596677  8d4c2410             lea ecx, [esp + 0x10]
// 0059667b  c744240801000000     mov dword ptr [esp + 8], 1
// 00596683  c644244002           mov byte ptr [esp + 0x40], 2
// 00596688  e88390f0ff           call 0x49f710
// 0059668d  8b442454             mov eax, dword ptr [esp + 0x54]
// 00596691  c644244001           mov byte ptr [esp + 0x40], 1
// 00596696  85c0                 test eax, eax
// 00596698  742c                 je 0x5966c6
// 0059669a  8bf8                 mov edi, eax
// 0059669c  83c004               add eax, 4
// 0059669f  83c9ff               or ecx, 0xffffffff
// 005966a2  f00fc108             lock xadd dword ptr [eax], ecx
// 005966a6  751e                 jne 0x5966c6
// 005966a8  8b17                 mov edx, dword ptr [edi]
// 005966aa  8b4204               mov eax, dword ptr [edx + 4]
// 005966ad  8bcf                 mov ecx, edi
// 005966af  ffd0                 call eax
// 005966b1  8d4f08               lea ecx, [edi + 8]
// 005966b4  83caff               or edx, 0xffffffff
// 005966b7  f00fc111             lock xadd dword ptr [ecx], edx
// 005966bb  7509                 jne 0x5966c6
// 005966bd  8b07                 mov eax, dword ptr [edi]
// 005966bf  8b5008               mov edx, dword ptr [eax + 8]
// 005966c2  8bcf                 mov ecx, edi
// 005966c4  ffd2                 call edx
// 005966c6  8b442458             mov eax, dword ptr [esp + 0x58]
// 005966ca  c644244000           mov byte ptr [esp + 0x40], 0
// 005966cf  85c0                 test eax, eax
// 005966d1  7415                 je 0x5966e8
// 005966d3  8b00                 mov eax, dword ptr [eax]
// 005966d5  85c0                 test eax, eax
// 005966d7  740f                 je 0x5966e8
// 005966d9  8d4c2460             lea ecx, [esp + 0x60]
// 005966dd  6a01                 push 1
// 005966df  51                   push ecx
// 005966e0  8bd1                 mov edx, ecx
// 005966e2  52                   push edx
// 005966e3  ffd0                 call eax
// 005966e5  83c40c               add esp, 0xc
// 005966e8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005966ec  5f                   pop edi
// 005966ed  8bc6                 mov eax, esi
// 005966ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005966f6  5e                   pop esi
// 005966f7  83c43c               add esp, 0x3c
// 005966fa  c3                   ret 
// library rbxgs/util\boost.cpp (function ??$bind@XV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@V12@V32@@boost@@YA?AV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@0@P6AXV?$shared_ptr@Udata@worker_thread@RBX@@@0@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@0@@Z0V40@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
