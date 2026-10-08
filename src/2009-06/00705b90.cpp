// roc 2009-06 00705b90  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00705b90
//
// 00705b90  6aff                 push -1
// 00705b92  68f89c8500           push 0x859cf8
// 00705b97  64a100000000         mov eax, dword ptr fs:[0]
// 00705b9d  50                   push eax
// 00705b9e  64892500000000       mov dword ptr fs:[0], esp
// 00705ba5  51                   push ecx
// 00705ba6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00705baa  56                   push esi
// 00705bab  8bf1                 mov esi, ecx
// 00705bad  8b08                 mov ecx, dword ptr [eax]
// 00705baf  890e                 mov dword ptr [esi], ecx
// 00705bb1  8b4804               mov ecx, dword ptr [eax + 4]
// 00705bb4  33d2                 xor edx, edx
// 00705bb6  89742404             mov dword ptr [esp + 4], esi
// 00705bba  894e04               mov dword ptr [esi + 4], ecx
// 00705bbd  3bca                 cmp ecx, edx
// 00705bbf  740e                 je 0x705bcf
// 00705bc1  57                   push edi
// 00705bc2  83c104               add ecx, 4
// 00705bc5  bf01000000           mov edi, 1
// 00705bca  f00fc139             lock xadd dword ptr [ecx], edi
// 00705bce  5f                   pop edi
// 00705bcf  895608               mov dword ptr [esi + 8], edx
// 00705bd2  8b4808               mov ecx, dword ptr [eax + 8]
// 00705bd5  89542410             mov dword ptr [esp + 0x10], edx
// 00705bd9  3bca                 cmp ecx, edx
// 00705bdb  7416                 je 0x705bf3
// 00705bdd  52                   push edx
// 00705bde  894e08               mov dword ptr [esi + 8], ecx
// 00705be1  8b4808               mov ecx, dword ptr [eax + 8]
// 00705be4  8d5610               lea edx, [esi + 0x10]
// 00705be7  83c010               add eax, 0x10
// 00705bea  52                   push edx
// 00705beb  50                   push eax
// 00705bec  8b01                 mov eax, dword ptr [ecx]
// 00705bee  ffd0                 call eax
// 00705bf0  83c40c               add esp, 0xc
// 00705bf3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00705bf7  8bc6                 mov eax, esi
// 00705bf9  5e                   pop esi
// 00705bfa  64890d00000000       mov dword ptr fs:[0], ecx
// 00705c01  83c410               add esp, 0x10
// 00705c04  c20400               ret 4
// library rbxgs/util\boost.cpp (function ??0?$storage2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@boost@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
