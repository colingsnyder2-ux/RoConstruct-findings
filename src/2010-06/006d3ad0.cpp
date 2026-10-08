// roc 2010-06 006d3ad0  unit: RBX::SkateboardPlatform  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d3ad0
//
// 006d3ad0  6aff                 push -1
// 006d3ad2  6810a09900           push 0x99a010
// 006d3ad7  64a100000000         mov eax, dword ptr fs:[0]
// 006d3add  50                   push eax
// 006d3ade  64892500000000       mov dword ptr fs:[0], esp
// 006d3ae5  51                   push ecx
// 006d3ae6  56                   push esi
// 006d3ae7  57                   push edi
// 006d3ae8  8bf9                 mov edi, ecx
// 006d3aea  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006d3aee  83ec08               sub esp, 8
// 006d3af1  8bc4                 mov eax, esp
// 006d3af3  8908                 mov dword ptr [eax], ecx
// 006d3af5  8b542430             mov edx, dword ptr [esp + 0x30]
// 006d3af9  895004               mov dword ptr [eax + 4], edx
// 006d3afc  8b442430             mov eax, dword ptr [esp + 0x30]
// 006d3b00  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 006d3b08  89642410             mov dword ptr [esp + 0x10], esp
// 006d3b0c  85c0                 test eax, eax
// 006d3b0e  740c                 je 0x6d3b1c
// 006d3b10  83c004               add eax, 4
// 006d3b13  b901000000           mov ecx, 1
// 006d3b18  f00fc108             lock xadd dword ptr [eax], ecx
// 006d3b1c  8b542424             mov edx, dword ptr [esp + 0x24]
// 006d3b20  83ec08               sub esp, 8
// 006d3b23  8bc4                 mov eax, esp
// 006d3b25  8910                 mov dword ptr [eax], edx
// 006d3b27  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006d3b2b  894804               mov dword ptr [eax + 4], ecx
// 006d3b2e  8b442430             mov eax, dword ptr [esp + 0x30]
// 006d3b32  89642418             mov dword ptr [esp + 0x18], esp
// 006d3b36  85c0                 test eax, eax
// 006d3b38  740c                 je 0x6d3b46
// 006d3b3a  83c004               add eax, 4
// 006d3b3d  ba01000000           mov edx, 1
// 006d3b42  f00fc110             lock xadd dword ptr [eax], edx
// 006d3b46  8bcf                 mov ecx, edi
// 006d3b48  e893f8ffff           call 0x6d33e0
// 006d3b4d  8b742420             mov esi, dword ptr [esp + 0x20]
// 006d3b51  c644241400           mov byte ptr [esp + 0x14], 0
// 006d3b56  85f6                 test esi, esi
// 006d3b58  742a                 je 0x6d3b84
// 006d3b5a  8d4604               lea eax, [esi + 4]
// 006d3b5d  83c9ff               or ecx, 0xffffffff
// 006d3b60  f00fc108             lock xadd dword ptr [eax], ecx
// 006d3b64  751e                 jne 0x6d3b84
// 006d3b66  8b16                 mov edx, dword ptr [esi]
// 006d3b68  8b4204               mov eax, dword ptr [edx + 4]
// 006d3b6b  8bce                 mov ecx, esi
// 006d3b6d  ffd0                 call eax
// 006d3b6f  8d4e08               lea ecx, [esi + 8]
// 006d3b72  83caff               or edx, 0xffffffff
// 006d3b75  f00fc111             lock xadd dword ptr [ecx], edx
// 006d3b79  7509                 jne 0x6d3b84
// 006d3b7b  8b06                 mov eax, dword ptr [esi]
// 006d3b7d  8b5008               mov edx, dword ptr [eax + 8]
// 006d3b80  8bce                 mov ecx, esi
// 006d3b82  ffd2                 call edx
// 006d3b84  8b742428             mov esi, dword ptr [esp + 0x28]
// 006d3b88  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006d3b90  85f6                 test esi, esi
// 006d3b92  742a                 je 0x6d3bbe
// 006d3b94  8d4604               lea eax, [esi + 4]
// 006d3b97  83c9ff               or ecx, 0xffffffff
// 006d3b9a  f00fc108             lock xadd dword ptr [eax], ecx
// 006d3b9e  751e                 jne 0x6d3bbe
// 006d3ba0  8b16                 mov edx, dword ptr [esi]
// 006d3ba2  8b4204               mov eax, dword ptr [edx + 4]
// 006d3ba5  8bce                 mov ecx, esi
// 006d3ba7  ffd0                 call eax
// 006d3ba9  8d4e08               lea ecx, [esi + 8]
// 006d3bac  83caff               or edx, 0xffffffff
// 006d3baf  f00fc111             lock xadd dword ptr [ecx], edx
// 006d3bb3  7509                 jne 0x6d3bbe
// 006d3bb5  8b06                 mov eax, dword ptr [esi]
// 006d3bb7  8b5008               mov edx, dword ptr [eax + 8]
// 006d3bba  8bce                 mov ecx, esi
// 006d3bbc  ffd2                 call edx
// 006d3bbe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3bc2  8bc7                 mov eax, edi
// 006d3bc4  5f                   pop edi
// 006d3bc5  64890d00000000       mov dword ptr fs:[0], ecx
// 006d3bcc  5e                   pop esi
// 006d3bcd  83c410               add esp, 0x10
// 006d3bd0  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
