// roc 2009-12 008954a0  unit: CXTPRibbonBar  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008954a0
//
// 008954a0  56                   push esi
// 008954a1  8b742408             mov esi, dword ptr [esp + 8]
// 008954a5  85f6                 test esi, esi
// 008954a7  7506                 jne 0x8954af
// 008954a9  33c0                 xor eax, eax
// 008954ab  5e                   pop esi
// 008954ac  c20400               ret 4
// 008954af  83b95002000000       cmp dword ptr [ecx + 0x250], 0
// 008954b6  7510                 jne 0x8954c8
// 008954b8  8b8964020000         mov ecx, dword ptr [ecx + 0x264]
// 008954be  56                   push esi
// 008954bf  e8fcae0500           call 0x8f03c0
// 008954c4  85c0                 test eax, eax
// 008954c6  75e1                 jne 0x8954a9
// 008954c8  e823400500           call 0x8e94f0
// 008954cd  50                   push eax
// 008954ce  8bce                 mov ecx, esi
// 008954d0  e813e9f5ff           call 0x7f3de8
// 008954d5  85c0                 test eax, eax
// 008954d7  740f                 je 0x8954e8
// 008954d9  33c0                 xor eax, eax
// 008954db  398684000000         cmp dword ptr [esi + 0x84], eax
// 008954e1  5e                   pop esi
// 008954e2  0f9fc0               setg al
// 008954e5  c20400               ret 4
// 008954e8  8bce                 mov ecx, esi
// 008954ea  e8d1f3fcff           call 0x8648c0
// 008954ef  0fb6c0               movzx eax, al
// 008954f2  83f0ff               xor eax, 0xffffffff
// 008954f5  c1e804               shr eax, 4
// 008954f8  83e001               and eax, 1
// 008954fb  5e                   pop esi
// 008954fc  c20400               ret 4
// copied from an identical function in another client (function ?IsAllowQuickAccessControl@CXTPRibbonBar@@UAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp