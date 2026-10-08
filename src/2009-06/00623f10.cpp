// roc 2009-06 00623f10  unit: ArchiveBinder  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00623f10
//
// 00623f10  6aff                 push -1
// 00623f12  68788b8600           push 0x868b78
// 00623f17  64a100000000         mov eax, dword ptr fs:[0]
// 00623f1d  50                   push eax
// 00623f1e  64892500000000       mov dword ptr fs:[0], esp
// 00623f25  83ec24               sub esp, 0x24
// 00623f28  56                   push esi
// 00623f29  8d442407             lea eax, [esp + 7]
// 00623f2d  50                   push eax
// 00623f2e  8d4c240b             lea ecx, [esp + 0xb]
// 00623f32  51                   push ecx
// 00623f33  8d4c2410             lea ecx, [esp + 0x10]
// 00623f37  e86445ecff           call 0x4e84a0
// 00623f3c  8b742438             mov esi, dword ptr [esp + 0x38]
// 00623f40  8d542408             lea edx, [esp + 8]
// 00623f44  52                   push edx
// 00623f45  56                   push esi
// 00623f46  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00623f4e  e81df0ffff           call 0x622f70
// 00623f53  8d442410             lea eax, [esp + 0x10]
// 00623f57  50                   push eax
// 00623f58  56                   push esi
// 00623f59  e852e5ffff           call 0x6224b0
// 00623f5e  83c410               add esp, 0x10
// 00623f61  8d4c2408             lea ecx, [esp + 8]
// 00623f65  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00623f6d  e80e50ecff           call 0x4e8f80
// 00623f72  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00623f76  5e                   pop esi
// 00623f77  64890d00000000       mov dword ptr fs:[0], ecx
// 00623f7e  83c430               add esp, 0x30
// 00623f81  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?isolateHandles@SerializerV2@@SAXPAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
