// roc 2012-06 00446550  unit: AsyncResult  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00446550
//
// 00446550  6aff                 push -1
// 00446552  68c0d2aa00           push 0xaad2c0
// 00446557  64a100000000         mov eax, dword ptr fs:[0]
// 0044655d  50                   push eax
// 0044655e  64892500000000       mov dword ptr fs:[0], esp
// 00446565  51                   push ecx
// 00446566  56                   push esi
// 00446567  57                   push edi
// 00446568  8bf9                 mov edi, ecx
// 0044656a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0044656e  83ec08               sub esp, 8
// 00446571  8bc4                 mov eax, esp
// 00446573  8908                 mov dword ptr [eax], ecx
// 00446575  8b542428             mov edx, dword ptr [esp + 0x28]
// 00446579  895004               mov dword ptr [eax + 4], edx
// 0044657c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00446580  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00446588  89642410             mov dword ptr [esp + 0x10], esp
// 0044658c  85c0                 test eax, eax
// 0044658e  740c                 je 0x44659c
// 00446590  83c004               add eax, 4
// 00446593  b901000000           mov ecx, 1
// 00446598  f00fc108             lock xadd dword ptr [eax], ecx
// 0044659c  8bcf                 mov ecx, edi
// 0044659e  e8cdc51400           call 0x592b70
// 004465a3  8b442428             mov eax, dword ptr [esp + 0x28]
// 004465a7  8b542424             mov edx, dword ptr [esp + 0x24]
// 004465ab  895708               mov dword ptr [edi + 8], edx
// 004465ae  89470c               mov dword ptr [edi + 0xc], eax
// 004465b1  85c0                 test eax, eax
// 004465b3  7410                 je 0x4465c5
// 004465b5  83c004               add eax, 4
// 004465b8  b901000000           mov ecx, 1
// 004465bd  f00fc108             lock xadd dword ptr [eax], ecx
// 004465c1  8b442428             mov eax, dword ptr [esp + 0x28]
// 004465c5  8b742420             mov esi, dword ptr [esp + 0x20]
// 004465c9  c644241400           mov byte ptr [esp + 0x14], 0
// 004465ce  85f6                 test esi, esi
// 004465d0  742e                 je 0x446600
// 004465d2  8d5604               lea edx, [esi + 4]
// 004465d5  83c8ff               or eax, 0xffffffff
// 004465d8  f00fc102             lock xadd dword ptr [edx], eax
// 004465dc  751e                 jne 0x4465fc
// 004465de  8b16                 mov edx, dword ptr [esi]
// 004465e0  8b4204               mov eax, dword ptr [edx + 4]
// 004465e3  8bce                 mov ecx, esi
// 004465e5  ffd0                 call eax
// 004465e7  8d4e08               lea ecx, [esi + 8]
// 004465ea  83caff               or edx, 0xffffffff
// 004465ed  f00fc111             lock xadd dword ptr [ecx], edx
// 004465f1  7509                 jne 0x4465fc
// 004465f3  8b06                 mov eax, dword ptr [esi]
// 004465f5  8b5008               mov edx, dword ptr [eax + 8]
// 004465f8  8bce                 mov ecx, esi
// 004465fa  ffd2                 call edx
// 004465fc  8b442428             mov eax, dword ptr [esp + 0x28]
// 00446600  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00446608  85c0                 test eax, eax
// 0044660a  742c                 je 0x446638
// 0044660c  8bf0                 mov esi, eax
// 0044660e  83c004               add eax, 4
// 00446611  83c9ff               or ecx, 0xffffffff
// 00446614  f00fc108             lock xadd dword ptr [eax], ecx
// 00446618  751e                 jne 0x446638
// 0044661a  8b16                 mov edx, dword ptr [esi]
// 0044661c  8b4204               mov eax, dword ptr [edx + 4]
// 0044661f  8bce                 mov ecx, esi
// 00446621  ffd0                 call eax
// 00446623  8d4e08               lea ecx, [esi + 8]
// 00446626  83caff               or edx, 0xffffffff
// 00446629  f00fc111             lock xadd dword ptr [ecx], edx
// 0044662d  7509                 jne 0x446638
// 0044662f  8b06                 mov eax, dword ptr [esi]
// 00446631  8b5008               mov edx, dword ptr [eax + 8]
// 00446634  8bce                 mov ecx, esi
// 00446636  ffd2                 call edx
// 00446638  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044663c  8bc7                 mov eax, edi
// 0044663e  5f                   pop edi
// 0044663f  64890d00000000       mov dword ptr fs:[0], ecx
// 00446646  5e                   pop esi
// 00446647  83c410               add esp, 0x10
// 0044664a  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
