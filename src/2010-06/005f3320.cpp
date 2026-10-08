// roc 2010-06 005f3320  unit: ArchiveBinder  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f3320
//
// 005f3320  6aff                 push -1
// 005f3322  6858889900           push 0x998858
// 005f3327  64a100000000         mov eax, dword ptr fs:[0]
// 005f332d  50                   push eax
// 005f332e  64892500000000       mov dword ptr fs:[0], esp
// 005f3335  83ec24               sub esp, 0x24
// 005f3338  56                   push esi
// 005f3339  8d442407             lea eax, [esp + 7]
// 005f333d  50                   push eax
// 005f333e  8d4c240b             lea ecx, [esp + 0xb]
// 005f3342  51                   push ecx
// 005f3343  8d4c2410             lea ecx, [esp + 0x10]
// 005f3347  e844000300           call 0x623390
// 005f334c  8b742438             mov esi, dword ptr [esp + 0x38]
// 005f3350  8d542408             lea edx, [esp + 8]
// 005f3354  52                   push edx
// 005f3355  56                   push esi
// 005f3356  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005f335e  e85df6ffff           call 0x5f29c0
// 005f3363  8d442410             lea eax, [esp + 0x10]
// 005f3367  50                   push eax
// 005f3368  56                   push esi
// 005f3369  e8f2f3ffff           call 0x5f2760
// 005f336e  83c410               add esp, 0x10
// 005f3371  8d4c2408             lea ecx, [esp + 8]
// 005f3375  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005f337d  e8dec1efff           call 0x4ef560
// 005f3382  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f3386  5e                   pop esi
// 005f3387  64890d00000000       mov dword ptr fs:[0], ecx
// 005f338e  83c430               add esp, 0x30
// 005f3391  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?isolateHandles@SerializerV2@@SAXPAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
