// roc 2009-12 00868a50  unit: CXTPPropertyGridView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868a50
//
// 00868a50  8b442404             mov eax, dword ptr [esp + 4]
// 00868a54  50                   push eax
// 00868a55  e8a6ffffff           call 0x868a00
// 00868a5a  8bc8                 mov ecx, eax
// 00868a5c  85c9                 test ecx, ecx
// 00868a5e  741f                 je 0x868a7f
// 00868a60  83b99c00000000       cmp dword ptr [ecx + 0x9c], 0
// 00868a67  7416                 je 0x868a7f
// 00868a69  83b9a000000000       cmp dword ptr [ecx + 0xa0], 0
// 00868a70  7408                 je 0x868a7a
// 00868a72  e809c5ffff           call 0x864f80
// 00868a77  c20400               ret 4
// 00868a7a  e861c5ffff           call 0x864fe0
// 00868a7f  c20400               ret 4
// copied from an identical function in another client (function ?SwitchExpandState@CXTPPropertyGridView@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp