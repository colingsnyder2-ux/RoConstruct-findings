// roc 2012-06 009e29c0  unit: CXTPPropertyGrid  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e29c0
//
// 009e29c0  83ec10               sub esp, 0x10
// 009e29c3  56                   push esi
// 009e29c4  8bf1                 mov esi, ecx
// 009e29c6  85f6                 test esi, esi
// 009e29c8  742e                 je 0x9e29f8
// 009e29ca  837e2000             cmp dword ptr [esi + 0x20], 0
// 009e29ce  7428                 je 0x9e29f8
// 009e29d0  56                   push esi
// 009e29d1  8d4c2408             lea ecx, [esp + 8]
// 009e29d5  e8c627ffff           call 0x9d51a0
// 009e29da  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009e29de  2b4c2408             sub ecx, dword ptr [esp + 8]
// 009e29e2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009e29e6  2b542404             sub edx, dword ptr [esp + 4]
// 009e29ea  8b06                 mov eax, dword ptr [esi]
// 009e29ec  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 009e29f2  51                   push ecx
// 009e29f3  52                   push edx
// 009e29f4  8bce                 mov ecx, esi
// 009e29f6  ffd0                 call eax
// 009e29f8  5e                   pop esi
// 009e29f9  83c410               add esp, 0x10
// 009e29fc  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?Reposition@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
