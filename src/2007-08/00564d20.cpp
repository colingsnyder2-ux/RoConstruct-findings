// roc 2007-08 00564d20  unit: RBX::Verb  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564d20
//
// 00564d20  64a100000000         mov eax, dword ptr fs:[0]
// 00564d26  6aff                 push -1
// 00564d28  682b127500           push 0x75122b
// 00564d2d  50                   push eax
// 00564d2e  64892500000000       mov dword ptr fs:[0], esp
// 00564d35  8b442410             mov eax, dword ptr [esp + 0x10]
// 00564d39  56                   push esi
// 00564d3a  8bf1                 mov esi, ecx
// 00564d3c  6a1c                 push 0x1c
// 00564d3e  8906                 mov dword ptr [esi], eax
// 00564d40  c7460402000000       mov dword ptr [esi + 4], 2
// 00564d47  e8aab10c00           call 0x62fef6
// 00564d4c  83c404               add esp, 4
// 00564d4f  89442414             mov dword ptr [esp + 0x14], eax
// 00564d53  85c0                 test eax, eax
// 00564d55  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00564d5d  740f                 je 0x564d6e
// 00564d5f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00564d63  51                   push ecx
// 00564d64  8bc8                 mov ecx, eax
// 00564d66  ff1598e67700         call dword ptr [0x77e698]
// 00564d6c  eb02                 jmp 0x564d70
// 00564d6e  33c0                 xor eax, eax
// 00564d70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00564d74  894608               mov dword ptr [esi + 8], eax
// 00564d77  8bc6                 mov eax, esi
// 00564d79  64890d00000000       mov dword ptr fs:[0], ecx
// 00564d80  5e                   pop esi
// 00564d81  83c40c               add esp, 0xc
// 00564d84  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
