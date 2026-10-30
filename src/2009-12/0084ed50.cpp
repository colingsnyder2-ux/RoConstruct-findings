// roc 2009-12 0084ed50  unit: CXTPPropertyGrid  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084ed50
//
// 0084ed50  83ec10               sub esp, 0x10
// 0084ed53  56                   push esi
// 0084ed54  8bf1                 mov esi, ecx
// 0084ed56  85f6                 test esi, esi
// 0084ed58  742e                 je 0x84ed88
// 0084ed5a  837e2000             cmp dword ptr [esi + 0x20], 0
// 0084ed5e  7428                 je 0x84ed88
// 0084ed60  56                   push esi
// 0084ed61  8d4c2408             lea ecx, [esp + 8]
// 0084ed65  e866c5ffff           call 0x84b2d0
// 0084ed6a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084ed6e  2b4c2408             sub ecx, dword ptr [esp + 8]
// 0084ed72  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0084ed76  2b542404             sub edx, dword ptr [esp + 4]
// 0084ed7a  8b06                 mov eax, dword ptr [esi]
// 0084ed7c  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 0084ed82  51                   push ecx
// 0084ed83  52                   push edx
// 0084ed84  8bce                 mov ecx, esi
// 0084ed86  ffd0                 call eax
// 0084ed88  5e                   pop esi
// 0084ed89  83c410               add esp, 0x10
// 0084ed8c  c3                   ret 
// copied from an identical function in another client (function ?Reposition@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp