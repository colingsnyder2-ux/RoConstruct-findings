// roc 2008-06 00591970  unit: RBX::RootInstance  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00591970
//
// 00591970  6aff                 push -1
// 00591972  683bf47b00           push 0x7bf43b
// 00591977  64a100000000         mov eax, dword ptr fs:[0]
// 0059197d  50                   push eax
// 0059197e  64892500000000       mov dword ptr fs:[0], esp
// 00591985  51                   push ecx
// 00591986  56                   push esi
// 00591987  57                   push edi
// 00591988  6a18                 push 0x18
// 0059198a  8bf9                 mov edi, ecx
// 0059198c  e88fef1000           call 0x6a0920
// 00591991  8bf0                 mov esi, eax
// 00591993  83c404               add esp, 4
// 00591996  89742408             mov dword ptr [esp + 8], esi
// 0059199a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005919a2  85f6                 test esi, esi
// 005919a4  741a                 je 0x5919c0
// 005919a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005919aa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005919ae  50                   push eax
// 005919af  51                   push ecx
// 005919b0  8d4e08               lea ecx, [esi + 8]
// 005919b3  c70600000000         mov dword ptr [esi], 0
// 005919b9  e862afffff           call 0x58c920
// 005919be  eb02                 jmp 0x5919c2
// 005919c0  33f6                 xor esi, esi
// 005919c2  8b4724               mov eax, dword ptr [edi + 0x24]
// 005919c5  85c0                 test eax, eax
// 005919c7  7505                 jne 0x5919ce
// 005919c9  897720               mov dword ptr [edi + 0x20], esi
// 005919cc  eb02                 jmp 0x5919d0
// 005919ce  8930                 mov dword ptr [eax], esi
// 005919d0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005919d4  897724               mov dword ptr [edi + 0x24], esi
// 005919d7  5f                   pop edi
// 005919d8  5e                   pop esi
// 005919d9  64890d00000000       mov dword ptr fs:[0], ecx
// 005919e0  83c410               add esp, 0x10
// 005919e3  c20800               ret 8
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??$addAttribute@PBD@XmlElement@@QAEXABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
