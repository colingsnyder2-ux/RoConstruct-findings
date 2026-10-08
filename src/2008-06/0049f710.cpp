// roc 2008-06 0049f710  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f710
//
// 0049f710  6aff                 push -1
// 0049f712  6838077d00           push 0x7d0738
// 0049f717  64a100000000         mov eax, dword ptr fs:[0]
// 0049f71d  50                   push eax
// 0049f71e  64892500000000       mov dword ptr fs:[0], esp
// 0049f725  51                   push ecx
// 0049f726  56                   push esi
// 0049f727  8bf1                 mov esi, ecx
// 0049f729  89742404             mov dword ptr [esp + 4], esi
// 0049f72d  8b4608               mov eax, dword ptr [esi + 8]
// 0049f730  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049f738  85c0                 test eax, eax
// 0049f73a  7419                 je 0x49f755
// 0049f73c  8b00                 mov eax, dword ptr [eax]
// 0049f73e  8d4e10               lea ecx, [esi + 0x10]
// 0049f741  85c0                 test eax, eax
// 0049f743  7409                 je 0x49f74e
// 0049f745  6a01                 push 1
// 0049f747  51                   push ecx
// 0049f748  51                   push ecx
// 0049f749  ffd0                 call eax
// 0049f74b  83c40c               add esp, 0xc
// 0049f74e  c7460800000000       mov dword ptr [esi + 8], 0
// 0049f755  8b7604               mov esi, dword ptr [esi + 4]
// 0049f758  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0049f760  85f6                 test esi, esi
// 0049f762  742a                 je 0x49f78e
// 0049f764  8d4604               lea eax, [esi + 4]
// 0049f767  83c9ff               or ecx, 0xffffffff
// 0049f76a  f00fc108             lock xadd dword ptr [eax], ecx
// 0049f76e  751e                 jne 0x49f78e
// 0049f770  8b16                 mov edx, dword ptr [esi]
// 0049f772  8b4204               mov eax, dword ptr [edx + 4]
// 0049f775  8bce                 mov ecx, esi
// 0049f777  ffd0                 call eax
// 0049f779  8d4e08               lea ecx, [esi + 8]
// 0049f77c  83caff               or edx, 0xffffffff
// 0049f77f  f00fc111             lock xadd dword ptr [ecx], edx
// 0049f783  7509                 jne 0x49f78e
// 0049f785  8b06                 mov eax, dword ptr [esi]
// 0049f787  8b5008               mov edx, dword ptr [eax + 8]
// 0049f78a  8bce                 mov ecx, esi
// 0049f78c  ffd2                 call edx
// 0049f78e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049f792  5e                   pop esi
// 0049f793  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f79a  83c410               add esp, 0x10
// 0049f79d  c3                   ret 
// library rbxgs/util\boost.cpp (function ??1?$storage2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
