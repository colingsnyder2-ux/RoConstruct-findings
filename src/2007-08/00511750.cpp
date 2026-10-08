// from server: 100% by auto
// roc 2007-08 00511750  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511750
//
// 00511750  56                   push esi
// 00511751  8bf1                 mov esi, ecx
// 00511753  8b4604               mov eax, dword ptr [esi + 4]
// 00511756  50                   push eax
// 00511757  c706000f7a00         mov dword ptr [esi], 0x7a0f00
// 0051175d  ff15c4e67700         call dword ptr [0x77e6c4]
// 00511763  83c404               add esp, 4
// 00511766  f644240801           test byte ptr [esp + 8], 1
// 0051176b  7409                 je 0x511776
// 0051176d  56                   push esi
// 0051176e  e8efe41100           call 0x62fc62
// 00511773  83c404               add esp, 4
// 00511776  8bc6                 mov eax, esi
// 00511778  5e                   pop esi
// 00511779  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ??_GDialogTemplate@_internal@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
