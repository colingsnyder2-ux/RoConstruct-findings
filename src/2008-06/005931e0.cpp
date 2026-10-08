// roc 2008-06 005931e0  unit: ArchiveBinder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005931e0
//
// 005931e0  6aff                 push -1
// 005931e2  68781d7d00           push 0x7d1d78
// 005931e7  64a100000000         mov eax, dword ptr fs:[0]
// 005931ed  50                   push eax
// 005931ee  64892500000000       mov dword ptr fs:[0], esp
// 005931f5  51                   push ecx
// 005931f6  56                   push esi
// 005931f7  8bf1                 mov esi, ecx
// 005931f9  57                   push edi
// 005931fa  89742408             mov dword ptr [esp + 8], esi
// 005931fe  8d7e3c               lea edi, [esi + 0x3c]
// 00593201  8bcf                 mov ecx, edi
// 00593203  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059320b  e830f90e00           call 0x682b40
// 00593210  8b3f                 mov edi, dword ptr [edi]
// 00593212  57                   push edi
// 00593213  e862d41000           call 0x6a067a
// 00593218  83c404               add esp, 4
// 0059321b  8d4e1c               lea ecx, [esi + 0x1c]
// 0059321e  e89df6ffff           call 0x5928c0
// 00593223  8d4e04               lea ecx, [esi + 4]
// 00593226  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0059322e  e8bd0aebff           call 0x443cf0
// 00593233  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00593237  5f                   pop edi
// 00593238  5e                   pop esi
// 00593239  64890d00000000       mov dword ptr fs:[0], ecx
// 00593240  83c410               add esp, 0x10
// 00593243  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??1ArchiveBinder@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
