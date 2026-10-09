// roc 2009-12 00505360  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00505360
//
// 00505360  6aff                 push -1
// 00505362  6828799400           push 0x947928
// 00505367  64a100000000         mov eax, dword ptr fs:[0]
// 0050536d  50                   push eax
// 0050536e  64892500000000       mov dword ptr fs:[0], esp
// 00505375  51                   push ecx
// 00505376  56                   push esi
// 00505377  8bc1                 mov eax, ecx
// 00505379  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0050537d  83ec08               sub esp, 8
// 00505380  8bcc                 mov ecx, esp
// 00505382  8911                 mov dword ptr [ecx], edx
// 00505384  8b542428             mov edx, dword ptr [esp + 0x28]
// 00505388  895104               mov dword ptr [ecx + 4], edx
// 0050538b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0050538f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00505397  8964240c             mov dword ptr [esp + 0xc], esp
// 0050539b  85c9                 test ecx, ecx
// 0050539d  740c                 je 0x5053ab
// 0050539f  83c104               add ecx, 4
// 005053a2  ba01000000           mov edx, 1
// 005053a7  f00fc111             lock xadd dword ptr [ecx], edx
// 005053ab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005053af  8b11                 mov edx, dword ptr [ecx]
// 005053b1  8b4804               mov ecx, dword ptr [eax + 4]
// 005053b4  03ca                 add ecx, edx
// 005053b6  8b10                 mov edx, dword ptr [eax]
// 005053b8  ffd2                 call edx
// 005053ba  8b742420             mov esi, dword ptr [esp + 0x20]
// 005053be  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005053c6  85f6                 test esi, esi
// 005053c8  742a                 je 0x5053f4
// 005053ca  8d4604               lea eax, [esi + 4]
// 005053cd  83c9ff               or ecx, 0xffffffff
// 005053d0  f00fc108             lock xadd dword ptr [eax], ecx
// 005053d4  751e                 jne 0x5053f4
// 005053d6  8b16                 mov edx, dword ptr [esi]
// 005053d8  8b4204               mov eax, dword ptr [edx + 4]
// 005053db  8bce                 mov ecx, esi
// 005053dd  ffd0                 call eax
// 005053df  8d4e08               lea ecx, [esi + 8]
// 005053e2  83caff               or edx, 0xffffffff
// 005053e5  f00fc111             lock xadd dword ptr [ecx], edx
// 005053e9  7509                 jne 0x5053f4
// 005053eb  8b06                 mov eax, dword ptr [esi]
// 005053ed  8b5008               mov edx, dword ptr [eax + 8]
// 005053f0  8bce                 mov ecx, esi
// 005053f2  ffd2                 call edx
// 005053f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005053f8  64890d00000000       mov dword ptr fs:[0], ecx
// 005053ff  5e                   pop esi
// 00505400  83c410               add esp, 0x10
// 00505403  c20c00               ret 0xc
// library rbxgs/util\RunStateOwner.cpp (function ??$?RV?$shared_ptr@VRunService@RBX@@@boost@@@?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@QBEXAAV?$shared_ptr@VRunService@RBX@@@2@V?$shared_ptr@VDataModel@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
