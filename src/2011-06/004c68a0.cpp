// roc 2011-06 004c68a0  unit: RBX::Network::VPlayer::?$EventDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c68a0
//
// 004c68a0  64a100000000         mov eax, dword ptr fs:[0]
// 004c68a6  6aff                 push -1
// 004c68a8  682bc59f00           push 0x9fc52b
// 004c68ad  50                   push eax
// 004c68ae  64892500000000       mov dword ptr fs:[0], esp
// 004c68b5  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c68b9  56                   push esi
// 004c68ba  8bf1                 mov esi, ecx
// 004c68bc  6a1c                 push 0x1c
// 004c68be  8906                 mov dword ptr [esi], eax
// 004c68c0  c7460402000000       mov dword ptr [esi + 4], 2
// 004c68c7  e892373400           call 0x80a05e
// 004c68cc  83c404               add esp, 4
// 004c68cf  89442414             mov dword ptr [esp + 0x14], eax
// 004c68d3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004c68db  85c0                 test eax, eax
// 004c68dd  740f                 je 0x4c68ee
// 004c68df  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c68e3  51                   push ecx
// 004c68e4  8bc8                 mov ecx, eax
// 004c68e6  ff15c804a400         call dword ptr [0xa404c8]
// 004c68ec  eb02                 jmp 0x4c68f0
// 004c68ee  33c0                 xor eax, eax
// 004c68f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004c68f4  894608               mov dword ptr [esi + 8], eax
// 004c68f7  8bc6                 mov eax, esi
// 004c68f9  64890d00000000       mov dword ptr fs:[0], ecx
// 004c6900  5e                   pop esi
// 004c6901  83c40c               add esp, 0xc
// 004c6904  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
