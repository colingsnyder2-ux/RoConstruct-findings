// roc 2009-12 004cd540  unit: G3D::VARArea  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cd540
//
// 004cd540  6aff                 push -1
// 004cd542  68eba59400           push 0x94a5eb
// 004cd547  64a100000000         mov eax, dword ptr fs:[0]
// 004cd54d  50                   push eax
// 004cd54e  64892500000000       mov dword ptr fs:[0], esp
// 004cd555  51                   push ecx
// 004cd556  6a30                 push 0x30
// 004cd558  c744240400000000     mov dword ptr [esp + 4], 0
// 004cd560  e8fb623200           call 0x7f3860
// 004cd565  83c404               add esp, 4
// 004cd568  890424               mov dword ptr [esp], eax
// 004cd56b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004cd573  85c0                 test eax, eax
// 004cd575  740e                 je 0x4cd585
// 004cd577  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004cd57b  51                   push ecx
// 004cd57c  8bc8                 mov ecx, eax
// 004cd57e  e84de70000           call 0x4dbcd0
// 004cd583  eb02                 jmp 0x4cd587
// 004cd585  33c0                 xor eax, eax
// 004cd587  56                   push esi
// 004cd588  8b742418             mov esi, dword ptr [esp + 0x18]
// 004cd58c  50                   push eax
// 004cd58d  8bce                 mov ecx, esi
// 004cd58f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004cd597  c70600000000         mov dword ptr [esi], 0
// 004cd59d  e8cee5f7ff           call 0x44bb70
// 004cd5a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cd5a6  8bc6                 mov eax, esi
// 004cd5a8  5e                   pop esi
// 004cd5a9  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd5b0  83c410               add esp, 0x10
// 004cd5b3  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?createMilestone@RenderDevice@G3D@@QAE?AV?$ReferenceCountedPointer@VMilestone@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
