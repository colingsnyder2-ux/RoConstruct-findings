// roc 2008-06 005961d0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005961d0
//
// 005961d0  6aff                 push -1
// 005961d2  68d0217d00           push 0x7d21d0
// 005961d7  64a100000000         mov eax, dword ptr fs:[0]
// 005961dd  50                   push eax
// 005961de  64892500000000       mov dword ptr fs:[0], esp
// 005961e5  51                   push ecx
// 005961e6  56                   push esi
// 005961e7  57                   push edi
// 005961e8  8bf9                 mov edi, ecx
// 005961ea  83ec20               sub esp, 0x20
// 005961ed  8bc4                 mov eax, esp
// 005961ef  c70000000000         mov dword ptr [eax], 0
// 005961f5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005961f9  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00596201  89642428             mov dword ptr [esp + 0x28], esp
// 00596205  85c9                 test ecx, ecx
// 00596207  7418                 je 0x596221
// 00596209  8908                 mov dword ptr [eax], ecx
// 0059620b  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059620f  8b11                 mov edx, dword ptr [ecx]
// 00596211  83c008               add eax, 8
// 00596214  6a00                 push 0
// 00596216  50                   push eax
// 00596217  8d442454             lea eax, [esp + 0x54]
// 0059621b  50                   push eax
// 0059621c  ffd2                 call edx
// 0059621e  83c40c               add esp, 0xc
// 00596221  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00596225  83ec08               sub esp, 8
// 00596228  8bc4                 mov eax, esp
// 0059622a  8908                 mov dword ptr [eax], ecx
// 0059622c  8b542448             mov edx, dword ptr [esp + 0x48]
// 00596230  895004               mov dword ptr [eax + 4], edx
// 00596233  8b442448             mov eax, dword ptr [esp + 0x48]
// 00596237  89642430             mov dword ptr [esp + 0x30], esp
// 0059623b  85c0                 test eax, eax
// 0059623d  740c                 je 0x59624b
// 0059623f  83c004               add eax, 4
// 00596242  b901000000           mov ecx, 1
// 00596247  f00fc108             lock xadd dword ptr [eax], ecx
// 0059624b  8bcf                 mov ecx, edi
// 0059624d  e8befdffff           call 0x596010
// 00596252  8b742420             mov esi, dword ptr [esp + 0x20]
// 00596256  c644241400           mov byte ptr [esp + 0x14], 0
// 0059625b  85f6                 test esi, esi
// 0059625d  742a                 je 0x596289
// 0059625f  8d5604               lea edx, [esi + 4]
// 00596262  83c8ff               or eax, 0xffffffff
// 00596265  f00fc102             lock xadd dword ptr [edx], eax
// 00596269  751e                 jne 0x596289
// 0059626b  8b16                 mov edx, dword ptr [esi]
// 0059626d  8b4204               mov eax, dword ptr [edx + 4]
// 00596270  8bce                 mov ecx, esi
// 00596272  ffd0                 call eax
// 00596274  8d4e08               lea ecx, [esi + 8]
// 00596277  83caff               or edx, 0xffffffff
// 0059627a  f00fc111             lock xadd dword ptr [ecx], edx
// 0059627e  7509                 jne 0x596289
// 00596280  8b06                 mov eax, dword ptr [esi]
// 00596282  8b5008               mov edx, dword ptr [eax + 8]
// 00596285  8bce                 mov ecx, esi
// 00596287  ffd2                 call edx
// 00596289  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059628d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00596295  85c0                 test eax, eax
// 00596297  7415                 je 0x5962ae
// 00596299  8b00                 mov eax, dword ptr [eax]
// 0059629b  85c0                 test eax, eax
// 0059629d  740f                 je 0x5962ae
// 0059629f  8d4c242c             lea ecx, [esp + 0x2c]
// 005962a3  6a01                 push 1
// 005962a5  51                   push ecx
// 005962a6  8bd1                 mov edx, ecx
// 005962a8  52                   push edx
// 005962a9  ffd0                 call eax
// 005962ab  83c40c               add esp, 0xc
// 005962ae  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005962b2  8bc7                 mov eax, edi
// 005962b4  5f                   pop edi
// 005962b5  64890d00000000       mov dword ptr fs:[0], ecx
// 005962bc  5e                   pop esi
// 005962bd  83c410               add esp, 0x10
// 005962c0  c22800               ret 0x28
// library rbxgs/util\boost.cpp (function ??0?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@12@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
