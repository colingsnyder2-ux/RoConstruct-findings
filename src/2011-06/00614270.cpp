// roc 2011-06 00614270  unit: ArchiveBinder  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00614270
//
// 00614270  6aff                 push -1
// 00614272  6803899e00           push 0x9e8903
// 00614277  64a100000000         mov eax, dword ptr fs:[0]
// 0061427d  50                   push eax
// 0061427e  64892500000000       mov dword ptr fs:[0], esp
// 00614285  51                   push ecx
// 00614286  53                   push ebx
// 00614287  56                   push esi
// 00614288  8bf1                 mov esi, ecx
// 0061428a  33db                 xor ebx, ebx
// 0061428c  57                   push edi
// 0061428d  8974240c             mov dword ptr [esp + 0xc], esi
// 00614291  895e08               mov dword ptr [esi + 8], ebx
// 00614294  895e0c               mov dword ptr [esi + 0xc], ebx
// 00614297  895e10               mov dword ptr [esi + 0x10], ebx
// 0061429a  8d7e14               lea edi, [esi + 0x14]
// 0061429d  8bcf                 mov ecx, edi
// 0061429f  895c2418             mov dword ptr [esp + 0x18], ebx
// 006142a3  c706a440a900         mov dword ptr [esi], 0xa940a4
// 006142a9  e832fc1500           call 0x773ee0
// 006142ae  894704               mov dword ptr [edi + 4], eax
// 006142b1  b101                 mov cl, 1
// 006142b3  884831               mov byte ptr [eax + 0x31], cl
// 006142b6  8b4704               mov eax, dword ptr [edi + 4]
// 006142b9  894004               mov dword ptr [eax + 4], eax
// 006142bc  8b4704               mov eax, dword ptr [edi + 4]
// 006142bf  8900                 mov dword ptr [eax], eax
// 006142c1  8b4704               mov eax, dword ptr [edi + 4]
// 006142c4  894008               mov dword ptr [eax + 8], eax
// 006142c7  895f08               mov dword ptr [edi + 8], ebx
// 006142ca  884c2418             mov byte ptr [esp + 0x18], cl
// 006142ce  8d7e20               lea edi, [esi + 0x20]
// 006142d1  8bcf                 mov ecx, edi
// 006142d3  e8d8f6ffff           call 0x6139b0
// 006142d8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006142dc  894704               mov dword ptr [edi + 4], eax
// 006142df  895f08               mov dword ptr [edi + 8], ebx
// 006142e2  5f                   pop edi
// 006142e3  8bc6                 mov eax, esi
// 006142e5  5e                   pop esi
// 006142e6  5b                   pop ebx
// 006142e7  64890d00000000       mov dword ptr fs:[0], ecx
// 006142ee  83c410               add esp, 0x10
// 006142f1  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??0ArchiveBinder@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
