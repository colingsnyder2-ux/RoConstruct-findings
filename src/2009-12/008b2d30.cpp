// roc 2009-12 008b2d30  unit: CXTPDockingPaneTabbedContainer::CContainerDropTarget  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b2d30
//
// 008b2d30  56                   push esi
// 008b2d31  8b742408             mov esi, dword ptr [esp + 8]
// 008b2d35  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008b2d3b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008b2d3e  57                   push edi
// 008b2d3f  8dbea8000000         lea edi, [esi + 0xa8]
// 008b2d45  8bcf                 mov ecx, edi
// 008b2d47  ffd2                 call edx
// 008b2d49  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 008b2d50  7439                 je 0x8b2d8b
// 008b2d52  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008b2d56  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b2d5a  50                   push eax
// 008b2d5b  51                   push ecx
// 008b2d5c  8bcf                 mov ecx, edi
// 008b2d5e  e82dc90100           call 0x8cf690
// 008b2d63  85c0                 test eax, eax
// 008b2d65  7424                 je 0x8b2d8b
// 008b2d67  8b402c               mov eax, dword ptr [eax + 0x2c]
// 008b2d6a  50                   push eax
// 008b2d6b  8bce                 mov ecx, esi
// 008b2d6d  e86ef6ffff           call 0x8b23e0
// 008b2d72  3986a4010000         cmp dword ptr [esi + 0x1a4], eax
// 008b2d78  7411                 je 0x8b2d8b
// 008b2d7a  8b16                 mov edx, dword ptr [esi]
// 008b2d7c  6a00                 push 0
// 008b2d7e  6a00                 push 0
// 008b2d80  50                   push eax
// 008b2d81  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 008b2d87  8bce                 mov ecx, esi
// 008b2d89  ffd0                 call eax
// 008b2d8b  5f                   pop edi
// 008b2d8c  33c0                 xor eax, eax
// 008b2d8e  5e                   pop esi
// 008b2d8f  c21400               ret 0x14
// copied from an identical function in another client (function ?OnDragOver@CContainerDropTarget@CXTPDockingPaneTabbedContainer@@EAEKPAVCWnd@@PAVCOleDataObject@@KVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp