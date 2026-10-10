// roc 2008-06 006fb670  unit: CXTPPropertyGrid  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fb670
//
// 006fb670  83ec10               sub esp, 0x10
// 006fb673  56                   push esi
// 006fb674  8bf1                 mov esi, ecx
// 006fb676  85f6                 test esi, esi
// 006fb678  742e                 je 0x6fb6a8
// 006fb67a  837e2000             cmp dword ptr [esi + 0x20], 0
// 006fb67e  7428                 je 0x6fb6a8
// 006fb680  56                   push esi
// 006fb681  8d4c2408             lea ecx, [esp + 8]
// 006fb685  e8a6c4ffff           call 0x6f7b30
// 006fb68a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006fb68e  2b4c2408             sub ecx, dword ptr [esp + 8]
// 006fb692  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fb696  2b542404             sub edx, dword ptr [esp + 4]
// 006fb69a  8b06                 mov eax, dword ptr [esi]
// 006fb69c  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 006fb6a2  51                   push ecx
// 006fb6a3  52                   push edx
// 006fb6a4  8bce                 mov ecx, esi
// 006fb6a6  ffd0                 call eax
// 006fb6a8  5e                   pop esi
// 006fb6a9  83c410               add esp, 0x10
// 006fb6ac  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?Reposition@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
