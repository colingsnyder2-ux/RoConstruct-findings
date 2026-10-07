// roc 2010-06 00560110  unit: G3D::_internal::DialogTemplate  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560110
//
// 00560110  56                   push esi
// 00560111  8bf1                 mov esi, ecx
// 00560113  8b4604               mov eax, dword ptr [esi + 4]
// 00560116  50                   push eax
// 00560117  c7067c0ca200         mov dword ptr [esi], 0xa20c7c
// 0056011d  ff1508aa9e00         call dword ptr [0x9eaa08]
// 00560123  83c404               add esp, 4
// 00560126  f644240801           test byte ptr [esp + 8], 1
// 0056012b  7409                 je 0x560136
// 0056012d  56                   push esi
// 0056012e  e867782400           call 0x7a799a
// 00560133  83c404               add esp, 4
// 00560136  8bc6                 mov eax, esi
// 00560138  5e                   pop esi
// 00560139  c20400               ret 4
// library g3d-6.09/G3Dcpp\prompt.cpp (function ??_GDialogTemplate@_internal@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
