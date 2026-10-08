// roc 2011-06 0043b1d0  unit: AsyncResult  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043b1d0
//
// 0043b1d0  6aff                 push -1
// 0043b1d2  6898d99f00           push 0x9fd998
// 0043b1d7  64a100000000         mov eax, dword ptr fs:[0]
// 0043b1dd  50                   push eax
// 0043b1de  64892500000000       mov dword ptr fs:[0], esp
// 0043b1e5  51                   push ecx
// 0043b1e6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0043b1ea  56                   push esi
// 0043b1eb  8bf1                 mov esi, ecx
// 0043b1ed  8b08                 mov ecx, dword ptr [eax]
// 0043b1ef  890e                 mov dword ptr [esi], ecx
// 0043b1f1  8b4804               mov ecx, dword ptr [eax + 4]
// 0043b1f4  33d2                 xor edx, edx
// 0043b1f6  89742404             mov dword ptr [esp + 4], esi
// 0043b1fa  894e04               mov dword ptr [esi + 4], ecx
// 0043b1fd  3bca                 cmp ecx, edx
// 0043b1ff  740e                 je 0x43b20f
// 0043b201  57                   push edi
// 0043b202  83c104               add ecx, 4
// 0043b205  bf01000000           mov edi, 1
// 0043b20a  f00fc139             lock xadd dword ptr [ecx], edi
// 0043b20e  5f                   pop edi
// 0043b20f  895608               mov dword ptr [esi + 8], edx
// 0043b212  8b4808               mov ecx, dword ptr [eax + 8]
// 0043b215  89542410             mov dword ptr [esp + 0x10], edx
// 0043b219  3bca                 cmp ecx, edx
// 0043b21b  7416                 je 0x43b233
// 0043b21d  52                   push edx
// 0043b21e  894e08               mov dword ptr [esi + 8], ecx
// 0043b221  8b4808               mov ecx, dword ptr [eax + 8]
// 0043b224  8d5610               lea edx, [esi + 0x10]
// 0043b227  83c010               add eax, 0x10
// 0043b22a  52                   push edx
// 0043b22b  50                   push eax
// 0043b22c  8b01                 mov eax, dword ptr [ecx]
// 0043b22e  ffd0                 call eax
// 0043b230  83c40c               add esp, 0xc
// 0043b233  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043b237  8bc6                 mov eax, esi
// 0043b239  5e                   pop esi
// 0043b23a  64890d00000000       mov dword ptr fs:[0], ecx
// 0043b241  83c410               add esp, 0x10
// 0043b244  c20400               ret 4
// library rbxgs/util\boost.cpp (function ??0?$storage2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@boost@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
