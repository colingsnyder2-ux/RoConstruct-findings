// roc 2010-06 00795da0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00795da0
//
// 00795da0  6aff                 push -1
// 00795da2  6878879a00           push 0x9a8778
// 00795da7  64a100000000         mov eax, dword ptr fs:[0]
// 00795dad  50                   push eax
// 00795dae  64892500000000       mov dword ptr fs:[0], esp
// 00795db5  51                   push ecx
// 00795db6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00795dba  56                   push esi
// 00795dbb  8bf1                 mov esi, ecx
// 00795dbd  8b08                 mov ecx, dword ptr [eax]
// 00795dbf  890e                 mov dword ptr [esi], ecx
// 00795dc1  8b4804               mov ecx, dword ptr [eax + 4]
// 00795dc4  33d2                 xor edx, edx
// 00795dc6  89742404             mov dword ptr [esp + 4], esi
// 00795dca  894e04               mov dword ptr [esi + 4], ecx
// 00795dcd  3bca                 cmp ecx, edx
// 00795dcf  740e                 je 0x795ddf
// 00795dd1  57                   push edi
// 00795dd2  83c104               add ecx, 4
// 00795dd5  bf01000000           mov edi, 1
// 00795dda  f00fc139             lock xadd dword ptr [ecx], edi
// 00795dde  5f                   pop edi
// 00795ddf  895608               mov dword ptr [esi + 8], edx
// 00795de2  8b4808               mov ecx, dword ptr [eax + 8]
// 00795de5  89542410             mov dword ptr [esp + 0x10], edx
// 00795de9  3bca                 cmp ecx, edx
// 00795deb  7416                 je 0x795e03
// 00795ded  52                   push edx
// 00795dee  894e08               mov dword ptr [esi + 8], ecx
// 00795df1  8b4808               mov ecx, dword ptr [eax + 8]
// 00795df4  8d5610               lea edx, [esi + 0x10]
// 00795df7  83c010               add eax, 0x10
// 00795dfa  52                   push edx
// 00795dfb  50                   push eax
// 00795dfc  8b01                 mov eax, dword ptr [ecx]
// 00795dfe  ffd0                 call eax
// 00795e00  83c40c               add esp, 0xc
// 00795e03  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00795e07  8bc6                 mov eax, esi
// 00795e09  5e                   pop esi
// 00795e0a  64890d00000000       mov dword ptr fs:[0], ecx
// 00795e11  83c410               add esp, 0x10
// 00795e14  c20400               ret 4
// library rbxgs/util\boost.cpp (function ??0?$storage2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@boost@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
