// roc 2010-06 004969a0  unit: seg_00490000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004969a0
//
// 004969a0  6aff                 push -1
// 004969a2  68316b9800           push 0x986b31
// 004969a7  64a100000000         mov eax, dword ptr fs:[0]
// 004969ad  50                   push eax
// 004969ae  64892500000000       mov dword ptr fs:[0], esp
// 004969b5  51                   push ecx
// 004969b6  56                   push esi
// 004969b7  8bf1                 mov esi, ecx
// 004969b9  57                   push edi
// 004969ba  89742408             mov dword ptr [esp + 8], esi
// 004969be  8d8e9c080000         lea ecx, [esi + 0x89c]
// 004969c4  c744241404000000     mov dword ptr [esp + 0x14], 4
// 004969cc  c701fc3ca100         mov dword ptr [ecx], 0xa13cfc
// 004969d2  e84923ffff           call 0x488d20
// 004969d7  8d8e80080000         lea ecx, [esi + 0x880]
// 004969dd  c644241403           mov byte ptr [esp + 0x14], 3
// 004969e2  e8d9fcffff           call 0x4966c0
// 004969e7  8d8e20010000         lea ecx, [esi + 0x120]
// 004969ed  c644241402           mov byte ptr [esp + 0x14], 2
// 004969f2  e879d9ffff           call 0x494370
// 004969f7  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 004969fd  8b3d7ca39e00         mov edi, dword ptr [0x9ea37c]
// 00496a03  c644241401           mov byte ptr [esp + 0x14], 1
// 00496a08  85c0                 test eax, eax
// 00496a0a  7431                 je 0x496a3d
// 00496a0c  83c004               add eax, 4
// 00496a0f  50                   push eax
// 00496a10  ffd7                 call edi
// 00496a12  85c0                 test eax, eax
// 00496a14  751d                 jne 0x496a33
// 00496a16  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 00496a1c  e8ffd0feff           call 0x483b20
// 00496a21  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 00496a27  85c9                 test ecx, ecx
// 00496a29  7408                 je 0x496a33
// 00496a2b  8b01                 mov eax, dword ptr [ecx]
// 00496a2d  8b10                 mov edx, dword ptr [eax]
// 00496a2f  6a01                 push 1
// 00496a31  ffd2                 call edx
// 00496a33  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 00496a3d  8d4e50               lea ecx, [esi + 0x50]
// 00496a40  c644241400           mov byte ptr [esp + 0x14], 0
// 00496a45  ff1500a49e00         call dword ptr [0x9ea400]
// 00496a4b  8b4638               mov eax, dword ptr [esi + 0x38]
// 00496a4e  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00496a56  85c0                 test eax, eax
// 00496a58  7428                 je 0x496a82
// 00496a5a  83c004               add eax, 4
// 00496a5d  50                   push eax
// 00496a5e  ffd7                 call edi
// 00496a60  85c0                 test eax, eax
// 00496a62  7517                 jne 0x496a7b
// 00496a64  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00496a67  e8b4d0feff           call 0x483b20
// 00496a6c  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00496a6f  85c9                 test ecx, ecx
// 00496a71  7408                 je 0x496a7b
// 00496a73  8b01                 mov eax, dword ptr [ecx]
// 00496a75  8b10                 mov edx, dword ptr [eax]
// 00496a77  6a01                 push 1
// 00496a79  ffd2                 call edx
// 00496a7b  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00496a82  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00496a86  5f                   pop edi
// 00496a87  5e                   pop esi
// 00496a88  64890d00000000       mov dword ptr fs:[0], ecx
// 00496a8f  83c410               add esp, 0x10
// 00496a92  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??1RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
