// roc 2012-06 00706ff0  unit: ArchiveBinder  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00706ff0
//
// 00706ff0  6aff                 push -1
// 00706ff2  68d3d8ab00           push 0xabd8d3
// 00706ff7  64a100000000         mov eax, dword ptr fs:[0]
// 00706ffd  50                   push eax
// 00706ffe  64892500000000       mov dword ptr fs:[0], esp
// 00707005  51                   push ecx
// 00707006  53                   push ebx
// 00707007  56                   push esi
// 00707008  8bf1                 mov esi, ecx
// 0070700a  33db                 xor ebx, ebx
// 0070700c  57                   push edi
// 0070700d  8974240c             mov dword ptr [esp + 0xc], esi
// 00707011  895e08               mov dword ptr [esi + 8], ebx
// 00707014  895e0c               mov dword ptr [esi + 0xc], ebx
// 00707017  895e10               mov dword ptr [esi + 0x10], ebx
// 0070701a  8d7e14               lea edi, [esi + 0x14]
// 0070701d  8bcf                 mov ecx, edi
// 0070701f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00707023  c706a4f2b900         mov dword ptr [esi], 0xb9f2a4
// 00707029  e892311600           call 0x86a1c0
// 0070702e  894704               mov dword ptr [edi + 4], eax
// 00707031  b101                 mov cl, 1
// 00707033  884831               mov byte ptr [eax + 0x31], cl
// 00707036  8b4704               mov eax, dword ptr [edi + 4]
// 00707039  894004               mov dword ptr [eax + 4], eax
// 0070703c  8b4704               mov eax, dword ptr [edi + 4]
// 0070703f  8900                 mov dword ptr [eax], eax
// 00707041  8b4704               mov eax, dword ptr [edi + 4]
// 00707044  894008               mov dword ptr [eax + 8], eax
// 00707047  895f08               mov dword ptr [edi + 8], ebx
// 0070704a  884c2418             mov byte ptr [esp + 0x18], cl
// 0070704e  8d7e20               lea edi, [esi + 0x20]
// 00707051  8bcf                 mov ecx, edi
// 00707053  e8b8f5ffff           call 0x706610
// 00707058  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070705c  894704               mov dword ptr [edi + 4], eax
// 0070705f  895f08               mov dword ptr [edi + 8], ebx
// 00707062  5f                   pop edi
// 00707063  8bc6                 mov eax, esi
// 00707065  5e                   pop esi
// 00707066  5b                   pop ebx
// 00707067  64890d00000000       mov dword ptr fs:[0], ecx
// 0070706e  83c410               add esp, 0x10
// 00707071  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??0ArchiveBinder@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
