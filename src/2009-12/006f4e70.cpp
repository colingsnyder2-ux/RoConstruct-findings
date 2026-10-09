// roc 2009-12 006f4e70  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f4e70
//
// 006f4e70  6aff                 push -1
// 006f4e72  68f0bd9400           push 0x94bdf0
// 006f4e77  64a100000000         mov eax, dword ptr fs:[0]
// 006f4e7d  50                   push eax
// 006f4e7e  64892500000000       mov dword ptr fs:[0], esp
// 006f4e85  51                   push ecx
// 006f4e86  56                   push esi
// 006f4e87  57                   push edi
// 006f4e88  8bf9                 mov edi, ecx
// 006f4e8a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006f4e8e  83ec08               sub esp, 8
// 006f4e91  8bc4                 mov eax, esp
// 006f4e93  8908                 mov dword ptr [eax], ecx
// 006f4e95  8b542428             mov edx, dword ptr [esp + 0x28]
// 006f4e99  895004               mov dword ptr [eax + 4], edx
// 006f4e9c  8b442428             mov eax, dword ptr [esp + 0x28]
// 006f4ea0  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 006f4ea8  89642410             mov dword ptr [esp + 0x10], esp
// 006f4eac  85c0                 test eax, eax
// 006f4eae  740c                 je 0x6f4ebc
// 006f4eb0  83c004               add eax, 4
// 006f4eb3  b901000000           mov ecx, 1
// 006f4eb8  f00fc108             lock xadd dword ptr [eax], ecx
// 006f4ebc  8bcf                 mov ecx, edi
// 006f4ebe  e81dbe0400           call 0x740ce0
// 006f4ec3  8b442428             mov eax, dword ptr [esp + 0x28]
// 006f4ec7  8b542424             mov edx, dword ptr [esp + 0x24]
// 006f4ecb  895708               mov dword ptr [edi + 8], edx
// 006f4ece  89470c               mov dword ptr [edi + 0xc], eax
// 006f4ed1  85c0                 test eax, eax
// 006f4ed3  7410                 je 0x6f4ee5
// 006f4ed5  83c004               add eax, 4
// 006f4ed8  b901000000           mov ecx, 1
// 006f4edd  f00fc108             lock xadd dword ptr [eax], ecx
// 006f4ee1  8b442428             mov eax, dword ptr [esp + 0x28]
// 006f4ee5  8b742420             mov esi, dword ptr [esp + 0x20]
// 006f4ee9  c644241400           mov byte ptr [esp + 0x14], 0
// 006f4eee  85f6                 test esi, esi
// 006f4ef0  742e                 je 0x6f4f20
// 006f4ef2  8d5604               lea edx, [esi + 4]
// 006f4ef5  83c8ff               or eax, 0xffffffff
// 006f4ef8  f00fc102             lock xadd dword ptr [edx], eax
// 006f4efc  751e                 jne 0x6f4f1c
// 006f4efe  8b16                 mov edx, dword ptr [esi]
// 006f4f00  8b4204               mov eax, dword ptr [edx + 4]
// 006f4f03  8bce                 mov ecx, esi
// 006f4f05  ffd0                 call eax
// 006f4f07  8d4e08               lea ecx, [esi + 8]
// 006f4f0a  83caff               or edx, 0xffffffff
// 006f4f0d  f00fc111             lock xadd dword ptr [ecx], edx
// 006f4f11  7509                 jne 0x6f4f1c
// 006f4f13  8b06                 mov eax, dword ptr [esi]
// 006f4f15  8b5008               mov edx, dword ptr [eax + 8]
// 006f4f18  8bce                 mov ecx, esi
// 006f4f1a  ffd2                 call edx
// 006f4f1c  8b442428             mov eax, dword ptr [esp + 0x28]
// 006f4f20  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006f4f28  85c0                 test eax, eax
// 006f4f2a  742c                 je 0x6f4f58
// 006f4f2c  8bf0                 mov esi, eax
// 006f4f2e  83c004               add eax, 4
// 006f4f31  83c9ff               or ecx, 0xffffffff
// 006f4f34  f00fc108             lock xadd dword ptr [eax], ecx
// 006f4f38  751e                 jne 0x6f4f58
// 006f4f3a  8b16                 mov edx, dword ptr [esi]
// 006f4f3c  8b4204               mov eax, dword ptr [edx + 4]
// 006f4f3f  8bce                 mov ecx, esi
// 006f4f41  ffd0                 call eax
// 006f4f43  8d4e08               lea ecx, [esi + 8]
// 006f4f46  83caff               or edx, 0xffffffff
// 006f4f49  f00fc111             lock xadd dword ptr [ecx], edx
// 006f4f4d  7509                 jne 0x6f4f58
// 006f4f4f  8b06                 mov eax, dword ptr [esi]
// 006f4f51  8b5008               mov edx, dword ptr [eax + 8]
// 006f4f54  8bce                 mov ecx, esi
// 006f4f56  ffd2                 call edx
// 006f4f58  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f4f5c  8bc7                 mov eax, edi
// 006f4f5e  5f                   pop edi
// 006f4f5f  64890d00000000       mov dword ptr fs:[0], ecx
// 006f4f66  5e                   pop esi
// 006f4f67  83c410               add esp, 0x10
// 006f4f6a  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
