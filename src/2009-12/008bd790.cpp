// roc 2009-12 008bd790  unit: CXTPDockingPaneContext  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bd790
//
// 008bd790  e8abe9ffff           call 0x8bc140
// 008bd795  83f801               cmp eax, 1
// 008bd798  8b442408             mov eax, dword ptr [esp + 8]
// 008bd79c  7550                 jne 0x8bd7ee
// 008bd79e  83f804               cmp eax, 4
// 008bd7a1  7514                 jne 0x8bd7b7
// 008bd7a3  8b442404             mov eax, dword ptr [esp + 4]
// 008bd7a7  c7001d000000         mov dword ptr [eax], 0x1d
// 008bd7ad  c7400420000000       mov dword ptr [eax + 4], 0x20
// 008bd7b4  c20800               ret 8
// 008bd7b7  83f801               cmp eax, 1
// 008bd7ba  7514                 jne 0x8bd7d0
// 008bd7bc  8b442404             mov eax, dword ptr [esp + 4]
// 008bd7c0  c70020000000         mov dword ptr [eax], 0x20
// 008bd7c6  c740041d000000       mov dword ptr [eax + 4], 0x1d
// 008bd7cd  c20800               ret 8
// 008bd7d0  83f808               cmp eax, 8
// 008bd7d3  74ce                 je 0x8bd7a3
// 008bd7d5  83f802               cmp eax, 2
// 008bd7d8  8b442404             mov eax, dword ptr [esp + 4]
// 008bd7dc  74e2                 je 0x8bd7c0
// 008bd7de  c70059000000         mov dword ptr [eax], 0x59
// 008bd7e4  c7400459000000       mov dword ptr [eax + 4], 0x59
// 008bd7eb  c20800               ret 8
// 008bd7ee  83f804               cmp eax, 4
// 008bd7f1  7514                 jne 0x8bd807
// 008bd7f3  8b442404             mov eax, dword ptr [esp + 4]
// 008bd7f7  c7002b000000         mov dword ptr [eax], 0x2b
// 008bd7fd  c740041e000000       mov dword ptr [eax + 4], 0x1e
// 008bd804  c20800               ret 8
// 008bd807  83f801               cmp eax, 1
// 008bd80a  7514                 jne 0x8bd820
// 008bd80c  8b442404             mov eax, dword ptr [esp + 4]
// 008bd810  c7001e000000         mov dword ptr [eax], 0x1e
// 008bd816  c740042b000000       mov dword ptr [eax + 4], 0x2b
// 008bd81d  c20800               ret 8
// 008bd820  83f808               cmp eax, 8
// 008bd823  74ce                 je 0x8bd7f3
// 008bd825  83f802               cmp eax, 2
// 008bd828  8b442404             mov eax, dword ptr [esp + 4]
// 008bd82c  74e2                 je 0x8bd810
// 008bd82e  c7005d000000         mov dword ptr [eax], 0x5d
// 008bd834  c740045d000000       mov dword ptr [eax + 4], 0x5d
// 008bd83b  c20800               ret 8
// copied from an identical function in another client (function ?GetStickerSize@CXTPDockingPaneContext@@QBE?AVCSize@@W4XTPDockingPaneStickerType@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneContext.cpp