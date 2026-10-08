// roc 2008-06 00596010  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00596010
//
// 00596010  6aff                 push -1
// 00596012  6898217d00           push 0x7d2198
// 00596017  64a100000000         mov eax, dword ptr fs:[0]
// 0059601d  50                   push eax
// 0059601e  64892500000000       mov dword ptr fs:[0], esp
// 00596025  83ec08               sub esp, 8
// 00596028  56                   push esi
// 00596029  57                   push edi
// 0059602a  8bf9                 mov edi, ecx
// 0059602c  897c2408             mov dword ptr [esp + 8], edi
// 00596030  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00596034  83ec08               sub esp, 8
// 00596037  8bc4                 mov eax, esp
// 00596039  8908                 mov dword ptr [eax], ecx
// 0059603b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059603f  895004               mov dword ptr [eax + 4], edx
// 00596042  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00596046  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0059604e  89642414             mov dword ptr [esp + 0x14], esp
// 00596052  85c0                 test eax, eax
// 00596054  740c                 je 0x596062
// 00596056  83c004               add eax, 4
// 00596059  b901000000           mov ecx, 1
// 0059605e  f00fc108             lock xadd dword ptr [eax], ecx
// 00596062  8bcf                 mov ecx, edi
// 00596064  e8a7e7fbff           call 0x554810
// 00596069  8b442428             mov eax, dword ptr [esp + 0x28]
// 0059606d  c644241802           mov byte ptr [esp + 0x18], 2
// 00596072  c7470800000000       mov dword ptr [edi + 8], 0
// 00596079  85c0                 test eax, eax
// 0059607b  7419                 je 0x596096
// 0059607d  6a00                 push 0
// 0059607f  8d5710               lea edx, [edi + 0x10]
// 00596082  52                   push edx
// 00596083  8d4c2438             lea ecx, [esp + 0x38]
// 00596087  894708               mov dword ptr [edi + 8], eax
// 0059608a  8b10                 mov edx, dword ptr [eax]
// 0059608c  51                   push ecx
// 0059608d  ffd2                 call edx
// 0059608f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00596093  83c40c               add esp, 0xc
// 00596096  8b742424             mov esi, dword ptr [esp + 0x24]
// 0059609a  c644241800           mov byte ptr [esp + 0x18], 0
// 0059609f  85f6                 test esi, esi
// 005960a1  742e                 je 0x5960d1
// 005960a3  8d4604               lea eax, [esi + 4]
// 005960a6  83c9ff               or ecx, 0xffffffff
// 005960a9  f00fc108             lock xadd dword ptr [eax], ecx
// 005960ad  751e                 jne 0x5960cd
// 005960af  8b16                 mov edx, dword ptr [esi]
// 005960b1  8b4204               mov eax, dword ptr [edx + 4]
// 005960b4  8bce                 mov ecx, esi
// 005960b6  ffd0                 call eax
// 005960b8  8d4e08               lea ecx, [esi + 8]
// 005960bb  83caff               or edx, 0xffffffff
// 005960be  f00fc111             lock xadd dword ptr [ecx], edx
// 005960c2  7509                 jne 0x5960cd
// 005960c4  8b06                 mov eax, dword ptr [esi]
// 005960c6  8b5008               mov edx, dword ptr [eax + 8]
// 005960c9  8bce                 mov ecx, esi
// 005960cb  ffd2                 call edx
// 005960cd  8b442428             mov eax, dword ptr [esp + 0x28]
// 005960d1  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005960d9  85c0                 test eax, eax
// 005960db  7415                 je 0x5960f2
// 005960dd  8b00                 mov eax, dword ptr [eax]
// 005960df  85c0                 test eax, eax
// 005960e1  740f                 je 0x5960f2
// 005960e3  8d4c2430             lea ecx, [esp + 0x30]
// 005960e7  6a01                 push 1
// 005960e9  51                   push ecx
// 005960ea  8bd1                 mov edx, ecx
// 005960ec  52                   push edx
// 005960ed  ffd0                 call eax
// 005960ef  83c40c               add esp, 0xc
// 005960f2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005960f6  8bc7                 mov eax, edi
// 005960f8  5f                   pop edi
// 005960f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00596100  5e                   pop esi
// 00596101  83c414               add esp, 0x14
// 00596104  c22800               ret 0x28
// library rbxgs/util\boost.cpp (function ??0?$storage2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@12@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
