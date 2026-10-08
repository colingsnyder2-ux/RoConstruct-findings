// roc 2008-06 00554ca0  unit: RBX::RunService  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554ca0
//
// 00554ca0  6aff                 push -1
// 00554ca2  6800ef7b00           push 0x7bef00
// 00554ca7  64a100000000         mov eax, dword ptr fs:[0]
// 00554cad  50                   push eax
// 00554cae  64892500000000       mov dword ptr fs:[0], esp
// 00554cb5  51                   push ecx
// 00554cb6  56                   push esi
// 00554cb7  57                   push edi
// 00554cb8  8bf9                 mov edi, ecx
// 00554cba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00554cbe  83ec08               sub esp, 8
// 00554cc1  8bc4                 mov eax, esp
// 00554cc3  8908                 mov dword ptr [eax], ecx
// 00554cc5  8b542428             mov edx, dword ptr [esp + 0x28]
// 00554cc9  895004               mov dword ptr [eax + 4], edx
// 00554ccc  8b442428             mov eax, dword ptr [esp + 0x28]
// 00554cd0  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00554cd8  89642410             mov dword ptr [esp + 0x10], esp
// 00554cdc  85c0                 test eax, eax
// 00554cde  740c                 je 0x554cec
// 00554ce0  83c004               add eax, 4
// 00554ce3  b901000000           mov ecx, 1
// 00554ce8  f00fc108             lock xadd dword ptr [eax], ecx
// 00554cec  8bcf                 mov ecx, edi
// 00554cee  e81dfbffff           call 0x554810
// 00554cf3  8b442428             mov eax, dword ptr [esp + 0x28]
// 00554cf7  8b542424             mov edx, dword ptr [esp + 0x24]
// 00554cfb  895708               mov dword ptr [edi + 8], edx
// 00554cfe  89470c               mov dword ptr [edi + 0xc], eax
// 00554d01  85c0                 test eax, eax
// 00554d03  7410                 je 0x554d15
// 00554d05  83c004               add eax, 4
// 00554d08  b901000000           mov ecx, 1
// 00554d0d  f00fc108             lock xadd dword ptr [eax], ecx
// 00554d11  8b442428             mov eax, dword ptr [esp + 0x28]
// 00554d15  8b742420             mov esi, dword ptr [esp + 0x20]
// 00554d19  c644241400           mov byte ptr [esp + 0x14], 0
// 00554d1e  85f6                 test esi, esi
// 00554d20  742e                 je 0x554d50
// 00554d22  8d5604               lea edx, [esi + 4]
// 00554d25  83c8ff               or eax, 0xffffffff
// 00554d28  f00fc102             lock xadd dword ptr [edx], eax
// 00554d2c  751e                 jne 0x554d4c
// 00554d2e  8b16                 mov edx, dword ptr [esi]
// 00554d30  8b4204               mov eax, dword ptr [edx + 4]
// 00554d33  8bce                 mov ecx, esi
// 00554d35  ffd0                 call eax
// 00554d37  8d4e08               lea ecx, [esi + 8]
// 00554d3a  83caff               or edx, 0xffffffff
// 00554d3d  f00fc111             lock xadd dword ptr [ecx], edx
// 00554d41  7509                 jne 0x554d4c
// 00554d43  8b06                 mov eax, dword ptr [esi]
// 00554d45  8b5008               mov edx, dword ptr [eax + 8]
// 00554d48  8bce                 mov ecx, esi
// 00554d4a  ffd2                 call edx
// 00554d4c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00554d50  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00554d58  85c0                 test eax, eax
// 00554d5a  742c                 je 0x554d88
// 00554d5c  8bf0                 mov esi, eax
// 00554d5e  83c004               add eax, 4
// 00554d61  83c9ff               or ecx, 0xffffffff
// 00554d64  f00fc108             lock xadd dword ptr [eax], ecx
// 00554d68  751e                 jne 0x554d88
// 00554d6a  8b16                 mov edx, dword ptr [esi]
// 00554d6c  8b4204               mov eax, dword ptr [edx + 4]
// 00554d6f  8bce                 mov ecx, esi
// 00554d71  ffd0                 call eax
// 00554d73  8d4e08               lea ecx, [esi + 8]
// 00554d76  83caff               or edx, 0xffffffff
// 00554d79  f00fc111             lock xadd dword ptr [ecx], edx
// 00554d7d  7509                 jne 0x554d88
// 00554d7f  8b06                 mov eax, dword ptr [esi]
// 00554d81  8b5008               mov edx, dword ptr [eax + 8]
// 00554d84  8bce                 mov ecx, esi
// 00554d86  ffd2                 call edx
// 00554d88  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00554d8c  8bc7                 mov eax, edi
// 00554d8e  5f                   pop edi
// 00554d8f  64890d00000000       mov dword ptr fs:[0], ecx
// 00554d96  5e                   pop esi
// 00554d97  83c410               add esp, 0x10
// 00554d9a  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
