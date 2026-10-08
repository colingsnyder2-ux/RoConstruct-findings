// roc 2007-08 00569720  unit: RBX::ModelInstance  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00569720
//
// 00569720  6aff                 push -1
// 00569722  681bb67500           push 0x75b61b
// 00569727  64a100000000         mov eax, dword ptr fs:[0]
// 0056972d  50                   push eax
// 0056972e  64892500000000       mov dword ptr fs:[0], esp
// 00569735  51                   push ecx
// 00569736  56                   push esi
// 00569737  57                   push edi
// 00569738  6a10                 push 0x10
// 0056973a  8bf9                 mov edi, ecx
// 0056973c  e8b5670c00           call 0x62fef6
// 00569741  8bf0                 mov esi, eax
// 00569743  83c404               add esp, 4
// 00569746  89742408             mov dword ptr [esp + 8], esi
// 0056974a  85f6                 test esi, esi
// 0056974c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00569754  741a                 je 0x569770
// 00569756  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056975a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056975e  50                   push eax
// 0056975f  51                   push ecx
// 00569760  8d4e04               lea ecx, [esi + 4]
// 00569763  c70600000000         mov dword ptr [esi], 0
// 00569769  e8b2b5ffff           call 0x564d20
// 0056976e  eb02                 jmp 0x569772
// 00569770  33f6                 xor esi, esi
// 00569772  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00569775  85c0                 test eax, eax
// 00569777  7505                 jne 0x56977e
// 00569779  897718               mov dword ptr [edi + 0x18], esi
// 0056977c  eb02                 jmp 0x569780
// 0056977e  8930                 mov dword ptr [eax], esi
// 00569780  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00569784  89771c               mov dword ptr [edi + 0x1c], esi
// 00569787  5f                   pop edi
// 00569788  5e                   pop esi
// 00569789  64890d00000000       mov dword ptr fs:[0], ecx
// 00569790  83c410               add esp, 0x10
// 00569793  c20800               ret 8
// library rbxgs/v8xml\SerializerV2.cpp (function ??$addAttribute@PBD@XmlElement@@QAEXABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
