// roc 2009-12 0068bda0  unit: ArchiveBinder  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068bda0
//
// 0068bda0  6aff                 push -1
// 0068bda2  68f8639400           push 0x9463f8
// 0068bda7  64a100000000         mov eax, dword ptr fs:[0]
// 0068bdad  50                   push eax
// 0068bdae  64892500000000       mov dword ptr fs:[0], esp
// 0068bdb5  83ec24               sub esp, 0x24
// 0068bdb8  56                   push esi
// 0068bdb9  8d442407             lea eax, [esp + 7]
// 0068bdbd  50                   push eax
// 0068bdbe  8d4c240b             lea ecx, [esp + 0xb]
// 0068bdc2  51                   push ecx
// 0068bdc3  8d4c2410             lea ecx, [esp + 0x10]
// 0068bdc7  e894f3ffff           call 0x68b160
// 0068bdcc  8b742438             mov esi, dword ptr [esp + 0x38]
// 0068bdd0  8d542408             lea edx, [esp + 8]
// 0068bdd4  52                   push edx
// 0068bdd5  56                   push esi
// 0068bdd6  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0068bdde  e85df4ffff           call 0x68b240
// 0068bde3  8d442410             lea eax, [esp + 0x10]
// 0068bde7  50                   push eax
// 0068bde8  56                   push esi
// 0068bde9  e872f1ffff           call 0x68af60
// 0068bdee  83c410               add esp, 0x10
// 0068bdf1  8d4c2408             lea ecx, [esp + 8]
// 0068bdf5  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0068bdfd  e89ef0fdff           call 0x66aea0
// 0068be02  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0068be06  5e                   pop esi
// 0068be07  64890d00000000       mov dword ptr fs:[0], ecx
// 0068be0e  83c430               add esp, 0x30
// 0068be11  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?isolateHandles@SerializerV2@@SAXPAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
