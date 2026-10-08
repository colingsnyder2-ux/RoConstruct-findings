// roc 2010-06 005f3010  unit: ArchiveBinder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f3010
//
// 005f3010  6aff                 push -1
// 005f3012  68f8879900           push 0x9987f8
// 005f3017  64a100000000         mov eax, dword ptr fs:[0]
// 005f301d  50                   push eax
// 005f301e  64892500000000       mov dword ptr fs:[0], esp
// 005f3025  51                   push ecx
// 005f3026  56                   push esi
// 005f3027  8bf1                 mov esi, ecx
// 005f3029  57                   push edi
// 005f302a  89742408             mov dword ptr [esp + 8], esi
// 005f302e  8d7e3c               lea edi, [esi + 0x3c]
// 005f3031  8bcf                 mov ecx, edi
// 005f3033  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005f303b  e820db1400           call 0x740b60
// 005f3040  8b3f                 mov edi, dword ptr [edi]
// 005f3042  57                   push edi
// 005f3043  e852491b00           call 0x7a799a
// 005f3048  83c404               add esp, 4
// 005f304b  8d4e1c               lea ecx, [esi + 0x1c]
// 005f304e  e84def0400           call 0x641fa0
// 005f3053  8d4e04               lea ecx, [esi + 4]
// 005f3056  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005f305e  e87d10e5ff           call 0x4440e0
// 005f3063  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f3067  5f                   pop edi
// 005f3068  5e                   pop esi
// 005f3069  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3070  83c410               add esp, 0x10
// 005f3073  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??1ArchiveBinder@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
