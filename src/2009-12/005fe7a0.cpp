// roc 2009-12 005fe7a0  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe7a0
//
// 005fe7a0  56                   push esi
// 005fe7a1  8bf1                 mov esi, ecx
// 005fe7a3  8b4604               mov eax, dword ptr [esi + 4]
// 005fe7a6  50                   push eax
// 005fe7a7  c706242f9c00         mov dword ptr [esi], 0x9c2f24
// 005fe7ad  ff1540b79800         call dword ptr [0x98b740]
// 005fe7b3  83c404               add esp, 4
// 005fe7b6  f644240801           test byte ptr [esp + 8], 1
// 005fe7bb  7409                 je 0x5fe7c6
// 005fe7bd  56                   push esi
// 005fe7be  e897501f00           call 0x7f385a
// 005fe7c3  83c404               add esp, 4
// 005fe7c6  8bc6                 mov eax, esi
// 005fe7c8  5e                   pop esi
// 005fe7c9  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ??_GDialogTemplate@_internal@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
