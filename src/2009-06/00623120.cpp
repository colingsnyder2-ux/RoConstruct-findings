// roc 2009-06 00623120  unit: ArchiveBinder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00623120
//
// 00623120  6aff                 push -1
// 00623122  687b8a8600           push 0x868a7b
// 00623127  64a100000000         mov eax, dword ptr fs:[0]
// 0062312d  50                   push eax
// 0062312e  64892500000000       mov dword ptr fs:[0], esp
// 00623135  51                   push ecx
// 00623136  56                   push esi
// 00623137  57                   push edi
// 00623138  6a18                 push 0x18
// 0062313a  8bf9                 mov edi, ecx
// 0062313c  e8af5ceaff           call 0x4c8df0
// 00623141  8bf0                 mov esi, eax
// 00623143  83c404               add esp, 4
// 00623146  89742408             mov dword ptr [esp + 8], esi
// 0062314a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00623152  85f6                 test esi, esi
// 00623154  741a                 je 0x623170
// 00623156  8b442420             mov eax, dword ptr [esp + 0x20]
// 0062315a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062315e  50                   push eax
// 0062315f  51                   push ecx
// 00623160  8d4e08               lea ecx, [esi + 8]
// 00623163  c70600000000         mov dword ptr [esi], 0
// 00623169  e832a6ffff           call 0x61d7a0
// 0062316e  eb02                 jmp 0x623172
// 00623170  33f6                 xor esi, esi
// 00623172  8b4724               mov eax, dword ptr [edi + 0x24]
// 00623175  85c0                 test eax, eax
// 00623177  7505                 jne 0x62317e
// 00623179  897720               mov dword ptr [edi + 0x20], esi
// 0062317c  eb02                 jmp 0x623180
// 0062317e  8930                 mov dword ptr [eax], esi
// 00623180  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00623184  897724               mov dword ptr [edi + 0x24], esi
// 00623187  5f                   pop edi
// 00623188  5e                   pop esi
// 00623189  64890d00000000       mov dword ptr fs:[0], ecx
// 00623190  83c410               add esp, 0x10
// 00623193  c20800               ret 8
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??$addAttribute@PBD@XmlElement@@QAEXABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
