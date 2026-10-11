// roc 2008-06 00495d60  unit: RBX::VRunService::?$SignalDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00495d60
//
// 00495d60  64a100000000         mov eax, dword ptr fs:[0]
// 00495d66  6aff                 push -1
// 00495d68  683beb7d00           push 0x7deb3b
// 00495d6d  50                   push eax
// 00495d6e  64892500000000       mov dword ptr fs:[0], esp
// 00495d75  8b442410             mov eax, dword ptr [esp + 0x10]
// 00495d79  56                   push esi
// 00495d7a  8bf1                 mov esi, ecx
// 00495d7c  6a1c                 push 0x1c
// 00495d7e  8906                 mov dword ptr [esi], eax
// 00495d80  c7460402000000       mov dword ptr [esi + 4], 2
// 00495d87  e894ab2000           call 0x6a0920
// 00495d8c  83c404               add esp, 4
// 00495d8f  89442414             mov dword ptr [esp + 0x14], eax
// 00495d93  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00495d9b  85c0                 test eax, eax
// 00495d9d  740f                 je 0x495dae
// 00495d9f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00495da3  51                   push ecx
// 00495da4  8bc8                 mov ecx, eax
// 00495da6  ff155c248000         call dword ptr [0x80245c]
// 00495dac  eb02                 jmp 0x495db0
// 00495dae  33c0                 xor eax, eax
// 00495db0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00495db4  894608               mov dword ptr [esi + 8], eax
// 00495db7  8bc6                 mov eax, esi
// 00495db9  64890d00000000       mov dword ptr fs:[0], ecx
// 00495dc0  5e                   pop esi
// 00495dc1  83c40c               add esp, 0xc
// 00495dc4  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
