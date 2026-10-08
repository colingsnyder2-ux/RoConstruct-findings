// roc 2007-08 0053f720  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053f720
//
// 0053f720  6aff                 push -1
// 0053f722  68a8137500           push 0x7513a8
// 0053f727  64a100000000         mov eax, dword ptr fs:[0]
// 0053f72d  50                   push eax
// 0053f72e  64892500000000       mov dword ptr fs:[0], esp
// 0053f735  51                   push ecx
// 0053f736  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053f73a  56                   push esi
// 0053f73b  8bf1                 mov esi, ecx
// 0053f73d  50                   push eax
// 0053f73e  56                   push esi
// 0053f73f  8974240c             mov dword ptr [esp + 0xc], esi
// 0053f743  e828dff5ff           call 0x49d670
// 0053f748  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053f74c  51                   push ecx
// 0053f74d  8d5608               lea edx, [esi + 8]
// 0053f750  52                   push edx
// 0053f751  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0053f759  e812dff5ff           call 0x49d670
// 0053f75e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053f762  83c410               add esp, 0x10
// 0053f765  8bc6                 mov eax, esi
// 0053f767  5e                   pop esi
// 0053f768  64890d00000000       mov dword ptr fs:[0], ecx
// 0053f76f  83c410               add esp, 0x10
// 0053f772  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ??0DescendentAdded@RBX@@AAE@PAVInstance@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
