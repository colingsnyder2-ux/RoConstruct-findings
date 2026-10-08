// roc 2007-08 0056ab00  unit: ArchiveBinder  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056ab00
//
// 0056ab00  6aff                 push -1
// 0056ab02  68c3457500           push 0x7545c3
// 0056ab07  64a100000000         mov eax, dword ptr fs:[0]
// 0056ab0d  50                   push eax
// 0056ab0e  64892500000000       mov dword ptr fs:[0], esp
// 0056ab15  51                   push ecx
// 0056ab16  53                   push ebx
// 0056ab17  56                   push esi
// 0056ab18  8bf1                 mov esi, ecx
// 0056ab1a  33db                 xor ebx, ebx
// 0056ab1c  57                   push edi
// 0056ab1d  8974240c             mov dword ptr [esp + 0xc], esi
// 0056ab21  895e08               mov dword ptr [esi + 8], ebx
// 0056ab24  895e0c               mov dword ptr [esi + 0xc], ebx
// 0056ab27  895e10               mov dword ptr [esi + 0x10], ebx
// 0056ab2a  8d7e14               lea edi, [esi + 0x14]
// 0056ab2d  8bcf                 mov ecx, edi
// 0056ab2f  895c2418             mov dword ptr [esp + 0x18], ebx
// 0056ab33  c7069c9b7a00         mov dword ptr [esi], 0x7a9b9c
// 0056ab39  e8a2ebffff           call 0x5696e0
// 0056ab3e  894704               mov dword ptr [edi + 4], eax
// 0056ab41  b101                 mov cl, 1
// 0056ab43  884831               mov byte ptr [eax + 0x31], cl
// 0056ab46  8b4704               mov eax, dword ptr [edi + 4]
// 0056ab49  894004               mov dword ptr [eax + 4], eax
// 0056ab4c  8b4704               mov eax, dword ptr [edi + 4]
// 0056ab4f  8900                 mov dword ptr [eax], eax
// 0056ab51  8b4704               mov eax, dword ptr [edi + 4]
// 0056ab54  894008               mov dword ptr [eax + 8], eax
// 0056ab57  895f08               mov dword ptr [edi + 8], ebx
// 0056ab5a  884c2418             mov byte ptr [esp + 0x18], cl
// 0056ab5e  8d7e20               lea edi, [esi + 0x20]
// 0056ab61  8bcf                 mov ecx, edi
// 0056ab63  e858ebffff           call 0x5696c0
// 0056ab68  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056ab6c  894704               mov dword ptr [edi + 4], eax
// 0056ab6f  895f08               mov dword ptr [edi + 8], ebx
// 0056ab72  5f                   pop edi
// 0056ab73  8bc6                 mov eax, esi
// 0056ab75  5e                   pop esi
// 0056ab76  5b                   pop ebx
// 0056ab77  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ab7e  83c410               add esp, 0x10
// 0056ab81  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??0ArchiveBinder@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
