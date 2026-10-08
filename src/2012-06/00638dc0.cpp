// from server: 100% by auto
// roc 2012-06 00638dc0  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00638dc0
//
// 00638dc0  56                   push esi
// 00638dc1  8bf1                 mov esi, ecx
// 00638dc3  8b4604               mov eax, dword ptr [esi + 4]
// 00638dc6  50                   push eax
// 00638dc7  c706403eb800         mov dword ptr [esi], 0xb83e40
// 00638dcd  ff15c829b200         call dword ptr [0xb229c8]
// 00638dd3  83c404               add esp, 4
// 00638dd6  f644240801           test byte ptr [esp + 8], 1
// 00638ddb  7409                 je 0x638de6
// 00638ddd  56                   push esi
// 00638dde  e831933400           call 0x982114
// 00638de3  83c404               add esp, 4
// 00638de6  8bc6                 mov eax, esi
// 00638de8  5e                   pop esi
// 00638de9  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ??_GDialogTemplate@_internal@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
