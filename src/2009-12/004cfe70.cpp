// roc 2009-12 004cfe70  unit: G3D::PBVTextureFormat::?$Table  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cfe70
//
// 004cfe70  6aff                 push -1
// 004cfe72  68a1319300           push 0x9331a1
// 004cfe77  64a100000000         mov eax, dword ptr fs:[0]
// 004cfe7d  50                   push eax
// 004cfe7e  64892500000000       mov dword ptr fs:[0], esp
// 004cfe85  51                   push ecx
// 004cfe86  56                   push esi
// 004cfe87  8bf1                 mov esi, ecx
// 004cfe89  57                   push edi
// 004cfe8a  89742408             mov dword ptr [esp + 8], esi
// 004cfe8e  8d8e9c080000         lea ecx, [esi + 0x89c]
// 004cfe94  c744241404000000     mov dword ptr [esp + 0x14], 4
// 004cfe9c  c701d4589b00         mov dword ptr [ecx], 0x9b58d4
// 004cfea2  e839caffff           call 0x4cc8e0
// 004cfea7  8d8e80080000         lea ecx, [esi + 0x880]
// 004cfead  c644241403           mov byte ptr [esp + 0x14], 3
// 004cfeb2  e8d9fcffff           call 0x4cfb90
// 004cfeb7  8d8e20010000         lea ecx, [esi + 0x120]
// 004cfebd  c644241402           mov byte ptr [esp + 0x14], 2
// 004cfec2  e879d9ffff           call 0x4cd840
// 004cfec7  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 004cfecd  8b3d08b29800         mov edi, dword ptr [0x98b208]
// 004cfed3  c644241401           mov byte ptr [esp + 0x14], 1
// 004cfed8  85c0                 test eax, eax
// 004cfeda  7431                 je 0x4cff0d
// 004cfedc  83c004               add eax, 4
// 004cfedf  50                   push eax
// 004cfee0  ffd7                 call edi
// 004cfee2  85c0                 test eax, eax
// 004cfee4  751d                 jne 0x4cff03
// 004cfee6  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 004cfeec  e82fb1f7ff           call 0x44b020
// 004cfef1  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 004cfef7  85c9                 test ecx, ecx
// 004cfef9  7408                 je 0x4cff03
// 004cfefb  8b01                 mov eax, dword ptr [ecx]
// 004cfefd  8b10                 mov edx, dword ptr [eax]
// 004cfeff  6a01                 push 1
// 004cff01  ffd2                 call edx
// 004cff03  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 004cff0d  8d4e50               lea ecx, [esi + 0x50]
// 004cff10  c644241400           mov byte ptr [esp + 0x14], 0
// 004cff15  ff15e4b69800         call dword ptr [0x98b6e4]
// 004cff1b  8b4638               mov eax, dword ptr [esi + 0x38]
// 004cff1e  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004cff26  85c0                 test eax, eax
// 004cff28  7428                 je 0x4cff52
// 004cff2a  83c004               add eax, 4
// 004cff2d  50                   push eax
// 004cff2e  ffd7                 call edi
// 004cff30  85c0                 test eax, eax
// 004cff32  7517                 jne 0x4cff4b
// 004cff34  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004cff37  e8e4b0f7ff           call 0x44b020
// 004cff3c  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004cff3f  85c9                 test ecx, ecx
// 004cff41  7408                 je 0x4cff4b
// 004cff43  8b01                 mov eax, dword ptr [ecx]
// 004cff45  8b10                 mov edx, dword ptr [eax]
// 004cff47  6a01                 push 1
// 004cff49  ffd2                 call edx
// 004cff4b  c7463800000000       mov dword ptr [esi + 0x38], 0
// 004cff52  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cff56  5f                   pop edi
// 004cff57  5e                   pop esi
// 004cff58  64890d00000000       mov dword ptr fs:[0], ecx
// 004cff5f  83c410               add esp, 0x10
// 004cff62  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??1RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
