// roc 2010-06 005f2b00  unit: ArchiveBinder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f2b00
//
// 005f2b00  6aff                 push -1
// 005f2b02  685b879900           push 0x99875b
// 005f2b07  64a100000000         mov eax, dword ptr fs:[0]
// 005f2b0d  50                   push eax
// 005f2b0e  64892500000000       mov dword ptr fs:[0], esp
// 005f2b15  51                   push ecx
// 005f2b16  56                   push esi
// 005f2b17  57                   push edi
// 005f2b18  6a18                 push 0x18
// 005f2b1a  8bf9                 mov edi, ecx
// 005f2b1c  e83f4cedff           call 0x4c7760
// 005f2b21  8bf0                 mov esi, eax
// 005f2b23  83c404               add esp, 4
// 005f2b26  89742408             mov dword ptr [esp + 8], esi
// 005f2b2a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005f2b32  85f6                 test esi, esi
// 005f2b34  741a                 je 0x5f2b50
// 005f2b36  8b442420             mov eax, dword ptr [esp + 0x20]
// 005f2b3a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f2b3e  50                   push eax
// 005f2b3f  51                   push ecx
// 005f2b40  8d4e08               lea ecx, [esi + 8]
// 005f2b43  c70600000000         mov dword ptr [esi], 0
// 005f2b49  e842c1ffff           call 0x5eec90
// 005f2b4e  eb02                 jmp 0x5f2b52
// 005f2b50  33f6                 xor esi, esi
// 005f2b52  8b4724               mov eax, dword ptr [edi + 0x24]
// 005f2b55  85c0                 test eax, eax
// 005f2b57  7505                 jne 0x5f2b5e
// 005f2b59  897720               mov dword ptr [edi + 0x20], esi
// 005f2b5c  eb02                 jmp 0x5f2b60
// 005f2b5e  8930                 mov dword ptr [eax], esi
// 005f2b60  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f2b64  897724               mov dword ptr [edi + 0x24], esi
// 005f2b67  5f                   pop edi
// 005f2b68  5e                   pop esi
// 005f2b69  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2b70  83c410               add esp, 0x10
// 005f2b73  c20800               ret 8
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??$addAttribute@PBD@XmlElement@@QAEXABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
