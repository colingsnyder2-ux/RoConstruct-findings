// roc 2009-12 00705fb0  unit: RBX::VInstance::?$NonFactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00705fb0
//
// 00705fb0  6aff                 push -1
// 00705fb2  68583d9500           push 0x953d58
// 00705fb7  64a100000000         mov eax, dword ptr fs:[0]
// 00705fbd  50                   push eax
// 00705fbe  64892500000000       mov dword ptr fs:[0], esp
// 00705fc5  51                   push ecx
// 00705fc6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00705fca  56                   push esi
// 00705fcb  8bf1                 mov esi, ecx
// 00705fcd  8b08                 mov ecx, dword ptr [eax]
// 00705fcf  890e                 mov dword ptr [esi], ecx
// 00705fd1  8b4804               mov ecx, dword ptr [eax + 4]
// 00705fd4  33d2                 xor edx, edx
// 00705fd6  89742404             mov dword ptr [esp + 4], esi
// 00705fda  894e04               mov dword ptr [esi + 4], ecx
// 00705fdd  3bca                 cmp ecx, edx
// 00705fdf  740e                 je 0x705fef
// 00705fe1  57                   push edi
// 00705fe2  83c104               add ecx, 4
// 00705fe5  bf01000000           mov edi, 1
// 00705fea  f00fc139             lock xadd dword ptr [ecx], edi
// 00705fee  5f                   pop edi
// 00705fef  895608               mov dword ptr [esi + 8], edx
// 00705ff2  8b4808               mov ecx, dword ptr [eax + 8]
// 00705ff5  89542410             mov dword ptr [esp + 0x10], edx
// 00705ff9  3bca                 cmp ecx, edx
// 00705ffb  7416                 je 0x706013
// 00705ffd  52                   push edx
// 00705ffe  894e08               mov dword ptr [esi + 8], ecx
// 00706001  8b4808               mov ecx, dword ptr [eax + 8]
// 00706004  8d5610               lea edx, [esi + 0x10]
// 00706007  83c010               add eax, 0x10
// 0070600a  52                   push edx
// 0070600b  50                   push eax
// 0070600c  8b01                 mov eax, dword ptr [ecx]
// 0070600e  ffd0                 call eax
// 00706010  83c40c               add esp, 0xc
// 00706013  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00706017  8bc6                 mov eax, esi
// 00706019  5e                   pop esi
// 0070601a  64890d00000000       mov dword ptr fs:[0], ecx
// 00706021  83c410               add esp, 0x10
// 00706024  c20400               ret 4
// library rbxgs/util\boost.cpp (function ??0?$storage2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@boost@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
