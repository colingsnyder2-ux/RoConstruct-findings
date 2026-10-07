// roc 2008-06 00479880  unit: CInstanceRecord::CNameItem  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00479880
//
// 00479880  6aff                 push -1
// 00479882  683bf47b00           push 0x7bf43b
// 00479887  64a100000000         mov eax, dword ptr fs:[0]
// 0047988d  50                   push eax
// 0047988e  64892500000000       mov dword ptr fs:[0], esp
// 00479895  51                   push ecx
// 00479896  6a30                 push 0x30
// 00479898  c744240400000000     mov dword ptr [esp + 4], 0
// 004798a0  e87b702200           call 0x6a0920
// 004798a5  83c404               add esp, 4
// 004798a8  890424               mov dword ptr [esp], eax
// 004798ab  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004798b3  85c0                 test eax, eax
// 004798b5  740e                 je 0x4798c5
// 004798b7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004798bb  51                   push ecx
// 004798bc  8bc8                 mov ecx, eax
// 004798be  e81db90000           call 0x4851e0
// 004798c3  eb02                 jmp 0x4798c7
// 004798c5  33c0                 xor eax, eax
// 004798c7  56                   push esi
// 004798c8  8b742418             mov esi, dword ptr [esp + 0x18]
// 004798cc  50                   push eax
// 004798cd  8bce                 mov ecx, esi
// 004798cf  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004798d7  c70600000000         mov dword ptr [esi], 0
// 004798dd  e8bef61100           call 0x598fa0
// 004798e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004798e6  8bc6                 mov eax, esi
// 004798e8  5e                   pop esi
// 004798e9  64890d00000000       mov dword ptr fs:[0], ecx
// 004798f0  83c410               add esp, 0x10
// 004798f3  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?createMilestone@RenderDevice@G3D@@QAE?AV?$ReferenceCountedPointer@VMilestone@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
