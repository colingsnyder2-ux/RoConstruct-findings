// roc 2009-06 004a0d60  unit: G3D::VARArea  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0d60
//
// 004a0d60  6aff                 push -1
// 004a0d62  687b9c8600           push 0x869c7b
// 004a0d67  64a100000000         mov eax, dword ptr fs:[0]
// 004a0d6d  50                   push eax
// 004a0d6e  64892500000000       mov dword ptr fs:[0], esp
// 004a0d75  51                   push ecx
// 004a0d76  6a30                 push 0x30
// 004a0d78  c744240400000000     mov dword ptr [esp + 4], 0
// 004a0d80  e8b37c2700           call 0x718a38
// 004a0d85  83c404               add esp, 4
// 004a0d88  890424               mov dword ptr [esp], eax
// 004a0d8b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004a0d93  85c0                 test eax, eax
// 004a0d95  740e                 je 0x4a0da5
// 004a0d97  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004a0d9b  51                   push ecx
// 004a0d9c  8bc8                 mov ecx, eax
// 004a0d9e  e85de30000           call 0x4af100
// 004a0da3  eb02                 jmp 0x4a0da7
// 004a0da5  33c0                 xor eax, eax
// 004a0da7  56                   push esi
// 004a0da8  8b742418             mov esi, dword ptr [esp + 0x18]
// 004a0dac  50                   push eax
// 004a0dad  8bce                 mov ecx, esi
// 004a0daf  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004a0db7  c70600000000         mov dword ptr [esi], 0
// 004a0dbd  e89eeaffff           call 0x49f860
// 004a0dc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a0dc6  8bc6                 mov eax, esi
// 004a0dc8  5e                   pop esi
// 004a0dc9  64890d00000000       mov dword ptr fs:[0], ecx
// 004a0dd0  83c410               add esp, 0x10
// 004a0dd3  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?createMilestone@RenderDevice@G3D@@QAE?AV?$ReferenceCountedPointer@VMilestone@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
