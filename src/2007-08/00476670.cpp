// roc 2007-08 00476670  unit: CInstanceRecord::CNameItem  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00476670
//
// 00476670  6aff                 push -1
// 00476672  68db707400           push 0x7470db
// 00476677  64a100000000         mov eax, dword ptr fs:[0]
// 0047667d  50                   push eax
// 0047667e  51                   push ecx
// 0047667f  56                   push esi
// 00476680  a188518b00           mov eax, dword ptr [0x8b5188]
// 00476685  33c4                 xor eax, esp
// 00476687  50                   push eax
// 00476688  8d44240c             lea eax, [esp + 0xc]
// 0047668c  64a300000000         mov dword ptr fs:[0], eax
// 00476692  6a30                 push 0x30
// 00476694  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0047669c  e855981b00           call 0x62fef6
// 004766a1  83c404               add esp, 4
// 004766a4  89442408             mov dword ptr [esp + 8], eax
// 004766a8  85c0                 test eax, eax
// 004766aa  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004766b2  740e                 je 0x4766c2
// 004766b4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004766b8  51                   push ecx
// 004766b9  8bc8                 mov ecx, eax
// 004766bb  e800b80000           call 0x481ec0
// 004766c0  eb02                 jmp 0x4766c4
// 004766c2  33c0                 xor eax, eax
// 004766c4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004766c8  50                   push eax
// 004766c9  8bce                 mov ecx, esi
// 004766cb  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004766d3  c70600000000         mov dword ptr [esi], 0
// 004766d9  e892e8ffff           call 0x474f70
// 004766de  8bc6                 mov eax, esi
// 004766e0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004766e4  64890d00000000       mov dword ptr fs:[0], ecx
// 004766eb  59                   pop ecx
// 004766ec  5e                   pop esi
// 004766ed  83c410               add esp, 0x10
// 004766f0  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?createMilestone@RenderDevice@G3D@@QAE?AV?$ReferenceCountedPointer@VMilestone@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
