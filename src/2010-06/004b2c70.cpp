// roc 2010-06 004b2c70  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004b2c70
//
// 004b2c70  6aff                 push -1
// 004b2c72  68e8679900           push 0x9967e8
// 004b2c77  64a100000000         mov eax, dword ptr fs:[0]
// 004b2c7d  50                   push eax
// 004b2c7e  64892500000000       mov dword ptr fs:[0], esp
// 004b2c85  51                   push ecx
// 004b2c86  56                   push esi
// 004b2c87  8bc1                 mov eax, ecx
// 004b2c89  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004b2c8d  83ec08               sub esp, 8
// 004b2c90  8bcc                 mov ecx, esp
// 004b2c92  8911                 mov dword ptr [ecx], edx
// 004b2c94  8b542428             mov edx, dword ptr [esp + 0x28]
// 004b2c98  895104               mov dword ptr [ecx + 4], edx
// 004b2c9b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004b2c9f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004b2ca7  8964240c             mov dword ptr [esp + 0xc], esp
// 004b2cab  85c9                 test ecx, ecx
// 004b2cad  740c                 je 0x4b2cbb
// 004b2caf  83c104               add ecx, 4
// 004b2cb2  ba01000000           mov edx, 1
// 004b2cb7  f00fc111             lock xadd dword ptr [ecx], edx
// 004b2cbb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004b2cbf  8b11                 mov edx, dword ptr [ecx]
// 004b2cc1  8b4804               mov ecx, dword ptr [eax + 4]
// 004b2cc4  03ca                 add ecx, edx
// 004b2cc6  8b10                 mov edx, dword ptr [eax]
// 004b2cc8  ffd2                 call edx
// 004b2cca  8b742420             mov esi, dword ptr [esp + 0x20]
// 004b2cce  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004b2cd6  85f6                 test esi, esi
// 004b2cd8  742a                 je 0x4b2d04
// 004b2cda  8d4604               lea eax, [esi + 4]
// 004b2cdd  83c9ff               or ecx, 0xffffffff
// 004b2ce0  f00fc108             lock xadd dword ptr [eax], ecx
// 004b2ce4  751e                 jne 0x4b2d04
// 004b2ce6  8b16                 mov edx, dword ptr [esi]
// 004b2ce8  8b4204               mov eax, dword ptr [edx + 4]
// 004b2ceb  8bce                 mov ecx, esi
// 004b2ced  ffd0                 call eax
// 004b2cef  8d4e08               lea ecx, [esi + 8]
// 004b2cf2  83caff               or edx, 0xffffffff
// 004b2cf5  f00fc111             lock xadd dword ptr [ecx], edx
// 004b2cf9  7509                 jne 0x4b2d04
// 004b2cfb  8b06                 mov eax, dword ptr [esi]
// 004b2cfd  8b5008               mov edx, dword ptr [eax + 8]
// 004b2d00  8bce                 mov ecx, esi
// 004b2d02  ffd2                 call edx
// 004b2d04  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b2d08  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2d0f  5e                   pop esi
// 004b2d10  83c410               add esp, 0x10
// 004b2d13  c20c00               ret 0xc
// library rbxgs/util\RunStateOwner.cpp (function ??$?RV?$shared_ptr@VRunService@RBX@@@boost@@@?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@QBEXAAV?$shared_ptr@VRunService@RBX@@@2@V?$shared_ptr@VDataModel@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
