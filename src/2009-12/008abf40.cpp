// roc 2009-12 008abf40  unit: CXTPDockingPaneAutoHidePanel  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008abf40
//
// 008abf40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008abf44  56                   push esi
// 008abf45  8bf1                 mov esi, ecx
// 008abf47  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008abf4b  50                   push eax
// 008abf4c  51                   push ecx
// 008abf4d  8bce                 mov ecx, esi
// 008abf4f  e86cf0ffff           call 0x8aafc0
// 008abf54  85c0                 test eax, eax
// 008abf56  742f                 je 0x8abf87
// 008abf58  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008abf5e  85c9                 test ecx, ecx
// 008abf60  741b                 je 0x8abf7d
// 008abf62  8b91f8000000         mov edx, dword ptr [ecx + 0xf8]
// 008abf68  3982a4010000         cmp dword ptr [edx + 0x1a4], eax
// 008abf6e  750d                 jne 0x8abf7d
// 008abf70  8b10                 mov edx, dword ptr [eax]
// 008abf72  8bc8                 mov ecx, eax
// 008abf74  8b4258               mov eax, dword ptr [edx + 0x58]
// 008abf77  ffd0                 call eax
// 008abf79  5e                   pop esi
// 008abf7a  c20c00               ret 0xc
// 008abf7d  6a01                 push 1
// 008abf7f  50                   push eax
// 008abf80  8bce                 mov ecx, esi
// 008abf82  e869feffff           call 0x8abdf0
// 008abf87  5e                   pop esi
// 008abf88  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPDockingPaneAutoHidePanel@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp