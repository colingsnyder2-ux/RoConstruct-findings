// roc 2007-03 004c1f20  unit: seg_004c0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c1f20
//
// 004c1f20  6aff                 push -1
// 004c1f22  6828ce7400           push 0x74ce28
// 004c1f27  64a100000000         mov eax, dword ptr fs:[0]
// 004c1f2d  50                   push eax
// 004c1f2e  64892500000000       mov dword ptr fs:[0], esp
// 004c1f35  51                   push ecx
// 004c1f36  56                   push esi
// 004c1f37  8bf1                 mov esi, ecx
// 004c1f39  89742404             mov dword ptr [esp + 4], esi
// 004c1f3d  c70698e57900         mov dword ptr [esi], 0x79e598
// 004c1f43  8d4e04               lea ecx, [esi + 4]
// 004c1f46  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c1f4e  ff158ce77700         call dword ptr [0x77e78c]
// 004c1f54  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c1f58  c7068ce57900         mov dword ptr [esi], 0x79e58c
// 004c1f5e  5e                   pop esi
// 004c1f5f  64890d00000000       mov dword ptr fs:[0], ecx
// 004c1f66  83c410               add esp, 0x10
// 004c1f69  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\GApp.cpp (function ??1TextureArgs@TextureManager@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GApp.cpp
