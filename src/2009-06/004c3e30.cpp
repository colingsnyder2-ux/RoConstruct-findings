// roc 2009-06 004c3e30  unit: RBX::Network::VPlayer::?$EventDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c3e30
//
// 004c3e30  64a100000000         mov eax, dword ptr fs:[0]
// 004c3e36  6aff                 push -1
// 004c3e38  680b6e8600           push 0x866e0b
// 004c3e3d  50                   push eax
// 004c3e3e  64892500000000       mov dword ptr fs:[0], esp
// 004c3e45  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c3e49  56                   push esi
// 004c3e4a  8bf1                 mov esi, ecx
// 004c3e4c  6a1c                 push 0x1c
// 004c3e4e  8906                 mov dword ptr [esi], eax
// 004c3e50  c7460402000000       mov dword ptr [esi + 4], 2
// 004c3e57  e8dc4b2500           call 0x718a38
// 004c3e5c  83c404               add esp, 4
// 004c3e5f  89442414             mov dword ptr [esp + 0x14], eax
// 004c3e63  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004c3e6b  85c0                 test eax, eax
// 004c3e6d  740f                 je 0x4c3e7e
// 004c3e6f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c3e73  51                   push ecx
// 004c3e74  8bc8                 mov ecx, eax
// 004c3e76  ff15b8e48900         call dword ptr [0x89e4b8]
// 004c3e7c  eb02                 jmp 0x4c3e80
// 004c3e7e  33c0                 xor eax, eax
// 004c3e80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004c3e84  894608               mov dword ptr [esi + 8], eax
// 004c3e87  8bc6                 mov eax, esi
// 004c3e89  64890d00000000       mov dword ptr fs:[0], ecx
// 004c3e90  5e                   pop esi
// 004c3e91  83c40c               add esp, 0xc
// 004c3e94  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
