// roc 2008-06 006fa740  unit: CXTPPropertyGridToolBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa740
//
// 006fa740  53                   push ebx
// 006fa741  55                   push ebp
// 006fa742  56                   push esi
// 006fa743  8bf1                 mov esi, ecx
// 006fa745  8b4620               mov eax, dword ptr [esi + 0x20]
// 006fa748  57                   push edi
// 006fa749  50                   push eax
// 006fa74a  ff15f82d8000         call dword ptr [0x802df8]
// 006fa750  50                   push eax
// 006fa751  e88864faff           call 0x6a0bde
// 006fa756  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 006fa75c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006fa760  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006fa764  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006fa768  85c9                 test ecx, ecx
// 006fa76a  7409                 je 0x6fa775
// 006fa76c  57                   push edi
// 006fa76d  53                   push ebx
// 006fa76e  55                   push ebp
// 006fa76f  56                   push esi
// 006fa770  e80b2c0100           call 0x70d380
// 006fa775  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006fa779  51                   push ecx
// 006fa77a  57                   push edi
// 006fa77b  53                   push ebx
// 006fa77c  55                   push ebp
// 006fa77d  8bce                 mov ecx, esi
// 006fa77f  e87c60faff           call 0x6a0800
// 006fa784  5f                   pop edi
// 006fa785  5e                   pop esi
// 006fa786  5d                   pop ebp
// 006fa787  5b                   pop ebx
// 006fa788  c21000               ret 0x10
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnWndMsg@CXTPPropertyGridToolBar@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
