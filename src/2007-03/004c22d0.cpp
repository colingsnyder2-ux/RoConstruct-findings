// roc 2007-03 004c22d0  unit: seg_004c0000  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c22d0
//
// 004c22d0  6aff                 push -1
// 004c22d2  6870ce7400           push 0x74ce70
// 004c22d7  64a100000000         mov eax, dword ptr fs:[0]
// 004c22dd  50                   push eax
// 004c22de  64892500000000       mov dword ptr fs:[0], esp
// 004c22e5  51                   push ecx
// 004c22e6  56                   push esi
// 004c22e7  8bf1                 mov esi, ecx
// 004c22e9  89742404             mov dword ptr [esp + 4], esi
// 004c22ed  8b4638               mov eax, dword ptr [esi + 0x38]
// 004c22f0  85c0                 test eax, eax
// 004c22f2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c22fa  742c                 je 0x4c2328
// 004c22fc  83c004               add eax, 4
// 004c22ff  50                   push eax
// 004c2300  ff15a8d27700         call dword ptr [0x77d2a8]
// 004c2306  85c0                 test eax, eax
// 004c2308  7517                 jne 0x4c2321
// 004c230a  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004c230d  e8ae10faff           call 0x4633c0
// 004c2312  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004c2315  85c9                 test ecx, ecx
// 004c2317  7408                 je 0x4c2321
// 004c2319  8b01                 mov eax, dword ptr [ecx]
// 004c231b  8b10                 mov edx, dword ptr [eax]
// 004c231d  6a01                 push 1
// 004c231f  ffd2                 call edx
// 004c2321  c7463800000000       mov dword ptr [esi + 0x38], 0
// 004c2328  c70698e57900         mov dword ptr [esi], 0x79e598
// 004c232e  8d4e04               lea ecx, [esi + 4]
// 004c2331  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004c2339  ff158ce77700         call dword ptr [0x77e78c]
// 004c233f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c2343  c7068ce57900         mov dword ptr [esi], 0x79e58c
// 004c2349  5e                   pop esi
// 004c234a  64890d00000000       mov dword ptr fs:[0], ecx
// 004c2351  83c410               add esp, 0x10
// 004c2354  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\GApp.cpp (function ??1Entry@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GApp.cpp
