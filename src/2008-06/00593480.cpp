// roc 2008-06 00593480  unit: ArchiveBinder  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00593480
//
// 00593480  6aff                 push -1
// 00593482  68d81d7d00           push 0x7d1dd8
// 00593487  64a100000000         mov eax, dword ptr fs:[0]
// 0059348d  50                   push eax
// 0059348e  64892500000000       mov dword ptr fs:[0], esp
// 00593495  83ec24               sub esp, 0x24
// 00593498  56                   push esi
// 00593499  8d442407             lea eax, [esp + 7]
// 0059349d  50                   push eax
// 0059349e  8d4c240b             lea ecx, [esp + 0xb]
// 005934a2  51                   push ecx
// 005934a3  8d4c2410             lea ecx, [esp + 0x10]
// 005934a7  e8e45cffff           call 0x589190
// 005934ac  8b742438             mov esi, dword ptr [esp + 0x38]
// 005934b0  8d542408             lea edx, [esp + 8]
// 005934b4  52                   push edx
// 005934b5  56                   push esi
// 005934b6  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005934be  e8bdf2ffff           call 0x592780
// 005934c3  8d442410             lea eax, [esp + 0x10]
// 005934c7  50                   push eax
// 005934c8  56                   push esi
// 005934c9  e862e8ffff           call 0x591d30
// 005934ce  83c410               add esp, 0x10
// 005934d1  8d4c2408             lea ecx, [esp + 8]
// 005934d5  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005934dd  e8bee1f1ff           call 0x4b16a0
// 005934e2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005934e6  5e                   pop esi
// 005934e7  64890d00000000       mov dword ptr fs:[0], ecx
// 005934ee  83c430               add esp, 0x30
// 005934f1  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?isolateHandles@SerializerV2@@SAXPAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
