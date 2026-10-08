// roc 2011-06 009c3a10  unit: RBX::WedgeBuilder  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009c3a10
//
// 009c3a10  83ec18               sub esp, 0x18
// 009c3a13  8d0424               lea eax, [esp]
// 009c3a16  50                   push eax
// 009c3a17  ff157c02a400         call dword ptr [0xa4027c]
// 009c3a1d  85c0                 test eax, eax
// 009c3a1f  7459                 je 0x9c3a7a
// 009c3a21  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c3a25  8b1424               mov edx, dword ptr [esp]
// 009c3a28  53                   push ebx
// 009c3a29  56                   push esi
// 009c3a2a  57                   push edi
// 009c3a2b  6a00                 push 0
// 009c3a2d  68e8030000           push 0x3e8
// 009c3a32  51                   push ecx
// 009c3a33  52                   push edx
// 009c3a34  e8a779e4ff           call 0x80b3e0
// 009c3a39  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009c3a3d  6a00                 push 0
// 009c3a3f  51                   push ecx
// 009c3a40  52                   push edx
// 009c3a41  50                   push eax
// 009c3a42  e86978e4ff           call 0x80b2b0
// 009c3a47  8b3d7802a400         mov edi, dword ptr [0xa40278]
// 009c3a4d  8bda                 mov ebx, edx
// 009c3a4f  8d54241c             lea edx, [esp + 0x1c]
// 009c3a53  52                   push edx
// 009c3a54  8bf0                 mov esi, eax
// 009c3a56  ffd7                 call edi
// 009c3a58  8d442414             lea eax, [esp + 0x14]
// 009c3a5c  50                   push eax
// 009c3a5d  ffd7                 call edi
// 009c3a5f  8b442414             mov eax, dword ptr [esp + 0x14]
// 009c3a63  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 009c3a67  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009c3a6b  1b4c2420             sbb ecx, dword ptr [esp + 0x20]
// 009c3a6f  3bc6                 cmp eax, esi
// 009c3a71  7504                 jne 0x9c3a77
// 009c3a73  3bcb                 cmp ecx, ebx
// 009c3a75  74e1                 je 0x9c3a58
// 009c3a77  5f                   pop edi
// 009c3a78  5e                   pop esi
// 009c3a79  5b                   pop ebx
// 009c3a7a  83c418               add esp, 0x18
// 009c3a7d  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?DelayOverhead@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp
