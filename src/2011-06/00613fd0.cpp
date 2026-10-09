// roc 2011-06 00613fd0  unit: ArchiveBinder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00613fd0
//
// 00613fd0  6aff                 push -1
// 00613fd2  68bb889e00           push 0x9e88bb
// 00613fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00613fdd  50                   push eax
// 00613fde  64892500000000       mov dword ptr fs:[0], esp
// 00613fe5  51                   push ecx
// 00613fe6  56                   push esi
// 00613fe7  57                   push edi
// 00613fe8  6a18                 push 0x18
// 00613fea  8bf9                 mov edi, ecx
// 00613fec  e84fb4ebff           call 0x4cf440
// 00613ff1  8bf0                 mov esi, eax
// 00613ff3  83c404               add esp, 4
// 00613ff6  89742408             mov dword ptr [esp + 8], esi
// 00613ffa  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00614002  85f6                 test esi, esi
// 00614004  741a                 je 0x614020
// 00614006  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061400a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061400e  50                   push eax
// 0061400f  51                   push ecx
// 00614010  8d4e08               lea ecx, [esi + 8]
// 00614013  c70600000000         mov dword ptr [esi], 0
// 00614019  e8c2e0ffff           call 0x6120e0
// 0061401e  eb02                 jmp 0x614022
// 00614020  33f6                 xor esi, esi
// 00614022  8b4724               mov eax, dword ptr [edi + 0x24]
// 00614025  85c0                 test eax, eax
// 00614027  7505                 jne 0x61402e
// 00614029  897720               mov dword ptr [edi + 0x20], esi
// 0061402c  eb02                 jmp 0x614030
// 0061402e  8930                 mov dword ptr [eax], esi
// 00614030  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00614034  897724               mov dword ptr [edi + 0x24], esi
// 00614037  5f                   pop edi
// 00614038  5e                   pop esi
// 00614039  64890d00000000       mov dword ptr fs:[0], ecx
// 00614040  83c410               add esp, 0x10
// 00614043  c20800               ret 8
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??$addAttribute@PBD@XmlElement@@QAEXABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
