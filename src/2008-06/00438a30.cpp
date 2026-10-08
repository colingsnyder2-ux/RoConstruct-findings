// roc 2008-06 00438a30  unit: IIHAAH::?$CMap  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00438a30
//
// 00438a30  6aff                 push -1
// 00438a32  6818047c00           push 0x7c0418
// 00438a37  64a100000000         mov eax, dword ptr fs:[0]
// 00438a3d  50                   push eax
// 00438a3e  64892500000000       mov dword ptr fs:[0], esp
// 00438a45  51                   push ecx
// 00438a46  56                   push esi
// 00438a47  8bc1                 mov eax, ecx
// 00438a49  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00438a4d  83ec08               sub esp, 8
// 00438a50  8bcc                 mov ecx, esp
// 00438a52  8911                 mov dword ptr [ecx], edx
// 00438a54  8b542428             mov edx, dword ptr [esp + 0x28]
// 00438a58  895104               mov dword ptr [ecx + 4], edx
// 00438a5b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00438a5f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00438a67  8964240c             mov dword ptr [esp + 0xc], esp
// 00438a6b  85c9                 test ecx, ecx
// 00438a6d  740c                 je 0x438a7b
// 00438a6f  83c104               add ecx, 4
// 00438a72  ba01000000           mov edx, 1
// 00438a77  f00fc111             lock xadd dword ptr [ecx], edx
// 00438a7b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00438a7f  8b11                 mov edx, dword ptr [ecx]
// 00438a81  8b4804               mov ecx, dword ptr [eax + 4]
// 00438a84  03ca                 add ecx, edx
// 00438a86  8b10                 mov edx, dword ptr [eax]
// 00438a88  ffd2                 call edx
// 00438a8a  8b742420             mov esi, dword ptr [esp + 0x20]
// 00438a8e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00438a96  85f6                 test esi, esi
// 00438a98  742a                 je 0x438ac4
// 00438a9a  8d4604               lea eax, [esi + 4]
// 00438a9d  83c9ff               or ecx, 0xffffffff
// 00438aa0  f00fc108             lock xadd dword ptr [eax], ecx
// 00438aa4  751e                 jne 0x438ac4
// 00438aa6  8b16                 mov edx, dword ptr [esi]
// 00438aa8  8b4204               mov eax, dword ptr [edx + 4]
// 00438aab  8bce                 mov ecx, esi
// 00438aad  ffd0                 call eax
// 00438aaf  8d4e08               lea ecx, [esi + 8]
// 00438ab2  83caff               or edx, 0xffffffff
// 00438ab5  f00fc111             lock xadd dword ptr [ecx], edx
// 00438ab9  7509                 jne 0x438ac4
// 00438abb  8b06                 mov eax, dword ptr [esi]
// 00438abd  8b5008               mov edx, dword ptr [eax + 8]
// 00438ac0  8bce                 mov ecx, esi
// 00438ac2  ffd2                 call edx
// 00438ac4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00438ac8  64890d00000000       mov dword ptr fs:[0], ecx
// 00438acf  5e                   pop esi
// 00438ad0  83c410               add esp, 0x10
// 00438ad3  c20c00               ret 0xc
// library rbxgs/util\RunStateOwner.cpp (function ??$?RV?$shared_ptr@VRunService@RBX@@@boost@@@?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@QBEXAAV?$shared_ptr@VRunService@RBX@@@2@V?$shared_ptr@VDataModel@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
