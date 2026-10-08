// from server: 100% by auto
// roc 2011-06 0054b780  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054b780
//
// 0054b780  56                   push esi
// 0054b781  8bf1                 mov esi, ecx
// 0054b783  8b4604               mov eax, dword ptr [esi + 4]
// 0054b786  50                   push eax
// 0054b787  c706e0ffa700         mov dword ptr [esi], 0xa7ffe0
// 0054b78d  ff15740aa400         call dword ptr [0xa40a74]
// 0054b793  83c404               add esp, 4
// 0054b796  f644240801           test byte ptr [esp + 8], 1
// 0054b79b  7409                 je 0x54b7a6
// 0054b79d  56                   push esi
// 0054b79e  e8b5e82b00           call 0x80a058
// 0054b7a3  83c404               add esp, 4
// 0054b7a6  8bc6                 mov eax, esi
// 0054b7a8  5e                   pop esi
// 0054b7a9  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ??_GDialogTemplate@_internal@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
