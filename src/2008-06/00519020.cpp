// roc 2008-06 00519020  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519020
//
// 00519020  56                   push esi
// 00519021  8bf1                 mov esi, ecx
// 00519023  8b4604               mov eax, dword ptr [esi + 4]
// 00519026  50                   push eax
// 00519027  c7069c8b8200         mov dword ptr [esi], 0x828b9c
// 0051902d  ff15c0288000         call dword ptr [0x8028c0]
// 00519033  83c404               add esp, 4
// 00519036  f644240801           test byte ptr [esp + 8], 1
// 0051903b  7409                 je 0x519046
// 0051903d  56                   push esi
// 0051903e  e837761800           call 0x6a067a
// 00519043  83c404               add esp, 4
// 00519046  8bc6                 mov eax, esi
// 00519048  5e                   pop esi
// 00519049  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ??_GDialogTemplate@_internal@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
