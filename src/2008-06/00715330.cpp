// roc 2008-06 00715330  unit: CXTPPropertyGridView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00715330
//
// 00715330  56                   push esi
// 00715331  57                   push edi
// 00715332  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00715336  8bf1                 mov esi, ecx
// 00715338  3bbe54010000         cmp edi, dword ptr [esi + 0x154]
// 0071533e  741d                 je 0x71535d
// 00715340  85ff                 test edi, edi
// 00715342  7405                 je 0x715349
// 00715344  e8dfb6f8ff           call 0x6a0a28
// 00715349  8b4620               mov eax, dword ptr [esi + 0x20]
// 0071534c  6a00                 push 0
// 0071534e  6a00                 push 0
// 00715350  50                   push eax
// 00715351  89be54010000         mov dword ptr [esi + 0x154], edi
// 00715357  ff15182e8000         call dword ptr [0x802e18]
// 0071535d  5f                   pop edi
// 0071535e  5e                   pop esi
// 0071535f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?FocusInplaceButton@CXTPPropertyGridView@@QAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
