// roc 2010-06 004bf800  unit: RBX::Network::VPlayer::?$EventDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004bf800
//
// 004bf800  64a100000000         mov eax, dword ptr fs:[0]
// 004bf806  6aff                 push -1
// 004bf808  685bd09800           push 0x98d05b
// 004bf80d  50                   push eax
// 004bf80e  64892500000000       mov dword ptr fs:[0], esp
// 004bf815  8b442410             mov eax, dword ptr [esp + 0x10]
// 004bf819  56                   push esi
// 004bf81a  8bf1                 mov esi, ecx
// 004bf81c  6a1c                 push 0x1c
// 004bf81e  8906                 mov dword ptr [esi], eax
// 004bf820  c7460402000000       mov dword ptr [esi + 4], 2
// 004bf827  e874812e00           call 0x7a79a0
// 004bf82c  83c404               add esp, 4
// 004bf82f  89442414             mov dword ptr [esp + 0x14], eax
// 004bf833  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004bf83b  85c0                 test eax, eax
// 004bf83d  740f                 je 0x4bf84e
// 004bf83f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004bf843  51                   push ecx
// 004bf844  8bc8                 mov ecx, eax
// 004bf846  ff150ca49e00         call dword ptr [0x9ea40c]
// 004bf84c  eb02                 jmp 0x4bf850
// 004bf84e  33c0                 xor eax, eax
// 004bf850  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004bf854  894608               mov dword ptr [esi + 8], eax
// 004bf857  8bc6                 mov eax, esi
// 004bf859  64890d00000000       mov dword ptr fs:[0], ecx
// 004bf860  5e                   pop esi
// 004bf861  83c40c               add esp, 0xc
// 004bf864  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
