// from server: 100% by auto
// roc 2010-06 004940b0  unit: seg_00490000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004940b0
//
// 004940b0  6aff                 push -1
// 004940b2  684b1d9a00           push 0x9a1d4b
// 004940b7  64a100000000         mov eax, dword ptr fs:[0]
// 004940bd  50                   push eax
// 004940be  64892500000000       mov dword ptr fs:[0], esp
// 004940c5  51                   push ecx
// 004940c6  6a30                 push 0x30
// 004940c8  c744240400000000     mov dword ptr [esp + 4], 0
// 004940d0  e8cb383100           call 0x7a79a0
// 004940d5  83c404               add esp, 4
// 004940d8  890424               mov dword ptr [esp], eax
// 004940db  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004940e3  85c0                 test eax, eax
// 004940e5  740e                 je 0x4940f5
// 004940e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004940eb  51                   push ecx
// 004940ec  8bc8                 mov ecx, eax
// 004940ee  e80d400000           call 0x498100
// 004940f3  eb02                 jmp 0x4940f7
// 004940f5  33c0                 xor eax, eax
// 004940f7  56                   push esi
// 004940f8  8b742418             mov esi, dword ptr [esp + 0x18]
// 004940fc  50                   push eax
// 004940fd  8bce                 mov ecx, esi
// 004940ff  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00494107  c70600000000         mov dword ptr [esi], 0
// 0049410d  e80e2cffff           call 0x486d20
// 00494112  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00494116  8bc6                 mov eax, esi
// 00494118  5e                   pop esi
// 00494119  64890d00000000       mov dword ptr fs:[0], ecx
// 00494120  83c410               add esp, 0x10
// 00494123  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?createMilestone@RenderDevice@G3D@@QAE?AV?$ReferenceCountedPointer@VMilestone@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
