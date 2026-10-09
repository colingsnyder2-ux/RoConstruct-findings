// roc 2009-12 0068bb00  unit: ArchiveBinder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068bb00
//
// 0068bb00  6aff                 push -1
// 0068bb02  6898639400           push 0x946398
// 0068bb07  64a100000000         mov eax, dword ptr fs:[0]
// 0068bb0d  50                   push eax
// 0068bb0e  64892500000000       mov dword ptr fs:[0], esp
// 0068bb15  51                   push ecx
// 0068bb16  56                   push esi
// 0068bb17  8bf1                 mov esi, ecx
// 0068bb19  57                   push edi
// 0068bb1a  89742408             mov dword ptr [esp + 8], esi
// 0068bb1e  8d7e3c               lea edi, [esi + 0x3c]
// 0068bb21  8bcf                 mov ecx, edi
// 0068bb23  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0068bb2b  e8d0700900           call 0x722c00
// 0068bb30  8b3f                 mov edi, dword ptr [edi]
// 0068bb32  57                   push edi
// 0068bb33  e8227d1600           call 0x7f385a
// 0068bb38  83c404               add esp, 4
// 0068bb3b  8d4e1c               lea ecx, [esi + 0x1c]
// 0068bb3e  e8dd380b00           call 0x73f420
// 0068bb43  8d4e04               lea ecx, [esi + 4]
// 0068bb46  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0068bb4e  e89d70dbff           call 0x442bf0
// 0068bb53  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068bb57  5f                   pop edi
// 0068bb58  5e                   pop esi
// 0068bb59  64890d00000000       mov dword ptr fs:[0], ecx
// 0068bb60  83c410               add esp, 0x10
// 0068bb63  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??1ArchiveBinder@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
