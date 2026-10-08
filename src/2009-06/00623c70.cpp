// roc 2009-06 00623c70  unit: ArchiveBinder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00623c70
//
// 00623c70  6aff                 push -1
// 00623c72  68188b8600           push 0x868b18
// 00623c77  64a100000000         mov eax, dword ptr fs:[0]
// 00623c7d  50                   push eax
// 00623c7e  64892500000000       mov dword ptr fs:[0], esp
// 00623c85  51                   push ecx
// 00623c86  56                   push esi
// 00623c87  8bf1                 mov esi, ecx
// 00623c89  57                   push edi
// 00623c8a  89742408             mov dword ptr [esp + 8], esi
// 00623c8e  8d7e3c               lea edi, [esi + 0x3c]
// 00623c91  8bcf                 mov ecx, edi
// 00623c93  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00623c9b  e8f0e6ffff           call 0x622390
// 00623ca0  8b3f                 mov edi, dword ptr [edi]
// 00623ca2  57                   push edi
// 00623ca3  e88a4d0f00           call 0x718a32
// 00623ca8  83c404               add esp, 4
// 00623cab  8d4e1c               lea ecx, [esi + 0x1c]
// 00623cae  e8fdf3ffff           call 0x6230b0
// 00623cb3  8d4e04               lea ecx, [esi + 4]
// 00623cb6  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00623cbe  e8dda8e1ff           call 0x43e5a0
// 00623cc3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00623cc7  5f                   pop edi
// 00623cc8  5e                   pop esi
// 00623cc9  64890d00000000       mov dword ptr fs:[0], ecx
// 00623cd0  83c410               add esp, 0x10
// 00623cd3  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??1ArchiveBinder@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
