// roc 2012-06 00706d80  unit: ArchiveBinder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00706d80
//
// 00706d80  6aff                 push -1
// 00706d82  688bd8ab00           push 0xabd88b
// 00706d87  64a100000000         mov eax, dword ptr fs:[0]
// 00706d8d  50                   push eax
// 00706d8e  64892500000000       mov dword ptr fs:[0], esp
// 00706d95  51                   push ecx
// 00706d96  56                   push esi
// 00706d97  57                   push edi
// 00706d98  6a18                 push 0x18
// 00706d9a  8bf9                 mov edi, ecx
// 00706d9c  e84f15e4ff           call 0x5482f0
// 00706da1  8bf0                 mov esi, eax
// 00706da3  83c404               add esp, 4
// 00706da6  89742408             mov dword ptr [esp + 8], esi
// 00706daa  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00706db2  85f6                 test esi, esi
// 00706db4  741a                 je 0x706dd0
// 00706db6  8b442420             mov eax, dword ptr [esp + 0x20]
// 00706dba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00706dbe  50                   push eax
// 00706dbf  51                   push ecx
// 00706dc0  8d4e08               lea ecx, [esi + 8]
// 00706dc3  c70600000000         mov dword ptr [esi], 0
// 00706dc9  e812b8ffff           call 0x7025e0
// 00706dce  eb02                 jmp 0x706dd2
// 00706dd0  33f6                 xor esi, esi
// 00706dd2  8b4724               mov eax, dword ptr [edi + 0x24]
// 00706dd5  85c0                 test eax, eax
// 00706dd7  7505                 jne 0x706dde
// 00706dd9  897720               mov dword ptr [edi + 0x20], esi
// 00706ddc  eb02                 jmp 0x706de0
// 00706dde  8930                 mov dword ptr [eax], esi
// 00706de0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00706de4  897724               mov dword ptr [edi + 0x24], esi
// 00706de7  5f                   pop edi
// 00706de8  5e                   pop esi
// 00706de9  64890d00000000       mov dword ptr fs:[0], ecx
// 00706df0  83c410               add esp, 0x10
// 00706df3  c20800               ret 8
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??$addAttribute@PBD@XmlElement@@QAEXABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
