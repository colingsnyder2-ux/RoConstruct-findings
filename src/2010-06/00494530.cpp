// roc 2010-06 00494530  unit: seg_00490000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00494530
//
// 00494530  64a100000000         mov eax, dword ptr fs:[0]
// 00494536  6aff                 push -1
// 00494538  6841699800           push 0x986941
// 0049453d  50                   push eax
// 0049453e  64892500000000       mov dword ptr fs:[0], esp
// 00494545  83ec20               sub esp, 0x20
// 00494548  56                   push esi
// 00494549  8bf1                 mov esi, ecx
// 0049454b  8b4638               mov eax, dword ptr [esi + 0x38]
// 0049454e  897024               mov dword ptr [eax + 0x24], esi
// 00494551  833d1831c00001       cmp dword ptr [0xc03118], 1
// 00494558  0f8481000000         je 0x4945df
// 0049455e  57                   push edi
// 0049455f  686c6aa100           push 0xa16a6c
// 00494564  8d4c2410             lea ecx, [esp + 0x10]
// 00494568  ff1510a49e00         call dword ptr [0x9ea410]
// 0049456e  8d44240c             lea eax, [esp + 0xc]
// 00494572  50                   push eax
// 00494573  8d4c240c             lea ecx, [esp + 0xc]
// 00494577  51                   push ecx
// 00494578  8bce                 mov ecx, esi
// 0049457a  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00494582  e829fbffff           call 0x4940b0
// 00494587  8d4c240c             lea ecx, [esp + 0xc]
// 0049458b  c644243002           mov byte ptr [esp + 0x30], 2
// 00494590  ff1500a49e00         call dword ptr [0x9ea400]
// 00494596  8b7c2408             mov edi, dword ptr [esp + 8]
// 0049459a  ff4678               inc dword ptr [esi + 0x78]
// 0049459d  ff4670               inc dword ptr [esi + 0x70]
// 004945a0  8bcf                 mov ecx, edi
// 004945a2  e8093b0000           call 0x4980b0
// 004945a7  8b7638               mov esi, dword ptr [esi + 0x38]
// 004945aa  8d4e0c               lea ecx, [esi + 0xc]
// 004945ad  57                   push edi
// 004945ae  e86d27ffff           call 0x486d20
// 004945b3  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 004945bb  85ff                 test edi, edi
// 004945bd  741f                 je 0x4945de
// 004945bf  8d5704               lea edx, [edi + 4]
// 004945c2  52                   push edx
// 004945c3  ff157ca39e00         call dword ptr [0x9ea37c]
// 004945c9  85c0                 test eax, eax
// 004945cb  7511                 jne 0x4945de
// 004945cd  8bcf                 mov ecx, edi
// 004945cf  e84cf5feff           call 0x483b20
// 004945d4  8b07                 mov eax, dword ptr [edi]
// 004945d6  8b10                 mov edx, dword ptr [eax]
// 004945d8  6a01                 push 1
// 004945da  8bcf                 mov ecx, edi
// 004945dc  ffd2                 call edx
// 004945de  5f                   pop edi
// 004945df  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004945e3  5e                   pop esi
// 004945e4  64890d00000000       mov dword ptr fs:[0], ecx
// 004945eb  83c42c               add esp, 0x2c
// 004945ee  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setVARAreaMilestone@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
