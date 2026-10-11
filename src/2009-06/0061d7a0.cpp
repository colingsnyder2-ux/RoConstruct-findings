// roc 2009-06 0061d7a0  unit: RBX::ChangeHistoryService  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061d7a0
//
// 0061d7a0  64a100000000         mov eax, dword ptr fs:[0]
// 0061d7a6  6aff                 push -1
// 0061d7a8  680b6e8600           push 0x866e0b
// 0061d7ad  50                   push eax
// 0061d7ae  64892500000000       mov dword ptr fs:[0], esp
// 0061d7b5  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061d7b9  56                   push esi
// 0061d7ba  8bf1                 mov esi, ecx
// 0061d7bc  6a1c                 push 0x1c
// 0061d7be  8906                 mov dword ptr [esi], eax
// 0061d7c0  c7460402000000       mov dword ptr [esi + 4], 2
// 0061d7c7  e86cb20f00           call 0x718a38
// 0061d7cc  83c404               add esp, 4
// 0061d7cf  89442414             mov dword ptr [esp + 0x14], eax
// 0061d7d3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0061d7db  85c0                 test eax, eax
// 0061d7dd  740f                 je 0x61d7ee
// 0061d7df  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061d7e3  51                   push ecx
// 0061d7e4  8bc8                 mov ecx, eax
// 0061d7e6  ff15b4e48900         call dword ptr [0x89e4b4]
// 0061d7ec  eb02                 jmp 0x61d7f0
// 0061d7ee  33c0                 xor eax, eax
// 0061d7f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0061d7f4  894608               mov dword ptr [esi + 8], eax
// 0061d7f7  8bc6                 mov eax, esi
// 0061d7f9  64890d00000000       mov dword ptr fs:[0], ecx
// 0061d800  5e                   pop esi
// 0061d801  83c40c               add esp, 0xc
// 0061d804  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
