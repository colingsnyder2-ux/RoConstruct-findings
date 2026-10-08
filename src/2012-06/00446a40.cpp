// roc 2012-06 00446a40  unit: AsyncResult  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00446a40
//
// 00446a40  6aff                 push -1
// 00446a42  6898dea900           push 0xa9de98
// 00446a47  64a100000000         mov eax, dword ptr fs:[0]
// 00446a4d  50                   push eax
// 00446a4e  64892500000000       mov dword ptr fs:[0], esp
// 00446a55  51                   push ecx
// 00446a56  8b442414             mov eax, dword ptr [esp + 0x14]
// 00446a5a  56                   push esi
// 00446a5b  8bf1                 mov esi, ecx
// 00446a5d  8b08                 mov ecx, dword ptr [eax]
// 00446a5f  890e                 mov dword ptr [esi], ecx
// 00446a61  8b4804               mov ecx, dword ptr [eax + 4]
// 00446a64  33d2                 xor edx, edx
// 00446a66  89742404             mov dword ptr [esp + 4], esi
// 00446a6a  894e04               mov dword ptr [esi + 4], ecx
// 00446a6d  3bca                 cmp ecx, edx
// 00446a6f  740e                 je 0x446a7f
// 00446a71  57                   push edi
// 00446a72  83c104               add ecx, 4
// 00446a75  bf01000000           mov edi, 1
// 00446a7a  f00fc139             lock xadd dword ptr [ecx], edi
// 00446a7e  5f                   pop edi
// 00446a7f  895608               mov dword ptr [esi + 8], edx
// 00446a82  8b4808               mov ecx, dword ptr [eax + 8]
// 00446a85  89542410             mov dword ptr [esp + 0x10], edx
// 00446a89  3bca                 cmp ecx, edx
// 00446a8b  7416                 je 0x446aa3
// 00446a8d  52                   push edx
// 00446a8e  894e08               mov dword ptr [esi + 8], ecx
// 00446a91  8b4808               mov ecx, dword ptr [eax + 8]
// 00446a94  8d5610               lea edx, [esi + 0x10]
// 00446a97  83c010               add eax, 0x10
// 00446a9a  52                   push edx
// 00446a9b  50                   push eax
// 00446a9c  8b01                 mov eax, dword ptr [ecx]
// 00446a9e  ffd0                 call eax
// 00446aa0  83c40c               add esp, 0xc
// 00446aa3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00446aa7  8bc6                 mov eax, esi
// 00446aa9  5e                   pop esi
// 00446aaa  64890d00000000       mov dword ptr fs:[0], ecx
// 00446ab1  83c410               add esp, 0x10
// 00446ab4  c20400               ret 4
// library rbxgs/util\boost.cpp (function ??0?$storage2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@boost@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
