// roc 2009-12 0084e5c0  unit: CXTPPropertyGrid  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084e5c0
//
// 0084e5c0  56                   push esi
// 0084e5c1  8bf1                 mov esi, ecx
// 0084e5c3  e86858faff           call 0x7f3e30
// 0084e5c8  8bce                 mov ecx, esi
// 0084e5ca  e8b1f4ffff           call 0x84da80
// 0084e5cf  85c0                 test eax, eax
// 0084e5d1  741c                 je 0x84e5ef
// 0084e5d3  83782000             cmp dword ptr [eax + 0x20], 0
// 0084e5d7  7416                 je 0x84e5ef
// 0084e5d9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084e5dd  8b06                 mov eax, dword ptr [esi]
// 0084e5df  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0084e5e3  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 0084e5e9  51                   push ecx
// 0084e5ea  52                   push edx
// 0084e5eb  8bce                 mov ecx, esi
// 0084e5ed  ffd0                 call eax
// 0084e5ef  5e                   pop esi
// 0084e5f0  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CXTPPropertyGrid@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp