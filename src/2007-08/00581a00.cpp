// roc 2007-08 00581a00  unit: RBX::Accoutrement  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581a00
//
// 00581a00  64a100000000         mov eax, dword ptr fs:[0]
// 00581a06  6aff                 push -1
// 00581a08  68fb4f7500           push 0x754ffb
// 00581a0d  50                   push eax
// 00581a0e  64892500000000       mov dword ptr fs:[0], esp
// 00581a15  83ec08               sub esp, 8
// 00581a18  803df5308c0000       cmp byte ptr [0x8c30f5], 0
// 00581a1f  56                   push esi
// 00581a20  57                   push edi
// 00581a21  8bf9                 mov edi, ecx
// 00581a23  755c                 jne 0x581a81
// 00581a25  6a20                 push 0x20
// 00581a27  e8cae40a00           call 0x62fef6
// 00581a2c  8bf0                 mov esi, eax
// 00581a2e  83c404               add esp, 4
// 00581a31  89742408             mov dword ptr [esp + 8], esi
// 00581a35  85f6                 test esi, esi
// 00581a37  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00581a3f  742d                 je 0x581a6e
// 00581a41  83ec08               sub esp, 8
// 00581a44  8bcc                 mov ecx, esp
// 00581a46  89642414             mov dword ptr [esp + 0x14], esp
// 00581a4a  57                   push edi
// 00581a4b  e8e0bc0000           call 0x58d730
// 00581a50  a1b8228c00           mov eax, dword ptr [0x8c22b8]
// 00581a55  50                   push eax
// 00581a56  8bce                 mov ecx, esi
// 00581a58  e823d2fbff           call 0x53ec80
// 00581a5d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00581a61  64890d00000000       mov dword ptr fs:[0], ecx
// 00581a68  5f                   pop edi
// 00581a69  5e                   pop esi
// 00581a6a  83c414               add esp, 0x14
// 00581a6d  c3                   ret 
// 00581a6e  33c0                 xor eax, eax
// 00581a70  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00581a74  64890d00000000       mov dword ptr fs:[0], ecx
// 00581a7b  5f                   pop edi
// 00581a7c  5e                   pop esi
// 00581a7d  83c414               add esp, 0x14
// 00581a80  c3                   ret 
// 00581a81  e86adffbff           call 0x53f9f0
// 00581a86  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00581a8a  5f                   pop edi
// 00581a8b  64890d00000000       mov dword ptr fs:[0], ecx
// 00581a92  5e                   pop esi
// 00581a93  83c414               add esp, 0x14
// 00581a96  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?write@Accoutrement@RBX@@UAEPAVXmlElement@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
