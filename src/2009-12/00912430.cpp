// roc 2009-12 00912430  unit: RBX::RenderNew::RenderScene  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00912430
//
// 00912430  6aff                 push -1
// 00912432  6818e09300           push 0x93e018
// 00912437  64a100000000         mov eax, dword ptr fs:[0]
// 0091243d  50                   push eax
// 0091243e  64892500000000       mov dword ptr fs:[0], esp
// 00912445  51                   push ecx
// 00912446  56                   push esi
// 00912447  8bf1                 mov esi, ecx
// 00912449  89742404             mov dword ptr [esp + 4], esi
// 0091244d  8b8618020000         mov eax, dword ptr [esi + 0x218]
// 00912453  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0091245b  85c0                 test eax, eax
// 0091245d  7435                 je 0x912494
// 0091245f  83c004               add eax, 4
// 00912462  50                   push eax
// 00912463  ff1508b29800         call dword ptr [0x98b208]
// 00912469  85c0                 test eax, eax
// 0091246b  751d                 jne 0x91248a
// 0091246d  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 00912473  e8a88bb3ff           call 0x44b020
// 00912478  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 0091247e  85c9                 test ecx, ecx
// 00912480  7408                 je 0x91248a
// 00912482  8b01                 mov eax, dword ptr [ecx]
// 00912484  8b10                 mov edx, dword ptr [eax]
// 00912486  6a01                 push 1
// 00912488  ffd2                 call edx
// 0091248a  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 00912494  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00912498  c706a0559b00         mov dword ptr [esi], 0x9b55a0
// 0091249e  5e                   pop esi
// 0091249f  64890d00000000       mov dword ptr fs:[0], ecx
// 009124a6  83c410               add esp, 0x10
// 009124a9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ??1GFont@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
