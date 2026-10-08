// roc 2008-06 00595f90  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595f90
//
// 00595f90  6aff                 push -1
// 00595f92  6838077d00           push 0x7d0738
// 00595f97  64a100000000         mov eax, dword ptr fs:[0]
// 00595f9d  50                   push eax
// 00595f9e  64892500000000       mov dword ptr fs:[0], esp
// 00595fa5  51                   push ecx
// 00595fa6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00595faa  56                   push esi
// 00595fab  8bf1                 mov esi, ecx
// 00595fad  8b08                 mov ecx, dword ptr [eax]
// 00595faf  890e                 mov dword ptr [esi], ecx
// 00595fb1  8b4804               mov ecx, dword ptr [eax + 4]
// 00595fb4  33d2                 xor edx, edx
// 00595fb6  89742404             mov dword ptr [esp + 4], esi
// 00595fba  894e04               mov dword ptr [esi + 4], ecx
// 00595fbd  3bca                 cmp ecx, edx
// 00595fbf  740e                 je 0x595fcf
// 00595fc1  57                   push edi
// 00595fc2  83c104               add ecx, 4
// 00595fc5  bf01000000           mov edi, 1
// 00595fca  f00fc139             lock xadd dword ptr [ecx], edi
// 00595fce  5f                   pop edi
// 00595fcf  895608               mov dword ptr [esi + 8], edx
// 00595fd2  8b4808               mov ecx, dword ptr [eax + 8]
// 00595fd5  89542410             mov dword ptr [esp + 0x10], edx
// 00595fd9  3bca                 cmp ecx, edx
// 00595fdb  7416                 je 0x595ff3
// 00595fdd  52                   push edx
// 00595fde  894e08               mov dword ptr [esi + 8], ecx
// 00595fe1  8b4808               mov ecx, dword ptr [eax + 8]
// 00595fe4  8d5610               lea edx, [esi + 0x10]
// 00595fe7  83c010               add eax, 0x10
// 00595fea  52                   push edx
// 00595feb  50                   push eax
// 00595fec  8b01                 mov eax, dword ptr [ecx]
// 00595fee  ffd0                 call eax
// 00595ff0  83c40c               add esp, 0xc
// 00595ff3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00595ff7  8bc6                 mov eax, esi
// 00595ff9  5e                   pop esi
// 00595ffa  64890d00000000       mov dword ptr fs:[0], ecx
// 00596001  83c410               add esp, 0x10
// 00596004  c20400               ret 4
// library rbxgs/util\boost.cpp (function ??0?$storage2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@boost@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
