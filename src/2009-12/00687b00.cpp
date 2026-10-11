// roc 2009-12 00687b00  unit: RBX::ChangeHistoryService  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00687b00
//
// 00687b00  64a100000000         mov eax, dword ptr fs:[0]
// 00687b06  6aff                 push -1
// 00687b08  681b479500           push 0x95471b
// 00687b0d  50                   push eax
// 00687b0e  64892500000000       mov dword ptr fs:[0], esp
// 00687b15  8b442410             mov eax, dword ptr [esp + 0x10]
// 00687b19  56                   push esi
// 00687b1a  8bf1                 mov esi, ecx
// 00687b1c  6a1c                 push 0x1c
// 00687b1e  8906                 mov dword ptr [esi], eax
// 00687b20  c7460402000000       mov dword ptr [esi + 4], 2
// 00687b27  e834bd1600           call 0x7f3860
// 00687b2c  83c404               add esp, 4
// 00687b2f  89442414             mov dword ptr [esp + 0x14], eax
// 00687b33  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00687b3b  85c0                 test eax, eax
// 00687b3d  740f                 je 0x687b4e
// 00687b3f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00687b43  51                   push ecx
// 00687b44  8bc8                 mov ecx, eax
// 00687b46  ff15f4b69800         call dword ptr [0x98b6f4]
// 00687b4c  eb02                 jmp 0x687b50
// 00687b4e  33c0                 xor eax, eax
// 00687b50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00687b54  894608               mov dword ptr [esi + 8], eax
// 00687b57  8bc6                 mov eax, esi
// 00687b59  64890d00000000       mov dword ptr fs:[0], ecx
// 00687b60  5e                   pop esi
// 00687b61  83c40c               add esp, 0xc
// 00687b64  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
