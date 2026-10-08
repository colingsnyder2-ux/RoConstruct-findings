// roc 2007-03 00505e80  unit: seg_00500000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00505e80
//
// 00505e80  56                   push esi
// 00505e81  8bf1                 mov esi, ecx
// 00505e83  8b4604               mov eax, dword ptr [esi + 4]
// 00505e86  50                   push eax
// 00505e87  c706c8067a00         mov dword ptr [esi], 0x7a06c8
// 00505e8d  ff1530e97700         call dword ptr [0x77e930]
// 00505e93  83c404               add esp, 4
// 00505e96  f644240801           test byte ptr [esp + 8], 1
// 00505e9b  7409                 je 0x505ea6
// 00505e9d  56                   push esi
// 00505e9e  e84d821100           call 0x61e0f0
// 00505ea3  83c404               add esp, 4
// 00505ea6  8bc6                 mov eax, esi
// 00505ea8  5e                   pop esi
// 00505ea9  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\prompt.cpp (function ??_GDialogTemplate@_internal@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/prompt.cpp
