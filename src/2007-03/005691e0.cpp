// roc 2007-03 005691e0  unit: seg_00560000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005691e0
//
// 005691e0  6aff                 push -1
// 005691e2  686bc37500           push 0x75c36b
// 005691e7  64a100000000         mov eax, dword ptr fs:[0]
// 005691ed  50                   push eax
// 005691ee  64892500000000       mov dword ptr fs:[0], esp
// 005691f5  51                   push ecx
// 005691f6  56                   push esi
// 005691f7  57                   push edi
// 005691f8  6a10                 push 0x10
// 005691fa  8bf9                 mov edi, ecx
// 005691fc  e8074f0b00           call 0x61e108
// 00569201  8bf0                 mov esi, eax
// 00569203  83c404               add esp, 4
// 00569206  89742408             mov dword ptr [esp + 8], esi
// 0056920a  85f6                 test esi, esi
// 0056920c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00569214  741a                 je 0x569230
// 00569216  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056921a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056921e  50                   push eax
// 0056921f  51                   push ecx
// 00569220  8d4e04               lea ecx, [esi + 4]
// 00569223  c70600000000         mov dword ptr [esi], 0
// 00569229  e8d2cfffff           call 0x566200
// 0056922e  eb02                 jmp 0x569232
// 00569230  33f6                 xor esi, esi
// 00569232  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00569235  85c0                 test eax, eax
// 00569237  7505                 jne 0x56923e
// 00569239  897718               mov dword ptr [edi + 0x18], esi
// 0056923c  eb02                 jmp 0x569240
// 0056923e  8930                 mov dword ptr [eax], esi
// 00569240  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00569244  89771c               mov dword ptr [edi + 0x1c], esi
// 00569247  5f                   pop edi
// 00569248  5e                   pop esi
// 00569249  64890d00000000       mov dword ptr fs:[0], ecx
// 00569250  83c410               add esp, 0x10
// 00569253  c20800               ret 8
// library rbxgs/v8xml\SerializerV2.cpp (function ??$addAttribute@PBD@XmlElement@@QAEXABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
