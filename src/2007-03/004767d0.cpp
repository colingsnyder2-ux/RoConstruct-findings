// roc 2007-03 004767d0  unit: seg_00470000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004767d0
//
// 004767d0  6aff                 push -1
// 004767d2  68cb7e7400           push 0x747ecb
// 004767d7  64a100000000         mov eax, dword ptr fs:[0]
// 004767dd  50                   push eax
// 004767de  51                   push ecx
// 004767df  56                   push esi
// 004767e0  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004767e5  33c4                 xor eax, esp
// 004767e7  50                   push eax
// 004767e8  8d44240c             lea eax, [esp + 0xc]
// 004767ec  64a300000000         mov dword ptr fs:[0], eax
// 004767f2  6a30                 push 0x30
// 004767f4  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004767fc  e807791a00           call 0x61e108
// 00476801  83c404               add esp, 4
// 00476804  89442408             mov dword ptr [esp + 8], eax
// 00476808  85c0                 test eax, eax
// 0047680a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00476812  740e                 je 0x476822
// 00476814  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00476818  51                   push ecx
// 00476819  8bc8                 mov ecx, eax
// 0047681b  e8509b0000           call 0x480370
// 00476820  eb02                 jmp 0x476824
// 00476822  33c0                 xor eax, eax
// 00476824  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00476828  50                   push eax
// 00476829  8bce                 mov ecx, esi
// 0047682b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00476833  c70600000000         mov dword ptr [esi], 0
// 00476839  e852e8ffff           call 0x475090
// 0047683e  8bc6                 mov eax, esi
// 00476840  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00476844  64890d00000000       mov dword ptr fs:[0], ecx
// 0047684b  59                   pop ecx
// 0047684c  5e                   pop esi
// 0047684d  83c410               add esp, 0x10
// 00476850  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?createMilestone@RenderDevice@G3D@@QAE?AV?$ReferenceCountedPointer@VMilestone@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
