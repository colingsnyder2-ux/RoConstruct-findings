// roc 2007-03 004c1f70  unit: seg_004c0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c1f70
//
// 004c1f70  6aff                 push -1
// 004c1f72  6828ce7400           push 0x74ce28
// 004c1f77  64a100000000         mov eax, dword ptr fs:[0]
// 004c1f7d  50                   push eax
// 004c1f7e  64892500000000       mov dword ptr fs:[0], esp
// 004c1f85  51                   push ecx
// 004c1f86  56                   push esi
// 004c1f87  8bf1                 mov esi, ecx
// 004c1f89  89742404             mov dword ptr [esp + 4], esi
// 004c1f8d  c70698e57900         mov dword ptr [esi], 0x79e598
// 004c1f93  8d4e04               lea ecx, [esi + 4]
// 004c1f96  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c1f9e  ff158ce77700         call dword ptr [0x77e78c]
// 004c1fa4  f644241801           test byte ptr [esp + 0x18], 1
// 004c1fa9  c7068ce57900         mov dword ptr [esi], 0x79e58c
// 004c1faf  7409                 je 0x4c1fba
// 004c1fb1  56                   push esi
// 004c1fb2  e839c11500           call 0x61e0f0
// 004c1fb7  83c404               add esp, 4
// 004c1fba  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c1fbe  8bc6                 mov eax, esi
// 004c1fc0  5e                   pop esi
// 004c1fc1  64890d00000000       mov dword ptr fs:[0], ecx
// 004c1fc8  83c410               add esp, 0x10
// 004c1fcb  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\GApp.cpp (function ??_GTextureArgs@TextureManager@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GApp.cpp
