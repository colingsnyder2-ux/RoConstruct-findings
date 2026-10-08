// roc 2010-06 006d33e0  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d33e0
//
// 006d33e0  6aff                 push -1
// 006d33e2  6810a09900           push 0x99a010
// 006d33e7  64a100000000         mov eax, dword ptr fs:[0]
// 006d33ed  50                   push eax
// 006d33ee  64892500000000       mov dword ptr fs:[0], esp
// 006d33f5  51                   push ecx
// 006d33f6  56                   push esi
// 006d33f7  57                   push edi
// 006d33f8  8bf9                 mov edi, ecx
// 006d33fa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d33fe  83ec08               sub esp, 8
// 006d3401  8bc4                 mov eax, esp
// 006d3403  8908                 mov dword ptr [eax], ecx
// 006d3405  8b542428             mov edx, dword ptr [esp + 0x28]
// 006d3409  895004               mov dword ptr [eax + 4], edx
// 006d340c  8b442428             mov eax, dword ptr [esp + 0x28]
// 006d3410  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 006d3418  89642410             mov dword ptr [esp + 0x10], esp
// 006d341c  85c0                 test eax, eax
// 006d341e  740c                 je 0x6d342c
// 006d3420  83c004               add eax, 4
// 006d3423  b901000000           mov ecx, 1
// 006d3428  f00fc108             lock xadd dword ptr [eax], ecx
// 006d342c  8bcf                 mov ecx, edi
// 006d342e  e80d020500           call 0x723640
// 006d3433  8b442428             mov eax, dword ptr [esp + 0x28]
// 006d3437  8b542424             mov edx, dword ptr [esp + 0x24]
// 006d343b  895708               mov dword ptr [edi + 8], edx
// 006d343e  89470c               mov dword ptr [edi + 0xc], eax
// 006d3441  85c0                 test eax, eax
// 006d3443  7410                 je 0x6d3455
// 006d3445  83c004               add eax, 4
// 006d3448  b901000000           mov ecx, 1
// 006d344d  f00fc108             lock xadd dword ptr [eax], ecx
// 006d3451  8b442428             mov eax, dword ptr [esp + 0x28]
// 006d3455  8b742420             mov esi, dword ptr [esp + 0x20]
// 006d3459  c644241400           mov byte ptr [esp + 0x14], 0
// 006d345e  85f6                 test esi, esi
// 006d3460  742e                 je 0x6d3490
// 006d3462  8d5604               lea edx, [esi + 4]
// 006d3465  83c8ff               or eax, 0xffffffff
// 006d3468  f00fc102             lock xadd dword ptr [edx], eax
// 006d346c  751e                 jne 0x6d348c
// 006d346e  8b16                 mov edx, dword ptr [esi]
// 006d3470  8b4204               mov eax, dword ptr [edx + 4]
// 006d3473  8bce                 mov ecx, esi
// 006d3475  ffd0                 call eax
// 006d3477  8d4e08               lea ecx, [esi + 8]
// 006d347a  83caff               or edx, 0xffffffff
// 006d347d  f00fc111             lock xadd dword ptr [ecx], edx
// 006d3481  7509                 jne 0x6d348c
// 006d3483  8b06                 mov eax, dword ptr [esi]
// 006d3485  8b5008               mov edx, dword ptr [eax + 8]
// 006d3488  8bce                 mov ecx, esi
// 006d348a  ffd2                 call edx
// 006d348c  8b442428             mov eax, dword ptr [esp + 0x28]
// 006d3490  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006d3498  85c0                 test eax, eax
// 006d349a  742c                 je 0x6d34c8
// 006d349c  8bf0                 mov esi, eax
// 006d349e  83c004               add eax, 4
// 006d34a1  83c9ff               or ecx, 0xffffffff
// 006d34a4  f00fc108             lock xadd dword ptr [eax], ecx
// 006d34a8  751e                 jne 0x6d34c8
// 006d34aa  8b16                 mov edx, dword ptr [esi]
// 006d34ac  8b4204               mov eax, dword ptr [edx + 4]
// 006d34af  8bce                 mov ecx, esi
// 006d34b1  ffd0                 call eax
// 006d34b3  8d4e08               lea ecx, [esi + 8]
// 006d34b6  83caff               or edx, 0xffffffff
// 006d34b9  f00fc111             lock xadd dword ptr [ecx], edx
// 006d34bd  7509                 jne 0x6d34c8
// 006d34bf  8b06                 mov eax, dword ptr [esi]
// 006d34c1  8b5008               mov edx, dword ptr [eax + 8]
// 006d34c4  8bce                 mov ecx, esi
// 006d34c6  ffd2                 call edx
// 006d34c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d34cc  8bc7                 mov eax, edi
// 006d34ce  5f                   pop edi
// 006d34cf  64890d00000000       mov dword ptr fs:[0], ecx
// 006d34d6  5e                   pop esi
// 006d34d7  83c410               add esp, 0x10
// 006d34da  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
